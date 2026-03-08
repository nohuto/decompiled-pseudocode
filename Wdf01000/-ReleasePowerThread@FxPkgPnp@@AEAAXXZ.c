/*
 * XREFs of ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C0075650
 * Callers:
 *     ?PnpEventFailedInit@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A640 (-PnpEventFailedInit@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C0071BD8 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0029A78 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?ExitThread@FxSystemThread@@QEAAEXZ @ 0x1C008939C (-ExitThread@FxSystemThread@@QEAAEXZ.c)
 */

void __fastcall FxPkgPnp::ReleasePowerThread(FxPkgPnp *this, unsigned __int8 a2)
{
  bool v2; // zf
  unsigned __int8 m_HasPowerThread; // al
  FxSystemThread *m_PowerThread; // rcx
  FxCREvent event; // [rsp+30h] [rbp-28h] BYREF

  v2 = this->m_PowerThread == 0LL;
  m_HasPowerThread = this->m_HasPowerThread;
  this->m_HasPowerThread = 0;
  if ( v2 )
  {
    if ( m_HasPowerThread )
      this->m_PowerThreadInterface.Interface.InterfaceDereference(this->m_PowerThreadInterface.Interface.Context);
  }
  else
  {
    FxCREvent::FxCREvent(&event, a2);
    this->m_PowerThreadEvent = &event;
    if ( _InterlockedExchangeAdd(&this->m_PowerThreadInterfaceReferenceCount, 0xFFFFFFFF) > 1 )
    {
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&event, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
    }
    m_PowerThread = this->m_PowerThread;
    this->m_PowerThreadEvent = 0LL;
    FxSystemThread::ExitThread(m_PowerThread);
    this->m_PowerThread->DeleteObject(this->m_PowerThread);
    this->m_PowerThread = 0LL;
  }
}
