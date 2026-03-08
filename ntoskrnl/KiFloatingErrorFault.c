/*
 * XREFs of KiFloatingErrorFault @ 0x140427700
 * Callers:
 *     KiFloatingErrorFaultShadow @ 0x140AF38C0 (KiFloatingErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140416550 (KiSaveDebugRegisterState.c)
 *     KiFloatingErrorFault @ 0x140427700 (KiFloatingErrorFault.c)
 *     KiBugCheckDispatch @ 0x14042BEC0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x14042BF40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14042C900 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __fastcall __noreturn KiFloatingErrorFault()
{
  char v0; // fps
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v5; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  unsigned __int64 v11; // rax
  char v12; // al
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  char v16; // [rsp+160h] [rbp+E0h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v18; // [rsp+170h] [rbp+F0h]
  __int16 v19; // [rsp+178h] [rbp+F8h]

  if ( (v18 & 1) != 0 )
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
    v5 = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
    __writegsqword(0x858u, v5);
    __writegsword(0x852u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOWORD(v5) = KeGetPcr()->Prcb.BpbState;
    __writegsword(0x854u, v5);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x864u, BpbKernelSpecCtrl);
      v5 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    BpbState = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v5 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
    }
    if ( (BpbState & 2) != 0 )
      JUMPOUT(0x14042796DLL);
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v5);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( KiUserCetPl3SspCanonicalizeUpperMask )
    {
      v5 = 1703LL;
      v11 = __readmsr(0x6A7u);
      if ( HIDWORD(v11) )
      {
        v5 = HIDWORD(v11);
        if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v11)) != HIDWORD(v11) )
        {
          v5 = 1703LL;
          __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v11), v11));
        }
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v5);
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
  if ( (_BYTE)KeSmapEnabled && (v18 & 1) != 0 )
    __asm { stac }
  if ( (v19 & 0x200) != 0 )
    _enable();
  if ( (v18 & 1) != 0 )
  {
    v12 = ~(v16 & 0x3F) & v0;
    v13 = 3221225616LL;
    if ( (v12 & 1) != 0 )
    {
      if ( (v12 & 0x40) != 0 )
        v13 = 3221225618LL;
LABEL_37:
      KiExceptionDispatch(v13, 1LL, retaddr, 0LL);
      goto LABEL_38;
    }
    v13 = 3221225614LL;
    if ( (v12 & 4) != 0 )
      goto LABEL_37;
    v13 = 3221225616LL;
    if ( (v12 & 2) != 0 )
      goto LABEL_37;
    v13 = 3221225617LL;
    if ( (v12 & 8) != 0 )
      goto LABEL_37;
    v13 = 3221225619LL;
    if ( (v12 & 0x10) != 0 )
      goto LABEL_37;
    v13 = 3221225615LL;
    if ( (v12 & 0x20) != 0 )
      goto LABEL_37;
  }
LABEL_38:
  v14 = __readcr4();
  v15 = __readcr0();
  KiBugCheckDispatch(127LL, 16LL, v15, v14);
}
