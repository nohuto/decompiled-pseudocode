/*
 * XREFs of StorPortUnitDirectedPowerUpCompletion @ 0x1C0041990
 * Callers:
 *     <none>
 * Callees:
 *     RaFlushDFxQueue @ 0x1C0034534 (RaFlushDFxQueue.c)
 */

void __fastcall StorPortUnitDirectedPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _DEVICE_OBJECT **Context)
{
  *((_BYTE *)Context + 448) &= ~0x80u;
  if ( Context[415] != (struct _DEVICE_OBJECT *)(Context + 415) )
    RaFlushDFxQueue(Context[1]);
}
