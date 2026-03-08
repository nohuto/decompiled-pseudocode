/*
 * XREFs of ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004F258
 * Callers:
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C002EC00 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C00306E0 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0030A70 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0030DB0 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0030F00 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0031050 (imp_WdfPdoInitAssignInstanceID.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C003BC2C (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C003BD78 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C004B470 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfStringCreate @ 0x1C004C8C0 (imp_WdfStringCreate.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0001DB4 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxString::FxString(FxString *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxObject::FxObject(this, 0x1007u, 0x78u, FxDriverGlobals);
  this->__vftable = (FxString_vtbl *)FxString::`vftable';
  RtlInitUnicodeString(&this->m_UnicodeString, 0LL);
  this->m_ObjectFlags |= 0x10u;
}
