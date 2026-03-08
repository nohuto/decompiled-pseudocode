/*
 * XREFs of ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C00058A4
 * Callers:
 *     imp_WdfInterruptAcquireLock @ 0x1C0005860 (imp_WdfInterruptAcquireLock.c)
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C0009100 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C00100A0 (-_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?InterruptDisableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x1C007F5D4 (-InterruptDisableInvokeCallback@FxInterrupt@@AEAAJXZ.c)
 *     ?InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x1C007F6A4 (-InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ.c)
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C007F72C (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 */

void __fastcall FxInterrupt::AcquireLock(FxInterrupt *this, _FX_DRIVER_GLOBALS *a2)
{
  struct _KINTERRUPT *m_Interrupt; // rcx
  KIRQL CurrentIrql; // al
  const void *_a1; // rax

  if ( this->m_PassiveHandling )
  {
    FxWaitLockInternal::AcquireLock(&this->m_WaitLock->FxWaitLockInternal, a2, 0LL);
  }
  else
  {
    m_Interrupt = this->m_Interrupt;
    if ( m_Interrupt || (m_Interrupt = this->m_InterruptCaptured) != 0LL )
    {
      CurrentIrql = KeAcquireInterruptSpinLock(m_Interrupt);
    }
    else
    {
      _a1 = FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0x1Cu, (const _GUID *)&WPP_InterruptObject_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(this->m_Globals);
      CurrentIrql = KeGetCurrentIrql();
    }
    this->m_OldIrql = CurrentIrql;
  }
}
