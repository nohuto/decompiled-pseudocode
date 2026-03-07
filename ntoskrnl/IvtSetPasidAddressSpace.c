__int64 __fastcall IvtSetPasidAddressSpace(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int64 a4, _BYTE *a5)
{
  __int64 v5; // r13
  __int64 v9; // r9
  __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG_PTR *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int128 v17; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v18[8]; // [rsp+80h] [rbp-88h] BYREF

  v5 = *(_QWORD *)(a2 + 40);
  memset(v18, 0, sizeof(v18));
  v10 = a4 >> 12;
  v11 = (unsigned __int64)(a3 & 0x3F) << 6;
  v12 = *(_QWORD *)(v5 + 8LL * ((a3 >> 6) & 0x3FFF) + 56);
  v17 = *(_OWORD *)(v12 + v11);
  if ( (v17 & 1) != 0 && *(_QWORD *)(v12 + v11 + 16) >> 12 == v10 )
  {
    if ( a5 )
      *a5 = 0;
  }
  else
  {
    if ( !v10 )
    {
      v13 = (ULONG_PTR *)IvtEnsureNoPendingFaults(a1, a3);
      if ( v13 )
        KeBugCheckEx(0x159u, 0x1000uLL, (ULONG_PTR)v13, *v13, v13[1]);
    }
    IvtBuildScalableModePasidTableS1Entry((__int64)a1, 1, v10, v9, 0, v18);
    IvtSetScalableModePasidTableEntry(v14, v5, a3, v18);
    if ( (v17 & 1) != 0 )
    {
      v15 = WORD4(v17);
      if ( (((unsigned __int64)v17 >> 6) & 7) != 2 )
        v15 = 0x10000;
      IvtInvalidateScalableModePasidCache((__int64)a1, 0, v15, a3, 0, 0, 0);
    }
    if ( a5 )
      *a5 = 1;
  }
  return 0LL;
}
