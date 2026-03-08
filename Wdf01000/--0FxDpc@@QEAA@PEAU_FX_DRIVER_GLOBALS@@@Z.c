/*
 * XREFs of ??0FxDpc@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00230AC
 * Callers:
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C0023470 (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxDpc::FxDpc(FxDpc *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1015u, 0xE0u, FxDriverGlobals);
  this->__vftable = (FxDpc_vtbl *)FxDpc::`vftable';
  this->m_Object = 0LL;
  this->m_CallbackLock = 0LL;
  this->m_CallbackLockObject = 0LL;
  this->m_Callback = 0LL;
  this->m_RunningDown = 0;
  this->m_ObjectFlags |= 0x810u;
}
