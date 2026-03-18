/*
 * XREFs of imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1C004D060
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001729C (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfDriverOpenPersistentStateRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  WDFKEY__ **v5; // r14
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  _FX_DRIVER_GLOBALS *v10; // rcx
  __int64 result; // rax
  FxRegKey *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // esi
  int v16; // eax
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-20h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDriver *pDriver; // [rsp+70h] [rbp+8h] BYREF

  v5 = Key;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  pDriver = 0LL;
  keyHandle = 0LL;
  v10 = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !Key )
    FxVerifierNullBugCheck(v10, retaddr);
  *Key = 0LL;
  result = FxVerifierCheckIrqlLevel(v10, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(DriverName, KeyAttributes, 0);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(DriverName, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
      v12 = (FxRegKey *)FxObjectHandleAlloc(
                          DriverName,
                          ExDefaultNonPagedPoolType,
                          0x78uLL,
                          0,
                          KeyAttributes,
                          0,
                          FxObjectTypeExternal);
      if ( v12 )
      {
        FxRegKey::FxRegKey(v12, DriverName);
        v14 = v13;
      }
      else
      {
        v14 = 0LL;
      }
      if ( v14 )
      {
        v15 = FxObject::Commit((FxObject *)v14, (_FX_DRIVER_GLOBALS *)KeyAttributes, (void **)&keyHandle, 0LL, 1u);
        if ( v15 < 0 )
          goto LABEL_15;
        v16 = IoOpenDriverRegistryKey(pDriver->m_DriverObject.m_DriverObject, 1LL, DesiredAccess);
        v15 = v16;
        if ( v16 >= 0 )
        {
          *(_QWORD *)(v14 + 112) = 0LL;
          *v5 = keyHandle;
        }
        else
        {
          WPP_IFR_SF_d(DriverName, 2u, 6u, 0xAu, WPP_FxDriverApiKm_cpp_Traceguids, v16);
        }
        if ( v15 < 0 )
        {
LABEL_15:
          FxObject::ClearEvtCallbacks((FxObject *)v14);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
        }
        return (unsigned int)v15;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
