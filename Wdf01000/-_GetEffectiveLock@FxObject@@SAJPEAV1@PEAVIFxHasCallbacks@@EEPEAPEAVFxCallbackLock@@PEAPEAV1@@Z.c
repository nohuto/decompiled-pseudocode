/*
 * XREFs of ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C00465C0
 * Callers:
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C0023328 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0040A48 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0040FCC (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C007F298 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?IsPassiveCallbacks@FxObject@@QEAAEE@Z @ 0x1C0046380 (-IsPassiveCallbacks@FxObject@@QEAAEE@Z.c)
 */

__int64 __fastcall FxObject::_GetEffectiveLock(
        FxObject *Object,
        IFxHasCallbacks *Callbacks,
        unsigned __int8 AutomaticLocking,
        unsigned __int8 PassiveCallbacks,
        FxCallbackLock **CallbackLock,
        FxObject **CallbackLockObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxCallbackLock **v8; // r14
  FxObject **v10; // r15
  unsigned __int8 v13; // dl
  unsigned __int8 IsPassiveCallbacks; // al
  _WDF_EXECUTION_LEVEL parentLevel; // [rsp+50h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE parentScope; // [rsp+60h] [rbp+18h] BYREF

  m_Globals = Object->m_Globals;
  v8 = CallbackLock;
  v10 = CallbackLockObject;
  parentLevel = WdfExecutionLevelInvalid;
  parentScope = WdfSynchronizationScopeInvalid;
  *CallbackLock = 0LL;
  *v10 = 0LL;
  if ( !AutomaticLocking )
    return 0LL;
  if ( !Callbacks )
    return 3221225488LL;
  Callbacks->GetConstraints(Callbacks, &parentLevel, &parentScope);
  if ( parentScope == WdfSynchronizationScopeInheritFromParent || parentScope == WdfSynchronizationScopeNone )
    return 0LL;
  IsPassiveCallbacks = FxObject::IsPassiveCallbacks(Object, v13);
  if ( PassiveCallbacks )
  {
    if ( IsPassiveCallbacks )
    {
LABEL_8:
      *v8 = Callbacks->GetCallbackLockPtr(Callbacks, v10);
      return 0LL;
    }
  }
  else if ( !IsPassiveCallbacks )
  {
    goto LABEL_8;
  }
  FxVerifierDbgBreakPoint(m_Globals);
  return 3223323148LL;
}
