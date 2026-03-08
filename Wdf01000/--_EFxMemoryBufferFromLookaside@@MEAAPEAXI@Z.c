/*
 * XREFs of ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x1C00416F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxMemoryBufferFromPoolLookaside *__fastcall FxMemoryBufferFromLookaside::`vector deleting destructor'(
        FxMemoryBufferFromPoolLookaside *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FX_POOL_TRACKER *p_m_DisposeSingleEntry; // rcx

  v3 = a2;
  this->FxMemoryBufferFromLookaside::FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromPoolLookaside_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
  this->FxMemoryBufferFromLookaside::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
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
