/*
 * XREFs of CmpInitializeDelayDerefContext @ 0x1402314A4
 * Callers:
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x140699C14 (CmpCleanUpKCBCacheTable.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmQueryKey @ 0x1406D7280 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     CmEnumerateKey @ 0x1406DC4F0 (CmEnumerateKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7F40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769424 (CmpTransMgrFreeVolatileData.c)
 *     CmpDelayCloseWorker @ 0x14076A640 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076B020 (CmpDereferenceKeyControlBlock.c)
 *     CmpSaveBootControlSet @ 0x140A0A5C8 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x140A0ACF4 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0C940 (CmpRefreshHive.c)
 *     CmpCloneHwProfile @ 0x140A10264 (CmpCloneHwProfile.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A164C4 (CmpEnumerateLayeredKey.c)
 *     CmpUnfreezeHive @ 0x140A16E58 (CmpUnfreezeHive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A182E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitLightWeightTransaction @ 0x140A1C51C (CmpCommitLightWeightTransaction.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A20004 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140A20130 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A29450 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpInitializeDelayDerefContext(_QWORD *a1)
{
  a1[1] = a1;
  *a1 = a1;
}
