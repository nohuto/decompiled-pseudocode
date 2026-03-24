/*
 * XREFs of VfPendingFinishLogging @ 0x1409D5764
 * Callers:
 *     IovpCallDriver1 @ 0x1409CFC4C (IovpCallDriver1.c)
 *     IovpCompleteRequest1 @ 0x1409D04C0 (IovpCompleteRequest1.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14021CE20 (RtlCaptureStackBackTrace.c)
 */

__int64 __fastcall VfPendingFinishLogging(__int64 a1)
{
  __int64 result; // rax

  result = RtlCaptureStackBackTrace(1u, 0x3Eu, (PVOID *)(a1 + 16), 0LL);
  if ( (unsigned __int16)result < 0x3Eu )
    *(_QWORD *)(a1 + 8LL * (unsigned __int16)result + 16) = 0LL;
  return result;
}
