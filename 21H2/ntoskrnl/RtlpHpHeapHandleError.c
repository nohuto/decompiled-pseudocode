/*
 * XREFs of RtlpHpHeapHandleError @ 0x14059392C
 * Callers:
 *     RtlpLogHeapFailure @ 0x14059356C (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14021CE20 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x140593454 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1405938E4 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1405939BC (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
