/*
 * XREFs of ??_GFxCmResList@@MEAAPEAXI@Z @ 0x1C00710D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1C004F03C (--1FxCollection@@UEAA@XZ.c)
 */

FxCmResList *__fastcall FxCmResList::`scalar deleting destructor'(FxCmResList *this, char a2)
{
  FxCmResList *v4; // rcx

  this->__vftable = (FxCmResList_vtbl *)FxCmResList::`vftable';
  FxCollection::~FxCollection(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxCmResList *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
