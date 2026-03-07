void __fastcall CiSchedulerPostSuspend(char a1, int a2, unsigned __int64 a3, bool *a4)
{
  bool v7; // di

  CiSchedulerUpdateTimer(a3);
  v7 = 0;
  if ( a2 )
  {
    if ( a1 )
    {
      _InterlockedOr(&CiSchedulerWakeupReason, 4u);
    }
    else
    {
      _m_prefetchw(&CiSchedulerWakeupReason);
      v7 = (_InterlockedOr(&CiSchedulerWakeupReason, 2u) & 0x8000) != 0;
    }
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  *a4 = v7;
}
