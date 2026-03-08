/*
 * XREFs of imp_WdfStringCreate @ 0x1C004C8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0001ADC (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004F258 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C004F4B8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

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
