/*
 * XREFs of imp_WdfCollectionGetCount @ 0x1C00059D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

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
