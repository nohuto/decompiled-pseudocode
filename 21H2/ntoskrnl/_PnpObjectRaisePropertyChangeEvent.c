/*
 * XREFs of _PnpObjectRaisePropertyChangeEvent @ 0x140746274
 * Callers:
 *     _CmRemoveDeviceFromContainerWorker @ 0x14072C0D0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x1407312BC (_CmSetInstallerClassMappedProperty.c)
 *     _CmSetDeviceMappedProperty @ 0x14073A704 (_CmSetDeviceMappedProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x140744594 (_CmRaisePropertyChangeEvent.c)
 *     _PnpSetObjectPropertyWorker @ 0x140745F5C (_PnpSetObjectPropertyWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746200 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IopProcessSetInterfaceState @ 0x14074929C (IopProcessSetInterfaceState.c)
 *     _CmAddDeviceToContainerWorker @ 0x140759440 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140766394 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmAddPanelDeviceWorker @ 0x140977A70 (_CmAddPanelDeviceWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140978DBC (_CmRemovePanelDeviceWorker.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x14097BFC0 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x140734A5C (_PnpInstallerClassRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x140745858 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140746370 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x140977864 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
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
        return PnpInstallerClassRaisePropertyChangeEventWorker(
                 a1,
                 a2,
                 a4,
                 a5,
                 a6,
                 *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 496));
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
