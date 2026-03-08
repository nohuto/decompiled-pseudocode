/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x14023FE20
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x14023FA98 (IoSetOplockPrivateFoExt.c)
 *     CcAllocateVacbLevels @ 0x14029C894 (CcAllocateVacbLevels.c)
 *     PopAllocateIrp @ 0x1402BA774 (PopAllocateIrp.c)
 *     FsRtlPrivateLock @ 0x1402C21B0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1402C247C (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402C25E0 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlSplitLocks @ 0x1402C31DC (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402C32B0 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlTruncateBaseMcb @ 0x1402D0170 (FsRtlTruncateBaseMcb.c)
 *     FsRtlInitializeLargeMcb @ 0x1402DFC20 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1402DFC90 (FsRtlInitializeBaseMcbEx.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402EDF30 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlAllocateFileLock @ 0x1402FD5B0 (FsRtlAllocateFileLock.c)
 *     PopCreateDynamicIrpWorker @ 0x140300A40 (PopCreateDynamicIrpWorker.c)
 *     VfAvlReserveNode @ 0x140303910 (VfAvlReserveNode.c)
 *     WmipAllocRegEntry @ 0x1403BC6F4 (WmipAllocRegEntry.c)
 *     IoSetOplockKeyContext @ 0x1403C9528 (IoSetOplockKeyContext.c)
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     MiAddMdlTracker @ 0x14061A0AC (MiAddMdlTracker.c)
 *     AlpcpInitializePort @ 0x140712D08 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x14071378C (AlpcInitializeHandleTable.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1407524E0 (FsRtlAddToTunnelCacheEx.c)
 *     AlpcpAllocateBlob @ 0x1407CBB50 (AlpcpAllocateBlob.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x1407CBC20 (FsRtlAllocateExtraCreateParameterList.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1407CBC80 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ObWaitForMultipleObjects @ 0x1407D79B0 (ObWaitForMultipleObjects.c)
 *     RtlpCreateRangeListEntry @ 0x14081F5E4 (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x14081FB60 (RtlpCopyRangeListEntry.c)
 *     WmipAllocEntry @ 0x140868798 (WmipAllocEntry.c)
 *     HashpHashMemory @ 0x140A7438C (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7467C (HashpVerifyPkcs1Signature.c)
 *     ViAllocateContextTable @ 0x140AC0FEC (ViAllocateContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140AC1B90 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC1DE0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140AC2650 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140AC3800 (VfGetScatterGatherList.c)
 *     ViIoCallbackSnapState @ 0x140AC83D4 (ViIoCallbackSnapState.c)
 *     VfIrpAllocateCallDriverData @ 0x140ACAA48 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140AD56E4 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140AD67C8 (ViDeadlockPopulateLookasideCache.c)
 *     VfPacketCreateAndLock @ 0x140ADA00C (VfPacketCreateAndLock.c)
 *     IovpSessionDataCreate @ 0x140ADAEA8 (IovpSessionDataCreate.c)
 *     ViWdBeforeCallDriver @ 0x140ADB1D4 (ViWdBeforeCallDriver.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
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
