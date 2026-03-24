/*
 * XREFs of HvpRemapAndEnlistHiveBins @ 0x14065702C
 * Callers:
 *     HvLoadHive @ 0x140721B18 (HvLoadHive.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     HvpMarkDirty @ 0x140655BF0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140655DC0 (HvpGetCellMap.c)
 *     HvpEnlistFreeCells @ 0x140657190 (HvpEnlistFreeCells.c)
 *     HvpValidateLoadedBin @ 0x140657274 (HvpValidateLoadedBin.c)
 *     CmpReleaseGlobalQuota @ 0x1406574DC (CmpReleaseGlobalQuota.c)
 *     HvpPointMapEntriesToBuffer @ 0x14072242C (HvpPointMapEntriesToBuffer.c)
 *     HvpProtectBin @ 0x140723D50 (HvpProtectBin.c)
 *     HvpAllocateBin @ 0x140723D8C (HvpAllocateBin.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140723F20 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpFreeBin @ 0x140724FA0 (HvpFreeBin.c)
 *     HvIsRangeDirty @ 0x14087BCA4 (HvIsRangeDirty.c)
 */

__int64 __fastcall HvpRemapAndEnlistHiveBins(_DWORD *BugCheckParameter2)
{
  __int64 v1; // r15
  unsigned int v2; // ebx
  unsigned int v3; // r12d
  char v4; // r13
  unsigned int v6; // ebp
  unsigned int i; // edi
  _DWORD *v8; // r14
  int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // ebx
  __int64 v14; // rbp
  _DWORD *v15; // r14
  int v16; // edx
  int v17; // eax
  int Bin; // eax
  unsigned int j; // ebx
  const void *v20; // r14
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // [rsp+80h] [rbp+8h]
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  __int64 v25; // [rsp+90h] [rbp+18h] BYREF
  __int64 CellMap; // [rsp+98h] [rbp+20h]

  v25 = 0LL;
  v1 = 0LL;
  v2 = BugCheckParameter2[68];
  v3 = 0;
  v4 = 0;
  v24 = 0LL;
  v23 = v2;
  if ( (BugCheckParameter2[40] & 0x20000) != 0 )
    v6 = BugCheckParameter2[56] - 4096;
  else
    v6 = 0;
  for ( i = 0; i < v6; v2 = v23 )
  {
    CellMap = HvpGetCellMap((__int64)BugCheckParameter2, i);
    v8 = (_DWORD *)(*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !(unsigned __int8)HvpValidateLoadedBin(v8, i, v2) )
    {
      if ( !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        return (unsigned int)-1073741492;
      if ( !HvpMarkDirty((ULONG_PTR)BugCheckParameter2, v9, 0x1000u, 0) )
        return (unsigned int)-1073741670;
      memset(v8, 0, 0x1000uLL);
      v8[2] = 4096;
      *v8 = 1852400232;
      v8[1] = i & 0x7FFFFFFF;
      v4 = 1;
      v8[8] = 4064;
    }
    v10 = v8[2];
    if ( v10 != 4096 )
    {
      v3 = v8[2];
      if ( i + v10 > v6 )
        break;
      v12 = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 54, i, v10, &v25);
      if ( v12 < 0 )
        return (unsigned int)v12;
      HvpPointMapEntriesToBuffer((ULONG_PTR)BugCheckParameter2, 0, 0LL);
      v8 = (_DWORD *)(*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    v11 = HvpEnlistFreeCells((ULONG_PTR)BugCheckParameter2);
    v12 = v11;
    if ( v11 == 1073741833 )
    {
      v4 = 1;
    }
    else if ( v11 < 0 )
    {
      return (unsigned int)v12;
    }
    i += v8[2];
  }
  while ( i < v2 )
  {
    v14 = HvpGetCellMap((__int64)BugCheckParameter2, i);
    v15 = (_DWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !(unsigned __int8)HvpValidateLoadedBin(v15, i, v2) )
    {
      if ( !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        return (unsigned int)-1073741492;
      if ( !HvpMarkDirty((ULONG_PTR)BugCheckParameter2, v16, 0x1000u, 0) )
        return (unsigned int)-1073741670;
      memset(v15, 0, 0x1000uLL);
      v15[2] = 4096;
      *v15 = 1852400232;
      v15[1] = i & 0x7FFFFFFF;
      v4 = 1;
      v15[8] = 4064;
    }
    v17 = v15[2];
    if ( v17 != 4096 )
    {
      v3 = v15[2];
      Bin = HvpAllocateBin((_DWORD)BugCheckParameter2, v17, 0, 825445699, (__int64)&v24);
      v1 = v24;
      v12 = Bin;
      if ( Bin < 0 )
        goto LABEL_12;
      for ( j = 0; j < v3; *(_DWORD *)(v14 + 16) = 0 )
      {
        v14 = HvpGetCellMap((__int64)BugCheckParameter2, j + i);
        v20 = (const void *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
        memmove((void *)(v1 + j), v20, 0x1000uLL);
        if ( (*(_BYTE *)(v14 + 8) & 8) != 0 )
          HvpFreeBin(BugCheckParameter2, 4096LL, v20);
        else
          CmpReleaseGlobalQuota(4096LL);
        j += 4096;
        *(_QWORD *)v14 = 0LL;
        *(_QWORD *)(v14 + 8) = 0LL;
      }
      if ( !(unsigned __int8)HvIsRangeDirty(BugCheckParameter2, i, v3) )
      {
        v12 = HvpProtectBin(v21, v3, v1, 0LL);
        if ( v12 < 0 )
          goto LABEL_12;
      }
      HvpPointMapEntriesToBuffer((ULONG_PTR)BugCheckParameter2, 1, 0LL);
      v15 = (_DWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
      v1 = 0LL;
      v24 = 0LL;
    }
    v22 = HvpEnlistFreeCells((ULONG_PTR)BugCheckParameter2);
    v12 = v22;
    if ( v22 == 1073741833 )
    {
      v4 = 1;
    }
    else if ( v22 < 0 )
    {
      return (unsigned int)v12;
    }
    i += v15[2];
    v2 = v23;
  }
  if ( v4 )
    return 1073741833;
  v12 = 0;
LABEL_12:
  if ( v1 )
    HvpFreeBin(BugCheckParameter2, v3, v1);
  return (unsigned int)v12;
}
