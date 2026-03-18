/*
 * XREFs of RtlpHpHeapHandleError @ 0x1405F1F7C
 * Callers:
 *     RtlpLogHeapFailure @ 0x1405F1BBC (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1405F1AA4 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1405F1F34 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1405F200C (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
