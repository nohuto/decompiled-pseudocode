/*
 * XREFs of ExpCancelTimer @ 0x1402CE3BC
 * Callers:
 *     NtCancelTimer @ 0x1402CD830 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402CDE34 (ExpSetTimerObject.c)
 *     ExTimerRundown @ 0x140352F6C (ExTimerRundown.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     KeRemoveQueueDpcEx @ 0x14028DB50 (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x1402F7360 (KeRemoveQueueApc.c)
 */

__int64 __fastcall ExpCancelTimer(PKTIMER a1)
{
  unsigned int v1; // edi
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v6; // rdx

  v1 = 0;
  if ( ((__int64)a1[4].Dpc & 1) != 0 )
  {
    Blink = a1[1].Header.WaitListHead.Blink;
    KxAcquireSpinLock((PKSPIN_LOCK)&Blink[75]);
    Flink = a1[3].TimerListEntry.Flink;
    if ( Flink->Blink != &a1[3].TimerListEntry || (v6 = a1[3].TimerListEntry.Blink, v6->Flink != &a1[3].TimerListEntry) )
      __fastfail(3u);
    v6->Flink = Flink;
    Flink->Blink = v6;
    KxReleaseSpinLock((volatile signed __int64 *)&Blink[75]);
    LOBYTE(a1[4].Dpc) &= ~1u;
    if ( ((__int64)a1[4].Dpc & 2) != 0 && LOBYTE(a1[3].Processor)
      || KeCancelTimer(a1)
      || KeRemoveQueueDpcEx((__int64)&a1[2].TimerListEntry, 0) )
    {
      v1 = 1;
    }
    if ( (unsigned __int8)KeRemoveQueueApc(&a1[1].Header.WaitListHead) )
      ++v1;
  }
  else
  {
    KeCancelTimer(a1);
  }
  result = v1;
  LOBYTE(a1[3].Processor) = 0;
  return result;
}
