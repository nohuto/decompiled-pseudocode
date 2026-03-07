void __fastcall FxSystemThread::FxSystemThread(FxSystemThread *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1013u, 0, FxDriverGlobals);
  this->__vftable = (FxSystemThread_vtbl *)FxSystemThread::`vftable';
  this->m_InitEvent.m_DbgFlagIsInitialized = 0;
  this->m_WorkEvent.m_DbgFlagIsInitialized = 0;
  *(_WORD *)&this->m_Exit = 0;
  this->m_ThreadPtr = 0LL;
  this->m_PEThread = 0LL;
  this->m_Reaper.WorkerRoutine = 0LL;
  this->m_WorkList.Blink = &this->m_WorkList;
  this->m_WorkList.Flink = &this->m_WorkList;
  KeInitializeEvent(&this->m_InitEvent.m_Event, NotificationEvent, 0);
  this->m_InitEvent.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_WorkEvent.m_Event, NotificationEvent, 0);
  this->m_WorkEvent.m_DbgFlagIsInitialized = 1;
}
