/*
 * XREFs of ACPIInternalWaitWakeLoop @ 0x1C002CC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIInternalWaitWakeLoop(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  if ( IoStatus->Status >= 0 )
    PoRequestPowerIrp(DeviceObject, MinorFunction, PowerState, ACPIInternalWaitWakeLoop, Context, 0LL);
}
