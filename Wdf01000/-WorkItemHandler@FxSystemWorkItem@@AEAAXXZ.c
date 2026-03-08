/*
 * XREFs of ?WorkItemHandler@FxSystemWorkItem@@AEAAXXZ @ 0x1C0006BE0
 * Callers:
 *     ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C00078E0 (-_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     FX_TRACK_DRIVER @ 0x1C0006D3C (FX_TRACK_DRIVER.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxSystemWorkItem::WorkItemHandler(FxSystemWorkItem *this)
{
  unsigned __int8 v2; // r8
  void (__fastcall *m_Callback)(void *); // rdi
  unsigned __int8 v4; // dl
  void *m_CallbackArg; // rbx
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r8
  bool v9; // zf
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FX_TRACK_DRIVER(this->m_Globals);
  FxNonPagedObject::Lock(this, &irql, v2);
  m_Callback = this->m_Callback;
  v4 = irql;
  m_CallbackArg = this->m_CallbackArg;
  this->m_Callback = 0LL;
  ++this->m_WorkItemRunningCount;
  this->m_Enqueued = 0;
  FxNonPagedObject::Unlock(this, v4, v6);
  m_Callback(m_CallbackArg);
  FxNonPagedObject::Lock(this, &irql, v7);
  v9 = this->m_WorkItemRunningCount-- == 1;
  if ( v9 && !this->m_Enqueued )
    KeSetEvent(&this->m_WorkItemCompleted.m_Event.m_Event, 0, 0);
  FxNonPagedObject::Unlock(this, irql, v8);
}
