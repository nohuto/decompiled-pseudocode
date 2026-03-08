/*
 * XREFs of Interrupter_AcquireEventRingLock @ 0x1C000F4FC
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_D0ExitPreInterruptsDisabled @ 0x1C000F410 (Interrupter_D0ExitPreInterruptsDisabled.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003DF10 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 *     Interrupter_IoWorkItemRequeueDpc @ 0x1C003E130 (Interrupter_IoWorkItemRequeueDpc.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     DynamicLock_Acquire @ 0x1C000A918 (DynamicLock_Acquire.c)
 */

char __fastcall Interrupter_AcquireEventRingLock(__int64 a1)
{
  char v1; // di

  v1 = 0;
  if ( *(_BYTE *)(a1 + 216) && KeGetCurrentIrql() == 2 )
  {
    Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 8));
    v1 = 1;
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 208));
  return v1;
}
