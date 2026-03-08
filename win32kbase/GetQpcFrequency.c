/*
 * XREFs of GetQpcFrequency @ 0x1C0161710
 * Callers:
 *     EtwTraceFlipManagerPresentCanceled @ 0x1C0162840 (EtwTraceFlipManagerPresentCanceled.c)
 *     EtwTraceFlipManagerPresentDeferred @ 0x1C0162B50 (EtwTraceFlipManagerPresentDeferred.c)
 *     EtwTraceFlipManagerPresentPosted @ 0x1C0162ED0 (EtwTraceFlipManagerPresentPosted.c)
 *     EtwTraceFlipManagerPresentProcessed @ 0x1C01630E0 (EtwTraceFlipManagerPresentProcessed.c)
 *     EtwTraceFlipManagerPresentSkipped @ 0x1C0163430 (EtwTraceFlipManagerPresentSkipped.c)
 * Callees:
 *     <none>
 */

__int64 GetQpcFrequency()
{
  __int64 result; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  result = qword_1C02D86A0;
  if ( !qword_1C02D86A0 )
  {
    PerformanceFrequency.QuadPart = 0LL;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedCompareExchange64(&qword_1C02D86A0, PerformanceFrequency.QuadPart, 0LL);
    return qword_1C02D86A0;
  }
  return result;
}
