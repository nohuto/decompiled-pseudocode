__int64 __fastcall HvpMapHiveImage(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r15
  int v8; // eax
  int Bin; // ebx
  unsigned int v10; // esi
  const void *v11; // r12
  __int64 v12; // r8
  int v13; // eax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+10h] BYREF
  void *v17; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v7 = *(_QWORD *)(BugCheckParameter2 + 56);
  do
  {
LABEL_2:
    v8 = HvpReadHiveDataFromFile(a5, &v15, &v16);
    Bin = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741807 )
        return 0;
      else
        SetFailureLocation(v7, 0, 7, v8, 0);
      return (unsigned int)Bin;
    }
    v10 = 0;
  }
  while ( !v16 );
  while ( 1 )
  {
    v11 = (const void *)(v15 + v10);
    Bin = HvpAllocateBin(BugCheckParameter2, 4096LL, 0, 0x31334D43u, (__int64 *)&v17);
    if ( Bin < 0 )
      break;
    memmove(v17, v11, 0x1000uLL);
    Bin = HvpProtectBinPartial(BugCheckParameter2, (unsigned __int64)v17, v12, 0, 0x1000u, 0);
    if ( Bin < 0 )
    {
      v13 = 32;
      goto LABEL_10;
    }
    HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v17, 4096, a3, 1, 0LL);
    v17 = 0LL;
    a3 += 4096;
    v10 += 4096;
    if ( v10 >= v16 )
      goto LABEL_2;
  }
  v13 = 16;
LABEL_10:
  SetFailureLocation(v7, 0, 7, Bin, v13);
  if ( v17 )
    HvpFreeBin(BugCheckParameter2, 0x1000u, (__int64)v17);
  return (unsigned int)Bin;
}
