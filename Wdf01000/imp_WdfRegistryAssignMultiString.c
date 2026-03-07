__int64 __fastcall imp_WdfRegistryAssignMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        WDFCOLLECTION__ *StringsCollection)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  FxCollectionInternal *v9; // rcx
  unsigned __int64 v10; // r14
  unsigned int v11; // esi
  bool v12; // zf
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL **v15; // rsi
  unsigned int v16; // edi
  FxCollectionInternal *v17; // rdx
  NTSTATUS v18; // eax
  FxCollection *pCollection; // [rsp+40h] [rbp-20h] BYREF
  __m128i v20; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+28h]
  unsigned __int8 valid; // [rsp+90h] [rbp+30h] BYREF
  FxRegKey *pKey; // [rsp+A0h] [rbp+40h] BYREF

  pCollection = 0LL;
  pKey = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Key, 0x1006u, (void **)&pKey);
  m_Globals = pKey->m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !StringsCollection )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)StringsCollection, 0x100Eu, (void **)&pCollection);
      v9 = (FxCollectionInternal *)pCollection;
      valid = 0;
      if ( pCollection )
        v9 = &pCollection->FxCollectionInternal;
      v10 = FxCalculateTotalStringSize(v9, 1u, &valid);
      if ( v10 > 0xFFFFFFFF )
      {
        v11 = -1073741675;
        WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x28u, WPP_FxRegistryAPI_cpp_Traceguids, StringsCollection, -1073741675);
        return v11;
      }
      if ( !valid )
      {
        v11 = -1073741811;
        WPP_IFR_SF_qid(
          m_Globals,
          2u,
          2u,
          0x29u,
          WPP_FxRegistryAPI_cpp_Traceguids,
          Key,
          (__int64)StringsCollection,
          -1073741811);
        return v11;
      }
      v12 = m_Globals->FxPoolTrackingOn == 0;
      Tag = m_Globals->Tag;
      v20.m128i_i64[0] = 0LL;
      v20.m128i_i64[1] = 256LL;
      if ( v12 )
        v14 = 0LL;
      else
        v14 = (void *)retaddr;
      v15 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v20, (unsigned int)v10, Tag, v14);
      if ( v15 )
      {
        if ( pCollection )
          v17 = &pCollection->FxCollectionInternal;
        else
          v17 = 0LL;
        FxCopyMultiSz((wchar_t *)v15, v17);
        v18 = ZwSetValueKey(pKey->m_Key, ValueName, 0, 7u, v15, v10);
        v16 = v18;
        if ( v18 < 0 )
          WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x2Bu, WPP_FxRegistryAPI_cpp_Traceguids, Key, v18);
        else
          FxRegKey::_VerifyStateSeparationRegistryPolicy(pKey->m_Globals, pKey->m_Key);
        FxPoolFree((FX_POOL_TRACKER *)v15);
      }
      else
      {
        v16 = -1073741670;
        WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x2Au, WPP_FxRegistryAPI_cpp_Traceguids, Key, -1073741670);
      }
      return v16;
    }
  }
  return result;
}
