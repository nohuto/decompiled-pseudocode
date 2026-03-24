/*
 * XREFs of RIMHandlePowerDeviceArrival @ 0x1C00AD30C
 * Callers:
 *     rimDoRimDevChange @ 0x1C00533E4 (rimDoRimDevChange.c)
 * Callees:
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     RIMUpdateDeviceForInputMode @ 0x1C00AD370 (RIMUpdateDeviceForInputMode.c)
 *     RIMGetCurrentPowerInputMode @ 0x1C00AD3B8 (RIMGetCurrentPowerInputMode.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C0162510 (RIMSetDeviceIdleTimeout.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C018202C (RIMHandleTTMDeviceArrival.c)
 */

__int64 __fastcall RIMHandlePowerDeviceArrival(_DWORD *a1)
{
  bool v2; // al
  unsigned int v3; // eax

  v2 = isChildPartition();
  a1[331] = -1;
  if ( v2 )
  {
    a1[332] = 0;
    return 0LL;
  }
  v3 = RIMGetCurrentPowerInputMode();
  a1[332] = v3;
  RIMUpdateDeviceForInputMode(a1, v3);
  if ( (a1[50] & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout(a1);
  if ( !gbTtmEnabled )
    return 0LL;
  return RIMHandleTTMDeviceArrival(a1);
}
