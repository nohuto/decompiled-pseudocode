/*
 * XREFs of imp_WdfCollectionGetItem @ 0x1C0005FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0006030 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 */

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
