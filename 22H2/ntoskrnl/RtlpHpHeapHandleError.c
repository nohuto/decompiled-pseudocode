/*
 * XREFs of RtlpHpHeapHandleError @ 0x14059386C
 * Callers:
 *     RtlpLogHeapFailure @ 0x1405934AC (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14021CDE0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x140593394 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x140593824 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1405938FC (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
