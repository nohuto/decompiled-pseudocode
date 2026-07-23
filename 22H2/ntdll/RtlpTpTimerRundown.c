/*
 * XREFs of RtlpTpTimerRundown @ 0x180009B48
 * Callers:
 *     RtlpTpTimerFinalizationCallback @ 0x180008820 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimer @ 0x180009C00 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x180084D30 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlpTpTimerQueueRundown @ 0x180084EA4 (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x18009D6A0 (ZwSetEvent.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 */

LOGICAL __fastcall RtlpTpTimerRundown(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 72);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
    NtClose(v3);
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*(_QWORD *)(a1 + 56));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
