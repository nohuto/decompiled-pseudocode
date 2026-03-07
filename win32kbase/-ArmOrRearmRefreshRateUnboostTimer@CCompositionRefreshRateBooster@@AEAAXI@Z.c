void __fastcall CCompositionRefreshRateBooster::ArmOrRearmRefreshRateUnboostTimer(
        CCompositionRefreshRateBooster *this,
        unsigned int a2)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  void *v5; // rbp
  union _LARGE_INTEGER DueTime; // [rsp+70h] [rbp+8h] BYREF
  int v7; // [rsp+78h] [rbp+10h]

  DueTime.QuadPart = -10000LL * (int)a2;
  CPushLock::AcquireLockExclusive(this);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (__int64)((unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *((_QWORD *)this + 3))) / gliQpcFreq.QuadPart) >= 10
    || a2 > *((_DWORD *)this + 5) )
  {
    v5 = (void *)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 11);
    if ( ZwCancelTimer(v5, 0LL) < 0 )
    {
      v7 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 483);
    }
    if ( ZwSetTimer(v5, &DueTime, 0LL, 0LL, 0, 0, 0LL) < 0 )
    {
      v7 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 494);
    }
    *((LARGE_INTEGER *)this + 3) = PerformanceCounter;
    *((_DWORD *)this + 5) = a2;
  }
  CPushLock::ReleaseLock(this);
}
