void __fastcall FxCompanionTarget::FxCompanionTarget(
        FxCompanionTarget *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 a3)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1038u, 0xA0u, FxDriverGlobals);
  this->m_PendingTaskCount = 1;
  this->FxNonPagedObject::FxObject::__vftable = (FxCompanionTarget_vtbl *)FxCompanionTarget::`vftable'{for `FxNonPagedObject'};
  this->IDeviceCompanionCallbacks::__vftable = (IDeviceCompanionCallbacks_vtbl *)FxCompanionTarget::`vftable'{for `IDeviceCompanionCallbacks'};
  this->m_RdDeviceCompanion = 0LL;
  this->m_Device = 0LL;
  this->m_DisposeEvent = 0LL;
  this->m_ObjectFlags |= 0x810u;
}
