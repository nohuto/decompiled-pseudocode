/*
 * XREFs of ViShutdownScheduleWatchdog @ 0x140AD6084
 * Callers:
 *     VfShutdownScheduleWatchdog @ 0x1405D1848 (VfShutdownScheduleWatchdog.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140AD6100 (ViShutdownWatchdogExecuteDpc.c)
 * Callees:
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x1402BE630 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BF970 (KeInitializeDpc.c)
 */

__int64 ViShutdownScheduleWatchdog()
{
  if ( !VfShutdownThread )
    VfShutdownThread = (ULONG_PTR)KeGetCurrentThread();
  KeInitializeDpc(&ViShutdownWatchdogDpc, ViShutdownWatchdogExecuteDpc, 0LL);
  KeInitializeTimerEx(&ViShutdownWatchdogTimer, NotificationTimer);
  return KiSetTimerEx((__int64)&ViShutdownWatchdogTimer, -6000000000LL, 0, 0, (__int64)&ViShutdownWatchdogDpc);
}
