/*
 * XREFs of ??_GFxLookasideList@@MEAAPEAXI@Z @ 0x1C0042ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxLookasideList *__fastcall FxLookasideList::`scalar deleting destructor'(
        FxLookasideList *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxLookasideList *v5; // rcx

  v3 = a2;
  this->__vftable = (FxLookasideList_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxLookasideList *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
