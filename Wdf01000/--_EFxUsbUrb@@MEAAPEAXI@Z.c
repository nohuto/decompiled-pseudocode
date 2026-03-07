FxUsbUrb *__fastcall FxUsbUrb::`vector deleting destructor'(FxUsbUrb *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FX_POOL_TRACKER *p_m_DisposeSingleEntry; // rcx

  v3 = a2;
  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxUsbUrb_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    p_m_DisposeSingleEntry = (FX_POOL_TRACKER *)&this[-1].m_DisposeSingleEntry;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_m_DisposeSingleEntry = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_m_DisposeSingleEntry);
  }
  return this;
}
