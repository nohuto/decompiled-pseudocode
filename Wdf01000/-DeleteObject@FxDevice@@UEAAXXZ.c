void __fastcall FxDevice::DeleteObject(FxDevice *this)
{
  FxPkgPnp *m_PkgPnp; // rdi
  unsigned __int8 v3; // r8
  bool v4; // si
  unsigned __int8 v5; // r8
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int8 v7; // dl
  FxWmiIrpHandler *m_PkgWmi; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp && FxDevice::IsPdo(this) )
  {
    irql = 0;
    v4 = 0;
    FxNonPagedObject::Lock(m_PkgPnp, &irql, v3);
    if ( BYTE1(m_PkgPnp[1].m_DisposeSingleEntry.Next) && !BYTE2(m_PkgPnp[1].m_DisposeSingleEntry.Next) )
      v4 = this->m_CurrentPnpState == WdfDevStatePnpInit;
    FxNonPagedObject::Unlock(m_PkgPnp, irql, v5);
    if ( v4 )
      FxDevice::DeleteDeviceFromFailedCreateNoDelete(this, 0xC0000001, 1u);
LABEL_14:
    FxObject::DeleteObject(this);
    return;
  }
  if ( !this->m_Legacy || !this->m_PkgGeneral || !this->m_DeviceObject.m_DeviceObject )
    goto LABEL_14;
  FxVerifierCheckIrqlLevel(this->m_Globals, 0);
  m_DeviceObject = this->m_DeviceObject.m_DeviceObject;
  this->m_DeviceObjectDeleted = 1;
  ObfReferenceObject(m_DeviceObject);
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
    FxWmiIrpHandler::Deregister(m_PkgWmi, v7);
  IoDeleteDevice(this->m_DeviceObject.m_DeviceObject);
  if ( _InterlockedExchangeAdd(&this->m_PkgGeneral->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
    goto LABEL_14;
}
