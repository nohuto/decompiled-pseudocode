/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x140202C74
 * Callers:
 *     FsRtlInitializeBaseMcbEx @ 0x140202C10 (FsRtlInitializeBaseMcbEx.c)
 *     IoSetOplockPrivateFoExt @ 0x140206248 (IoSetOplockPrivateFoExt.c)
 *     FsRtlPrivateLock @ 0x1402D8B40 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1402D93EC (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402D9CF8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlInitializeLargeMcb @ 0x1402F25C0 (FsRtlInitializeLargeMcb.c)
 *     CcAllocateVacbLevels @ 0x1402F2624 (CcAllocateVacbLevels.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402F26C8 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlTruncateBaseMcb @ 0x1402F5430 (FsRtlTruncateBaseMcb.c)
 *     FsRtlSplitLocks @ 0x1402F8578 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140328B78 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAllocateFileLock @ 0x14032A500 (FsRtlAllocateFileLock.c)
 *     PopAllocateIrp @ 0x1403707A0 (PopAllocateIrp.c)
 *     WmipAllocRegEntry @ 0x140371884 (WmipAllocRegEntry.c)
 *     VfAvlReserveNode @ 0x1403724D0 (VfAvlReserveNode.c)
 *     IoSetOplockKeyContext @ 0x140390744 (IoSetOplockKeyContext.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A4AD0 (PopCreateDynamicIrpWorker.c)
 *     MiAddMdlTracker @ 0x140530794 (MiAddMdlTracker.c)
 *     AlpcInitializeHandleTable @ 0x1405E0D44 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x1405E0D98 (AlpcpInitializePort.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140662410 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406689E0 (FsRtlAddToTunnelCacheEx.c)
 *     AlpcpAllocateBlob @ 0x1406D984C (AlpcpAllocateBlob.c)
 *     WmipAllocEntry @ 0x1407578B0 (WmipAllocEntry.c)
 *     RtlpCopyRangeListEntry @ 0x1407608B0 (RtlpCopyRangeListEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140763B80 (RtlpCreateRangeListEntry.c)
 *     ViAllocateContextTable @ 0x1409C8484 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x1409C9B94 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x1409CA5D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CA820 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1409CB010 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1409CC100 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x1409D14C0 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x1409DEB48 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1409DF7C0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x1409E0D58 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x1409E1830 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x1409E19C8 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
