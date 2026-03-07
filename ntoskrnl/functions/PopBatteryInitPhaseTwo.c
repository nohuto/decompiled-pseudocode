NTSTATUS PopBatteryInitPhaseTwo()
{
  NTSTATUS result; // eax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  PopReadUlongPowerKey(
    L"ChargerWeakDetectionThresholdPercent",
    (unsigned int *)&WeakChargerChargeDropMilliPercent,
    1u,
    1u,
    0xAu,
    100);
  WeakChargerChargeDropMilliPercent *= 1000;
  PopReadUlongPowerKey(
    L"BatteryChargeTrajectoryThresholdPercent",
    (unsigned int *)&BatteryChargeTrajectoryThresholdMilliPercent,
    1u,
    1u,
    0xAu,
    100);
  BatteryChargeTrajectoryThresholdMilliPercent *= 1000;
  result = EtwRegister(&BATTERY_ETW_PROVIDER, (PETWENABLECALLBACK)PopBatteryEtwCallback, 0LL, &PopBatteryEtwHandle);
  if ( result >= 0 )
  {
    PopBatteryEtwRegistered = 1;
    ExSubscribeWnfStateChange(
      (__int64)&v1,
      (__int64)&WNF_USB_ERROR_NOTIFICATION,
      1,
      0,
      (__int64)PopUsbErrorWNFNotificationCallback,
      0LL);
    return PopBatteryReadOscBits();
  }
  return result;
}
