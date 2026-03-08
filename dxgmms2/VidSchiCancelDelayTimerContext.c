/*
 * XREFs of VidSchiCancelDelayTimerContext @ 0x1C0012824
 * Callers:
 *     VidSchFlushContext @ 0x1C00AB850 (VidSchFlushContext.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C0106024 (VidSchiCancelDelayTimerDevice.c)
 * Callees:
 *     VidSchiDelayReadyRoutine @ 0x1C00128A0 (VidSchiDelayReadyRoutine.c)
 */

void __fastcall VidSchiCancelDelayTimerContext(__int64 a1, struct _KTIMER *a2)
{
  KIRQL v3; // bl

  if ( !KeCancelTimer(a2 + 8) )
    KeFlushQueuedDpcs();
  v3 = KfRaiseIrql(2u);
  VidSchiDelayReadyRoutine(0LL, a2, 0LL, 0LL);
  KeLowerIrql(v3);
}
