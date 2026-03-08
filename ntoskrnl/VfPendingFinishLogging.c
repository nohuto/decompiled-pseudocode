/*
 * XREFs of VfPendingFinishLogging @ 0x140ACE828
 * Callers:
 *     IovpCallDriver1 @ 0x140AC9170 (IovpCallDriver1.c)
 *     IovpCompleteRequest1 @ 0x140AC99CC (IovpCompleteRequest1.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140205C20 (RtlCaptureStackBackTrace.c)
 */

__int64 __fastcall VfPendingFinishLogging(__int64 a1)
{
  __int64 result; // rax

  result = RtlCaptureStackBackTrace(1u, 0x3Eu, (PVOID *)(a1 + 16), 0LL);
  if ( (unsigned __int16)result < 0x3Eu )
    *(_QWORD *)(a1 + 8LL * (unsigned __int16)result + 16) = 0LL;
  return result;
}
