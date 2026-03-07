__int64 __fastcall imp_WdfCmResourceListGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCMRESLIST__ *List)
{
  FxCmResList *v2; // rdi
  unsigned __int8 v3; // r8
  unsigned int m_Count; // ebx
  unsigned __int8 v5; // r8
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF
  FxCmResList *pList; // [rsp+40h] [rbp+18h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)List, 0x1036u, (void **)&pList);
  v2 = pList;
  PreviousIrql = 0;
  FxNonPagedObject::Lock(pList, &PreviousIrql, v3);
  m_Count = v2->m_Count;
  FxNonPagedObject::Unlock(v2, PreviousIrql, v5);
  return m_Count;
}
