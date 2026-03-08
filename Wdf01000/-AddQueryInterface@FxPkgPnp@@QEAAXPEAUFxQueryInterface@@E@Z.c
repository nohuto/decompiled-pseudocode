/*
 * XREFs of ?AddQueryInterface@FxPkgPnp@@QEAAXPEAUFxQueryInterface@@E@Z @ 0x1C0071260
 * Callers:
 *     imp_WdfDeviceAddQueryInterface @ 0x1C002B6A0 (imp_WdfDeviceAddQueryInterface.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 */

void __fastcall FxPkgPnp::AddQueryInterface(FxPkgPnp *this, _FX_DRIVER_GLOBALS *QI, unsigned __int8 a3)
{
  FxWaitLockInternal *p_m_QueryInterfaceLock; // rdi
  _SINGLE_LIST_ENTRY *p_m_QueryInterfaceHead; // rbx
  _SINGLE_LIST_ENTRY *i; // rax

  p_m_QueryInterfaceLock = &this->m_QueryInterfaceLock;
  FxWaitLockInternal::AcquireLock(&this->m_QueryInterfaceLock, QI, 0LL);
  p_m_QueryInterfaceHead = &this->m_QueryInterfaceHead;
  for ( i = p_m_QueryInterfaceHead->Next; i; i = i->Next )
    p_m_QueryInterfaceHead = i;
  p_m_QueryInterfaceHead->Next = (_SINGLE_LIST_ENTRY *)&QI->DestroyEvent.m_Event.Header.WaitListHead.Blink;
  p_m_QueryInterfaceLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_QueryInterfaceLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
