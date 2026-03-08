/*
 * XREFs of imp_WdfCommonBufferCreate @ 0x1C001A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x1C002027C (--0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C0020304 (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfCommonBufferCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  WDFCOMMONBUFFER__ **v7; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned int _a1; // edi
  unsigned __int16 v11; // r9
  FxCommonBuffer *v12; // rax
  FxObject *v13; // rax
  FxCommonBuffer *v14; // rdi
  int CommonBuffer; // ebx
  void *handle; // [rsp+40h] [rbp-20h] BYREF
  FxPoolTypeOrPoolFlags v17; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  FxDmaEnabler *pDmaEnabler; // [rsp+90h] [rbp+30h] BYREF

  pDmaEnabler = 0LL;
  handle = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  v7 = CommonBufferHandle;
  m_Globals = pDmaEnabler->m_Globals;
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *CommonBufferHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( !Length )
    {
      _a1 = -1073741811;
      v11 = 10;
LABEL_15:
      WPP_IFR_SF_D(m_Globals, 2u, 0xFu, v11, WPP_FxCommonBufferAPI_cpp_Traceguids, _a1);
      return _a1;
    }
    result = FxValidateObjectAttributes(m_Globals, Attributes, 1);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)&v17.UsePoolType = 0LL;
    v17.u.PoolFlags = 64LL;
    v12 = (FxCommonBuffer *)FxObjectHandleAllocCommon(m_Globals, &v17, 0xB8uLL, 0, Attributes, 0, FxObjectTypeExternal);
    if ( !v12 || (FxCommonBuffer::FxCommonBuffer(v12, m_Globals, pDmaEnabler), (v14 = (FxCommonBuffer *)v13) == 0LL) )
    {
      _a1 = -1073741670;
      v11 = 11;
      goto LABEL_15;
    }
    CommonBuffer = FxObject::Commit(v13, Attributes, &handle, (_FX_DRIVER_GLOBALS *)pDmaEnabler, 1u);
    if ( CommonBuffer < 0 || (CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v14, Length), CommonBuffer < 0) )
    {
      FxObject::ClearEvtCallbacks(v14);
      v14->DeleteObject(v14);
    }
    else
    {
      *v7 = (WDFCOMMONBUFFER__ *)handle;
    }
    return (unsigned int)CommonBuffer;
  }
  return result;
}
