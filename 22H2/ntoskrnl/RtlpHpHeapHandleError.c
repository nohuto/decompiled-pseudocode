/*
 * XREFs of RtlpHpHeapHandleError @ 0x1405B5104
 * Callers:
 *     RtlpLogHeapFailure @ 0x1405B4B5C (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140227700 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1405B4A44 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1405B50BC (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1405B5194 (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
