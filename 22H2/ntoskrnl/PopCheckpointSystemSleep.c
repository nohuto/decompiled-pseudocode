/*
 * XREFs of PopCheckpointSystemSleep @ 0x140993C64
 * Callers:
 *     PopPrepareSleep @ 0x140382E4C (PopPrepareSleep.c)
 *     PopIssueActionRequest @ 0x140776468 (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x140776E70 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140776EC4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140776F24 (PopResumeApps.c)
 *     PopResumeServices @ 0x140776F9C (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x140777044 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x14077709C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 *     PopWriteHiberPages @ 0x1409916A0 (PopWriteHiberPages.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x140992AC4 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x14099324C (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140993CC8 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140993F80 (PopSaveHiberContext.c)
 *     PopRequestWrite @ 0x140994594 (PopRequestWrite.c)
 *     PopHiberChecksumHiberFileData @ 0x1409949E0 (PopHiberChecksumHiberFileData.c)
 *     PopDecompressHiberBlocks @ 0x140995054 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x140998890 (PopHiberCheckResume.c)
 *     PopRequestRead @ 0x1409B1994 (PopRequestRead.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PopRecordSleepCheckpoint @ 0x1407773E8 (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1409B2824 (PopCheckpointSystemSleepUnsafe.c)
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
      if ( (unsigned __int8)off_140C00940[0]() )
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
  qword_140C23F90 += result;
  return result;
}
