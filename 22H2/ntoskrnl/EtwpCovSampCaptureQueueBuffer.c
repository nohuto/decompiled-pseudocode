/*
 * XREFs of EtwpCovSampCaptureQueueBuffer @ 0x1405AEFA8
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x1405AE624 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1405AF7B0 (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampCaptureFlush @ 0x140942820 (EtwpCovSampCaptureFlush.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD00 (KeInsertQueueDpc.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall EtwpCovSampCaptureQueueBuffer(__int64 a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY v3; // rax

  if ( KeGetCurrentIrql() <= 2u )
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 720), a2);
    if ( !v3 )
      LOBYTE(v3) = KeSetEvent((PRKEVENT)(a1 + 736), *(_DWORD *)(a1 + 936), 0);
  }
  else
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 704), a2);
    if ( !v3 )
      LOBYTE(v3) = KeInsertQueueDpc((PRKDPC)(a1 + 760), 0LL, 0LL);
  }
  return (char)v3;
}
