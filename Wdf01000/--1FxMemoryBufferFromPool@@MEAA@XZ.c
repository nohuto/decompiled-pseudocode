void __fastcall FxMemoryBufferFromPool::~FxMemoryBufferFromPool(
        FxMemoryBufferFromPool *this,
        unsigned int a2,
        unsigned int a3)
{
  void *m_Pool; // rcx

  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromPool_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
  m_Pool = this->m_Pool;
  if ( m_Pool )
    ExFreePoolWithTag(m_Pool, 0);
  FxObject::~FxObject(this, a2, a3);
}
