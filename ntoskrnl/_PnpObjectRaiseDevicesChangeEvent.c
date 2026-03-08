/*
 * XREFs of _PnpObjectRaiseDevicesChangeEvent @ 0x14087DBE4
 * Callers:
 *     _CmAddDeviceToContainer @ 0x140682764 (_CmAddDeviceToContainer.c)
 *     _CmRemoveDeviceFromContainer @ 0x140A619AC (_CmRemoveDeviceFromContainer.c)
 *     _CmAddPanelDevice @ 0x140A62BCC (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x140A63F30 (_CmRemovePanelDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _PnpContainerRaiseDevicesChangeEvent @ 0x14087DC24 (_PnpContainerRaiseDevicesChangeEvent.c)
 */

void __fastcall PnpObjectRaiseDevicesChangeEvent(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v3)(__int64, __int64, __int64); // r11

  v3 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 496);
  if ( v3 )
  {
    if ( (_DWORD)a3 == 5 )
    {
      PnpContainerRaiseDevicesChangeEvent(a1, a2, v3);
    }
    else
    {
      if ( (_DWORD)a3 == 6 )
        a3 = 6LL;
      v3(a1, a2, a3);
    }
  }
}
