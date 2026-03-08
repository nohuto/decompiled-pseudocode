/*
 * XREFs of DpiFdoDispatchPower @ 0x1C01E1A40
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoHandleDevicePower @ 0x1C01E1A70 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSystemPower @ 0x1C01E2484 (DpiFdoHandleSystemPower.c)
 */

__int64 __fastcall DpiFdoDispatchPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
    return DpiFdoHandleDevicePower(a1, a2);
  else
    return DpiFdoHandleSystemPower(a1, a2);
}
