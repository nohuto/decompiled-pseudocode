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
