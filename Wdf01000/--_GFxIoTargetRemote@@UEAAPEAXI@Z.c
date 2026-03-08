/*
 * XREFs of ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x1C00526D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0002D30 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxIoTargetRemote *__fastcall FxIoTargetRemote::`scalar deleting destructor'(FxIoTargetRemote *this, unsigned int a2)
{
  char v2; // bl
  FxIoTargetRemote *v4; // rcx

  v2 = a2;
  this->__vftable = (FxIoTargetRemote_vtbl *)FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxIoTargetRemote *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
