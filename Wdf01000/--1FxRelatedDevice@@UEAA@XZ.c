/*
 * XREFs of ??1FxRelatedDevice@@UEAA@XZ @ 0x1C00899EC
 * Callers:
 *     ??_EFxRelatedDevice@@UEAAPEAXI@Z @ 0x1C0089A30 (--_EFxRelatedDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxRelatedDevice::~FxRelatedDevice(FxRelatedDevice *this)
{
  unsigned int v2; // edx
  unsigned int v3; // r8d

  this->__vftable = (FxRelatedDevice_vtbl *)FxRelatedDevice::`vftable';
  ObfDereferenceObject(this->m_DeviceObject);
  FxObject::~FxObject(this, v2, v3);
}
