void __fastcall FxRequestMemory::FxRequestMemory(FxRequestMemory *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxMemoryObject::FxMemoryObject(this, FxDriverGlobals, 0x98u, 0LL);
  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxRequestMemory_vtbl *)FxRequestMemory::`vftable'{for `FxObject'};
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxRequestMemory::`vftable'{for `IFxMemory'};
  this->m_pBuffer = 0LL;
  this->m_Request = 0LL;
  this->m_Mdl = 0LL;
  this->m_Flags = 0;
}
