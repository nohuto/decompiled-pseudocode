/*
 * XREFs of ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C0010120
 * Callers:
 *     <none>
 * Callees:
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C00802A4 (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 */

void __fastcall FxInterrupt::_InterruptWorkItemCallback(FxInterrupt *DeferredContext)
{
  FxInterrupt::WorkItemHandler(DeferredContext);
}
