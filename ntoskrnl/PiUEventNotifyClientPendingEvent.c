/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x1406804B0
 * Callers:
 *     PiUEventNotifyClient @ 0x14068032C (PiUEventNotifyClient.c)
 *     PiUEventHandleGetEvent @ 0x14068E028 (PiUEventHandleGetEvent.c)
 * Callees:
 *     PiUEventEstimateRequiredClientBufferSize @ 0x140201E10 (PiUEventEstimateRequiredClientBufferSize.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PiUEventNotifyClientPendingEvent(__int64 a1)
{
  int v2; // eax
  struct _FAST_MUTEX *v3; // rcx
  int v5; // [rsp+50h] [rbp+8h] BYREF

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = PiUEventEstimateRequiredClientBufferSize(a1);
  v3 = *(struct _FAST_MUTEX **)(a1 + 16);
  v5 = v2;
  ExReleaseFastMutex(v3);
  return ZwUpdateWnfStateData(a1 + 88, (__int64)&v5);
}
