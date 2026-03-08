/*
 * XREFs of ?_UpdateGuids@FxWmiIrpHandler@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C002B4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C002A79C (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

void __fastcall FxWmiIrpHandler::_UpdateGuids(_DEVICE_OBJECT *DeviceObject, FxWmiIrpHandler *Context)
{
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // r8
  _KEVENT *m_WorkItemEvent; // rcx
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  irql = 0;
  FxWmiIrpHandler::UpdateGuids(Context);
  FxNonPagedObject::Lock(Context, &irql, v3);
  m_WorkItemEvent = Context->m_WorkItemEvent;
  Context->m_WorkItemQueued = 0;
  if ( m_WorkItemEvent )
    KeSetEvent(m_WorkItemEvent, 0, 0);
  FxNonPagedObject::Unlock(Context, irql, v4);
}
