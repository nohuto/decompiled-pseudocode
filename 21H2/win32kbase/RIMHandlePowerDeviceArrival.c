/*
 * XREFs of RIMHandlePowerDeviceArrival @ 0x1C00A20A0
 * Callers:
 *     rimDoRimDevChange @ 0x1C00A1F28 (rimDoRimDevChange.c)
 * Callees:
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     RIMUpdateDeviceForInputMode @ 0x1C00A2104 (RIMUpdateDeviceForInputMode.c)
 *     RIMGetCurrentPowerInputMode @ 0x1C00A21D8 (RIMGetCurrentPowerInputMode.c)
 *     ?RIMQueryWakeCapableProperty@@YAXPEAURIMDEV@@@Z @ 0x1C00A2348 (-RIMQueryWakeCapableProperty@@YAXPEAURIMDEV@@@Z.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C018CEB8 (RIMSetDeviceIdleTimeout.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01B7F9C (RIMHandleTTMDeviceArrival.c)
 */

__int64 __fastcall RIMHandlePowerDeviceArrival(struct RIMDEV *a1)
{
  unsigned int v2; // eax

  if ( isChildPartition() )
  {
    *((_DWORD *)a1 + 329) = -1;
    *((_DWORD *)a1 + 330) = 0;
    return 0LL;
  }
  RIMQueryWakeCapableProperty(a1);
  *((_DWORD *)a1 + 329) = -1;
  v2 = RIMGetCurrentPowerInputMode();
  *((_DWORD *)a1 + 330) = v2;
  RIMUpdateDeviceForInputMode(a1, v2);
  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout(a1);
  if ( !gbTtmEnabled )
    return 0LL;
  return RIMHandleTTMDeviceArrival(a1);
}
