/*
 * XREFs of ?FlushAndRundown@FxInterrupt@@AEAAXXZ @ 0x1C007EF98
 * Callers:
 *     ?Dispose@FxInterrupt@@UEAAEXZ @ 0x1C007EF80 (-Dispose@FxInterrupt@@UEAAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxInterrupt::FlushAndRundown(FxInterrupt *this)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  FxDeviceBase *m_DeviceBase; // rcx

  KeFlushQueuedDpcs();
  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
    this->m_SystemWorkItem = 0LL;
  }
  if ( this->m_DisposeWaitLock )
  {
    this->m_WaitLock->DeleteObject(this->m_WaitLock);
    this->m_WaitLock = 0LL;
    this->m_DisposeWaitLock = 0;
  }
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase )
  {
    this->m_DeviceBase = 0LL;
    m_DeviceBase->Release(
      m_DeviceBase,
      this,
      1578,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp");
  }
  this->Release(
    this,
    FxInterrupt::_InterruptThunk,
    1584,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp");
}
