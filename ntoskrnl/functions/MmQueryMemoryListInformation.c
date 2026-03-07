__int64 __fastcall MmQueryMemoryListInformation(
        ULONG_PTR BugCheckParameter2,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v8; // rax
  _OWORD *v9; // r14
  _OWORD v11[11]; // [rsp+40h] [rbp-D8h] BYREF

  memset(v11, 0, sizeof(v11));
  *a5 = 0;
  if ( a3 < 0xB0 )
  {
    *a5 = 176;
    return 3221225476LL;
  }
  else
  {
    v8 = MiPartitionObjectToPartition(BugCheckParameter2);
    if ( v8 )
    {
      MiQueryMemoryListInformation(v8, v11);
      *a2 = v11[0];
      a2[1] = v11[1];
      a2[2] = v11[2];
      a2[3] = v11[3];
      a2[4] = v11[4];
      a2[5] = v11[5];
      a2[6] = v11[6];
      v9 = a2 + 8;
      *(v9 - 1) = v11[7];
      *v9 = v11[8];
      v9[1] = v11[9];
      v9[2] = v11[10];
      *a5 = 176;
      return 0LL;
    }
    else
    {
      return 3221226656LL;
    }
  }
}
