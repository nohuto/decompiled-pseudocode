/*
 * XREFs of imp_WdfIoResourceListCreate @ 0x1C00491C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z @ 0x1C00489A4 (--0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z.c)
 */

__int64 __fastcall imp_WdfIoResourceListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFIORESLIST__ **ResourceList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  FxIoResList *v8; // rax
  FxObject *v9; // rax
  FxObject *v10; // rbx
  int v11; // edi
  FxPoolTypeOrPoolFlags v12; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]
  FxIoResReqList *pIoResReqList; // [rsp+60h] [rbp+8h] BYREF

  pIoResReqList = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pIoResReqList);
  m_Globals = pIoResReqList->m_Globals;
  if ( !ResourceList )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *ResourceList = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 1);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&v12.UsePoolType = 0LL;
    v12.u.PoolFlags = 64LL;
    v8 = (FxIoResList *)FxObjectHandleAllocCommon(m_Globals, &v12, 0xA0uLL, 0, Attributes, 0, FxObjectTypeExternal);
    if ( v8 && (FxIoResList::FxIoResList(v8, m_Globals, pIoResReqList), (v10 = v9) != 0LL) )
    {
      v11 = FxObject::Commit(v9, Attributes, (void **)ResourceList, (_FX_DRIVER_GLOBALS *)pIoResReqList, 1u);
      if ( v11 < 0 )
      {
        FxObject::ClearEvtCallbacks(v10);
        v10->DeleteObject(v10);
      }
      return (unsigned int)v11;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
