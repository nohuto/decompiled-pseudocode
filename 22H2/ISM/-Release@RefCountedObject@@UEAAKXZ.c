/*
 * XREFs of ?Release@RefCountedObject@@UEAAKXZ @ 0x180037280
 * Callers:
 *     ??_GPnpDevice@@UEAAPEAXI@Z @ 0x1800264E0 (--_GPnpDevice@@UEAAPEAXI@Z.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800266B0 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180026C90 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180026F64 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?Release@TouchProcessor@@UEAAKXZ @ 0x180037250 (-Release@TouchProcessor@@UEAAKXZ.c)
 *     ?Release@RegistryWatcher@@UEAAKXZ @ 0x180037260 (-Release@RegistryWatcher@@UEAAKXZ.c)
 *     ?Release@HeatProcessor@@UEAAKXZ @ 0x180037270 (-Release@HeatProcessor@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A968 (-InternalRelease@-$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@MPCInputRouter@@UEAAKXZ @ 0x18003AD00 (-Release@MPCInputRouter@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VVirtualTouchpadContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18003B1FC (--1-$com_ptr_t@VVirtualTouchpadContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@MPCFocusTarget@@UEAAKXZ @ 0x180048AC0 (-Release@MPCFocusTarget@@UEAAKXZ.c)
 *     _LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180052470 (_LampArrayTelemetry--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x18009EDBC (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x18009EE3C (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x18009F758 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x18009FC8C (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x18009FCC8 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800A03B0 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 *     ??1LampArrayDevice@@UEAA@XZ @ 0x1800A109C (--1LampArrayDevice@@UEAA@XZ.c)
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800A13C8 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800A1628 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800A2EF4 (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800A4118 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 *     ??1ConsumerControlGenericDevice@@EEAA@XZ @ 0x1800A427C (--1ConsumerControlGenericDevice@@EEAA@XZ.c)
 *     ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800A43DC (-CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ??1HidLampArrayDevice@@UEAA@XZ @ 0x1800A638C (--1HidLampArrayDevice@@UEAA@XZ.c)
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800A66CC (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 *     ?CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@@@Z @ 0x1800A6860 (-CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@.c)
 *     ?CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@@@Z @ 0x1800A68D8 (-CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@.c)
 *     ??1HidLampRangeUpdateReportBuilder@@UEAA@XZ @ 0x1800A93FC (--1HidLampRangeUpdateReportBuilder@@UEAA@XZ.c)
 *     ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x1800A96C4 (--1HidLampMultiUpdateReportBuilder@@UEAA@XZ.c)
 *     ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x1800A97C0 (-CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z.c)
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1800F0940 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnTouchpadRectChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1800F0AA0 (-OnTouchpadRectChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180126D7C (-OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ?Release@MouseProcessor@@UEAAKXZ @ 0x1801360B0 (-Release@MouseProcessor@@UEAAKXZ.c)
 *     ?Release@GazeProcessor@@UEAAKXZ @ 0x180189180 (-Release@GazeProcessor@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RefCountedObject::Release(RefCountedObject *this)
{
  unsigned __int32 v2; // ebx
  __int64 v4; // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    v4 = *(_QWORD *)this;
    *((_DWORD *)this + 2) = 1;
    (*(void (**)(void))(v4 + 32))();
    *((_DWORD *)this + 2) = 0;
    (*(void (__fastcall **)(RefCountedObject *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v2;
}
