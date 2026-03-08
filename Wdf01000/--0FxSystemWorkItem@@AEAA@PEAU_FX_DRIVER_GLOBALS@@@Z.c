/*
 * XREFs of ??0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0042B28
 * Callers:
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0042DAC (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

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
