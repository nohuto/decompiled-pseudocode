/*
 * XREFs of GetQpcFrequency @ 0x1C01387BC
 * Callers:
 *     EtwTraceFlipManagerPresentCanceled @ 0x1C01398E0 (EtwTraceFlipManagerPresentCanceled.c)
 *     EtwTraceFlipManagerPresentDeferred @ 0x1C0139BF0 (EtwTraceFlipManagerPresentDeferred.c)
 *     EtwTraceFlipManagerPresentPosted @ 0x1C0139F70 (EtwTraceFlipManagerPresentPosted.c)
 *     EtwTraceFlipManagerPresentProcessed @ 0x1C013A180 (EtwTraceFlipManagerPresentProcessed.c)
 *     EtwTraceFlipManagerPresentSkipped @ 0x1C013A4D0 (EtwTraceFlipManagerPresentSkipped.c)
 * Callees:
 *     <none>
 */

__int64 GetQpcFrequency()
{
  __int64 result; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  result = qword_1C0297518;
  if ( !qword_1C0297518 )
  {
    PerformanceFrequency.QuadPart = 0LL;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedCompareExchange64(&qword_1C0297518, PerformanceFrequency.QuadPart, 0LL);
    return qword_1C0297518;
  }
  return result;
}
