/*
 * XREFs of _PnpObjectRaiseDevicesChangeEvent @ 0x140755470
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x14072C9AC (_CmRemoveDeviceFromContainer.c)
 *     _CmAddDeviceToContainer @ 0x140758914 (_CmAddDeviceToContainer.c)
 *     _CmAddPanelDevice @ 0x14097779C (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x140978AE8 (_CmRemovePanelDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     _PnpContainerRaiseDevicesChangeEvent @ 0x1407554B0 (_PnpContainerRaiseDevicesChangeEvent.c)
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
