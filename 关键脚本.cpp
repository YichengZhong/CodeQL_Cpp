codeql database create ./struts_db -s ./struts_9805 /
  -j 0 -l java --command "mvn -B -DskipTests /
  -DskipAssembly"
  
codeql database create ./struts_db -s ./struts_9805 /
  -j 0 -l java --command "mvn -B -DskipTests /
  -DskipAssembly"
  
/home/zyc/codeql-linux64/codeql/codeql database create ./database_test --language=cpp --source-root='./Test_Cl' --command=make 

./codeql database create ./database_test -l cpp -s ./Test_Cl --command "make" 

/home/zyc/codeql-linux64/codeql/codeql database analyze ./database_test emptyblock.ql --format=csv --output=first.csv

codeql-main/codeql-main/cpp/ql/src/codeql-suites

/home/zyc/codeql-linux64/codeql/codeql database analyze ./database_test ./codeql-main/cpp/ql/src/codeql-suites/cpp-lgtm.qls --format=csv --output=first.csv

/home/zyc/codeql-linux64/codeql/codeql database upgrade ./database_test