void __fastcall FxTimer::FxTimer(FxTimer *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1028u, 0x160u, FxDriverGlobals);
  this->__vftable = (FxTimer_vtbl *)FxTimer::`vftable';
  this->m_Timer.m_Timer.m_TimerContext = 0LL;
  this->m_Timer.m_Timer.m_TimerCallback = 0LL;
  this->m_Timer.m_Timer.m_Period = 0;
  this->m_Timer.m_Timer.m_KernelExTimer = 0LL;
  this->m_Object = 0LL;
  *(_QWORD *)&this->m_Period = 0LL;
  this->m_CallbackLock = 0LL;
  this->m_CallbackLockObject = 0LL;
  this->m_Callback = 0LL;
  this->m_RunningDown = 0;
  this->m_SystemWorkItem = 0LL;
  this->m_CallbackThread = 0LL;
  this->m_StopThread = 0LL;
  *(_WORD *)&this->m_StopAgain = 0;
  this->m_ObjectFlags |= 0x810u;
}
