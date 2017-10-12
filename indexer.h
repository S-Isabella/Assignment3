#ifndef INDEXER_H
#define INDEXER_H
#include <string>
#include <vector>


class indexer
{
    public:
        indexer();
        indexer(std::string indexFile);
        int size();
        void normalize();
        void query(std::string queryWord,int num);
        std::vector<std::string> query();

    private:
        int N;
        //friend array<string> we want to be able to access its indexed documents a la idx[2], maybe through friend or sth
        std::vector<std::string> fileNames;
        size_t maxFileNameLen;

};

#endif // INDEXER_H
