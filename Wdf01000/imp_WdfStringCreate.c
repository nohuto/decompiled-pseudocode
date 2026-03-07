__int64 __fastcall imp_WdfStringCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        const _UNICODE_STRING *UnicodeString,
        _WDF_OBJECT_ATTRIBUTES *StringAttributes,
        WDFSTRING__ **String)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  void *ParentObject; // rdx
  __int64 result; // rax
  int v10; // ebx
  FxString *v11; // rax
  __int64 v12; // rax
  FxObject *v13; // rsi
  FxPoolTypeOrPoolFlags v14; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], StringAttributes, 0) >= 0 )
  {
    ParentObject = StringAttributes->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
  }
  if ( !String )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *String = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, StringAttributes, 0);
    v10 = result;
    if ( (int)result >= 0 )
    {
      if ( !UnicodeString
        || (result = FxValidateUnicodeString(m_Globals, UnicodeString), v10 = result, (int)result >= 0) )
      {
        *(_QWORD *)&v14.UsePoolType = 0LL;
        v14.u.PoolFlags = 64LL;
        v11 = (FxString *)FxObjectHandleAllocCommon(
                            m_Globals,
                            &v14,
                            0x78uLL,
                            0,
                            StringAttributes,
                            0,
                            FxObjectTypeExternal);
        if ( v11 && (FxString::FxString(v11, m_Globals), (v13 = (FxObject *)v12) != 0LL) )
        {
          if ( UnicodeString )
            v10 = FxDuplicateUnicodeString(
                    *(_FX_DRIVER_GLOBALS **)(v12 + 16),
                    UnicodeString,
                    (_UNICODE_STRING *)(v12 + 104));
          if ( v10 < 0 || (v10 = FxObject::Commit(v13, StringAttributes, (void **)String, 0LL, 1u), v10 < 0) )
          {
            FxObject::ClearEvtCallbacks(v13);
            v13->DeleteObject(v13);
          }
        }
        else
        {
          v10 = -1073741670;
          WPP_IFR_SF_D(m_Globals, 2u, 2u, 0xAu, WPP_FxStringAPI_cpp_Traceguids, 0xC000009A);
        }
        return (unsigned int)v10;
      }
    }
  }
  return result;
}
