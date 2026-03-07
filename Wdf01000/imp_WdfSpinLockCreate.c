__int64 __fastcall imp_WdfSpinLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *SpinLockAttributes,
        WDFSPINLOCK__ **SpinLock)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  bool v7; // cf
  unsigned __int16 v8; // bp
  FxSpinLock *v9; // rax
  FxObject *v10; // rax
  FxObject *v11; // rbx
  int v12; // edi
  FxPoolTypeOrPoolFlags v13; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF
  WDFSPINLOCK__ *lock; // [rsp+80h] [rbp+18h] BYREF

  lock = 0LL;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], SpinLockAttributes, 0) >= 0 )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)SpinLockAttributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  if ( !SpinLock )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, SpinLockAttributes, 0);
  if ( (int)result >= 0 )
  {
    v7 = m_Globals->FxVerifierLock != 0;
    *SpinLock = 0LL;
    v8 = v7 ? 0x100 : 0;
    *(_QWORD *)&v13.UsePoolType = 0LL;
    v13.u.PoolFlags = 64LL;
    v9 = (FxSpinLock *)FxObjectHandleAllocCommon(
                         m_Globals,
                         &v13,
                         0x80uLL,
                         0,
                         SpinLockAttributes,
                         v8,
                         FxObjectTypeExternal);
    if ( v9 && (FxSpinLock::FxSpinLock(v9, m_Globals, v8), (v11 = v10) != 0LL) )
    {
      v12 = FxObject::Commit(v10, SpinLockAttributes, (void **)&lock, 0LL, 1u);
      if ( v12 < 0 )
      {
        FxObject::ClearEvtCallbacks(v11);
        v11->DeleteObject(v11);
      }
      else
      {
        *SpinLock = lock;
      }
      return (unsigned int)v12;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
