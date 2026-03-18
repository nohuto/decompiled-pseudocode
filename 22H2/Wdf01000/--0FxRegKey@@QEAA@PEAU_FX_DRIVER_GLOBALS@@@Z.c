/*
 * XREFs of ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001729C
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0017080 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0047E70 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1C004D060 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0050E14 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfRegistryCreateKey @ 0x1C005DFD0 (imp_WdfRegistryCreateKey.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00051A4 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRegKey::FxRegKey(FxRegKey *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxObject::FxObject(this, 0x1006u, 0x78u, FxDriverGlobals);
  this->m_Lock = 0LL;
  this->m_ObjectFlags |= 0x11u;
  this->m_Key = 0LL;
  this->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
}
