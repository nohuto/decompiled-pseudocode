/*
 * XREFs of UpdateDCEInUseCount @ 0x1C003D02C
 * Callers:
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 * Callees:
 *     ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x1C017D92C (-TraceLoggingGlobalDCsInUse@@YAXK@Z.c)
 *     ?TraceLoggingProcessDCsInUse@@YAXKK@Z @ 0x1C017D99C (-TraceLoggingProcessDCsInUse@@YAXKK@Z.c)
 */

void __fastcall UpdateDCEInUseCount(int a1, unsigned int *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  volatile LONG Lock; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v7; // ecx
  void *QuadPart; // rdi

  if ( !bDCEInUseTelemetryDisabled )
  {
    if ( (dword_1C02D18F0 & 1) == 0 )
    {
      dword_1C02D18F0 |= 1u;
      qword_1C02D18F8 = 60 * llEventIntervalMinute * gliQpcFreq.QuadPart;
    }
    v3 = a2[270];
    if ( a1 )
    {
      a2[270] = v3 + 1;
      ++gnInUseDCECount;
      v4 = a2[270];
      if ( a2[271] < v4 )
        a2[271] = v4;
      Lock = WPP_MAIN_CB.DeviceLock.Header.Lock;
      if ( WPP_MAIN_CB.DeviceLock.Header.LockNV < (unsigned int)gnInUseDCECount )
        Lock = gnInUseDCECount;
      WPP_MAIN_CB.DeviceLock.Header.LockNV = Lock;
    }
    else
    {
      a2[270] = v3 - 1;
      --gnInUseDCECount;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v7 = a2[271];
    QuadPart = (void *)PerformanceCounter.QuadPart;
    if ( !(v7 % ulProcessThresholdDCEInUse)
      && (signed __int64)(PerformanceCounter.QuadPart - (unsigned __int64)WPP_MAIN_CB.SecurityDescriptor) >= qword_1C02D18F8 )
    {
      TraceLoggingProcessDCsInUse(v7, a2[14]);
      WPP_MAIN_CB.SecurityDescriptor = QuadPart;
    }
    if ( !(WPP_MAIN_CB.DeviceLock.Header.LockNV % ulGlobalThresholdDCEInUse)
      && (__int64)QuadPart - *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount >= qword_1C02D18F8 )
    {
      TraceLoggingGlobalDCsInUse(v7);
      *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = QuadPart;
    }
  }
}
