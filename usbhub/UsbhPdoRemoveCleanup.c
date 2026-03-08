/*
 * XREFs of UsbhPdoRemoveCleanup @ 0x1C0056C34
 * Callers:
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0056380 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0056AC0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0019C20 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0019ED0 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C001BB3C (UsbhCompletePdoWakeIrp.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C001BD28 (UsbhCompletePdoIdleIrp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhPdoDeleteSymbolicLink @ 0x1C0054BC8 (UsbhPdoDeleteSymbolicLink.c)
 */

int __fastcall UsbhPdoRemoveCleanup(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  _DWORD *v3; // rax
  __int64 v4; // rsi
  _DWORD *v5; // rax

  v2 = PdoExt((__int64)DeviceObject);
  v3 = PdoExt((__int64)DeviceObject);
  if ( v3[280] != 100 )
  {
    v3 = PdoExt((__int64)DeviceObject);
    if ( v3[280] != 102 )
    {
      UsbhCompletePdoWakeIrp(*((_QWORD *)v2 + 148), (__int64)DeviceObject, -1073741536);
      UsbhCompletePdoIdleIrp(*((_QWORD *)v2 + 148), *((_QWORD *)v2 + 105), -1073741536);
      v4 = UsbhRefPdoDeviceHandle(*((_QWORD *)v2 + 148), (__int64)DeviceObject, (__int64)DeviceObject, 0x48446C66u);
      if ( v4 )
      {
        v5 = FdoExt(*((_QWORD *)v2 + 148));
        if ( *((_QWORD *)v5 + 546) )
          (*((void (__fastcall **)(_QWORD, __int64))v5 + 546))(*((_QWORD *)v5 + 529), v4);
        UsbhDerefPdoDeviceHandle(*((_QWORD *)v2 + 148), v4, (__int64)DeviceObject, 0x48446C66u);
      }
      UsbhPdoDeleteSymbolicLink((__int64)DeviceObject);
      LODWORD(v3) = v2[355];
      if ( (char)v3 < 0 )
      {
        LODWORD(v3) = IoWMIRegistrationControl(DeviceObject, 2u);
        v2[355] &= ~0x80u;
      }
    }
  }
  return (int)v3;
}
