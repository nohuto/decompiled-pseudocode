/*
 * XREFs of RtlWalkFrameChain @ 0x1402C17B0
 * Callers:
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 *     RtlCaptureStackBackTrace @ 0x1402C1720 (RtlCaptureStackBackTrace.c)
 *     KiDpcWatchdogCaptureStack @ 0x140512260 (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x140596340 (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A5FC4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x1405A7364 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1405AEFA8 (EtwpCovSampCaptureKernelStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405D09D0 (EtwTimLogRedirectionTrustPolicy.c)
 *     PoDiagCaptureUsermodeStack @ 0x14062224C (PoDiagCaptureUsermodeStack.c)
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     EtwpCovSampCaptureUserStack @ 0x140942BF8 (EtwpCovSampCaptureUserStack.c)
 *     ExpUpdateDebugInfo @ 0x14094CFD4 (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x1402C1B50 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x14035B1A0 (RtlpGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x14035B420 (KeAreInterruptsEnabled.c)
 *     KeGetCurrentStackPointer @ 0x1403FE7B0 (KeGetCurrentStackPointer.c)
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
    || (v8 = *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessorPadding[5])
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
