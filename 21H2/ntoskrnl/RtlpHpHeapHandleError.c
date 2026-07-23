/*
 * XREFs of RtlpHpHeapHandleError @ 0x140593B5C
 * Callers:
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402C1720 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x140593684 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x140593B14 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x140593BEC (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
