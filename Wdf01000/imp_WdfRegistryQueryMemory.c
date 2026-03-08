/*
 * XREFs of imp_WdfRegistryQueryMemory @ 0x1C004B1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0001B44 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?QueryValue@FxRegKey@@QEAAJPEBU_UNICODE_STRING@@KPEAXPEAK2@Z @ 0x1C004A114 (-QueryValue@FxRegKey@@QEAAJPEBU_UNICODE_STRING@@KPEAXPEAK2@Z.c)
 *     WPP_IFR_SF_qZd @ 0x1C004A154 (WPP_IFR_SF_qZd.c)
 */

int __fastcall imp_WdfRegistryQueryMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        WDFMEMORY__ **Memory,
        unsigned int *ValueType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void **v11; // r12
  int result; // eax
  unsigned int v13; // r8d
  unsigned int v14; // edi
  ULONG Tag; // ecx
  void *v16; // rax
  FX_POOL **v17; // rax
  FX_POOL_TRACKER *v18; // r15
  int v19; // edi
  int v20; // eax
  unsigned int v21; // r14d
  unsigned int v22; // r9d
  __int64 v23; // rbx
  void *v24; // rax
  unsigned __int16 v25; // r9
  const _GUID *ValueLengthQueried; // [rsp+20h] [rbp-30h]
  __m128i pObject; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+38h]
  unsigned int dataLength; // [rsp+90h] [rbp+40h] BYREF
  FxRegKey *pKey; // [rsp+A0h] [rbp+50h] BYREF
  _POOL_TYPE v31; // [rsp+A8h] [rbp+58h]

  v31 = PoolType;
  pKey = 0LL;
  dataLength = 0;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Key, 0x1006u, (void **)&pKey);
  m_Globals = pKey->m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v11 = (void **)Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Memory = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    if ( m_Globals->FxVerifierOn )
      VfCheckNxPoolType((unsigned int)PoolType, retaddr, m_Globals->Tag);
    result = FxValidateObjectAttributes(m_Globals, MemoryAttributes, 0);
    if ( result >= 0 )
    {
      result = FxValidateUnicodeString(m_Globals, ValueName);
      if ( result >= 0 )
      {
        result = FxRegKey::QueryValue(pKey, ValueName, 0, 0LL, &dataLength, 0LL);
        if ( (int)(result + 0x80000000) < 0 || result == -2147483643 )
        {
          v14 = dataLength;
          if ( !dataLength )
          {
            WPP_IFR_SF_qZd(m_Globals, 0, v13, 0xFu, ValueLengthQueried, Key, ValueName);
            return -1073741687;
          }
          Tag = m_Globals->Tag;
          v16 = (void *)retaddr;
          pObject.m128i_i64[0] = 0LL;
          pObject.m128i_i64[1] = 256LL;
          if ( !m_Globals->FxPoolTrackingOn )
            v16 = 0LL;
          v17 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &pObject, dataLength, Tag, v16);
          v18 = (FX_POOL_TRACKER *)v17;
          if ( !v17 )
          {
            v19 = -1073741670;
            WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x10u, WPP_FxRegistryAPI_cpp_Traceguids, Key, -1073741670);
            return v19;
          }
          v20 = FxRegKey::QueryValue(pKey, ValueName, v14, v17, &dataLength, ValueType);
          v19 = v20;
          if ( v20 < 0 )
          {
            v25 = 18;
          }
          else
          {
            v21 = dataLength;
            v22 = m_Globals->Tag;
            pObject.m128i_i64[0] = 0LL;
            v20 = FxMemoryObject::_Create(
                    m_Globals,
                    MemoryAttributes,
                    v31,
                    v22,
                    dataLength,
                    (FxMemoryObject **)&pObject);
            v19 = v20;
            if ( v20 >= 0 )
            {
              v23 = pObject.m128i_i64[0];
              v19 = FxObject::Commit((FxObject *)pObject.m128i_i64[0], MemoryAttributes, v11, 0LL, 1u);
              if ( v19 < 0 )
              {
                FxObject::ClearEvtCallbacks((FxObject *)v23);
                (*(void (**)(void))(*(_QWORD *)v23 + 48LL))();
              }
              else
              {
                v24 = (void *)(**(__int64 (__fastcall ***)(__int64))(v23 + 104))(v23 + 104);
                memmove(v24, v18, v21);
              }
              goto LABEL_26;
            }
            v25 = 17;
          }
          WPP_IFR_SF_qd(m_Globals, 2u, 2u, v25, WPP_FxRegistryAPI_cpp_Traceguids, Key, v20);
LABEL_26:
          FxPoolFree(v18);
          return v19;
        }
      }
    }
  }
  return result;
}
