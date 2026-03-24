/*
 * XREFs of ViShutdownScheduleWatchdog @ 0x1409DA3A4
 * Callers:
 *     VfShutdownScheduleWatchdog @ 0x1405A2168 (VfShutdownScheduleWatchdog.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409DA420 (ViShutdownWatchdogExecuteDpc.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025FD70 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x140278AE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14027B6B0 (KeInitializeDpc.c)
 */

__int64 ViShutdownScheduleWatchdog()
{
  if ( !VfShutdownThread )
    VfShutdownThread = (ULONG_PTR)KeGetCurrentThread();
  KeInitializeDpc(&ViShutdownWatchdogDpc, ViShutdownWatchdogExecuteDpc, 0LL);
  KeInitializeTimerEx(&ViShutdownWatchdogTimer, NotificationTimer);
  return KiSetTimerEx((__int64)&ViShutdownWatchdogTimer, -6000000000LL, 0, 0, (__int64)&ViShutdownWatchdogDpc);
}
