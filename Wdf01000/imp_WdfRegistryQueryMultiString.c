/*
 * XREFs of imp_WdfRegistryQueryMultiString @ 0x1C004B470
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00395E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?QueryValue@FxRegKey@@QEAAJPEBU_UNICODE_STRING@@KPEAXPEAK2@Z @ 0x1C004A114 (-QueryValue@FxRegKey@@QEAAJPEBU_UNICODE_STRING@@KPEAXPEAK2@Z.c)
 *     WPP_IFR_SF_qZd @ 0x1C004A154 (WPP_IFR_SF_qZd.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C004E45C (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C004F080 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C004F1D8 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C004F258 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C004F320 (-Assign@FxString@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        _WDF_OBJECT_ATTRIBUTES *StringsAttributes,
        WDFCOLLECTION__ *Collection)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFCOLLECTION__ *v9; // rdi
  __int64 result; // rax
  unsigned __int8 v11; // dl
  int _a2; // edi
  unsigned int v13; // r8d
  unsigned int v14; // edi
  ULONG Tag; // ecx
  void *v16; // rax
  FX_POOL **v17; // rax
  wchar_t *v18; // r12
  FxString *v19; // rax
  FxString *v20; // rax
  FxObject *v21; // rsi
  FxObject *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int i; // ebx
  const _GUID *ValueLengthQueried; // [rsp+20h] [rbp-60h]
  FxCollection *pCollection; // [rsp+40h] [rbp-40h] BYREF
  FxRegKey *pKey; // [rsp+48h] [rbp-38h] BYREF
  wchar_t *SourceString[2]; // [rsp+50h] [rbp-30h]
  FxDeviceBase *v30; // [rsp+60h] [rbp-20h]
  FxPoolTypeOrPoolFlags v31; // [rsp+70h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+B8h] [rbp+38h]
  void *dummy; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int type; // [rsp+D0h] [rbp+50h] BYREF
  _WDF_OBJECT_ATTRIBUTES *Attributes; // [rsp+D8h] [rbp+58h]

  Attributes = StringsAttributes;
  pCollection = 0LL;
  pKey = 0LL;
  LODWORD(dummy) = 0;
  type = 0;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Key, 0x1006u, (void **)&pKey);
  m_Globals = pKey->m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v9 = Collection;
  if ( !Collection )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, StringsAttributes, 0);
  if ( (int)result >= 0 )
  {
    result = FxVerifierCheckIrqlLevel(m_Globals, 0);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(m_Globals, ValueName);
      if ( (int)result >= 0 )
      {
        FxObjectHandleGetPtr(m_Globals, (unsigned __int64)v9, 0x100Eu, (void **)&pCollection);
        v30 = FxDeviceBase::_SearchForDevice(m_Globals, StringsAttributes);
        _a2 = FxRegKey::QueryValue(pKey, ValueName, 0, 0LL, (unsigned int *)&dummy, &type);
        if ( (int)(_a2 + 0x80000000) < 0 || _a2 == -2147483643 )
        {
          if ( type != 7 )
            return 3221225508LL;
          v14 = (unsigned int)dummy;
          if ( !(_DWORD)dummy )
          {
            WPP_IFR_SF_qZd(m_Globals, v11, v13, 0x14u, ValueLengthQueried, Key, ValueName);
            return 3221225609LL;
          }
          Tag = m_Globals->Tag;
          v16 = (void *)retaddr;
          SourceString[0] = 0LL;
          SourceString[1] = (wchar_t *)256;
          if ( !m_Globals->FxPoolTrackingOn )
            v16 = 0LL;
          v31 = *(FxPoolTypeOrPoolFlags *)SourceString;
          v17 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)&v31, (unsigned int)dummy, Tag, v16);
          v18 = (wchar_t *)v17;
          if ( !v17 )
          {
            WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x15u, WPP_FxRegistryAPI_cpp_Traceguids, Key, -1073741670);
            return 3221225626LL;
          }
          _a2 = FxRegKey::QueryValue(pKey, ValueName, v14, v17, (unsigned int *)&dummy, &type);
          if ( _a2 >= 0 )
          {
            _a2 = FxRegKey::_VerifyMultiSzString(m_Globals, ValueName, v18, (unsigned int)dummy);
            if ( _a2 >= 0 )
            {
              SourceString[0] = v18;
              type = pCollection->m_Count;
              if ( *v18 )
              {
                while ( 1 )
                {
                  *(_QWORD *)&v31.UsePoolType = 0LL;
                  v31.u.PoolFlags = 64LL;
                  v19 = (FxString *)FxObjectHandleAllocCommon(
                                      m_Globals,
                                      &v31,
                                      0x78uLL,
                                      0,
                                      Attributes,
                                      0,
                                      FxObjectTypeExternal);
                  if ( !v19 )
                    break;
                  FxString::FxString(v19, m_Globals);
                  v21 = v20;
                  if ( !v20 )
                    break;
                  if ( v30 )
                    v20->m_DeviceBase = v30;
                  _a2 = FxString::Assign(v20, SourceString[0]);
                  v22 = v21;
                  if ( _a2 < 0 )
                    goto LABEL_30;
                  _a2 = FxObject::Commit(v21, Attributes, &dummy, 0LL, 1u);
                  v22 = v21;
                  if ( _a2 < 0 )
                    goto LABEL_30;
                  if ( !FxCollectionInternal::Add(&pCollection->FxCollectionInternal, pCollection->m_Globals, v21) )
                  {
                    _a2 = -1073741670;
                    WPP_IFR_SF_qid(
                      m_Globals,
                      2u,
                      2u,
                      0x16u,
                      WPP_FxRegistryAPI_cpp_Traceguids,
                      Key,
                      (__int64)Collection,
                      -1073741670);
                    v22 = v21;
LABEL_30:
                    FxObject::ClearEvtCallbacks(v22);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23);
                    goto LABEL_36;
                  }
                  v24 = -1LL;
                  do
                    ++v24;
                  while ( SourceString[0][v24] );
                  SourceString[0] += v24 + 1;
                  if ( !*SourceString[0] )
                    goto LABEL_39;
                }
                _a2 = -1073741670;
LABEL_36:
                WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x17u, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
                for ( i = type;
                      pCollection->m_Count > i;
                      FxCollectionInternal::Remove(&pCollection->FxCollectionInternal, i) )
                {
                  ;
                }
              }
            }
          }
LABEL_39:
          FxPoolFree((FX_POOL_TRACKER *)v18);
        }
        else
        {
          WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x13u, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
        }
        return (unsigned int)_a2;
      }
    }
  }
  return result;
}
