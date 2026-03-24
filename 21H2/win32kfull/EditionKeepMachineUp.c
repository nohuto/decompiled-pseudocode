/*
 * XREFs of EditionKeepMachineUp @ 0x1C0111F60
 * Callers:
 *     <none>
 * Callees:
 *     ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0112020 (-KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?MapInputToMonitorOnReason@@YA?AW4POWER_MONITOR_REQUEST_REASON@@W4_LINP_SOURCE@@@Z @ 0x1C0112108 (-MapInputToMonitorOnReason@@YA-AW4POWER_MONITOR_REQUEST_REASON@@W4_LINP_SOURCE@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall EditionKeepMachineUp(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  enum POWER_MONITOR_REQUEST_REASON v5; // eax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  if ( (!gbBlockSendInputResets || (a4 & 8) == 0) && ((*gpsi & 0x4000) == 0 || (a4 & 2) != 0) )
  {
    v5 = (unsigned int)MapInputToMonitorOnReason(a2);
    KeepMachineUp(v5);
  }
  if ( gPowerAdaptiveState && ((*gpsi & 0x4000) == 0 || (a4 & 2) != 0) )
  {
    gPowerAdaptiveState = 0;
    v7 = 0LL;
    LODWORD(v7) = 8;
    QueuePowerRequest(&v7, 0LL);
  }
  return 1LL;
}
