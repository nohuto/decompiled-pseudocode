/*
 * XREFs of PiUEventNotifyClientPendingEvent @ 0x14077EC70
 * Callers:
 *     PiUEventNotifyClient @ 0x14077EAEC (PiUEventNotifyClient.c)
 *     PiUEventHandleGetEvent @ 0x14077F838 (PiUEventHandleGetEvent.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     PiUEventEstimateRequiredClientBufferSize @ 0x14031CAF0 (PiUEventEstimateRequiredClientBufferSize.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
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
