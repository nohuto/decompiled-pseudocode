void *__fastcall imp_WdfCollectionGetItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        unsigned int Index)
{
  FxCollectionEntry *Entry; // rax
  FxNonPagedObject *v5; // r9
  FxObject *m_Object; // rbx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxCollection *pCollection; // [rsp+48h] [rbp+20h] BYREF

  pCollection = 0LL;
  irql = 0;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Collection, 0x100Eu, (void **)&pCollection);
  FxNonPagedObject::Lock(pCollection, &irql);
  Entry = FxCollectionInternal::FindEntry(&pCollection->FxCollectionInternal, Index);
  if ( Entry )
    m_Object = Entry->m_Object;
  else
    m_Object = 0LL;
  FxNonPagedObject::Unlock(v5, irql);
  if ( m_Object )
    return FxObject::GetObjectHandleUnchecked(m_Object);
  else
    return 0LL;
}
