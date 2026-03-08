/*
 * XREFs of KiNpxSegmentOverrunAbort @ 0x140425D00
 * Callers:
 *     KiNpxSegmentOverrunAbortShadow @ 0x140AF35C0 (KiNpxSegmentOverrunAbortShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140416550 (KiSaveDebugRegisterState.c)
 *     KiNpxSegmentOverrunAbort @ 0x140425D00 (KiNpxSegmentOverrunAbort.c)
 *     KiBugCheckDispatch @ 0x14042BEC0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14042C900 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __noreturn KiNpxSegmentOverrunAbort()
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v4; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  char v10; // [rsp+170h] [rbp+F0h]
  __int16 v11; // [rsp+178h] [rbp+F8h]

  if ( (v10 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    if ( KeGetPcr()->Prcb.KernelShadowStackInitial )
    {
      __asm { rdsspq  rdx }
      if ( _RDX == KeGetPcr()->Prcb.TransitionShadowStack + 8 )
      {
        __asm
        {
          rstorssp qword ptr [rcx]
          saveprevssp
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    v4 = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
    __writegsqword(0x858u, v4);
    __writegsword(0x852u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOWORD(v4) = KeGetPcr()->Prcb.BpbState;
    __writegsword(0x854u, v4);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x864u, BpbKernelSpecCtrl);
      v4 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    BpbState = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v4 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
    }
    if ( (BpbState & 2) != 0 )
      JUMPOUT(0x140425F6DLL);
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v4);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( KiUserCetPl3SspCanonicalizeUpperMask )
    {
      v4 = 1703LL;
      v7 = __readmsr(0x6A7u);
      if ( HIDWORD(v7) )
      {
        v4 = HIDWORD(v7);
        if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v7)) != HIDWORD(v7) )
        {
          v4 = 1703LL;
          __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v7), v7));
        }
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v4);
  }
  else
  {
    __asm { rdsspq  rdx }
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (_BYTE)KeSmapEnabled && (v10 & 1) != 0 )
    __asm { stac }
  if ( (v11 & 0x200) != 0 )
    _enable();
  v8 = __readcr4();
  v9 = __readcr0();
  KiBugCheckDispatch(127LL, 9LL, v9, v8);
}
