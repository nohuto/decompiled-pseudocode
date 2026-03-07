__int64 __fastcall imp_WdfIoResourceRequirementsListGetCount(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList)
{
  unsigned __int8 v2; // r8
  unsigned int m_Count; // ebx
  unsigned __int8 v4; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxIoResReqList *pList; // [rsp+40h] [rbp+18h] BYREF

  pList = 0LL;
  irql = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pList);
  FxNonPagedObject::Lock(pList, &irql, v2);
  m_Count = pList->m_Count;
  FxNonPagedObject::Unlock(pList, irql, v4);
  return m_Count;
}
