/*
 * XREFs of UsbhSetPdo_FailIo @ 0x1C00396D0
 * Callers:
 *     UsbhDeregisterPdo @ 0x1C0037578 (UsbhDeregisterPdo.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C003AD1C (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003B22C (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C0044104 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0056380 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0056AC0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 */

void __fastcall UsbhSetPdo_FailIo(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)PdoExt(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(v1 + 152);
  *((_DWORD *)v1 + 196) = 2;
  KeReleaseSpinLock(v1 + 152, v2);
}
