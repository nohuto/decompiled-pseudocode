__int64 __fastcall imp_WdfRegistryRemoveValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  NTSTATUS v6; // ebx
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  FxRegKey *pKey; // [rsp+30h] [rbp+8h] BYREF

  pKey = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Key, 0x1006u, (void **)&pKey);
  m_Globals = pKey->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      if ( !ValueName )
        FxVerifierNullBugCheck(m_Globals, retaddr);
      v6 = ZwDeleteValueKey(pKey->m_Key, ValueName);
      if ( v6 >= 0 )
        FxRegKey::_VerifyStateSeparationRegistryPolicy(pKey->m_Globals, pKey->m_Key);
      return (unsigned int)v6;
    }
  }
  return result;
}
