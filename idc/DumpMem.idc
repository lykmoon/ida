auto i,fp;
auto start,end;
auto file_name;

file_name = "d:\\nothing\\dump.zip";
fp = fopen(file_name,"wb");
for (i = start; i <= end; i++)
     fputc(Byte(i),fp);
fclose(fp);
