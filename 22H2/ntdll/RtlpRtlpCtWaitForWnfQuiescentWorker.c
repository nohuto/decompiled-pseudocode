/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180102500
 * Callers:
 *     <none>
 * Callees:
 *     NtWaitForSingleObject @ 0x18009D560 (NtWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x180102388 (RtlpCtContextFree.c)
 */

__int64 __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(__int64 a1, __int64 a2)
{
  NtWaitForSingleObject(*(HANDLE *)(a2 + 16), 0, 0LL);
  RtlpCtContextFree((__int64 *)a2);
  return (unsigned int)_InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
