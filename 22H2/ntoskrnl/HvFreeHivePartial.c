/*
 * XREFs of HvFreeHivePartial @ 0x14072090C
 * Callers:
 *     HvpTruncateBins @ 0x140720854 (HvpTruncateBins.c)
 *     HvpPerformLogFileRecovery @ 0x14087410C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlClearBits @ 0x140206DC0 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x140253090 (RtlNumberOfSetBits.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HvpMapEntryGetFreeBin @ 0x14065579C (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x140655DC0 (HvpGetCellMap.c)
 *     CmpReleaseGlobalQuota @ 0x1406574DC (CmpReleaseGlobalQuota.c)
 *     HvpFreeMap @ 0x14069E438 (HvpFreeMap.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1407224EC (HvpAdjustHiveFreeDisplay.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x140723D00 (CmpUpdateSystemHiveHysteresis.c)
 *     HvpFreeBin @ 0x140724FA0 (HvpFreeBin.c)
 *     HvpViewMapShrinkStorage @ 0x140873678 (HvpViewMapShrinkStorage.c)
 */

__int64 __fastcall HvFreeHivePartial(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r15
  unsigned int v7; // esi
  __int64 result; // rax
  int v9; // r13d
  unsigned int v10; // ebx
  _BYTE *CellMap; // rax
  _BYTE *v12; // rdi
  _QWORD *FreeBin; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // r8
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rdx
  ULONG v22; // r14d
  ULONG v23; // ebx
  int v24; // ebx
  unsigned int v25; // [rsp+68h] [rbp+10h]

  v5 = 632LL * (int)a3;
  v7 = a2;
  result = *(unsigned int *)(v5 + BugCheckParameter2 + 272);
  v25 = result;
  if ( a2 != (_DWORD)result )
  {
    v9 = a3 << 31;
    do
    {
      v10 = v7 + v9;
      CellMap = (_BYTE *)HvpGetCellMap(BugCheckParameter2, v7 + v9);
      v12 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x165uLL);
      FreeBin = (_QWORD *)HvpMapEntryGetFreeBin(CellMap);
      v14 = FreeBin;
      if ( FreeBin )
      {
        v15 = *FreeBin;
        if ( *(_QWORD **)(*FreeBin + 8LL) != FreeBin || (v16 = (_QWORD *)FreeBin[1], (_QWORD *)*v16 != v14) )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        (*(void (__fastcall **)(_QWORD *, __int64))(BugCheckParameter2 + 32))(v14, 24LL);
      }
      v17 = *((_QWORD *)v12 + 1);
      v18 = *((_DWORD *)v12 + 4);
      if ( (v17 & 8) != 0 )
        HvpFreeBin(BugCheckParameter2, v18, v17 & 0xFFFFFFFFFFFFFFF0uLL);
      else
        CmpReleaseGlobalQuota(v18);
      v7 += *((_DWORD *)v12 + 4);
      do
      {
        v19 = HvpGetCellMap(BugCheckParameter2, v10);
        if ( !v19 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x19EuLL);
        v10 += 4096;
        *(_OWORD *)v19 = 0LL;
        *(_QWORD *)(v19 + 16) = 0LL;
      }
      while ( v10 - v9 < v7 );
    }
    while ( v7 < v25 );
    if ( a2 )
      v20 = (a2 - 1) >> 21;
    else
      v20 = -1;
    HvpFreeMap(
      BugCheckParameter2,
      *(_QWORD *)(v5 + BugCheckParameter2 + 280),
      v20 + 1,
      (unsigned int)((*(_DWORD *)(v5 + BugCheckParameter2 + 272) >> 12) - 1) >> 9);
    if ( !a3 )
    {
      CmpUpdateSystemHiveHysteresis(
        BugCheckParameter2,
        a2 & 0x7FFFFFFF,
        *(unsigned int *)(v5 + BugCheckParameter2 + 272));
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
        HvpViewMapShrinkStorage(BugCheckParameter2 + 216, a2 & 0x7FFFFFFF);
    }
    v21 = a2 & 0x7FFFFFFF;
    *(_DWORD *)(v5 + BugCheckParameter2 + 272) = v21;
    if ( !a3 )
    {
      v22 = a2 >> 9;
      v23 = *(_DWORD *)(BugCheckParameter2 + 88) - v22;
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v22, v23);
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 112), v22, v23);
      *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
      *(_DWORD *)(BugCheckParameter2 + 88) = v22;
      *(_QWORD *)(BugCheckParameter2 + 120) = *(_QWORD *)(BugCheckParameter2 + 120);
      *(_DWORD *)(BugCheckParameter2 + 112) = v22;
      v24 = *(_DWORD *)(BugCheckParameter2 + 104);
      *(_DWORD *)(BugCheckParameter2 + 104) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      _InterlockedExchangeAdd(&CmpDirtySectorCount, *(_DWORD *)(BugCheckParameter2 + 104) - v24);
      v21 = *(unsigned int *)(v5 + BugCheckParameter2 + 272);
    }
    return HvpAdjustHiveFreeDisplay(BugCheckParameter2, v21, a3);
  }
  return result;
}
