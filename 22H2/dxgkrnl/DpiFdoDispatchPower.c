/*
 * XREFs of DpiFdoDispatchPower @ 0x1C01F0360
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoHandleDevicePower @ 0x1C01F0390 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSystemPower @ 0x1C01F0DA4 (DpiFdoHandleSystemPower.c)
 */

__int64 __fastcall DpiFdoDispatchPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
    return DpiFdoHandleDevicePower(a1, a2);
  else
    return DpiFdoHandleSystemPower(a1, a2);
}
