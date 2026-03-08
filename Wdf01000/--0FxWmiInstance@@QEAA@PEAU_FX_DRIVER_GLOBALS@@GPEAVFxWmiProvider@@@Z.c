/*
 * XREFs of ??0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z @ 0x1C00289F8
 * Callers:
 *     ??0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiProvider@@@Z @ 0x1C0028A68 (--0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiPr.c)
 *     ??0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVFxWmiProvider@@@Z @ 0x1C0028B00 (--0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVF.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxWmiInstance::FxWmiInstance(
        FxWmiInstance *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        FxWmiProvider *Provider)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1034u, ObjectSize, FxDriverGlobals);
  this->m_Provider = Provider;
  this->__vftable = (FxWmiInstance_vtbl *)FxWmiInstance::`vftable';
  this->m_ListEntry.Blink = &this->m_ListEntry;
  this->m_ListEntry.Flink = &this->m_ListEntry;
  FxObject::AddRef(Provider, this, 37, "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiinstance.cpp");
  this->m_ObjectFlags |= 0x800u;
}
