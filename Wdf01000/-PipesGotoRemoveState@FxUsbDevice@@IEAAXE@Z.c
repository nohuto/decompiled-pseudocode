/*
 * XREFs of ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C005D8C4
 * Callers:
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C005D2F4 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C005E804 (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1C005EA40 (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 */

void __fastcall FxUsbDevice::PipesGotoRemoveState(FxUsbDevice *this, _FX_DRIVER_GLOBALS *ForceRemovePipes)
{
  FxWaitLockInternal *p_m_InterfaceIterationLock; // r13
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  __int64 v6; // rbx
  FxUsbInterface ***i; // r15
  FxUsbInterface *v8; // r14
  FxUsbPipe **m_ConfiguredPipes; // rdx
  __int64 j; // rdi
  FxUsbPipe *v11; // rcx
  __int64 k; // rdi
  FxUsbInterface *v13; // rbx
  FxUsbPipe **v14; // rdx
  __int64 m; // r14
  FxUsbPipe *v16; // rcx
  int v17; // [rsp+20h] [rbp-40h]
  _LIST_ENTRY pendHead; // [rsp+40h] [rbp-20h] BYREF
  _LIST_ENTRY interfaceHead; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+A8h] [rbp+48h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+B0h] [rbp+50h] BYREF

  sentHead.Next = 0LL;
  pendHead.Blink = &pendHead;
  p_m_InterfaceIterationLock = &this->m_InterfaceIterationLock;
  irql = 0;
  pendHead.Flink = &pendHead;
  interfaceHead.Blink = &interfaceHead;
  interfaceHead.Flink = &interfaceHead;
  FxWaitLockInternal::AcquireLock(&this->m_InterfaceIterationLock, ForceRemovePipes, 0LL);
  FxNonPagedObject::Lock(this, &irql, v4);
  v6 = 0LL;
  for ( i = &this->m_Interfaces; (unsigned int)v6 < this->m_NumInterfaces; v6 = (unsigned int)(v6 + 1) )
  {
    v8 = (*i)[v6];
    m_ConfiguredPipes = v8->m_ConfiguredPipes;
    if ( m_ConfiguredPipes )
    {
      for ( j = 0LL; (unsigned int)j < v8->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
      {
        wait = 0;
        v11 = m_ConfiguredPipes[j];
        if ( v11 )
        {
          LOBYTE(v17) = 1;
          v11->GotoRemoveState(v11, WdfIoTargetDeleted, &pendHead, &sentHead, v17, &wait);
          m_ConfiguredPipes = v8->m_ConfiguredPipes;
        }
      }
    }
  }
  FxNonPagedObject::Unlock(this, irql, v5);
  FxUsbDevice::_CleanupPipesRequests(&pendHead, &sentHead);
  for ( k = 0LL; (unsigned int)k < this->m_NumInterfaces; k = (unsigned int)(k + 1) )
  {
    v13 = (*i)[k];
    v14 = v13->m_ConfiguredPipes;
    if ( v14 )
    {
      for ( m = 0LL; (unsigned int)m < v13->m_NumberOfConfiguredPipes; m = (unsigned int)(m + 1) )
      {
        v16 = v14[m];
        if ( v16 )
        {
          v16->WaitForSentIoToComplete(v16);
          v14 = v13->m_ConfiguredPipes;
        }
      }
    }
    FxUsbInterface::CleanUpAndDelete(v13, (unsigned __int8)v14);
  }
  p_m_InterfaceIterationLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_InterfaceIterationLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
