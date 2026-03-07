void __fastcall FxSystemWorkItem::FxSystemWorkItem(FxSystemWorkItem *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1031u, 0, FxDriverGlobals);
  this->__vftable = (FxSystemWorkItem_vtbl *)FxSystemWorkItem::`vftable';
  this->m_WorkItem.m_WorkItem = 0LL;
  this->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_WorkItemCompleted.m_Event.m_Event, NotificationEvent, 1u);
  this->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_RemoveEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_RemoveEvent.m_Event.m_Event, SynchronizationEvent, 0);
  this->m_RemoveEvent.m_Event.m_DbgFlagIsInitialized = 1;
  *(_WORD *)&this->m_RunningDown = 0;
  this->m_Callback = 0LL;
  this->m_CallbackArg = 0LL;
  this->m_WorkItemRunningCount = 0;
  this->m_OutStandingWorkItem = 1;
}
