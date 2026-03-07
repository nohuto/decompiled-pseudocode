__int64 __fastcall imp_WdfRegistryQueryUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        unsigned __int16 *ValueByteLength,
        _UNICODE_STRING *Value)
{
  FX_POOL_TRACKER *v7; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  _UNICODE_STRING *v11; // rdi
  unsigned __int64 MaximumLength; // rsi
  unsigned int _a2; // edi
  unsigned __int16 v14; // r9
  ULONG Tag; // ecx
  void *v16; // rax
  int v17; // eax
  unsigned int v18; // esi
  size_t v19; // rbx
  wchar_t *Buffer; // rax
  FxRegKey *pKey; // [rsp+40h] [rbp-20h] BYREF
  __m128i v22; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+98h] [rbp+38h]
  unsigned int dataLength; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int type; // [rsp+B0h] [rbp+50h] BYREF

  v7 = 0LL;
  pKey = 0LL;
  type = 0;
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
      v11 = Value;
      if ( Value )
      {
        result = FxValidateUnicodeString(m_Globals, Value);
        if ( (int)result < 0 )
          return result;
        MaximumLength = v11->MaximumLength;
        dataLength = MaximumLength;
        if ( !(_DWORD)MaximumLength )
        {
          _a2 = -1073741811;
          v14 = 24;
LABEL_9:
          WPP_IFR_SF_qd(m_Globals, 2u, 2u, v14, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
          return _a2;
        }
        Tag = m_Globals->Tag;
        v16 = (void *)retaddr;
        v22.m128i_i64[0] = 0LL;
        v22.m128i_i64[1] = 256LL;
        if ( !m_Globals->FxPoolTrackingOn )
          v16 = 0LL;
        v7 = (FX_POOL_TRACKER *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v22, MaximumLength, Tag, v16);
        if ( !v7 )
        {
          _a2 = -1073741670;
          v14 = 25;
          goto LABEL_9;
        }
      }
      else
      {
        LODWORD(MaximumLength) = 0;
        dataLength = 0;
      }
      v17 = FxRegKey::QueryValue(pKey, ValueName, MaximumLength, v7, &dataLength, &type);
      v18 = v17;
      if ( v17 < 0 )
      {
        if ( v17 != -2147483643 )
          goto LABEL_25;
      }
      else if ( type - 1 > 1 )
      {
        v18 = -1073741788;
LABEL_25:
        if ( v7 )
          FxPoolFree(v7);
        return v18;
      }
      v19 = dataLength;
      if ( ValueByteLength )
        *ValueByteLength = dataLength;
      if ( v17 >= 0 )
      {
        if ( v11 )
        {
          memmove(v11->Buffer, v7, v19);
          Buffer = v11->Buffer;
          v11->Length = v19;
          if ( !Buffer[((unsigned __int64)(unsigned __int16)v19 >> 1) - 1] )
            v11->Length = v19 - 2;
        }
      }
      goto LABEL_25;
    }
  }
  return result;
}
