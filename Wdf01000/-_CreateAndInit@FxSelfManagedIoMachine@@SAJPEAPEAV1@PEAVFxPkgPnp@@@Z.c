/*
 * XREFs of ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x1C0081D48
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C0075310 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ??0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C00818AC (--0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::_CreateAndInit(
        FxSelfManagedIoMachine **SelfManagedIoMachine,
        FxPkgPnp *PkgPnp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v5; // rax
  FX_POOL **v6; // rax
  FxSelfManagedIoMachine *v7; // rax
  FxSelfManagedIoMachine *v8; // rdi
  FxWaitLockInternal *p_m_StateMachineLock; // rbx
  __int64 result; // rax
  const void *_a1; // rax
  __m128i v12; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  *SelfManagedIoMachine = 0LL;
  m_Globals = PkgPnp->m_Globals;
  v12.m128i_i64[0] = 0LL;
  v12.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v5 = retaddr;
  else
    v5 = 0LL;
  v6 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v12, 0x118uLL, m_Globals->Tag, v5);
  if ( v6 && (FxSelfManagedIoMachine::FxSelfManagedIoMachine((FxSelfManagedIoMachine *)v6, PkgPnp), (v8 = v7) != 0LL) )
  {
    p_m_StateMachineLock = &v7->m_StateMachineLock;
    KeInitializeEvent(&v7->m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
    p_m_StateMachineLock->m_Event.m_DbgFlagIsInitialized = 1;
    result = 0LL;
    *SelfManagedIoMachine = v8;
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(PkgPnp->m_DeviceBase);
    WPP_IFR_SF_q(PkgPnp->m_Globals, 2u, 0xCu, 0xAu, WPP_SelfManagedIoStateMachine_cpp_Traceguids, _a1);
    return 3221225626LL;
  }
  return result;
}
