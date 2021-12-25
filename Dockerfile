 
FROM gcc:4.9

 
COPY Test.cpp  /

 
WORKDIR /

 
RUN g++ -o Test Test.cpp

 
CMD ["./Test"]