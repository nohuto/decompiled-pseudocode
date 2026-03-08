/*
 * XREFs of ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C00207E8
 * Callers:
 *     imp_WdfChildListRequestChildEject @ 0x1C0021150 (imp_WdfChildListRequestChildEject.c)
 *     imp_WdfPdoRequestEject @ 0x1C0021D40 (imp_WdfPdoRequestEject.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C00243F4 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0025E58 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C002CE74 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?Init@FxCompanionTarget@@AEAAJPEAVFxDevice@@@Z @ 0x1C002DF78 (-Init@FxCompanionTarget@@AEAAJPEAVFxDevice@@@Z.c)
 *     imp_WdfDeviceSetDeviceState @ 0x1C0033370 (imp_WdfDeviceSetDeviceState.c)
 *     ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x1C003C218 (-AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C003C320 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C003CB50 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C003CED4 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x1C003D0B0 (-_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJEC.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C003D170 (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0049C90 (imp_WdfDeviceCreateDeviceInterface.c)
 *     FxGetDevicePropertyString @ 0x1C004D10C (FxGetDevicePropertyString.c)
 *     ?InvalidateDeviceState@FxPkgPnp@@AEAAXXZ @ 0x1C00733CC (-InvalidateDeviceState@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

_DEVICE_OBJECT *__fastcall FxDevice::GetSafePhysicalDevice(FxDevice *this)
{
  if ( this->m_PdoKnown )
    return this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject;
  else
    return 0LL;
}
