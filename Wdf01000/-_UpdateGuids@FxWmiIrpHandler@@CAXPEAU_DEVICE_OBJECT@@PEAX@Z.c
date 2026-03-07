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
