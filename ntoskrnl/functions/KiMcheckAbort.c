void __fastcall KiMcheckAbort(
        __int64 a1,
        __int64 _RDX,
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
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // r8d
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v25; // xmm4
  __int128 v26; // xmm5
  __int64 v28; // rcx
  __int64 v29; // r10
  unsigned __int64 v30; // rax
  unsigned __int8 CurrentIrql; // al
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  int v35; // r8d
  int v36; // r9d
  unsigned __int64 InitialStack; // rcx
  unsigned __int64 v38; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 (__fastcall **v42)(); // rcx
  __int64 (__fastcall *v43)(); // rax
  bool v44; // zf
  _KIDTENTRY64 *IdtBase; // rax
  int v46; // edx
  int v47; // ecx
  __m128i v48; // [rsp+0h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4[5]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int8 v50; // [rsp+38h] [rbp-58h]
  unsigned __int8 v51; // [rsp+39h] [rbp-57h]
  char v52; // [rsp+3Bh] [rbp-55h]
  unsigned int v53; // [rsp+3Ch] [rbp-54h]
  __int64 v54; // [rsp+40h] [rbp-50h]
  __int64 v55; // [rsp+48h] [rbp-48h]
  __int64 v56; // [rsp+50h] [rbp-40h]
  __int64 v57; // [rsp+58h] [rbp-38h]
  __int64 v58; // [rsp+60h] [rbp-30h]
  __int64 v59; // [rsp+68h] [rbp-28h]
  __int64 v60; // [rsp+70h] [rbp-20h]
  unsigned __int64 v61; // [rsp+78h] [rbp-18h]
  _OWORD v62[6]; // [rsp+80h] [rbp-10h] BYREF
  unsigned __int64 v63; // [rsp+E0h] [rbp+50h]
  __int64 v64; // [rsp+E8h] [rbp+58h]
  __int16 v65; // [rsp+110h] [rbp+80h]
  unsigned int v66; // [rsp+150h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+178h] [rbp+E8h]
  unsigned __int16 v68; // [rsp+180h] [rbp+F0h]
  unsigned int v69; // [rsp+188h] [rbp+F8h]
  unsigned __int64 v70; // [rsp+190h] [rbp+100h]
  unsigned __int16 v71; // [rsp+198h] [rbp+108h]

  v52 = 0;
  v54 = v8;
  v55 = a1;
  v56 = _RDX;
  v57 = a3;
  v58 = a4;
  v59 = v9;
  v60 = v10;
  if ( (v68 & 1) == 0 )
  {
    __asm { rdsspq  rdx }
    v64 = _RDX;
    v61 = __readmsr(0xC0000101);
    v16 = __segmentlimit(0x50u);
    if ( v44 )
    {
      v19 = (v16 & 0x3FF) << 6;
      v18 = v16 >> 14;
    }
    else
    {
      if ( (KeFeatureBits & 0x400000000LL) == 0 )
      {
        __sgdt(v62);
        v17 = *(_QWORD *)(*(_QWORD *)((char *)v62 + 2) - 8000LL);
LABEL_8:
        v20 = v17;
        v21 = HIDWORD(v17);
        __writemsr(0xC0000101, __PAIR64__(v21, v20));
        v22 = __readcr2();
        v63 = v22;
        KiSetSpecCtrlNmi(3221225729LL, v21);
        goto LABEL_20;
      }
      __asm { rdtscp }
      v18 = 1;
      v19 = 805306432;
    }
    v17 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v19 | v18]] - 384;
    goto LABEL_8;
  }
  if ( (KiKvaShadow & 1) == 0 )
    __asm { swapgs }
  _mm_lfence();
  _RCX = KeGetPcr()->Prcb.KernelShadowStackInitial;
  if ( _RCX )
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
  KiSetSpecCtrlNmi(_RCX, _RDX);
  if ( KiUserCetPl3SspCanonicalizeUpperMask )
  {
    v28 = 1703LL;
    v30 = __readmsr(0x6A7u);
    if ( HIDWORD(v30) )
    {
      v28 = HIDWORD(v30);
      if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v30)) != HIDWORD(v30) )
      {
        v28 = 1703LL;
        __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v30), v30));
      }
    }
  }
  v44 = (*(_BYTE *)(v29 + 3) & 3) == 0;
  v65 = 0;
  if ( !v44 )
    *(double *)&v11 = KiSaveDebugRegisterState(v28);
LABEL_20:
  v53 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v62[0] = v11;
  v62[1] = v12;
  v62[2] = v13;
  v62[3] = v14;
  v62[4] = v25;
  v62[5] = v26;
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
  v51 = CurrentIrql;
  _enable();
  KiMcheckFastForward((ULONG_PTR)BugCheckParameter4, 0, v23, v24);
  __incgsbyte(0x8027u);
  if ( (v68 & 1) == 0 )
  {
    v33 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( v70 <= v33 )
    {
      v32 = 24576LL;
      if ( (KiKvaShadow & 1) != 0 )
        v32 = 464LL;
      if ( v70 > v33 - v32 )
        goto LABEL_38;
    }
    if ( (KiKvaShadow & 1) != 0 )
    {
      v34 = *(_QWORD *)(*(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52) + 8LL);
      if ( v70 <= v34 && v70 > v34 - 24544 )
      {
LABEL_38:
        v71 |= 4u;
        _InterlockedIncrement64(&KiMcheckNmiBlocking);
      }
    }
    if ( *(_BYTE *)retaddr == 0xF4 && *(_WORD *)((char *)retaddr - 1) == 0xF4FB )
    {
      v69 &= ~0x200u;
      retaddr = (__int64 (__fastcall *)())((char *)retaddr - 1);
      _InterlockedIncrement64(&KiMcheckStiBlocking);
    }
  }
  KxMcheckAbort(BugCheckParameter4, v32, &v48);
  if ( (v48.m128i_i8[0] & 1) != 0 )
  {
    if ( (v48.m128i_i8[0] & 0x10) != 0 )
      InitialStack = v70 & 0xFFFFFFFFFFFFFFF0uLL;
    else
      InitialStack = (unsigned __int64)KeGetCurrentThread()->InitialStack;
    *(__m128i *)(InitialStack - 416) = _mm_load_si128(&v48);
    v52 = 1;
  }
  __writegsbyte(0x8027u, KeGetPcr()->Prcb.MceActive - 1);
  _disable();
  if ( KiIrqlFlags )
    KzSetIrqlUnsafe(v51);
  else
    __writecr8(v51);
  _disable();
  if ( (v68 & 1) != 0 )
  {
    if ( (_BYTE)KeSmapEnabled )
      __asm { stac }
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x10000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    _mm_setcsr(v53);
    if ( v65 )
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
    v36 = v58;
    v35 = v57;
    if ( !v52 )
    {
LABEL_70:
      __writegsbyte(0x856u, v50);
      if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
        __writemsr(0x48u, v66);
      goto LABEL_72;
    }
    v38 = (unsigned __int64)KeGetCurrentThread()->InitialStack;
  }
  else
  {
    if ( !v52 )
      goto LABEL_76;
    v38 = v70 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v42 = (__int64 (__fastcall **)())(v38 - 40);
  *v42 = retaddr;
  v42[1] = (__int64 (__fastcall *)())v68;
  v42[2] = (__int64 (__fastcall *)())v69;
  v42[3] = (__int64 (__fastcall *)())v70;
  v42[4] = (__int64 (__fastcall *)())v71;
  if ( (v68 & 1) == 0 )
  {
    retaddr = KxMcheckAlternateReturn;
LABEL_76:
    _mm_setcsr(v53);
    __writegsbyte(0x856u, v50);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v66);
    __writemsr(0xC0000101, v61);
    __writecr2(v63);
    v36 = v58;
    v35 = v57;
    v46 = v56;
    v47 = v55;
    if ( (KiKvaShadow & 1) == 0 )
      goto LABEL_75;
LABEL_73:
    KiKernelIstMceExit(v47, v46, v35, v36, a5, a6, a7, a8);
    return;
  }
  v43 = KxMcheckAlternateReturn;
  v44 = (KiKvaShadow & 1) == 0;
  if ( (KiKvaShadow & 1) != 0 )
  {
    IdtBase = KeGetPcr()->IdtBase;
    *(&IdtBase[1118].Alignment + 1) = KeGetPcr()->Prcb.KernelDirectoryTableBase & 0x7FFFFFFFFFFFFFFFLL;
    IdtBase[1118].Alignment = (unsigned __int64)KeGetPcr();
    IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 16856);
    IdtBase->Alignment = (unsigned __int64)*v42;
    *(_KIDTENTRY64 *)((char *)IdtBase + 8) = *(_KIDTENTRY64 *)(v42 + 1);
    *(&IdtBase[1].Alignment + 1) = (unsigned __int64)v42[3];
    IdtBase[2].Alignment = (unsigned __int64)v42;
    v43 = KxMcheckAlternateReturnShadow;
  }
  retaddr = v43;
  if ( v44 )
    goto LABEL_70;
LABEL_72:
  v46 = v56;
  v47 = v55;
  if ( (KiKvaShadow & 1) != 0 )
    goto LABEL_73;
  __asm { swapgs }
  _mm_lfence();
LABEL_75:
  KiMcheckExit();
}
