/*
 * XREFs of Interrupter_ReleaseEventRingLock @ 0x1C000F4C4
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C000F410 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003DF10 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     Interrupter_IoWorkItemRequeueDpc @ 0x1C003E130 (Interrupter_IoWorkItemRequeueDpc.c)
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     DynamicLock_Release @ 0x1C000A958 (DynamicLock_Release.c)
 */

char __fastcall Interrupter_ReleaseEventRingLock(__int64 a1, char a2)
{
  char result; // al

  result = DynamicLock_Release(*(_QWORD *)(a1 + 208));
  if ( a2 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
