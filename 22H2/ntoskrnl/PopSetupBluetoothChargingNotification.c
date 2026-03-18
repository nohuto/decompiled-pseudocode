/*
 * XREFs of PopSetupBluetoothChargingNotification @ 0x140865E78
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1407DB2B0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupBluetoothChargingNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (__int64)&v1,
           (__int64)&WNF_BLTH_BLUETOOTH_DEVICE_DOCK_STATUS,
           1,
           0,
           (__int64)PopWnfBluetoothChargingCallback,
           0LL);
}
