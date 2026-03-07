void __fastcall VIDMM_GLOBAL::SetDelayedEvictionTimerScheduled(VIDMM_GLOBAL *this)
{
  _InterlockedExchange((volatile __int32 *)this + 11212, 0);
}
