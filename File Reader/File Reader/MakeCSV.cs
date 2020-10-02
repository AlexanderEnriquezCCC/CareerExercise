using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;
using System.Threading.Tasks;

namespace File_Reader
{
    //find way to add 2 CSV file values
    //print values int a new csv file
    class MakeCSV
    {
        public void getData()
        {
            var files = Directory.EnumerateFiles("path", "*.csv");
        }
    }
}
