/*
 * XREFs of ??_GFxCompanionTarget@@UEAAPEAXI@Z @ 0x1C002DD30
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0002D30 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxCompanionTarget *__fastcall FxCompanionTarget::`scalar deleting destructor'(FxCompanionTarget *this, unsigned int a2)
{
  char v2; // bl
  FxCompanionTarget *v4; // rcx

  v2 = a2;
  this->FxNonPagedObject::FxObject::__vftable = (FxCompanionTarget_vtbl *)FxCompanionTarget::`vftable'{for `FxNonPagedObject'};
  this->IDeviceCompanionCallbacks::__vftable = (IDeviceCompanionCallbacks_vtbl *)FxCompanionTarget::`vftable'{for `IDeviceCompanionCallbacks'};
  FxNonPagedObject::~FxNonPagedObject(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxCompanionTarget *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
