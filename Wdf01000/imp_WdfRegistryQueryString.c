__int64 __fastcall imp_WdfRegistryQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  int v9; // eax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  int _a2; // edi
  unsigned __int16 v13; // r9
  unsigned int v14; // edi
  ULONG Tag; // ecx
  void *v16; // rax
  FX_POOL **v17; // rax
  wchar_t *v18; // rsi
  unsigned __int8 v19; // dl
  const _GUID *ValueLengthQueried; // [rsp+20h] [rbp-50h]
  FxRegKey *pKey; // [rsp+50h] [rbp-20h] BYREF
  FxString *pString; // [rsp+58h] [rbp-18h] BYREF
  _UNICODE_STRING tmp; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+98h] [rbp+28h]
  unsigned int dataLength; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int type; // [rsp+B0h] [rbp+40h] BYREF

  pString = 0LL;
  pKey = 0LL;
  dataLength = 0;
  type = 0;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Key, 0x1006u, (void **)&pKey);
  m_Globals = pKey->m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !String )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)String, 0x1007u, (void **)&pString);
      v9 = FxRegKey::QueryValue(pKey, ValueName, 0, 0LL, &dataLength, &type);
      _a2 = v9;
      if ( v9 < 0 )
      {
        if ( v9 != -2147483643 )
          goto LABEL_11;
      }
      else if ( type - 1 > 1 )
      {
        _a2 = -1073741788;
LABEL_11:
        v13 = 26;
LABEL_12:
        WPP_IFR_SF_qd(m_Globals, 2u, 2u, v13, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
        return (unsigned int)_a2;
      }
      v14 = dataLength;
      if ( !dataLength )
      {
        WPP_IFR_SF_qZd(m_Globals, v10, v11, 0x1Bu, ValueLengthQueried, Key, ValueName);
        return 3221225609LL;
      }
      Tag = m_Globals->Tag;
      v16 = (void *)retaddr;
      *(_QWORD *)&tmp.Length = 0LL;
      tmp.Buffer = (wchar_t *)256;
      if ( !m_Globals->FxPoolTrackingOn )
        v16 = 0LL;
      v17 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)&tmp, dataLength, Tag, v16);
      v18 = (wchar_t *)v17;
      if ( !v17 )
      {
        _a2 = -1073741670;
        v13 = 28;
        goto LABEL_12;
      }
      _a2 = FxRegKey::QueryValue(pKey, ValueName, v14, v17, &dataLength, &type);
      if ( _a2 >= 0 )
      {
        if ( type - 1 <= 1 )
        {
          if ( dataLength > 0xFFFF )
          {
            _a2 = -1073741306;
            WPP_IFR_SF_qddd(
              m_Globals,
              v19,
              2u,
              0x1Du,
              WPP_FxRegistryAPI_cpp_Traceguids,
              Key,
              dataLength,
              0xFFFF,
              -1073741306);
          }
          else
          {
            *(_DWORD *)(&tmp.MaximumLength + 1) = 0;
            if ( dataLength )
            {
              tmp.Buffer = v18;
              tmp.Length = dataLength;
              tmp.MaximumLength = dataLength;
              if ( !v18[((unsigned __int64)(unsigned __int16)dataLength >> 1) - 1] )
                tmp.Length = dataLength - 2;
            }
            else
            {
              *(_DWORD *)&tmp.Length = 0;
              tmp.Buffer = (wchar_t *)&unk_1C00920B8;
            }
            _a2 = FxDuplicateUnicodeString(pString->m_Globals, &tmp, &pString->m_UnicodeString);
          }
          goto LABEL_23;
        }
        _a2 = -1073741788;
      }
      WPP_IFR_SF_qdd(m_Globals, 2u, 2u, 0x1Eu, WPP_FxRegistryAPI_cpp_Traceguids, Key, dataLength, _a2);
LABEL_23:
      FxPoolFree((FX_POOL_TRACKER *)v18);
      return (unsigned int)_a2;
    }
  }
  return result;
}
