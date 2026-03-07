__int64 __fastcall WakeRIT(unsigned int a1)
{
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    _m_prefetchw(&gdwRITWakeReason);
    if ( (_InterlockedOr(&gdwRITWakeReason, a1) & a1) == 0 )
      KeSetEvent((PRKEVENT)WPP_MAIN_CB.Dpc.DeferredContext, 1, 0);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwRitIgnoredWakeReasons, a1);
    return 0LL;
  }
}
