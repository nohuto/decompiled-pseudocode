/*
 * XREFs of HvpMarkCellDirty @ 0x1407D2460
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067D1C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x14067DBDC (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1406B845C (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x1406BA664 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpMarkKeyDirty @ 0x1406BAB64 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x1406BAE08 (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x1406BB14C (CmpMarkValueDataDirty.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14071C9C4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140781788 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140789E54 (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x14078F5D4 (CmpInsertSecurityCellList.c)
 *     CmpAddSubKeyEx @ 0x1407A4094 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1407A4520 (CmpAddToLeaf.c)
 *     CmpSetValueKeyNew @ 0x1407A5CB0 (CmpSetValueKeyNew.c)
 *     HvpFindFreeCellInBin @ 0x1407A6930 (HvpFindFreeCellInBin.c)
 *     HvpIsFreeNeighbor @ 0x1407A6CB0 (HvpIsFreeNeighbor.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1407A893C (CmpUpdateKeyNodeAccessBits.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmpCheckLeaf @ 0x1407B0800 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1407B2930 (CmpCheckValueList.c)
 *     CmpVEExecuteOpenLogic @ 0x1407B6770 (CmpVEExecuteOpenLogic.c)
 *     CmpMarkCurrentProfileDirty @ 0x140814218 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x140820E94 (CmpMarkCurrentValueDirty.c)
 *     CmpSelectLeaf @ 0x140872120 (CmpSelectLeaf.c)
 *     CmpClearKeyAccessBits @ 0x1408810DC (CmpClearKeyAccessBits.c)
 *     HvMarkCellDirty @ 0x1408A7366 (HvMarkCellDirty.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x140A14050 (CmpSetValueKeyTombstone.c)
 *     CmpDoBuildVirtualStack @ 0x140A1641C (CmpDoBuildVirtualStack.c)
 *     CmpCopySaclToVirtualKey @ 0x140A186EC (CmpCopySaclToVirtualKey.c)
 *     CmpCopySyncTree2 @ 0x140A1E7F8 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x140A1F320 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140A1F3D8 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x140A2179C (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x140A21868 (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140A21A3C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140A21D7C (CmpSplitLeaf.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140A23568 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightCreateSetValueData @ 0x140A25E14 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A26040 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A262F8 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A264CC (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A266F0 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140A26AC4 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A26E00 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkDirty @ 0x1407D25D0 (HvpMarkDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v3; // rdi
  int v4; // eax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 CellFlat; // rax
  int v11; // edi
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = (unsigned int)BugCheckParameter4;
  v4 = *(_DWORD *)(BugCheckParameter3 + 160);
  v12 = 0xFFFFFFFFLL;
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
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v3, (unsigned int *)&v12);
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
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v12);
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
