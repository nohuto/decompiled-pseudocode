/*
 * XREFs of EtwpCovSampCaptureQueueBuffer @ 0x140461B58
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x140461A8C (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x140601840 (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampCaptureFlush @ 0x1409EE130 (EtwpCovSampCaptureFlush.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 */

int __fastcall EtwpCovSampCaptureQueueBuffer(__int64 a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY v3; // rax

  if ( KeGetCurrentIrql() <= 2u )
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1088), a2);
    if ( !v3 )
      LODWORD(v3) = KeSetEvent((PRKEVENT)(a1 + 1104), *(_DWORD *)(a1 + 1304), 0);
  }
  else
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1072), a2);
    if ( !v3 )
      LODWORD(v3) = KiInsertQueueDpc(a1 + 1128, 0LL, 0LL, 0LL, 0);
  }
  return (int)v3;
}
