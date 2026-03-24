/*
 * XREFs of DrvSetMonitorPowerState @ 0x1C00C3910
 * Callers:
 *     PowerOnMonitor @ 0x1C0078C80 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00C2200 (PowerOffMonitor.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C001F320 (UserIsWddmConnectedSession.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C3960 (DrvSetWddmDeviceMonitorPowerState.c)
 */

__int64 __fastcall DrvSetMonitorPowerState(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v7; // r8

  if ( !(unsigned int)UserIsWddmConnectedSession() )
    return 3221225473LL;
  LOBYTE(v7) = a3;
  DrvSetWddmDeviceMonitorPowerState(0LL, a2, v7, a4);
  return 0LL;
}
