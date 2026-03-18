/*
 * XREFs of UsbhPdoRemoveCleanup @ 0x1C0056374
 * Callers:
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055AB0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0056200 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     UsbhCompletePdoIdleIrp @ 0x1C0001330 (UsbhCompletePdoIdleIrp.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0003470 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C00036C0 (UsbhRefPdoDeviceHandle.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C000F058 (UsbhCompletePdoWakeIrp.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     UsbhPdoDeleteSymbolicLink @ 0x1C00542E0 (UsbhPdoDeleteSymbolicLink.c)
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
