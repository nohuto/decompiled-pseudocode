/*
 * XREFs of PopCheckpointSystemSleep @ 0x140AA7378
 * Callers:
 *     PopPrepareSleep @ 0x14058CFDC (PopPrepareSleep.c)
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 *     PopDispatchSuperfetchNotification @ 0x140986790 (PopDispatchSuperfetchNotification.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x140987434 (PopResumeApps.c)
 *     PopResumeServices @ 0x1409874AC (PopResumeServices.c)
 *     PopSuspendApps @ 0x140987A14 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140987A68 (PopSuspendServices.c)
 *     PopNotifyCallbacksPreSleep @ 0x140988A7C (PopNotifyCallbacksPreSleep.c)
 *     PopDecompressHiberBlocks @ 0x140A9F1C4 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x140A9FD30 (PopHiberCheckResume.c)
 *     PopHiberChecksumHiberFileData @ 0x140A9FFDC (PopHiberChecksumHiberFileData.c)
 *     PopRequestRead @ 0x140AA0A10 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140AA0E40 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140AA139C (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 *     PopWriteHiberPages @ 0x140AA2874 (PopWriteHiberPages.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopRecordSleepCheckpoint @ 0x14097E410 (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140AA7484 (PopCheckpointSystemSleepUnsafe.c)
 */

unsigned __int64 __fastcall PopCheckpointSystemSleep(int a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v1 = a1;
  PopSleepCheckpoint = a1;
  v2 = __rdtsc();
  if ( PopBootStatCheckpointAvailable )
    PopRecordSleepCheckpoint(a1);
  if ( PopCheckpointSystemSleepEnabled
    && ((PopCheckpointSystemSleepSimulateFlags & 1) == 0
     || (unsigned int)v1 <= HIBYTE(PopCheckpointSystemSleepSimulateFlags)) )
  {
    if ( PoAllProcIntrDisabled )
    {
      if ( KeGetCurrentPrcb()->Number )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 1uLL, 0LL);
      if ( (unsigned __int8)off_140C01D50[0]() )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 2uLL, 0LL);
    }
    else if ( !_InterlockedExchangeAdd(&PopPagingEnabled, 0) )
    {
      KeBugCheckEx(0xA0u, 0x10FuLL, v1, 0LL, 0LL);
    }
    PopCheckpointSystemSleepUnsafe((unsigned int)v1);
  }
  v3 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) - v2;
  qword_140C3CFD0 += result;
  return result;
}
