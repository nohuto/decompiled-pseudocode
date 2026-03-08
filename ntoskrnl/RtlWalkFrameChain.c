/*
 * XREFs of RtlWalkFrameChain @ 0x140205CA0
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x140205C20 (RtlCaptureStackBackTrace.c)
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     EtwpTraceStackWalk @ 0x140460A6C (EtwpTraceStackWalk.c)
 *     KiDpcWatchdogCaptureStack @ 0x140568E14 (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x1405B581C (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405FD72C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140600FD8 (EtwpCovSampCaptureKernelStack.c)
 *     CmpThreadInfoLogStack @ 0x140613BCC (CmpThreadInfoLogStack.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x140860F38 (PoDiagCaptureUsermodeStack.c)
 *     EtwpCovSampCaptureUserStack @ 0x1408A3DD6 (EtwpCovSampCaptureUserStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409E7898 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpUpdateDebugInfo @ 0x1409F6478 (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140205D40 (RtlEnoughStackSpaceForStackCapture.c)
 *     MmCanThreadFault @ 0x140205D8C (MmCanThreadFault.c)
 *     RtlpWalkFrameChain @ 0x14027FF40 (RtlpWalkFrameChain.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // ebx
  BOOL v5; // esi
  ULONG v6; // edi
  ULONG v7; // ebp
  ULONG result; // eax

  if ( (Flags & 0xFFFF00FC) != 0 )
    return 0;
  v4 = Flags & 3;
  if ( Flags >> 8 > 0xFE )
    return 0;
  if ( Count == -1 )
    return 0;
  v5 = (Flags & 2) == 0;
  v6 = v5 + (Flags >> 8);
  v7 = v5 + Count;
  if ( !(unsigned int)MmCanThreadFault() && (v4 & 1) != 0 )
    return 0;
  if ( !(unsigned int)RtlEnoughStackSpaceForStackCapture() )
    return 0;
  result = RtlpWalkFrameChain(Callers, v7, v4, v6);
  if ( result )
    return (__PAIR64__(result, v4 & 2) - 1) >> 32;
  return result;
}
