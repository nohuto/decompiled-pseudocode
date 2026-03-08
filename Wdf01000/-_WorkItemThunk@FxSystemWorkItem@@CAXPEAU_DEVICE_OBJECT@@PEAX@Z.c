/*
 * XREFs of ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C00078E0
 * Callers:
 *     <none>
 * Callees:
 *     ?WorkItemHandler@FxSystemWorkItem@@AEAAXXZ @ 0x1C0006BE0 (-WorkItemHandler@FxSystemWorkItem@@AEAAXXZ.c)
 *     ?DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ @ 0x1C0007908 (-DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ.c)
 */

void __fastcall FxSystemWorkItem::_WorkItemThunk(_DEVICE_OBJECT *DeviceObject, FxSystemWorkItem *Context)
{
  FxSystemWorkItem::WorkItemHandler(Context);
  FxSystemWorkItem::DecrementWorkItemQueued(Context);
}
