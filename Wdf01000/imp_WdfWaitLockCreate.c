int __fastcall imp_WdfWaitLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *LockAttributes,
        WDFWAITLOCK__ **Lock)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  FxObject *parent; // [rsp+40h] [rbp+8h] BYREF

  parent = 0LL;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], LockAttributes, 0) >= 0 )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)LockAttributes->ParentObject, 0x1000u, (void **)&parent);
    m_Globals = parent->m_Globals;
  }
  if ( !Lock )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, LockAttributes, 0);
  if ( result >= 0 )
    return FxWaitLock::_Create(m_Globals, LockAttributes, parent, 1u, Lock);
  return result;
}
