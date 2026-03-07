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
