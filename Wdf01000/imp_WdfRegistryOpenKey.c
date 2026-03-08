/*
 * XREFs of imp_WdfRegistryOpenKey @ 0x1C004AF50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0001890 (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C004E4D4 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryOpenKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v6; // rsi
  _FX_DRIVER_GLOBALS *v7; // rbx
  _FX_DRIVER_GLOBALS *v10; // rcx
  void *v11; // rax
  void *m_Key; // r13
  unsigned __int64 ParentObject; // rdx
  WDFKEY__ **v14; // r14
  __int64 result; // rax
  FxRegKey *v16; // rax
  FxObject *v17; // rax
  FxObject *v18; // rdi
  int v19; // esi
  NTSTATUS _a1; // eax
  FxPoolTypeOrPoolFlags v21; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR retaddr; // [rsp+B8h] [rbp+38h]
  FxRegKey *pParent; // [rsp+C0h] [rbp+40h] BYREF
  void *PPObject; // [rsp+C8h] [rbp+48h] BYREF
  WDFKEY__ *keyHandle; // [rsp+D0h] [rbp+50h] BYREF

  v6 = KeyAttributes;
  v7 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  keyHandle = 0LL;
  v10 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( ParentKey )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(v10, (unsigned __int64)ParentKey, 0x1006u, (void **)&pParent);
    v11 = pParent;
    m_Key = pParent->m_Key;
  }
  else
  {
    m_Key = 0LL;
    if ( (int)FxValidateObjectAttributesForParentHandle(v10, KeyAttributes, 0) < 0 )
      goto LABEL_6;
    ParentObject = (unsigned __int64)v6->ParentObject;
    PPObject = 0LL;
    FxObjectHandleGetPtr(v7, ParentObject, 0x1000u, &PPObject);
    v11 = PPObject;
  }
  v7 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v11 + 2);
LABEL_6:
  if ( !KeyName )
    FxVerifierNullBugCheck(v7, retaddr);
  v14 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(v7, retaddr);
  *Key = 0LL;
  result = FxVerifierCheckIrqlLevel(v7, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v7, v6, 0);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v7, KeyName);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)&v21.UsePoolType = 0LL;
        v21.u.PoolFlags = 64LL;
        v16 = (FxRegKey *)FxObjectHandleAllocCommon(v7, &v21, 0x78uLL, 0, v6, 0, FxObjectTypeExternal);
        if ( v16 )
        {
          FxRegKey::FxRegKey(v16, v7);
          v18 = v17;
          if ( v17 )
          {
            v19 = FxObject::Commit(v17, v6, (void **)&keyHandle, 0LL, 1u);
            if ( v19 >= 0 )
            {
              *(&ObjectAttributes.Length + 1) = 0;
              memset(&ObjectAttributes.Attributes + 1, 0, 20);
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = m_Key;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.ObjectName = KeyName;
              _a1 = ZwOpenKey((PHANDLE)&v18[1].m_Type, DesiredAccess, &ObjectAttributes);
              v19 = _a1;
              if ( _a1 >= 0 )
              {
                if ( (DesiredAccess & 0x50030006) != 0 )
                  FxRegKey::_VerifyStateSeparationRegistryPolicy(v18->m_Globals, *(void **)&v18[1].m_Type);
                *v14 = keyHandle;
                return (unsigned int)v19;
              }
              WPP_IFR_SF_D(v7, 2u, 2u, 0xBu, WPP_FxRegistryAPI_cpp_Traceguids, _a1);
            }
            FxObject::ClearEvtCallbacks(v18);
            ((void (*)(void))v18->DeleteObject)();
            return (unsigned int)v19;
          }
        }
        WPP_IFR_SF_D(v7, 2u, 2u, 0xAu, WPP_FxRegistryAPI_cpp_Traceguids, 0xC000009A);
        return 3221225626LL;
      }
    }
  }
  return result;
}
