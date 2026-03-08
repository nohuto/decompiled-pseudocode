/*
 * XREFs of imp_WdfCollectionGetFirstItem @ 0x1C000E6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 */

unsigned __int64 __fastcall imp_WdfCollectionGetFirstItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // r8
  _LIST_ENTRY *Flink; // rbx
  FxObject *Blink; // rbx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxCollection *pCollection; // [rsp+40h] [rbp+18h] BYREF

  pCollection = 0LL;
  irql = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Collection,
    0x100Eu,
    (void **)&pCollection);
  FxNonPagedObject::Lock(pCollection, &irql, v2);
  Flink = pCollection->m_ListHead.Flink;
  if ( Flink == &pCollection->m_ListHead )
    Blink = 0LL;
  else
    Blink = (FxObject *)Flink[-1].Blink;
  FxNonPagedObject::Unlock(pCollection, irql, v3);
  if ( Blink )
    return FxObject::GetObjectHandleUnchecked(Blink);
  else
    return 0LL;
}
