/*
 * XREFs of imp_WdfWorkItemGetParentObject @ 0x1C0002DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0059258 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfWorkItemGetParentObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 WorkItem)
{
  __int64 v2; // rbx
  __int64 Offset; // r8
  FxWorkItem *v4; // rcx
  FxObject *m_Object; // rdx
  FxWorkItem *pFxWorkItem; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  pFxWorkItem = 0LL;
  if ( !WorkItem )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1025uLL);
  LOWORD(Offset) = 0;
  v4 = (FxWorkItem *)(~WorkItem & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (WorkItem & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxWorkItem *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4133 )
  {
    pFxWorkItem = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pFxWorkItem, (void *)WorkItem, 0x1025u, Offset);
    v4 = pFxWorkItem;
  }
  m_Object = v4->m_Object;
  if ( m_Object && m_Object->m_ObjectSize )
    return (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  return v2;
}
