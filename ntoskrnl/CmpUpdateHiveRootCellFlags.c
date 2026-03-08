/*
 * XREFs of CmpUpdateHiveRootCellFlags @ 0x140789E54
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpUpdateHiveRootCellFlags(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // ebp
  __int64 v4; // rsi
  __int64 CellFlat; // rax
  __int64 v6; // rsi
  int v7; // ebp
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v9);
  v4 = KeAbPreAcquire(BugCheckParameter3 + 72, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(BugCheckParameter3 + 72), 0, v4, BugCheckParameter3 + 72);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v6 = CellFlat;
  if ( !CellFlat )
  {
    v7 = -1073741670;
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(CellFlat + 2) & 0xC) != 0xC )
  {
    v7 = HvpMarkCellDirty(BugCheckParameter3, v3);
    if ( v7 < 0 )
      goto LABEL_12;
    *(_WORD *)(v6 + 2) |= 0xCu;
  }
  v7 = 0;
LABEL_12:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v9);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v9);
LABEL_14:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
  KeAbPostRelease(BugCheckParameter3 + 72);
  return (unsigned int)v7;
}
