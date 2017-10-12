#include "indexer.h"
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

    size_t maxFileNameLen = 0;

    // default constructor
    indexer::indexer()
    {
    }
    // constructor
    indexer::indexer(string indexFile)
    {
        ifstream fin(indexFile.c_str());
        string fileName;
        while (getline(fin, fileName)) {
            // Update max file name length
            maxFileNameLen = maxFileNameLen > fileName.size() ?
                maxFileNameLen:fileName.size();
            fileNames.push_back(fileName);
            cout << "Names of files in index: " << endl;
            for ( vector<string>::size_type i = 0; i != fileNames.size(); ++i )
            cout << fileNames[i] << endl;

    }
    }
    //returns the number of documents in the index
    int indexer::size()
    {

    }
    //computes the tf-idf weights based on the number N of indexed documents
    void normalize()
    {
        int weight;
        // N=1;
        int tf; // we will have to take this from doc obj I think
        //weight = (1  + log(tf))*(log(N));
        //idf = log (Nrow)/termCount
        //tf=?
    }
    // queries the index with the provided string
    void query(string queryWord, int num)
    {

    }
    /* By default, it returns the top-10 results, but this can be overridden on a per-query basis (optional second
    argument). If the index has not been normalized, attempting to query it will throw an exception (adding a
    new document after normalization also results in a non-normalized index).*/
    //returns a vector<query_result>, where each result object has a document and its score
    std::vector<std::string> query()
    {
        // what is this score function goodness
    }

