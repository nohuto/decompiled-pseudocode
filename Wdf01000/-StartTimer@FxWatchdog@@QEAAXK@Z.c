void __fastcall FxWatchdog::StartTimer(FxWatchdog *this, __int16 State)
{
  if ( State < 0 )
  {
    MxTimer::Initialize(&this->m_Timer, this, FxWatchdog::_WatchdogDpc, 0);
    this->m_CallingThread = KeGetCurrentThread();
    MxTimer::Start(
      &this->m_Timer,
      (_LARGE_INTEGER)((-(__int64)(this->m_PkgPnp->m_SharedPower.m_ExtendWatchDogTimer != 0) & 0xFFFFFF383B36FC00uLL)
                     - 6000000000LL),
      0);
  }
}
