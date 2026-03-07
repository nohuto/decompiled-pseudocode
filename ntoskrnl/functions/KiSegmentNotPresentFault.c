void __fastcall __noreturn KiSegmentNotPresentFault(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+E0h]
  __int64 v12; // [rsp+168h] [rbp+E8h]
  char v13; // [rsp+170h] [rbp+F0h]
  __int16 v14; // [rsp+178h] [rbp+F8h]

  if ( (v13 & 1) != 0 )
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
    a1 = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
    __writegsqword(0x858u, a1);
    __writegsword(0x852u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOWORD(a1) = KeGetPcr()->Prcb.BpbState;
    __writegsword(0x854u, a1);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x864u, BpbKernelSpecCtrl);
      a1 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    BpbState = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      a1 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
    }
    if ( (BpbState & 2) != 0 )
      JUMPOUT(0x140426669LL);
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(a1);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( KiUserCetPl3SspCanonicalizeUpperMask )
    {
      a1 = 1703LL;
      v7 = __readmsr(0x6A7u);
      if ( HIDWORD(v7) )
      {
        a1 = HIDWORD(v7);
        if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v7)) != HIDWORD(v7) )
        {
          a1 = 1703LL;
          __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v7), v7));
        }
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(a1);
  }
  else
  {
    __asm { rdsspq  rdx }
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
    {
      a1 = 72LL;
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    }
    else
    {
      _mm_lfence();
    }
  }
  _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (_BYTE)KeSmapEnabled && (v13 & 1) != 0 )
    __asm { stac }
  LOBYTE(v8) = (_BYTE)retaddr;
  if ( ((unsigned __int8)retaddr & 4) != 0 )
    a1 = _InterlockedExchange64(MK_FP(__GS__, 36328LL), 0LL);
  if ( (v14 & 0x200) != 0 )
    _enable();
  if ( (v8 & 4) != 0 )
    KiExceptionDispatch(268435462LL, 3LL, v12, a1);
  if ( (v13 & 1) != 0 )
    KiExceptionDispatch(268435463LL, 2LL, v12, (unsigned __int16)retaddr | 3u);
  v9 = (unsigned int)retaddr;
  v10 = __readcr0();
  KiBugCheckDispatch(127LL, 11LL, v10, v9);
}
