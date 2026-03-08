/*
 * XREFs of _PnpObjectRaisePropertyChangeEvent @ 0x140687404
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 *     _CmAddDeviceToContainerWorker @ 0x1406851BC (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetObjectPropertyWorker @ 0x140686E0C (_PnpSetObjectPropertyWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140687320 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmSetDeviceMappedProperty @ 0x14076C5D4 (_CmSetDeviceMappedProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x14086A444 (_CmRaisePropertyChangeEvent.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x14086B538 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140A61AEC (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140A62D10 (_CmAddPanelDeviceWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140A64074 (_CmRemovePanelDeviceWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x140A66C94 (_CmSetInstallerClassMappedProperty.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x140A673A8 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x1406867A4 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1406874DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x140A629D0 (_PnpInstallerClassRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x140A62AC4 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 */

__int64 __fastcall PnpObjectRaisePropertyChangeEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(a1 + 496);
  if ( v6 )
  {
    switch ( (_DWORD)a3 )
    {
      case 1:
        return PnpDeviceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 2:
        return PnpInstallerClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 3:
        return PnpInterfaceRaisePropertyChangeEventWorker(
                 a1,
                 a2,
                 a4,
                 a5,
                 a6,
                 *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 496));
      case 4:
        return PnpInterfaceClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      default:
        v8[1] = a5;
        v8[2] = a6;
        v8[0] = a4;
        return v6(a1, a2, a3, 4LL, v8);
    }
  }
  return result;
}
