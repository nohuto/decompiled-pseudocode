/*
 * XREFs of ??_EFxMemoryBufferFromPool@@MEAAPEAXI@Z @ 0x1C00428F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxMemoryBufferFromPool@@MEAA@XZ @ 0x1C00428A4 (--1FxMemoryBufferFromPool@@MEAA@XZ.c)
 */

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
