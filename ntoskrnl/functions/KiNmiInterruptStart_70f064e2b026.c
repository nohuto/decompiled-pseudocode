__int64 __fastcall KiNmiInterruptStart(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  bool v16; // zf
  unsigned __int32 v17; // eax
  unsigned __int64 v18; // rdx
  int v19; // eax
  int v20; // r8d
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 v26; // xmm4
  __int128 v27; // xmm5
  __int64 v30; // rcx
  __int64 v31; // r10
  unsigned __int64 v32; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v34; // cf
  struct _KTHREAD *CurrentThread; // rcx
  int v39; // r9d
  int v40; // r8d
  int v41; // edx
  int v42; // ecx
  ULONG_PTR BugCheckParameter4[5]; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int8 v45; // [rsp+28h] [rbp-58h]
  unsigned __int8 v46; // [rsp+29h] [rbp-57h]
  char v47; // [rsp+2Bh] [rbp-55h]
  unsigned int v48; // [rsp+2Ch] [rbp-54h]
  __int64 v49; // [rsp+30h] [rbp-50h]
  __int64 v50; // [rsp+38h] [rbp-48h]
  __int64 v51; // [rsp+40h] [rbp-40h]
  __int64 v52; // [rsp+48h] [rbp-38h]
  __int64 v53; // [rsp+50h] [rbp-30h]
  __int64 v54; // [rsp+58h] [rbp-28h]
  __int64 v55; // [rsp+60h] [rbp-20h]
  unsigned __int64 v56; // [rsp+68h] [rbp-18h]
  _OWORD v57[6]; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v58; // [rsp+D0h] [rbp+50h]
  __int64 v59; // [rsp+D8h] [rbp+58h]
  __int16 v60; // [rsp+100h] [rbp+80h]
  unsigned int v61; // [rsp+140h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+168h] [rbp+E8h]
  char v63; // [rsp+170h] [rbp+F0h]

  v47 = 0;
  v49 = v8;
  v50 = a1;
  v51 = a2;
  v52 = a3;
  v53 = a4;
  v54 = v9;
  v55 = v10;
  if ( (v63 & 1) == 0 )
  {
    __asm { rdsspq  rdx }
    v59 = _RDX;
    v56 = __readmsr(0xC0000101);
    v17 = __segmentlimit(0x50u);
    if ( v16 )
    {
      v20 = (v17 & 0x3FF) << 6;
      v19 = v17 >> 14;
    }
    else
    {
      if ( (KeFeatureBits & 0x400000000LL) == 0 )
      {
        __sgdt(v57);
        v18 = *(_QWORD *)(*(_QWORD *)((char *)v57 + 2) - 8000LL);
LABEL_8:
        v21 = v18;
        v22 = HIDWORD(v18);
        __writemsr(0xC0000101, __PAIR64__(v22, v21));
        v23 = __readcr2();
        v58 = v23;
        KiSetSpecCtrlNmi(3221225729LL, v22);
        goto LABEL_20;
      }
      __asm { rdtscp }
      v19 = 1;
      v20 = 805306432;
    }
    v18 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v20 | v19]] - 384;
    goto LABEL_8;
  }
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
  ((void (*)(void))KiSetSpecCtrlNmi)();
  if ( KiUserCetPl3SspCanonicalizeUpperMask )
  {
    v30 = 1703LL;
    v32 = __readmsr(0x6A7u);
    if ( HIDWORD(v32) )
    {
      v30 = HIDWORD(v32);
      if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v32)) != HIDWORD(v32) )
      {
        v30 = 1703LL;
        __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v32), v32));
      }
    }
  }
  v16 = (*(_BYTE *)(v31 + 3) & 3) == 0;
  v60 = 0;
  if ( !v16 )
    *(double *)&v11 = KiSaveDebugRegisterState(v30);
LABEL_20:
  v48 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v57[0] = v11;
  v57[1] = v12;
  v57[2] = v13;
  v57[3] = v14;
  v57[4] = v26;
  v57[5] = v27;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)BugCheckParameter4);
  }
  __incgsdword(0x82C0u);
  if ( (_BYTE)KeSmapEnabled )
    __asm { clac }
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(15LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  v46 = CurrentIrql;
  KiMcheckFastForward((ULONG_PTR)BugCheckParameter4, 1, v24, v25);
  v34 = _bittestandset16(MK_FP(__GS__, 32806LL), 0);
  if ( v34
    || (v63 & 1) == 0
    && (unsigned __int64)KiNmiInterruptStart <= (unsigned __int64)retaddr
    && &KiNmiInterruptEnd > (_UNKNOWN *)retaddr
    || (unsigned __int64)KiNmiInterruptShadow <= (unsigned __int64)retaddr
    && &KiNmiInterruptShadowEnd > (_UNKNOWN *)retaddr )
  {
    KiBugCheckDispatch(273LL, 0LL, 0LL, 0LL);
  }
  KxNmiInterrupt();
  __writegsbyte(0x8026u, 0);
  if ( KiIrqlFlags )
    KzSetIrqlUnsafe(v46);
  else
    __writecr8(v46);
  if ( (v63 & 1) != 0 )
  {
    if ( (_BYTE)KeSmapEnabled )
      __asm { stac }
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x10000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    _mm_setcsr(v48);
    if ( v60 )
      KiRestoreDebugRegisterState(CurrentThread);
    if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x16u) )
    {
      __asm { rdsspq  rcx }
      if ( _RCX == KeGetPcr()->Prcb.KernelShadowStackInitial + 8 )
      {
        _RCX = KeGetPcr()->Prcb.TransitionShadowStack;
        __asm
        {
          rstorssp qword ptr [rcx]
          saveprevssp
        }
      }
    }
    v39 = v53;
    v40 = v52;
    __writegsbyte(0x856u, v45);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v61);
    v41 = v51;
    v42 = v50;
    if ( (KiKvaShadow & 1) == 0 )
    {
      if ( (KeGetPcr()->Prcb.BpbState & 0x100) != 0 )
        __asm { verw    [rsp+arg_18] }
      __asm
      {
        swapgs
        iretq
      }
    }
  }
  else
  {
    _mm_setcsr(v48);
    __writegsbyte(0x856u, v45);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v61);
    __writemsr(0xC0000101, v56);
    __writecr2(v58);
    v39 = v53;
    v40 = v52;
    v41 = v51;
    v42 = v50;
    if ( (KiKvaShadow & 1) == 0 )
      __asm { iretq }
  }
  return KiKernelIstExit(v42, v41, v40, v39, a5, a6, a7, a8);
}
