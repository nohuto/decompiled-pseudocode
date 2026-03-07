__int64 __fastcall imp_WdfCollectionAdd(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        unsigned __int64 Object)
{
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  FxObject *pObject; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+40h] [rbp+10h] BYREF
  FxCollection *pCollection; // [rsp+58h] [rbp+28h] BYREF

  pCollection = 0LL;
  pObject = 0LL;
  irql = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Collection,
    0x100Eu,
    (void **)&pCollection);
  FxObjectHandleGetPtr(pCollection->m_Globals, Object, 0x1000u, (void **)&pObject);
  FxNonPagedObject::Lock(pCollection, &irql, v4);
  LODWORD(Object) = FxCollectionInternal::Add(&pCollection->FxCollectionInternal, pCollection->m_Globals, pObject) == 0
                  ? 0xC0000001
                  : 0;
  FxNonPagedObject::Unlock(pCollection, irql, v5);
  return (unsigned int)Object;
}
