/*
 * XREFs of UsbhPdoPnp_DeviceEnumerated @ 0x1C00544B0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C000C0D0 (UsbhEnableTimerObject.c)
 *     UsbhSetSqmEnumerationData @ 0x1C0046618 (UsbhSetSqmEnumerationData.c)
 *     UsbhPublishBillboardDetails @ 0x1C00568B4 (UsbhPublishBillboardDetails.c)
 *     UsbhPublishDualRoleFeaturesProperty @ 0x1C0056AC4 (UsbhPublishDualRoleFeaturesProperty.c)
 *     UsbhQueryD3ColdSupport @ 0x1C0056B50 (UsbhQueryD3ColdSupport.c)
 */

__int64 __fastcall UsbhPdoPnp_DeviceEnumerated(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rdi

  v4 = PdoExt((__int64)DeviceObject);
  UsbhQueryD3ColdSupport(*((PDEVICE_OBJECT *)v4 + 148), DeviceObject);
  UsbhSetSqmEnumerationData(DeviceObject);
  UsbhEnableTimerObject(
    *((_QWORD *)v4 + 148),
    (__int64)(v4 + 426),
    10000,
    *((unsigned __int16 *)v4 + 714),
    *((_QWORD *)v4 + 105),
    0x77464E44u);
  if ( *((_QWORD *)v4 + 301) )
    UsbhPublishBillboardDetails(DeviceObject);
  if ( (v4[358] & 0x40000) != 0 )
    UsbhPublishDualRoleFeaturesProperty(DeviceObject);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
