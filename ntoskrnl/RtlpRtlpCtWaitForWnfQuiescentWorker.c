/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1409BF360
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x1409BF13C (RtlpCtContextFree.c)
 */

void __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(PVOID *P)
{
  KeWaitForSingleObject(P[2], Executive, 0, 0, 0LL);
  RtlpCtContextFree(P);
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
