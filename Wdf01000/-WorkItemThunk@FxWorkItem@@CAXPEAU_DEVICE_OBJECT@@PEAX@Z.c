/*
 * XREFs of ?WorkItemThunk@FxWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C00068F0
 * Callers:
 *     <none>
 * Callees:
 *     ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x1C0005A28 (-WorkItemHandler@FxWorkItem@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxWorkItem::WorkItemThunk(_DEVICE_OBJECT *DeviceObject, FxWorkItem *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxWorkItem_vtbl *v4; // rax

  m_Globals = Context->m_Globals;
  Context->m_WorkItemThread = KeGetCurrentThread();
  FxWorkItem::WorkItemHandler(Context);
  v4 = Context->__vftable;
  Context->m_WorkItemThread = 0LL;
  v4->Release(Context, FxWorkItem::WorkItemThunk, 439, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
  if ( _InterlockedExchangeAdd(&m_Globals->Refcnt, 0xFFFFFFFF) == 1 )
    KeSetEvent(&m_Globals->DestroyEvent.m_Event, 0, 0);
}
