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
