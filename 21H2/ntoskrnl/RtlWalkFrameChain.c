/*
 * XREFs of RtlWalkFrameChain @ 0x140295F90
 * Callers:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     SepGetStackTraceHash @ 0x140374FC8 (SepGetStackTraceHash.c)
 *     CmpThreadInfoLogStack @ 0x14053E958 (CmpThreadInfoLogStack.c)
 *     KiDpcWatchdogCaptureStack @ 0x140568930 (KiDpcWatchdogCaptureStack.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14063130C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x140631A8C (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140636208 (EtwpCovSampCaptureKernelStack.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406E8628 (PoDiagCaptureUsermodeStack.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 *     EtwpCovSampCaptureUserStack @ 0x140883ABA (EtwpCovSampCaptureUserStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409E7AD4 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpUpdateDebugInfo @ 0x1409F92FC (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x140296110 (RtlpWalkFrameChain.c)
 *     MmCanThreadFault @ 0x140297EF0 (MmCanThreadFault.c)
 *     RtlpGetStackLimits @ 0x1402AB970 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x14041FAB0 (KeGetCurrentStackPointer.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // edi
  ULONG v5; // ebx
  ULONG v6; // esi
  ULONG result; // eax
  int v8; // ebp
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  if ( (Flags & 0xFFFF00FC) != 0 )
    return 0;
  v4 = Flags & 3;
  if ( Flags >> 8 > 0xFE )
    return 0;
  if ( Count == -1 )
    return 0;
  v8 = (Flags & 2) == 0;
  v5 = v8 + (Flags >> 8);
  v6 = v8 + Count;
  if ( !(unsigned int)MmCanThreadFault() && (v4 & 1) != 0 )
    return 0;
  v9[0] = 0LL;
  v10 = 0LL;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v10, v9) || (unsigned __int64)(KeGetCurrentStackPointer() - v10) < 0xE30 )
    return 0;
  result = RtlpWalkFrameChain(Callers, v6, v4, v5);
  if ( result )
    result -= v8;
  return result;
}
