/*
 * XREFs of PopBatteryInitPhaseTwo @ 0x140A6F604
 * Callers:
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     PopReadUlongPowerKey @ 0x1403CB244 (PopReadUlongPowerKey.c)
 *     ExSubscribeWnfStateChange @ 0x140694970 (ExSubscribeWnfStateChange.c)
 *     EtwRegister @ 0x1407622D0 (EtwRegister.c)
 */

NTSTATUS PopBatteryInitPhaseTwo()
{
  NTSTATUS result; // eax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  PopReadUlongPowerKey(L"ChargerWeakDetectionThresholdPercent", &WeakChargerChargeDropMilliPercent);
  WeakChargerChargeDropMilliPercent *= 1000;
  PopReadUlongPowerKey(L"BatteryChargeTrajectoryThresholdPercent", &BatteryChargeTrajectoryThresholdMilliPercent);
  BatteryChargeTrajectoryThresholdMilliPercent *= 1000;
  result = EtwRegister(&BATTERY_ETW_PROVIDER, (PETWENABLECALLBACK)PopBatteryEtwCallback, 0LL, &PopBatteryEtwHandle);
  if ( result >= 0 )
  {
    PopBatteryEtwRegistered = 1;
    return ExSubscribeWnfStateChange(
             (__int64)&v1,
             (__int64)&WNF_USB_ERROR_NOTIFICATION,
             1,
             0,
             (__int64)PopUsbErrorWNFNotificationCallback,
             0LL);
  }
  return result;
}
