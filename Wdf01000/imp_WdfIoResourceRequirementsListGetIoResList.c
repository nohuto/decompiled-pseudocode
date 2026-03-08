/*
 * XREFs of imp_WdfIoResourceRequirementsListGetIoResList @ 0x1C00497A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0006030 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 */

WDFIORESLIST__ *__fastcall imp_WdfIoResourceRequirementsListGetIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        unsigned int Index)
{
  unsigned __int8 v4; // r8
  _LIST_ENTRY **Entry; // rax
  unsigned __int8 v6; // r8
  FxNonPagedObject *v7; // r9
  FxObject *v8; // rbx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxIoResReqList *pIoResReqList; // [rsp+48h] [rbp+20h] BYREF

  pIoResReqList = 0LL;
  irql = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pIoResReqList);
  FxNonPagedObject::Lock(pIoResReqList, &irql, v4);
  Entry = FxCollectionInternal::FindEntry(&pIoResReqList->FxCollectionInternal, Index);
  if ( Entry )
    v8 = (FxObject *)*Entry;
  else
    v8 = 0LL;
  FxNonPagedObject::Unlock(v7, irql, v6);
  if ( v8 )
    return (WDFIORESLIST__ *)FxObject::GetObjectHandleUnchecked(v8);
  else
    return 0LL;
}
