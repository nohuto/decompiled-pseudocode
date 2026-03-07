void __fastcall __noreturn KiDoubleFaultAbort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm4
  __int128 v12; // xmm5
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v17; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  unsigned __int64 v20; // rax
  bool v21; // zf
  _BYTE v22[44]; // [rsp+0h] [rbp-80h] BYREF
  int v23; // [rsp+2Ch] [rbp-54h]
  __int64 v24; // [rsp+30h] [rbp-50h]
  __int64 v25; // [rsp+38h] [rbp-48h]
  __int64 v26; // [rsp+40h] [rbp-40h]
  __int64 v27; // [rsp+48h] [rbp-38h]
  __int64 v28; // [rsp+50h] [rbp-30h]
  __int64 v29; // [rsp+58h] [rbp-28h]
  __int64 v30; // [rsp+60h] [rbp-20h]
  __int128 v31; // [rsp+70h] [rbp-10h]
  __int128 v32; // [rsp+80h] [rbp+0h]
  __int128 v33; // [rsp+90h] [rbp+10h]
  __int128 v34; // [rsp+A0h] [rbp+20h]
  __int128 v35; // [rsp+B0h] [rbp+30h]
  __int128 v36; // [rsp+C0h] [rbp+40h]
  __int64 v37; // [rsp+D8h] [rbp+58h]
  __int16 v38; // [rsp+100h] [rbp+80h]
  char v39; // [rsp+170h] [rbp+F0h]
  __int64 v40; // [rsp+180h] [rbp+100h]

  v22[43] = 1;
  v24 = v4;
  v25 = a1;
  v26 = a2;
  v27 = a3;
  v28 = a4;
  v29 = v5;
  v30 = v6;
  if ( (v39 & 1) != 0 )
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
    v17 = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
    __writegsqword(0x858u, v17);
    __writegsword(0x852u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOWORD(v17) = KeGetPcr()->Prcb.BpbState;
    __writegsword(0x854u, v17);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x864u, BpbKernelSpecCtrl);
      v17 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    BpbState = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v17 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
    }
    if ( (BpbState & 2) != 0 )
      JUMPOUT(0x140425BE9LL);
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v17);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( KiUserCetPl3SspCanonicalizeUpperMask )
    {
      v17 = 1703LL;
      v20 = __readmsr(0x6A7u);
      if ( HIDWORD(v20) )
      {
        v17 = HIDWORD(v20);
        if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v20)) != HIDWORD(v20) )
        {
          v17 = 1703LL;
          __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v20), v20));
        }
      }
    }
    v21 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v38 = 0;
    if ( !v21 )
      *(double *)&v7 = KiSaveDebugRegisterState(v17);
  }
  else
  {
    __asm { rdsspq  rdx }
    v37 = _RDX;
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  v23 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v31 = v7;
  v32 = v8;
  v33 = v9;
  v34 = v10;
  v35 = v11;
  v36 = v12;
  if ( (_BYTE)KeSmapEnabled )
  {
    if ( (v39 & 1) != 0 )
      __asm { stac }
  }
  KiBugCheckDispatch(127LL, 8LL, v22, v40);
}
