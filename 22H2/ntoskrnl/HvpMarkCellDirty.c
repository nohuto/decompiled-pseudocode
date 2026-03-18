/*
 * XREFs of HvpMarkCellDirty @ 0x1407474B0
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x140680B00 (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpCreateChild @ 0x1406D1020 (CmpCreateChild.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406D23CC (CmpUpdateKeyNodeAccessBits.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmpCheckLeaf @ 0x1406DCB70 (CmpCheckLeaf.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD580 (CmpVEExecuteOpenLogic.c)
 *     CmpCheckValueList @ 0x1406DE570 (CmpCheckValueList.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpAddSubKeyEx @ 0x140708618 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x140708AA4 (CmpAddToLeaf.c)
 *     CmpSetValueKeyNew @ 0x140709D80 (CmpSetValueKeyNew.c)
 *     HvpFindFreeCellInBin @ 0x14070AA00 (HvpFindFreeCellInBin.c)
 *     HvpIsFreeNeighbor @ 0x14070AEB0 (HvpIsFreeNeighbor.c)
 *     CmpMarkKeyDirty @ 0x14070B510 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x14070B7B4 (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x14070BAF8 (CmpMarkValueDataDirty.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x14070C27C (CmpMarkIndexDirtyInStorageType.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14070CA8C (CmpValidateHiveSecurityDescriptors.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769424 (CmpTransMgrFreeVolatileData.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1407D8504 (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x1407DE6A0 (CmpInsertSecurityCellList.c)
 *     CmpMarkCurrentValueDirty @ 0x140828F04 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14084BAAC (CmpMarkCurrentProfileDirty.c)
 *     CmpSelectLeaf @ 0x140874FE0 (CmpSelectLeaf.c)
 *     CmpClearKeyAccessBits @ 0x140885EBC (CmpClearKeyAccessBits.c)
 *     HvMarkCellDirty @ 0x1408AC1D6 (HvMarkCellDirty.c)
 *     CmRestoreKey @ 0x140A0ACF4 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0C940 (CmpRefreshHive.c)
 *     CmSetKeyFlags @ 0x140A15A64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15F98 (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x140A16DA0 (CmpSetValueKeyTombstone.c)
 *     CmpDoBuildVirtualStack @ 0x140A1916C (CmpDoBuildVirtualStack.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B43C (CmpCopySaclToVirtualKey.c)
 *     CmpCopySyncTree2 @ 0x140A21558 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x140A22080 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140A22138 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x140A244FC (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x140A245C8 (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140A2479C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140A24ADC (CmpSplitLeaf.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A25E84 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140A262C8 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightCreateSetValueData @ 0x140A28B74 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A28DA0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A29058 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A2922C (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A29450 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140A29824 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A29B60 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpMarkDirty @ 0x140747620 (HvpMarkDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 *     HvpGetCellMap @ 0x140AF6280 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v3; // rdi
  int v4; // eax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 CellFlat; // rax
  int v11; // edi
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]

  v3 = (unsigned int)BugCheckParameter4;
  v13 = 0;
  v4 = *(_DWORD *)(BugCheckParameter3 + 160);
  v12 = -1;
  if ( (v4 & 1) != 0 || (BugCheckParameter4 & 0x80000000) != 0LL )
    return 0LL;
  if ( !a3 )
  {
    v8 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), v8, BugCheckParameter3 + 80);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)v3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v3, &v12);
  if ( !CellFlat || CellFlat == 4 )
  {
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
      KeAbPostRelease(BugCheckParameter3 + 80);
    }
    return 3221225626LL;
  }
  else
  {
    if ( !HvpGetCellMap(BugCheckParameter3, (unsigned int)v3) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v3, 0x2A7uLL);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v12);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v12);
    v11 = HvpMarkDirty(BugCheckParameter3);
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
      KeAbPostRelease(BugCheckParameter3 + 80);
    }
    if ( v11 < 0 )
    {
      return (unsigned int)v11;
    }
    else
    {
      *(_BYTE *)(BugCheckParameter3 + 141) = 1;
      return 0LL;
    }
  }
}
