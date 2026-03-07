FxMemoryPagedBufferFromPool *__fastcall FxMemoryBufferFromPool::`vector deleting destructor'(
        FxMemoryPagedBufferFromPool *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxMemoryPagedBufferFromPool *v5; // rcx

  v3 = a2;
  FxMemoryBufferFromPool::~FxMemoryBufferFromPool(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxMemoryPagedBufferFromPool *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
