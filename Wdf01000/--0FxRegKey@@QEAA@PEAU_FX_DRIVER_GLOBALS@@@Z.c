/*
 * XREFs of ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0001890
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C00016F0 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0032C40 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1C0038820 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C003CED4 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfRegistryCreateKey @ 0x1C004ACD0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1C004AF50 (imp_WdfRegistryOpenKey.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0001DB4 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRegKey::FxRegKey(FxRegKey *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxObject::FxObject(this, 0x1006u, 0x78u, FxDriverGlobals);
  this->m_Lock = 0LL;
  this->m_ObjectFlags |= 0x11u;
  this->m_Key = 0LL;
  this->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
}
