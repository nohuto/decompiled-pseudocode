void __fastcall FxWorkItem::FxWorkItem(FxWorkItem *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1025u, 0xD0u, FxDriverGlobals);
  this->__vftable = (FxWorkItem_vtbl *)FxWorkItem::`vftable';
  this->m_WorkItem.m_WorkItem = 0LL;
  this->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_WorkItemCompleted.m_Event.m_Event, NotificationEvent, 1u);
  this->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_Object = 0LL;
  this->m_Callback = 0LL;
  this->m_CallbackLock = 0LL;
  this->m_CallbackLockObject = 0LL;
  *(_WORD *)&this->m_RunningDown = 0;
  this->m_WorkItemThread = 0LL;
  this->m_WorkItemRunningCount = 0;
  this->m_ObjectFlags |= 0x811u;
}
