/*
 * XREFs of EtwpCovSampCaptureFlush @ 0x140942820
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x140946474 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     memset @ 0x140413800 (memset.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405AEB70 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AEFA8 (EtwpCovSampCaptureQueueBuffer.c)
 */

NTSTATUS __fastcall EtwpCovSampCaptureFlush(__int64 a1)
{
  _BYTE v3[80]; // [rsp+30h] [rbp-58h] BYREF

  EtwpCovSampCaptureFlushSampleBuffers(a1);
  memset(v3, 0, sizeof(v3));
  *(_QWORD *)v3 = 6941LL;
  *(_QWORD *)&v3[16] = 4054171642LL;
  KeInitializeEvent((PRKEVENT)&v3[48], NotificationEvent, 0);
  EtwpCovSampCaptureQueueBuffer(a1, (_SLIST_ENTRY *)v3);
  return KeWaitForSingleObject(&v3[48], Executive, 0, 0, 0LL);
}
