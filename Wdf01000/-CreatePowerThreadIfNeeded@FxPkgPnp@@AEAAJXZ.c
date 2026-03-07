__int64 __fastcall FxPkgPnp::CreatePowerThreadIfNeeded(FxPkgPnp *this)
{
  int v2; // esi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PDEVICE_OBJECT v4; // rbx
  FxDeviceBase *m_DeviceBase; // rcx

  v2 = 0;
  AttachedDeviceReference = IoGetAttachedDeviceReference(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  v4 = AttachedDeviceReference;
  if ( AttachedDeviceReference )
  {
    if ( (AttachedDeviceReference->Flags & 0x2000) == 0 && !this->m_HasPowerThread )
    {
      v2 = this->QueryForPowerThread(this);
      if ( v2 < 0 )
      {
        m_DeviceBase = this->m_DeviceBase;
        this->m_InternalFailure = 1;
        IoInvalidateDeviceState(m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
        this->m_PendingPnPIrp->IoStatus.Status = v2;
      }
    }
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v2;
}
