/*
 * XREFs of EtwpCovSampCaptureReleaseToLookaside @ 0x140461C2A
 * Callers:
 *     EtwpCovSampCaptureBufferRelease @ 0x14040CB5C (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureApc @ 0x140461810 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x140461A8C (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampLookasidePop @ 0x140461CA8 (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampCaptureApcRelease @ 0x1406009D4 (EtwpCovSampCaptureApcRelease.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140600A20 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406010A0 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureSample @ 0x140601340 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A3E60 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall EtwpCovSampCaptureReleaseToLookaside(__int64 a1, __int64 a2, struct _SLIST_ENTRY *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 40) )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)a2, a3);
    result = *(unsigned int *)(a2 + 40);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v4, a3);
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v4 + 76));
    if ( (unsigned int)result < *(_DWORD *)(v4 + 72) )
      return result;
  }
  return KiInsertQueueDpc(a1 + 1192, 0LL, 0LL, 0LL, 0);
}
