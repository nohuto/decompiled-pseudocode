/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x140252644
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140206248 (IoSetOplockPrivateFoExt.c)
 *     IopDeleteFileObjectExtension @ 0x1402524EC (IopDeleteFileObjectExtension.c)
 *     CcDeleteMbcb @ 0x140272FBC (CcDeleteMbcb.c)
 *     FsRtlPrivateInsertLock @ 0x1402D93EC (FsRtlPrivateInsertLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402D94CC (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402D99E8 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402D9CF8 (FsRtlPrivateInsertSharedLock.c)
 *     CcExtendVacbArray @ 0x1402F2054 (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x1402F24E0 (CcFreeUnusedVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x1402F27A0 (CcDeallocateVacbLevel.c)
 *     FsRtlFreeFileLock @ 0x1402F5350 (FsRtlFreeFileLock.c)
 *     FsRtlAddEntry @ 0x1402F5E64 (FsRtlAddEntry.c)
 *     FsRtlUninitializeLargeMcb @ 0x1402F6080 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x1402F60C0 (FsRtlUninitializeBaseMcb.c)
 *     FsRtlUninitializeFileLock @ 0x1402F6110 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402F7DB4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F8104 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlEmptyFreePoolList @ 0x1402F8264 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1402F82BC (FsRtlFreeTunnelNode.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1403205B0 (LZNT1DecompressChunkWorkItem.c)
 *     PopAllocateIrp @ 0x1403707A0 (PopAllocateIrp.c)
 *     WmipDeregisterRegEntry @ 0x140371974 (WmipDeregisterRegEntry.c)
 *     PopFreeIrp @ 0x14037A4EC (PopFreeIrp.c)
 *     VfTargetDriversRemove @ 0x14037E300 (VfTargetDriversRemove.c)
 *     IoSetOplockKeyContext @ 0x140390744 (IoSetOplockKeyContext.c)
 *     PopIrpWorker @ 0x14039F770 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A4AD0 (PopCreateDynamicIrpWorker.c)
 *     sub_1403DD750 @ 0x1403DD750 (sub_1403DD750.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EF9F0 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x140530A70 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405A1008 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     AlpcpDestroyPort @ 0x1405E2EFC (AlpcpDestroyPort.c)
 *     AlpcpDereferenceBlobEx @ 0x1405E9FC0 (AlpcpDereferenceBlobEx.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     IopCreateFile @ 0x14060B920 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060CE40 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcConnectionDestroyProcedure @ 0x140665890 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpDestroyBlob @ 0x1406659AC (AlpcpDestroyBlob.c)
 *     WmipUnreferenceEntry @ 0x1406B23F8 (WmipUnreferenceEntry.c)
 *     AlpcAddHandleTableEntry @ 0x1406DB5B8 (AlpcAddHandleTableEntry.c)
 *     RtlpFreeRangeListEntry @ 0x140760C88 (RtlpFreeRangeListEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x14076E980 (FsRtlDeleteTunnelCache.c)
 *     IovCallDriver @ 0x1409C4CC4 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x1409C84C4 (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x1409C99C4 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x1409C9AEC (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x1409CA5D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CA820 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1409CB010 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x1409CB5A0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409CB960 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CBA10 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409CBD00 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1409CC100 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1409CCF40 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1409CD1B0 (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x1409D635C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D6814 (ViRemLockDeleteFirstTreeNode.c)
 *     ViDeadlockFree @ 0x1409DF5B8 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409DF7C0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1409E0EDC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViLookasideAdd @ 0x1409E15C4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E16EC (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x1409E1940 (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x1409E1A90 (ViPacketNotificationCallback.c)
 *     VerifierExDeleteResourceLite @ 0x1409E1E30 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E2210 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E249C (VfCheckForResource.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
