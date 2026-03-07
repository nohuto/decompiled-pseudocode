__int64 *__fastcall EtwpTraceLoggingProvEnableCallback(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 *a7)
{
  __int64 *result; // rax

  result = PsProvTraceLoggingGuid;
  if ( a2 == 2 && a7 == PsProvTraceLoggingGuid )
    return (__int64 *)EtwpPsProvCaptureState(a7, a4);
  return result;
}
