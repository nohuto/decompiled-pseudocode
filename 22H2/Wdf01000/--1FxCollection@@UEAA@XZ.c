/*
 * XREFs of ??1FxCollection@@UEAA@XZ @ 0x1C00618A0
 * Callers:
 *     ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1C005C1D0 (--_EFxIoResList@@UEAAPEAXI@Z.c)
 *     ??_GFxCmResList@@MEAAPEAXI@Z @ 0x1C007F110 (--_GFxCmResList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0014230 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0061930 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

void __fastcall FxCollection::~FxCollection(FxCollection *this)
{
  unsigned int v2; // edx
  unsigned int v3; // r8d

  this->__vftable = (FxCollection_vtbl *)FxCollection::`vftable';
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxNonPagedObject::~FxNonPagedObject(this, v2, v3);
}
