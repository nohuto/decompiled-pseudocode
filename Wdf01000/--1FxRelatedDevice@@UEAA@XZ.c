void __fastcall FxRelatedDevice::~FxRelatedDevice(FxRelatedDevice *this)
{
  unsigned int v2; // edx
  unsigned int v3; // r8d

  this->__vftable = (FxRelatedDevice_vtbl *)FxRelatedDevice::`vftable';
  ObfDereferenceObject(this->m_DeviceObject);
  FxObject::~FxObject(this, v2, v3);
}
