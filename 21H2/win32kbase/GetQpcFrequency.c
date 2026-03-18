/*
 * XREFs of GetQpcFrequency @ 0x1C014C3C0
 * Callers:
 *     EtwTraceFlipManagerPresentCanceled @ 0x1C014D210 (EtwTraceFlipManagerPresentCanceled.c)
 *     EtwTraceFlipManagerPresentDeferred @ 0x1C014D520 (EtwTraceFlipManagerPresentDeferred.c)
 *     EtwTraceFlipManagerPresentPosted @ 0x1C014D880 (EtwTraceFlipManagerPresentPosted.c)
 *     EtwTraceFlipManagerPresentProcessed @ 0x1C014DA90 (EtwTraceFlipManagerPresentProcessed.c)
 * Callees:
 *     <none>
 */

__int64 GetQpcFrequency()
{
  __int64 result; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  result = qword_1C029E400;
  if ( !qword_1C029E400 )
  {
    PerformanceFrequency.QuadPart = 0LL;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedCompareExchange64(&qword_1C029E400, PerformanceFrequency.QuadPart, 0LL);
    return qword_1C029E400;
  }
  return result;
}
