import idaapi

start=0
end = 0
file_name = "D:\\nothing\\dump.zip"
    
data = idaapi.dbg_read_memory(start, end)
fp = open(file_name, 'wb')
fp.write(data)
fp.close()
