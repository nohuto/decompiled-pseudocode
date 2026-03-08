/*
 * XREFs of HalpScanForProfilingCorruption @ 0x1404532C4
 * Callers:
 *     HalpTimerClockInterrupt @ 0x14022C760 (HalpTimerClockInterrupt.c)
 *     HalpTimerClockIpiRoutine @ 0x14022CC70 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14051C3E0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall **__fastcall HalpScanForProfilingCorruption(int a1))()
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 (__fastcall **result)(); // rax
  __int64 v4; // rsi
  __int64 i; // rdi
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  result = &DefaultProfileInterface;
  if ( HalpProfileInterface == &DefaultProfileInterface )
  {
    v4 = HalpCounterStatus;
  }
  else
  {
    result = (__int64 (__fastcall **)())HalpCounterStatus;
    v4 = HalpCounterStatus + 8LL * (unsigned int)(HalpNumberOfCounters * a1);
  }
  for ( i = 0LL; (unsigned int)i < HalpNumberOfCounters; i = (unsigned int)(i + 1) )
  {
    result = *(__int64 (__fastcall ***)())(v4 + 8 * i);
    if ( !*((_BYTE *)result + 36) && *((_DWORD *)result + 6) <= 1u )
    {
      result = (__int64 (__fastcall **)())((__int64 (__fastcall *)(_QWORD, char *))HalpProfileInterface[18])(
                                            (unsigned int)i,
                                            &v6);
      if ( (int)result >= 0 )
      {
        result = *(__int64 (__fastcall ***)())(v4 + 8 * i);
        if ( v6 )
          *((_BYTE *)result + 36) = 1;
        else
          result[1] = (__int64 (__fastcall *)())PerformanceCounter.QuadPart;
      }
    }
  }
  return result;
}
