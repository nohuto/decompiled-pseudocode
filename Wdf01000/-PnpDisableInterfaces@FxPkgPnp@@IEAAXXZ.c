void __fastcall FxPkgPnp::PnpDisableInterfaces(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // rdi
  _SINGLE_LIST_ENTRY *i; // rbx
  bool v5; // zf

  p_m_DeviceInterfaceLock = &this->m_DeviceInterfaceLock;
  FxWaitLockInternal::AcquireLock(&this->m_DeviceInterfaceLock, a2, 0LL);
  this->m_DeviceInterfacesCanBeEnabled = 0;
  for ( i = this->m_DeviceInterfaceHead.Next; i; i = i->Next )
  {
    v5 = i[-1].Next == 0LL;
    LOBYTE(i[1].Next) = 0;
    if ( !v5 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)&i[-2], 0);
  }
  p_m_DeviceInterfaceLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_DeviceInterfaceLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
