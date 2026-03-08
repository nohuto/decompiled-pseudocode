/*
 * XREFs of ??1FxNPagedLookasideListFromPool@@MEAA@XZ @ 0x1C0041394
 * Callers:
 *     ??_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C0041440 (--_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxNPagedLookasideListFromPool::~FxNPagedLookasideListFromPool(
        FxNPagedLookasideListFromPool *this,
        unsigned int a2,
        unsigned int a3)
{
  bool v3; // zf

  v3 = this->m_MemoryObjectSize == 0;
  this->__vftable = (FxNPagedLookasideListFromPool_vtbl *)FxNPagedLookasideListFromPool::`vftable';
  if ( !v3 )
    ExDeleteNPagedLookasideList(&this->m_ObjectLookaside);
  if ( this->m_BufferSize )
    ExDeleteNPagedLookasideList(&this->m_PoolLookaside);
  this->__vftable = (FxNPagedLookasideListFromPool_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this, a2, a3);
}
