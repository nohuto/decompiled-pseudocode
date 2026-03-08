/*
 * XREFs of imp_WdfWorkItemEnqueue @ 0x1C00070A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Enqueue@FxWorkItem@@QEAAXXZ @ 0x1C0006820 (-Enqueue@FxWorkItem@@QEAAXXZ.c)
 */

void __fastcall imp_WdfWorkItemEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  __int64 v2; // rdx
  unsigned __int8 v3; // r8
  FxWorkItem *pFxWorkItem; // [rsp+30h] [rbp+8h] BYREF

  pFxWorkItem = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)WorkItem,
    0x1025u,
    (void **)&pFxWorkItem);
  FxWorkItem::Enqueue(pFxWorkItem, v2, v3);
}
