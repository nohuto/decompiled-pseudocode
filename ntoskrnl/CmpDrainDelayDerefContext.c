/*
 * XREFs of CmpDrainDelayDerefContext @ 0x140262F30
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x14074B9E4 (CmpCleanUpKCBCacheTable.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmpDelayCloseWorker @ 0x1407AB950 (CmpDelayCloseWorker.c)
 *     CmEnumerateKey @ 0x1407ACAE0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 *     CmpUnfreezeHive @ 0x140A14108 (CmpUnfreezeHive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitLightWeightTransaction @ 0x140A197CC (CmpCommitLightWeightTransaction.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1D2A4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140A1D3D0 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A266F0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406B7100 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockHashEntry @ 0x1407AB010 (CmpUnlockHashEntry.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1407AB174 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 */

void __fastcall CmpDrainDelayDerefContext(_QWORD **a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  ULONG_PTR v4; // rbp
  void *v5; // r14
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rcx

  if ( *a1 != a1 )
  {
    while ( 1 )
    {
      v2 = *a1;
      if ( *a1 == a1 )
        break;
      if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
        __fastfail(3u);
      *a1 = v3;
      v4 = (ULONG_PTR)(v2 - 28);
      v3[1] = a1;
      *((_BYTE *)v2 - 160) &= ~1u;
      v5 = (void *)*(v2 - 24);
      v2[1] = v2;
      *v2 = v2;
      CmpLockHashEntryExclusiveByKcb((ULONG_PTR)(v2 - 28));
      CmpLockKcbExclusive(v4);
      v6 = *(_QWORD *)(v4 + 192);
      v7 = 0LL;
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 24);
        if ( v8 )
        {
          v7 = *(_QWORD *)(v8 + 16);
          CmpUnlockKcb(v4);
          CmpLockKcbExclusive(v7);
          CmpLockKcbExclusive(v4);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v4);
      CmpUnlockKcb(v4);
      if ( v7 )
        CmpUnlockKcb(v7);
      CmpUnlockHashEntry(v5);
    }
  }
}
