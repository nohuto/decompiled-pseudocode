/*
 * XREFs of ??_GFxPagedObject@@UEAAPEAXI@Z @ 0x1C004CAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1C00018D8 (--1FxPagedObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxPagedObject *__fastcall FxPagedObject::`scalar deleting destructor'(FxPagedObject *this, char a2)
{
  FxPagedObject *v4; // rcx

  FxPagedObject::~FxPagedObject(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxPagedObject *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
