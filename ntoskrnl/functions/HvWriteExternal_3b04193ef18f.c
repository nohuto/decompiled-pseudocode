__int64 __fastcall HvWriteExternal(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // edi
  unsigned int v4; // r14d
  int v5; // r11d
  unsigned int v6; // r10d
  __int64 CellMap; // rax
  __int64 v8; // rcx
  unsigned int v9; // r10d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r10d
  int v13; // r15d
  _DWORD *Pool2; // rax
  _DWORD *v15; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 (__fastcall *v19)(ULONG_PTR, __int64, __int128 *, __int64, _DWORD); // rax
  int v20; // ebx
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 BinAddress; // rax
  int v25; // r13d
  int (__fastcall *v26)(ULONG_PTR, __int64, __int128 *); // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int128 v29; // [rsp+30h] [rbp-20h] BYREF
  int v30; // [rsp+40h] [rbp-10h]
  __int16 v31; // [rsp+80h] [rbp+30h] BYREF

  v2 = 0;
  v30 = 0;
  v31 = 0;
  v29 = 0LL;
  HvpGetBinContextInitialize(&v31);
  if ( !*(_QWORD *)(BugCheckParameter2 + 1560) )
    return 3221225485LL;
  v4 = *(_DWORD *)(BugCheckParameter2 + 280);
  v5 = CmpDoFileSetSizeEx(BugCheckParameter2, 2u, v4 + 4096, 0);
  if ( v5 >= 0 )
  {
    v6 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, v6);
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v9, 0xCE0uLL);
        v11 = *(unsigned int *)(HvpMapEntryGetBinAddress(v8, CellMap, &v31) + 8);
        if ( (unsigned int)(v11 + v12) > *(_DWORD *)(BugCheckParameter2 + 280) || (v11 & 0xFFF) != 0 )
          break;
        HvpMapEntryReleaseBinAddress(v11, v10, &v31);
        if ( v6 >= v4 )
          goto LABEL_9;
      }
      return (unsigned int)-1073741492;
    }
LABEL_9:
    if ( v6 >= *(_DWORD *)(BugCheckParameter2 + 280) )
    {
      v13 = 4096;
      Pool2 = (_DWORD *)ExAllocatePool2(264LL, 4096LL, 538987843LL);
      v15 = Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      memmove(Pool2, *(const void **)(BugCheckParameter2 + 64), 0x1000uLL);
      v15[10] = v4;
      v15[11] = 1;
      v15[127] = HvpHeaderCheckSum(v15, v17, v18);
      v19 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, __int128 *, __int64, _DWORD))(BugCheckParameter2 + 40);
      *((_QWORD *)&v29 + 1) = v15;
      v30 = 4096;
      v20 = v19(BugCheckParameter2, 2LL, &v29, 1LL, 0);
      ExFreePoolWithTag(v15, 0);
      if ( v20 < 0 )
        return 3221225805LL;
      v21 = 0;
      if ( v4 )
      {
        while ( 1 )
        {
          v22 = HvpGetCellMap(BugCheckParameter2, v21);
          if ( !v22 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v21, 0xD37uLL);
          BinAddress = HvpMapEntryGetBinAddress(v23, v22, &v31);
          v25 = *(_DWORD *)(BinAddress + 8);
          *((_QWORD *)&v29 + 1) = BinAddress;
          v26 = *(int (__fastcall **)(ULONG_PTR, __int64, __int128 *))(BugCheckParameter2 + 40);
          LODWORD(v29) = v13;
          v30 = v25;
          if ( v26(BugCheckParameter2, 2LL, &v29) < 0 )
            break;
          HvpMapEntryReleaseBinAddress(v28, v27, &v31);
          v13 += v25;
          v21 += v25;
          if ( v21 >= v4 )
            goto LABEL_20;
        }
        return (unsigned int)-1073741491;
      }
      else
      {
LABEL_20:
        if ( CmpFileFlush(BugCheckParameter2, 2u) < 0 )
          return (unsigned int)-1073741491;
        return v2;
      }
    }
  }
  return (unsigned int)v5;
}
