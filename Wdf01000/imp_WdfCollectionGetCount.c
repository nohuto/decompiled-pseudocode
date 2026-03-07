__int64 __fastcall imp_WdfCollectionGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  unsigned int m_Count; // ebx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxCollection *pCollection; // [rsp+40h] [rbp+18h] BYREF

  pCollection = 0LL;
  irql = 0;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Collection, 0x100Eu, (void **)&pCollection);
  FxNonPagedObject::Lock(pCollection, &irql);
  m_Count = pCollection->m_Count;
  FxNonPagedObject::Unlock(pCollection, irql);
  return m_Count;
}
