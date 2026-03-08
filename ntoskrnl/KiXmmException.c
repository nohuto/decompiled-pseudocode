/*
 * XREFs of KiXmmException @ 0x140428C40
 * Callers:
 *     KiXmmExceptionShadow @ 0x140AF3AC0 (KiXmmExceptionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140416550 (KiSaveDebugRegisterState.c)
 *     KiXmmException @ 0x140428C40 (KiXmmException.c)
 *     KiBugCheckDispatch @ 0x14042BEC0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x14042BF40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14042C900 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __noreturn KiXmmException()
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v4; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  unsigned __int64 v7; // rax
  __int16 v8; // ax
  __int64 v9; // rdx
  void *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int16 v15; // [rsp+2Ch] [rbp-54h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  __int16 v17; // [rsp+170h] [rbp+F0h]
  __int16 v18; // [rsp+178h] [rbp+F8h]

  if ( (v17 & 1) != 0 )
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
      JUMPOUT(0x140428EADLL);
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
  v15 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (_BYTE)KeSmapEnabled && (v17 & 1) != 0 )
    __asm { stac }
  if ( (v18 & 0x200) != 0 )
    _enable();
  v8 = ~((v15 >> 7) & 0x3F) & v15;
  v9 = 2LL;
  v10 = retaddr;
  v11 = 0LL;
  if ( v17 == 35 )
    goto LABEL_36;
  v12 = 3221225616LL;
  if ( (v8 & 1) != 0
    || (v12 = 3221225614LL, (v8 & 4) != 0)
    || (v12 = 3221225616LL, (v8 & 2) != 0)
    || (v12 = 3221225617LL, (v8 & 8) != 0)
    || (v12 = 3221225619LL, (v8 & 0x10) != 0)
    || (v12 = 3221225615LL, (v8 & 0x20) != 0) )
  {
    while ( 1 )
    {
      LOBYTE(v8) = KiExceptionDispatch(v12, v9, v10, v11);
LABEL_36:
      v12 = 3221226165LL;
      if ( (v8 & 1) == 0 && (v8 & 4) == 0 && (v8 & 2) == 0 )
      {
        v12 = 3221226164LL;
        if ( (v8 & 8) == 0 && (v8 & 0x10) == 0 && (v8 & 0x20) == 0 )
          break;
      }
    }
  }
  v13 = __readcr4();
  v14 = __readcr0();
  KiBugCheckDispatch(127LL, 9LL, v14, v13);
}
