NTSTATUS __stdcall IoWMIQueryAllDataMultiple(
        PVOID *DataBlockObjectList,
        ULONG ObjectCount,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  ULONG v8; // eax
  NTSTATUS AllDataMultiple; // edx
  __int64 v11; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v12[80]; // [rsp+50h] [rbp-88h] BYREF

  memset(v12, 0, 0x48uLL);
  LODWORD(v11) = 0;
  if ( !DataBlockObjectList || !ObjectCount || !InOutBufferSize )
    return -1073741811;
  v8 = *InOutBufferSize;
  if ( !OutBuffer || v8 < 0x48 )
  {
    OutBuffer = v12;
    v8 = 72;
  }
  AllDataMultiple = WmipQueryAllDataMultiple(
                      ObjectCount,
                      (int)DataBlockObjectList,
                      0,
                      0,
                      OutBuffer,
                      v8,
                      0LL,
                      (__int64)&v11);
  if ( AllDataMultiple >= 0 )
  {
    if ( (*((_DWORD *)OutBuffer + 11) & 0x20) != 0 )
    {
      *InOutBufferSize = *((_DWORD *)OutBuffer + 12);
    }
    else
    {
      *InOutBufferSize = v11;
      if ( OutBuffer != v12 )
        return AllDataMultiple;
    }
    return -1073741789;
  }
  return AllDataMultiple;
}
