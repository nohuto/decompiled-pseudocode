/*
 * XREFs of imp_WdfIoResourceListGetDescriptor @ 0x1C0049350
 * Callers:
 *     <none>
 * Callees:
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0006030 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

_LIST_ENTRY **__fastcall imp_WdfIoResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        unsigned int Index)
{
  unsigned __int8 v4; // r8
  _LIST_ENTRY **Entry; // rax
  unsigned __int8 v6; // r8
  FxNonPagedObject *v7; // r9
  _LIST_ENTRY *v8; // rbx
  _LIST_ENTRY **result; // rax
  __int128 v10; // xmm1
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxIoResList *pList; // [rsp+48h] [rbp+20h] BYREF

  pList = 0LL;
  irql = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList);
  FxNonPagedObject::Lock(pList, &irql, v4);
  Entry = FxCollectionInternal::FindEntry(&pList->FxCollectionInternal, Index);
  if ( Entry )
    v8 = *Entry;
  else
    v8 = 0LL;
  FxNonPagedObject::Unlock(v7, irql, v6);
  if ( !v8 )
    return 0LL;
  result = &v8[8].Blink;
  v10 = *(_OWORD *)&v8[7].Blink;
  *(_LIST_ENTRY *)((char *)v8 + 136) = *(_LIST_ENTRY *)((char *)v8 + 104);
  *(_OWORD *)&v8[9].Blink = v10;
  return result;
}
