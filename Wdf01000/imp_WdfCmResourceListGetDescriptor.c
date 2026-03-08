/*
 * XREFs of imp_WdfCmResourceListGetDescriptor @ 0x1C0048F00
 * Callers:
 *     <none>
 * Callees:
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0006030 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

_CM_PARTIAL_RESOURCE_DESCRIPTOR *__fastcall imp_WdfCmResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        unsigned int Index)
{
  char *v4; // rdi
  FxCmResList *v5; // rsi
  unsigned __int8 v6; // r8
  _LIST_ENTRY **Entry; // rax
  unsigned __int8 v8; // r8
  _LIST_ENTRY *v9; // rbx
  int Blink; // ecx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF
  FxCmResList *pList; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)List, 0x1036u, (void **)&pList);
  v5 = pList;
  PreviousIrql = 0;
  FxNonPagedObject::Lock(pList, &PreviousIrql, v6);
  Entry = FxCollectionInternal::FindEntry(&v5->FxCollectionInternal, Index);
  if ( Entry )
    v9 = *Entry;
  else
    v9 = 0LL;
  FxNonPagedObject::Unlock(v5, PreviousIrql, v8);
  if ( v9 )
  {
    Blink = (int)v9[7].Blink;
    v4 = (char *)&v9[7].Blink + 4;
    *(_LIST_ENTRY *)((char *)v9 + 124) = *(_LIST_ENTRY *)((char *)v9 + 104);
    HIDWORD(v9[8].Blink) = Blink;
  }
  return (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)v4;
}
