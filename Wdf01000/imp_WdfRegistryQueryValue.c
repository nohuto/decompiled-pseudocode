__int64 __fastcall imp_WdfRegistryQueryValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        unsigned int ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  void *v12; // rsi
  int v13; // eax
  unsigned int v14; // edi
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]
  FxRegKey *pKey; // [rsp+60h] [rbp+8h] BYREF

  pKey = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Key, 0x1006u, (void **)&pKey);
  m_Globals = pKey->m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      v12 = Value;
      v13 = FxRegKey::_QueryValue(m_Globals, pKey->m_Key, ValueName, ValueLength, Value, ValueLengthQueried, ValueType);
      v14 = v13;
      if ( v13 < 0 && (v13 != -2147483643 || v12 || ValueLength) )
        WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xEu, WPP_FxRegistryAPI_cpp_Traceguids, Key, v13);
      return v14;
    }
  }
  return result;
}
