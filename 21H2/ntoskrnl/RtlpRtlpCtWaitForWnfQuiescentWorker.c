/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1409196B0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x14091947C (RtlpCtContextFree.c)
 */

void __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(PVOID *P)
{
  KeWaitForSingleObject(P[2], Executive, 0, 0, 0LL);
  RtlpCtContextFree(P);
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
