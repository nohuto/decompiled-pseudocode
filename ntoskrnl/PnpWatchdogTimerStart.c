/*
 * XREFs of PnpWatchdogTimerStart @ 0x14068A9C4
 * Callers:
 *     PnpEnableWatchdog @ 0x14068A5EC (PnpEnableWatchdog.c)
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 * Callees:
 *     WdtpArmTimer @ 0x140203F20 (WdtpArmTimer.c)
 */

__int64 __fastcall PnpWatchdogTimerStart(__int64 a1)
{
  int v1; // edx

  if ( *(_BYTE *)(a1 + 140) )
  {
    v1 = *(_DWORD *)(a1 + 132);
    *(_BYTE *)(a1 + 140) = 0;
  }
  else
  {
    v1 = *(_DWORD *)(a1 + 32);
  }
  return WdtpArmTimer(a1, v1);
}
