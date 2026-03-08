/*
 * XREFs of PspDeferredWorkerRoutine @ 0x1409A9DB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

LONG __fastcall PspDeferredWorkerRoutine(PRKEVENT Event)
{
  LODWORD(Event[1].Header.WaitListHead.Blink) = (*(__int64 (__fastcall **)(struct _LIST_ENTRY *))&Event[1].Header.Lock)(Event[1].Header.WaitListHead.Flink);
  return KeSetEvent(Event, 1, 0);
}
