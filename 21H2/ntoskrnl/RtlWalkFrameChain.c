/*
 * XREFs of RtlWalkFrameChain @ 0x14021CEB0
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     RtlCaptureStackBackTrace @ 0x14021CE20 (RtlCaptureStackBackTrace.c)
 *     KiDpcWatchdogCaptureStack @ 0x140512020 (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x140596110 (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A5D94 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x1405A7134 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1405AED78 (EtwpCovSampCaptureKernelStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405D09D0 (EtwTimLogRedirectionTrustPolicy.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406C366C (PoDiagCaptureUsermodeStack.c)
 *     SepDuplicateToken @ 0x140703E00 (SepDuplicateToken.c)
 *     EtwpCovSampCaptureUserStack @ 0x140942A28 (EtwpCovSampCaptureUserStack.c)
 *     ExpUpdateDebugInfo @ 0x14094CE04 (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x14021D250 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x140350450 (RtlpGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x1403506D0 (KeAreInterruptsEnabled.c)
 *     KeGetCurrentStackPointer @ 0x1403FE5D0 (KeGetCurrentStackPointer.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // edi
  ULONG v5; // ebx
  ULONG v6; // esi
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v8; // rax
  ULONG result; // eax
  int v10; // ebp
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  if ( (Flags & 0xFFFF00FC) != 0 )
    return 0;
  v4 = Flags & 3;
  if ( Flags >> 8 > 0xFE || Count == -1 )
    return 0;
  v10 = (Flags & 2) == 0;
  v5 = v10 + (Flags >> 8);
  v6 = v10 + Count;
  if ( !(unsigned __int8)KeAreInterruptsEnabled()
    || KeGetCurrentIrql() >= 2u
    || (CurrentThread = KeGetCurrentThread(), (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0)
    || (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink == KiExecuteDpc
    || !MmPhysicalMemoryBlock
    || (v8 = *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessorPadding[5])
                       + 6848LL)) == 0
    || CurrentThread == *(struct _KTHREAD **)(v8 + 88) )
  {
    if ( (v4 & 1) != 0 )
      return 0;
  }
  v11[0] = 0LL;
  v12 = 0LL;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v12, v11) || (unsigned __int64)(KeGetCurrentStackPointer() - v12) < 0xE30 )
    return 0;
  result = RtlpWalkFrameChain(Callers, v6, v4, v5);
  if ( result )
    result -= v10;
  return result;
}
