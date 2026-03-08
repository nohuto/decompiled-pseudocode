/*
 * XREFs of ??1FxPagedLookasideListFromPool@@MEAA@XZ @ 0x1C004167C
 * Callers:
 *     ??_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C0041750 (--_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxPagedLookasideListFromPool::~FxPagedLookasideListFromPool(
        FxPagedLookasideListFromPool *this,
        unsigned int a2,
        unsigned int a3)
{
  bool v3; // zf

  v3 = this->m_MemoryObjectSize == 0;
  this->__vftable = (FxPagedLookasideListFromPool_vtbl *)FxPagedLookasideListFromPool::`vftable';
  if ( !v3 )
    ExDeleteNPagedLookasideList(&this->m_ObjectLookaside);
  if ( this->m_RawBufferSize )
    ExDeletePagedLookasideList(&this->m_PoolLookaside);
  this->__vftable = (FxPagedLookasideListFromPool_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this, a2, a3);
}
