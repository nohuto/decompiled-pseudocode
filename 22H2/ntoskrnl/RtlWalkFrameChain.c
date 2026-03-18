/*
 * XREFs of RtlWalkFrameChain @ 0x140227780
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x140227700 (RtlCaptureStackBackTrace.c)
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 *     EtwpTraceStackWalk @ 0x14046896C (EtwpTraceStackWalk.c)
 *     KiDpcWatchdogCaptureStack @ 0x14056B2B4 (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x1405B7CCC (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405FFBCC (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140603428 (EtwpCovSampCaptureKernelStack.c)
 *     CmpThreadInfoLogStack @ 0x14061607C (CmpThreadInfoLogStack.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1407F2180 (SepFilterToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x140865548 (PoDiagCaptureUsermodeStack.c)
 *     EtwpCovSampCaptureUserStack @ 0x1408A8C96 (EtwpCovSampCaptureUserStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409EA738 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpUpdateDebugInfo @ 0x1409F9308 (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140227820 (RtlEnoughStackSpaceForStackCapture.c)
 *     MmCanThreadFault @ 0x14022786C (MmCanThreadFault.c)
 *     RtlpWalkFrameChain @ 0x1402A4180 (RtlpWalkFrameChain.c)
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
