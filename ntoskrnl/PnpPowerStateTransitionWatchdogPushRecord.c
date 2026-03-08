/*
 * XREFs of PnpPowerStateTransitionWatchdogPushRecord @ 0x140954B3C
 * Callers:
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140968A40 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     IoBuildPoDeviceNotifyList @ 0x140A9B078 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058CC64 (PoPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 PnpPowerStateTransitionWatchdogPushRecord()
{
  return PoPushPowerStateTransitionRecordWithCallback(
           PsInitialSystemProcess,
           KeGetCurrentThread(),
           0LL,
           (__int64)PnpPowerStateTransitionWatchdogCallback);
}
