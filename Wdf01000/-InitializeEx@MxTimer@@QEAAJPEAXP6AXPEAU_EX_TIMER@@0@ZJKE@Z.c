__int64 __fastcall MxTimer::InitializeEx(
        MxTimer *this,
        void *TimerContext,
        void (__fastcall *Period)(struct _EX_TIMER *, void *),
        int TolerableDelay,
        unsigned int UseHighResolutionTimer,
        unsigned __int8 a6)
{
  __int64 v7; // r8
  struct _EX_TIMER *Timer; // rax

  this->m_Timer.m_TimerContext = TimerContext;
  v7 = 0LL;
  this->m_Timer.m_TimerCallback = (void (__fastcall *)(_KDPC *, void *, void *, void *))FxTimer::_FxTimerExtCallbackThunk;
  this->m_Timer.m_Period = TolerableDelay;
  if ( UseHighResolutionTimer )
  {
    v7 = 8LL;
  }
  else if ( a6 )
  {
    v7 = 4LL;
  }
  Timer = (struct _EX_TIMER *)ExAllocateTimer(FxTimer::_FxTimerExtCallbackThunk, TimerContext, v7);
  this->m_Timer.m_KernelExTimer = Timer;
  this->m_Timer.m_IsExtTimer = 1;
  return Timer == 0LL ? 0xC000009A : 0;
}
