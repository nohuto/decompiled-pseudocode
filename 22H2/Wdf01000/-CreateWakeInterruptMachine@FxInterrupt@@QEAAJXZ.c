/*
 * XREFs of ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C00892D0
 * Callers:
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C0089D38 (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C00890E0 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C008AE6C (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008AEA8 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C008B840 (--0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z.c)
 */

__int64 __fastcall FxInterrupt::CreateWakeInterruptMachine(FxInterrupt *this)
{
  _FX_DRIVER_GLOBALS *v2; // rcx
  FX_POOL **v3; // rax
  _FX_DRIVER_GLOBALS *v4; // rdx
  FxWakeInterruptMachine *v5; // rax
  FxWakeInterruptMachine *v6; // rsi
  int v7; // edi
  signed int _a2; // eax
  FxPkgPnp **_a1; // rdx
  signed int v10; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_FX_DRIVER_GLOBALS **)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 16LL);
  v3 = FxPoolAllocator(v2, &v2->FxPoolFrameworks, ExDefaultNonPagedPoolType, 0xF0uLL, v2->Tag, retaddr);
  if ( v3 )
  {
    FxWakeInterruptMachine::FxWakeInterruptMachine((FxWakeInterruptMachine *)v3, this);
    v6 = v5;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    _a2 = FxEventQueue::Initialize(v6, v4);
    _a1 = (FxPkgPnp **)this->m_DeviceBase;
    v7 = _a2;
    if ( _a2 >= 0 )
    {
      v10 = FxThreadedEventQueue::Init(v6, _a1[81], FxWakeInterruptMachine::_ProcessEventInner, v6);
      v7 = v10;
      if ( v10 >= 0 )
      {
        this->m_WakeInterruptMachine = v6;
        KeInitializeEvent(&v6->m_IsrEvent.m_Event, SynchronizationEvent, 0);
        v6->m_IsrEvent.m_DbgFlagIsInitialized = 1;
        ++*(_DWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 1208LL);
        m_Globals = this->m_Globals;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xFu, WPP_InterruptObject_cpp_Traceguids, this->m_DeviceBase);
      }
      else
      {
        WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0xEu, WPP_InterruptObject_cpp_Traceguids, this->m_DeviceBase, v10);
      }
    }
    else
    {
      WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0xDu, WPP_InterruptObject_cpp_Traceguids, _a1, _a2);
    }
    if ( v7 < 0 )
      FxWakeInterruptMachine::`scalar deleting destructor'((FxDevicePwrRequirementMachine *)v6);
  }
  else
  {
    v7 = -1073741670;
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0xCu, WPP_InterruptObject_cpp_Traceguids, this->m_DeviceBase, 0xC000009A);
  }
  return (unsigned int)v7;
}
