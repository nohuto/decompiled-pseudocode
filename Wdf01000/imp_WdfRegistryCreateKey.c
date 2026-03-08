/*
 * XREFs of imp_WdfRegistryCreateKey @ 0x1C004ACD0
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

__int64 __fastcall imp_WdfRegistryCreateKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        ULONG CreateOptions,
        unsigned int *CreateDisposition,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v8; // rsi
  _FX_DRIVER_GLOBALS *v9; // rbx
  _FX_DRIVER_GLOBALS *v12; // rcx
  void *v13; // rax
  void *m_Key; // r12
  unsigned __int64 ParentObject; // rdx
  WDFKEY__ **v16; // r14
  __int64 result; // rax
  FxRegKey *v18; // rax
  FxObject *v19; // rax
  FxObject *v20; // rdi
  int v21; // esi
  NTSTATUS _a1; // eax
  WDFKEY__ *keyHandle; // [rsp+40h] [rbp-49h] BYREF
  FxPoolTypeOrPoolFlags v24; // [rsp+50h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  ULONG_PTR retaddr; // [rsp+C8h] [rbp+3Fh]
  unsigned int localDisposition; // [rsp+D0h] [rbp+47h] BYREF
  FxRegKey *pParent; // [rsp+D8h] [rbp+4Fh] BYREF
  void *PPObject; // [rsp+E0h] [rbp+57h] BYREF

  v8 = KeyAttributes;
  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  localDisposition = 0;
  v12 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( ParentKey )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr(v12, (unsigned __int64)ParentKey, 0x1006u, (void **)&pParent);
    v13 = pParent;
    m_Key = pParent->m_Key;
  }
  else
  {
    m_Key = 0LL;
    if ( (int)FxValidateObjectAttributesForParentHandle(v12, KeyAttributes, 0) < 0 )
      goto LABEL_6;
    ParentObject = (unsigned __int64)v8->ParentObject;
    PPObject = 0LL;
    FxObjectHandleGetPtr(v9, ParentObject, 0x1000u, &PPObject);
    v13 = PPObject;
  }
  v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v13 + 2);
LABEL_6:
  if ( !KeyName )
    FxVerifierNullBugCheck(v9, retaddr);
  v16 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  keyHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v9, v8, 0);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v9, KeyName);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)&v24.UsePoolType = 0LL;
        v24.u.PoolFlags = 64LL;
        v18 = (FxRegKey *)FxObjectHandleAllocCommon(v9, &v24, 0x78uLL, 0, v8, 0, FxObjectTypeExternal);
        if ( v18 )
        {
          FxRegKey::FxRegKey(v18, v9);
          v20 = v19;
          if ( v19 )
          {
            v21 = FxObject::Commit(v19, v8, (void **)&keyHandle, 0LL, 1u);
            if ( v21 >= 0 )
            {
              *(_QWORD *)&ObjectAttributes.Length = 48LL;
              *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
              ObjectAttributes.RootDirectory = m_Key;
              ObjectAttributes.ObjectName = KeyName;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              _a1 = ZwCreateKey(
                      (PHANDLE)&v20[1].m_Type,
                      DesiredAccess,
                      &ObjectAttributes,
                      0,
                      0LL,
                      CreateOptions,
                      &localDisposition);
              v21 = _a1;
              if ( _a1 >= 0 )
              {
                FxRegKey::_VerifyStateSeparationRegistryPolicy(v20->m_Globals, *(void **)&v20[1].m_Type);
                if ( CreateDisposition )
                  *CreateDisposition = localDisposition;
                *v16 = keyHandle;
                return (unsigned int)v21;
              }
              WPP_IFR_SF_D(v9, 2u, 2u, 0xDu, WPP_FxRegistryAPI_cpp_Traceguids, _a1);
            }
            FxObject::ClearEvtCallbacks(v20);
            ((void (*)(void))v20->DeleteObject)();
            return (unsigned int)v21;
          }
        }
        WPP_IFR_SF_D(v9, 2u, 2u, 0xCu, WPP_FxRegistryAPI_cpp_Traceguids, 0xC000009A);
        return 3221225626LL;
      }
    }
  }
  return result;
}
