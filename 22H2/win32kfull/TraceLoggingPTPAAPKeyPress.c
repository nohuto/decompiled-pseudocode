/*
 * XREFs of TraceLoggingPTPAAPKeyPress @ 0x1C02255F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z @ 0x1C0224BEC (-TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z.c)
 *     ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C0224CAC (-TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z.c)
 */

__int64 __fastcall TraceLoggingPTPAAPKeyPress(int a1)
{
  LARGE_INTEGER PerformanceCounter; // rbp
  __int64 v3; // rdi
  __int64 result; // rax
  LONGLONG v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbx
  signed __int64 v8; // r14
  struct tagTPTELEMTIMINGS *v9; // r8
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)&v10);
  v3 = _InterlockedCompareExchange64(&gAapState[13], 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PTPTelemetry::Usage::gTPTelemTimings + 1, 0LL, 0LL);
  if ( a1 && v3 > 0 && result > v3 )
  {
    v5 = PerformanceCounter.QuadPart
       - _InterlockedCompareExchange64((volatile signed __int64 *)&PTPTelemetry::Usage::gTPTelemTimings + 4, 0LL, 0LL);
    v6 = 1000 * (result - v3) / v10;
    result = 1000 * v5 / v10;
    v7 = result;
    if ( !*((_QWORD *)&PTPTelemetry::Usage::gTPTelemTimings + 3) )
      *((_DWORD *)&PTPTelemetry::Usage::gTPTelemTimings + 11) = *((_DWORD *)&PTPTelemetry::Usage::gTPTelemTimings + 10);
    if ( v6 < 500 || result < 500 )
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)PTPTelemetry::Usage::gTPTelemTimings, 0LL, 0LL);
      TraceLoggingPTPKeyToGestureTiming(
        gAapState[12],
        v3,
        PTPTelemetry::Usage::gTPTelemTimings,
        PerformanceCounter.QuadPart,
        v10);
      if ( v6 < 500
        && (v9 = PTPTelemetry::Usage::gTPTelemTimings, *((_DWORD *)&PTPTelemetry::Usage::gTPTelemTimings + 10))
        || v7 < 500
        && (v9 = PTPTelemetry::Usage::gTPTelemTimings, *((_DWORD *)&PTPTelemetry::Usage::gTPTelemTimings + 11)) )
      {
        TraceLoggingPTPKeyToAATimeDeltas(
          1000 * (v8 - v3) / v10,
          v6,
          v7,
          1000 * (PerformanceCounter.QuadPart - v3) / v10,
          *((_DWORD *)v9 + 10),
          *((_DWORD *)v9 + 11));
      }
      memset(PTPTelemetry::Usage::gTPTelemTimings, 0, 0x54uLL);
      result = (__int64)PTPTelemetry::Usage::gTPTelemTimings;
      *((_DWORD *)&PTPTelemetry::Usage::gTPTelemTimings + 20) = -1;
    }
  }
  return result;
}
