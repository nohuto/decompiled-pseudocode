/*
 * XREFs of MiResolveProtoPteFault @ 0x140215390
 * Callers:
 *     MiDispatchFault @ 0x14020EEC0 (MiDispatchFault.c)
 * Callees:
 *     MiResolveDemandZeroFault @ 0x14020FB10 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216750 (MiResolveTransitionFault.c)
 *     MiGetPfnPriority @ 0x140218590 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x140218D20 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiWriteValidPteVolatile @ 0x140240CE0 (MiWriteValidPteVolatile.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x14025B070 (MiLocateAddress.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiReadPteShadow @ 0x1402860B0 (MiReadPteShadow.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A6480 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiIsPrototypePteVadLookup @ 0x1402E3470 (MiIsPrototypePteVadLookup.c)
 *     MiAllowGuardFault @ 0x1402FB414 (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x1402FB490 (KeInvalidAccessAllowed.c)
 *     MiChargePartitionResidentAvailable @ 0x140308418 (MiChargePartitionResidentAvailable.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     HvlNotifyLongSpinWait @ 0x14038FA40 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390820 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F3F5C (MiBadRefCount.c)
 */

__int64 __fastcall MiResolveProtoPteFault(__int64 a1, unsigned __int64 Flink, _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned __int64 *v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  struct _LIST_ENTRY *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 Process; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v19; // r13
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  bool v23; // bl
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // r11
  unsigned __int64 v27; // rdx
  ULONG_PTR *v28; // rdi
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v30; // ett
  _BYTE *v31; // rdi
  char *v32; // r15
  char v33; // al
  unsigned int v34; // ebx
  __int64 v35; // r8
  unsigned __int64 *v36; // rdi
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rax
  __int64 v39; // r14
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rdx
  __int64 v42; // rdi
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned int PfnPriority; // eax
  __int64 v48; // rdx
  unsigned __int64 v49; // r8
  __int64 result; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r11
  __int64 v54; // r11
  __int64 v55; // r10
  __int64 v56; // r10
  int v57; // r14d
  __int16 v58; // dx
  __int64 Address; // rax
  char v60; // r10
  __int64 v61; // r11
  int v62; // ecx
  __int64 v63; // r11
  bool v64; // zf
  __int16 v65; // dx
  __int64 v66; // r8
  __int64 v67; // rax
  int v68; // edi
  unsigned __int64 v69; // rdx
  char v70; // al
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int64 v74; // r10
  __int64 v75; // r8
  __int64 v76; // rbx
  struct _KPRCB *v77; // r8
  __int64 v78; // rdx
  signed __int32 v79; // eax
  __int64 v80; // r12
  unsigned __int64 v81; // r15
  unsigned __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  unsigned __int64 v86; // rax
  __int64 v87; // r14
  __int64 v88; // r13
  unsigned __int64 v89; // r8
  struct _LIST_ENTRY *v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rdx
  unsigned int v93; // ebx
  unsigned __int64 v94; // rbx
  unsigned __int64 *v95; // rdi
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int16 v99; // ax
  __int64 v100; // rbx
  __int64 v101; // rdx
  unsigned __int64 v102; // rbx
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  char v105; // al
  int v106; // r15d
  unsigned int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 *v112; // r11
  unsigned __int64 v113; // rbx
  __int64 v114; // rax
  __int64 v115; // [rsp+20h] [rbp-D8h]
  __int64 v116; // [rsp+30h] [rbp-C8h]
  __int64 v117; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v118; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v119; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v120; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v121; // [rsp+58h] [rbp-A0h]
  __int16 *v122; // [rsp+60h] [rbp-98h]
  unsigned __int64 v123; // [rsp+68h] [rbp-90h]
  unsigned __int64 v124; // [rsp+70h] [rbp-88h]
  int v125; // [rsp+78h] [rbp-80h] BYREF
  int v126; // [rsp+7Ch] [rbp-7Ch] BYREF
  int v127; // [rsp+80h] [rbp-78h] BYREF
  int v128; // [rsp+84h] [rbp-74h] BYREF
  unsigned __int64 *v129; // [rsp+88h] [rbp-70h]
  _BYTE *v130; // [rsp+90h] [rbp-68h]
  _QWORD *v131; // [rsp+98h] [rbp-60h]
  __int64 v132; // [rsp+A0h] [rbp-58h]
  __int64 v133; // [rsp+A8h] [rbp-50h]
  _BYTE *v134; // [rsp+B0h] [rbp-48h]
  struct _LIST_ENTRY *v136; // [rsp+108h] [rbp+10h]

  v136 = (struct _LIST_ENTRY *)Flink;
  v120 = 0LL;
  *a3 = 0LL;
  v132 = *(_QWORD *)(a1 + 56);
  v124 = *(_QWORD *)a1;
  v129 = (unsigned __int64 *)(((v124 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = *(_QWORD *)(a1 + 16);
  v117 = v5;
  v119 = v5 & 1;
  if ( (v5 & 1) == 0
    || (Flink = v5 & 0xFFFFFFFFFFFFFFFEuLL,
        v123 = v5 & 0xFFFFFFFFFFFFFFFEuLL,
        *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
  {
    v123 = 0LL;
  }
  v121 = *(_QWORD *)(a1 + 96);
  v6 = (unsigned __int64 *)(((v121 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v118 = *v6;
  v7 = v118 & 1;
  do
  {
    if ( !v7 )
      return 3221225494LL;
    v8 = v118;
    if ( (v118 & 0x200) != 0 )
      return 3221225494LL;
    v9 = MiPteInShadowRange(&v118, Flink);
    if ( v9
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v10 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v118 >> 3) & 0x1FF));
        if ( (v10 & 0x20) != 0 )
          v8 |= 0x20uLL;
        if ( (v10 & 0x42) != 0 )
          v8 |= 0x42uLL;
      }
      else
      {
        v8 = v118;
      }
    }
    v11 = (v8 >> 12) & 0xFFFFFFFFFLL;
    v12 = 48 * v11;
    v133 = 48 * v11;
  }
  while ( (*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v125 = 0;
  v116 = v12 - 0x58000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v125);
    while ( *(__int64 *)(v12 - 0x57FFFFFFFE8LL) < 0 );
  }
  v13 = *v6;
  v118 = v13;
  if ( (v13 & 1) == 0 || (v13 & 0x200) != 0 )
    goto LABEL_339;
  if ( v9
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v118 >> 3) & 0x1FF));
      if ( (v15 & 0x20) != 0 )
        v13 |= 0x20uLL;
      if ( (v15 & 0x42) != 0 )
        v13 |= 0x42uLL;
    }
    else
    {
      v13 = v118;
    }
  }
  if ( v11 != ((v13 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_339:
    _InterlockedAnd64((volatile signed __int64 *)(v12 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  v16 = v12 - 0x58000000000LL;
  Process = 0x1000000000LL;
  CurrentPrcb = (struct _KPRCB *)0xFFFFFA8000000008LL;
  v19 = 1LL;
  v20 = *(_QWORD *)(v116 + 40);
  v21 = 0xFFFFFA8000000020uLL;
  if ( (v20 & 0x1000000000LL) != 0 || (v20 & 0x2000000000000LL) != 0 )
    goto LABEL_62;
  Process = *(unsigned __int16 *)(v12 - 0x57FFFFFFFE0LL);
  v22 = *(_QWORD *)(v12 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)Process )
  {
    if ( (_WORD)Process != 1 )
    {
      if ( (_WORD)Process != 2 || !v22 )
        goto LABEL_62;
LABEL_44:
      if ( (*(_BYTE *)(v12 - 0x57FFFFFFFDELL) & 8) == 0 )
        goto LABEL_62;
      goto LABEL_45;
    }
    if ( !v22 )
      goto LABEL_44;
  }
LABEL_45:
  v23 = 0;
  if ( (unsigned int)MI_PFN_IS_PROTO(v116) && (*(_DWORD *)(v12 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
  {
    v23 = 1;
  }
  else
  {
    v21 = 0xFFFFF68000000000uLL;
    v27 = *(_QWORD *)(v12 + v24) | 0x8000000000000000uLL;
    if ( v27 <= 0xFFFFF6BFFFFFFF78uLL && v27 >= 0xFFFFF68000000000uLL )
      v23 = (*(_BYTE *)(v12 + v26) & 0x20) != 0;
  }
  v28 = *(ULONG_PTR **)(qword_140C4E648 + 8 * ((v25 >> 39) & 0x3FF));
  if ( v23 )
  {
    v122 = (__int16 *)(v12 - 0x57FFFFFFFE0LL);
    if ( !(unsigned int)MiChargeCommit(v28, 1LL, 4LL) )
      goto LABEL_63;
  }
  if ( v28 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable )
    {
      v20 = 0xFFFFFFFFLL;
      do
      {
        if ( CachedResidentAvailable == -1 )
          break;
        Process = (unsigned int)(CachedResidentAvailable - 1);
        v30 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    Process,
                                    CachedResidentAvailable);
        if ( v30 == CachedResidentAvailable )
          goto LABEL_62;
      }
      while ( CachedResidentAvailable );
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable(v28, 1LL, 0xFFFFFFFFLL, v21) )
  {
    v122 = (__int16 *)(v12 - 0x57FFFFFFFE0LL);
    if ( v23 )
    {
      MiReturnCommit(v28, 1LL);
      v122 = (__int16 *)(v12 - 0x57FFFFFFFE0LL);
    }
    goto LABEL_63;
  }
LABEL_62:
  ++*(_WORD *)(v12 - 0x57FFFFFFFE0LL);
  v122 = (__int16 *)(v12 - 0x57FFFFFFFE0LL);
  v16 = v12 - 0x58000000000LL;
LABEL_63:
  v131 = (_QWORD *)(v12 - 0x57FFFFFFFF8LL);
  v31 = (_BYTE *)(*(_QWORD *)(v12 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
  v130 = v31;
  v32 = (char *)(v12 - 0x57FFFFFFFDELL);
  v33 = *(_BYTE *)(v12 - 0x57FFFFFFFDELL);
  v134 = (_BYTE *)(v12 - 0x57FFFFFFFDELL);
  if ( (v33 & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
      v34 = 0;
      while ( (*v32 & 0x20) != 0 )
      {
        if ( (++v34 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, CurrentPrcb, v20, v21, v115) )
        {
          HvlNotifyLongSpinWait(v34);
        }
        else
        {
          _mm_pause();
        }
      }
      MiLockPageInline(v16, CurrentPrcb, v20);
      v33 = *v32;
    }
    while ( (*v32 & 0x20) != 0 );
    v31 = v130;
    v19 = 1LL;
  }
  *v32 = v33 | 0x20;
  if ( (*(_QWORD *)(v12 - 0x57FFFFFFFE8LL) & 0x4000000000000000LL) == 0 && (*v31 & 0x20) == 0 )
    MiWriteValidPteVolatile(v31, 1LL, 0LL);
  v35 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  v36 = (unsigned __int64 *)v121;
  while ( 1 )
  {
    while ( 1 )
    {
      v37 = *v36;
      if ( (*v36 & 1) == 0 )
        break;
      v38 = *v36;
LABEL_87:
      Process = *(_QWORD *)(48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL);
      if ( (Process & 0x4000000000000LL) != 0 )
      {
        v39 = 48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v126 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v126);
            while ( *(__int64 *)(v39 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
          v35 = 0x7FFFFFFFFFFFFFFFLL;
        }
        if ( *v36 == v37 )
          goto LABEL_95;
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v37 & 0x400) != 0 || (v37 & 0x800) == 0 )
      break;
    if ( !v37 || !qword_140C4DF40 || (v37 & qword_140C4DF40) != 0 )
    {
      v38 = *v36;
      if ( qword_140C4DF40 && (v37 & 0x10) == 0 )
        v38 = v37 & ~qword_140C4DF40;
      goto LABEL_87;
    }
  }
  v39 = 0LL;
LABEL_95:
  v40 = (unsigned __int64)v36;
  v41 = 0xFFFFF6FB7DBED000uLL;
  v42 = *v36;
  v43 = v42;
  v44 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v40 >= 0xFFFFF6FB7DBED000uLL && v40 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL, 0x7FFFFFFFFFFFFFFFLL, 0xFFFFF6FB7DBED7F8uLL)
      && (v42 & 1) != 0
      && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      v45 = *(_QWORD *)(Process + 1928);
      if ( v45 )
      {
        v43 = v42 | 0x20;
        v46 = *(_QWORD *)(v45 + 8 * ((v40 >> 3) & 0x1FF));
        Process = (unsigned __int8)v46;
        LOBYTE(Process) = v46 & 0x20;
        if ( (v46 & 0x20) == 0 )
          v43 = v42;
        if ( (v46 & 0x42) != 0 )
          v43 |= 0x42uLL;
      }
    }
    v41 = 0xFFFFF6FB7DBED000uLL;
  }
  v120 = v43;
  if ( (v43 & 1) == 0 )
  {
    if ( !v43 )
    {
LABEL_185:
      LOBYTE(v41) = 17;
      MiUnlockProtoPoolPage(v116, v41);
      return 3221225477LL;
    }
    LOBYTE(v80) = 0;
    v81 = *v129;
    if ( (unsigned __int64)v129 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v129 <= v44 )
    {
      if ( (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL, v129, v44)
        && (v81 & 1) != 0
        && ((v81 & 0x20) == 0 || (v81 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v83 = *(_QWORD *)(Process + 1928);
        if ( v83 )
        {
          v84 = *(_QWORD *)(v83 + 8 * ((v82 >> 3) & 0x1FF));
          v85 = v81 | 0x20;
          Process = (unsigned __int8)v84;
          LOBYTE(Process) = v84 & 0x20;
          if ( (v84 & 0x20) == 0 )
            v85 = v81;
          v81 = v85;
          if ( (v84 & 0x42) != 0 )
            v81 = v85 | 0x42;
        }
      }
      v41 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (v81 & 0x400) != 0 )
    {
      v86 = v81;
      if ( qword_140C4DF40 && (v81 & 0x10) == 0 )
        v86 = v81 & ~qword_140C4DF40;
      Process = 0xFFFFFFFFLL;
      if ( HIDWORD(v86) == 0xFFFFFFFF )
      {
        v87 = a1;
        v80 = (v81 >> 5) & 0x1F;
        if ( ((v81 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
          goto LABEL_337;
        v88 = v119;
        v41 = (unsigned __int64)v136;
LABEL_252:
        v99 = v43;
        if ( qword_140C4DF40 && (v43 & 0x10) == 0 )
          v99 = v43 & ~(_WORD)qword_140C4DF40;
        if ( (v99 & 0x400) == 0
          && (v99 & 0x800) == 0
          && (v99 & 4) == 0
          && (v80 & 5) == 5
          && (v41 || (((unsigned __int8)MI_READ_PTE_LOCK_FREE(&v120) >> 5) & 5) != 4)
          && ((*(_BYTE *)(v132 + 184) & 7) != 0 || !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12])
          && ((MiFlags & 0x10000) == 0 || v124 < 0xFFFF800000000000uLL || (v80 & 2) == 0) )
        {
          v100 = v133;
          v128 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v100 - 0x57FFFFFFFE8LL), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v128);
            while ( *(__int64 *)(v100 - 0x57FFFFFFFE8LL) < 0 );
          }
          *v134 &= ~0x20u;
          MiRemoveLockedPageChargeAndDecRef(v116);
          _InterlockedAnd64((volatile signed __int64 *)(v100 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v123 )
          {
            if ( !v88 )
              return 0LL;
            v102 = v117 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( *(_BYTE *)(v117 & 0xFFFFFFFFFFFFFFFEuLL) != 1 || (*(_DWORD *)(v102 + 80) & 0x4000) == 0 )
              return 0LL;
            v103 = v117;
          }
          else
          {
            v103 = v117;
            v102 = v117 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v88 )
          {
            if ( *(_BYTE *)v102 != 1 && *(_BYTE *)v102 != 3 && *(_BYTE *)v102 != 6 )
              goto LABEL_285;
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(v103, 0LL) != 1 )
          {
            goto LABEL_285;
          }
          if ( (!v88 || *(_BYTE *)v102 != 6) && v124 >= 0xFFFF800000000000uLL )
            return 3221225477LL;
LABEL_285:
          if ( (v81 & 0x400) == 0 )
            goto LABEL_290;
          v104 = v81;
          if ( qword_140C4DF40 && (v81 & 0x10) == 0 )
            v104 = v81 & ~qword_140C4DF40;
          if ( HIDWORD(v104) != 0xFFFFFFFF )
          {
LABEL_290:
            v81 = v43;
            if ( (unsigned int)MiPteInShadowRange(&v120, v101) )
              v81 = MiReadPteShadow(&v120, v43);
          }
          v105 = v81 >> 5;
          v106 = v105 & 0x18;
          v107 = v105 & 2 | 4;
          if ( v106 == 8 )
          {
            v107 |= 8u;
          }
          else if ( v106 == 24 )
          {
            v107 |= 0x18u;
          }
          v108 = MiSwizzleInvalidPte(32LL * v107);
          v112 = (__int64 *)v129;
          if ( (unsigned __int64)v129 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v129 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)MiPteHasShadow(v109, v108, v110, v111) )
            {
              if ( !HIBYTE(word_140C4E008) && (v108 & 1) != 0 )
                v108 |= 0x8000000000000000uLL;
              *v112 = v108;
              MiWritePteShadow(v112, v108);
              return MiResolveDemandZeroFault((unsigned __int64 *)v87, (unsigned __int64)v112, 0LL, (__int64)v136);
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v108 & 1) != 0 )
            {
              v108 |= 0x8000000000000000uLL;
            }
          }
          *v112 = v108;
          return MiResolveDemandZeroFault((unsigned __int64 *)v87, (unsigned __int64)v112, 0LL, (__int64)v136);
        }
        if ( (v43 & 0x400) != 0 )
        {
          if ( (*(_BYTE *)(v87 + 69) & 8) == 0 )
            return MiResolveMappedFileFault(v87, v40, v116, a3);
          goto LABEL_337;
        }
        if ( (v43 & 0x800) != 0 )
          return MiResolveTransitionFault(v87, v40, v116, v136, a3);
        if ( (unsigned int)MiPteInShadowRange(&v120, v41) )
          LOBYTE(v43) = MiReadPteShadow(&v120, v43);
        if ( (v43 & 4) == 0 )
        {
          if ( v123 )
          {
            if ( !v88
              || (v113 = v117 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v117 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
              || (*(_DWORD *)(v113 + 80) & 0x4000) == 0 )
            {
              LOBYTE(v41) = 17;
              MiUnlockProtoPoolPage(v116, v41);
              return 0LL;
            }
            v114 = v117;
          }
          else
          {
            v114 = v117;
            v113 = v117 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v88 )
          {
            if ( *(_BYTE *)v113 != 1 && *(_BYTE *)v113 != 3 && *(_BYTE *)v113 != 6 )
              return MiResolveDemandZeroFault((unsigned __int64 *)v87, v121, v116, (__int64)v136);
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(v114, 0LL) != 1 )
          {
            return MiResolveDemandZeroFault((unsigned __int64 *)v87, v121, v116, (__int64)v136);
          }
          if ( (!v88 || *(_BYTE *)v113 != 6) && v124 >= 0xFFFF800000000000uLL )
          {
            if ( !(unsigned int)MiIsPrototypePteVadLookup(v81) )
              v81 = MI_READ_PTE_LOCK_FREE(&v120);
            if ( ((v81 >> 5) & 0x18) == 0x10 )
              goto LABEL_185;
          }
          return MiResolveDemandZeroFault((unsigned __int64 *)v87, v121, v116, (__int64)v136);
        }
        if ( (*(_BYTE *)(v87 + 69) & 8) == 0 )
          return MiResolvePageFileFault(v87, v40, v116, a3);
LABEL_337:
        LOBYTE(v41) = 17;
        MiUnlockProtoPoolPage(v116, v41);
        return 3221226548LL;
      }
    }
    if ( (v81 & 8) != 0 )
    {
      v41 = (unsigned __int64)v136;
LABEL_250:
      v88 = v119;
      goto LABEL_251;
    }
    v80 = (v43 >> 5) & 0x1F;
    v89 = ((v43 >> 5) & 0x1F) >> 3;
    if ( (_DWORD)v89 == 2 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
      goto LABEL_337;
    if ( v40 >= 0xFFFFF6FB7DBED000uLL
      && v40 <= v44
      && (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL, v89, v44) )
    {
      if ( (v42 & 1) == 0 )
        goto LABEL_225;
      if ( (v42 & 0x20) == 0 || (v42 & 0x42) == 0 )
      {
        v90 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v90 )
        {
          v91 = *((_QWORD *)&v90->Flink + ((v40 >> 3) & 0x1FF));
          v92 = v42 | 0x20;
          if ( (v91 & 0x20) == 0 )
            v92 = v42;
          v42 = v92;
          if ( (v91 & 0x42) != 0 )
            v42 = v92 | 0x42;
        }
      }
    }
    if ( (v42 & 1) != 0 )
    {
      v41 = (unsigned __int64)v136;
      if ( v136 && (v42 & 0xA00) == 0 )
      {
        v93 = -1073741819;
LABEL_245:
        if ( v39 )
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v41) = 17;
        MiUnlockProtoPoolPage(v116, v41);
        return v93;
      }
      goto LABEL_250;
    }
LABEL_225:
    v41 = (unsigned __int64)v136;
    if ( !v136 )
      LOBYTE(v19) = 0;
    if ( *((char *)&MiReadWrite + ((unsigned __int8)v43 >> 5)) - (char)v19 < 10 )
    {
      v93 = -1073741819;
      goto LABEL_245;
    }
    v88 = v119;
    if ( (_DWORD)v89 != 2 || v119 && *(_BYTE *)(v117 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v40 = v121;
LABEL_251:
      v87 = a1;
      goto LABEL_252;
    }
    if ( !(unsigned int)MiAllowGuardFault(v117) )
    {
      v93 = -1073741819;
      goto LABEL_245;
    }
    v94 = v42 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v43 >> 5) & 0xF));
    v95 = (unsigned __int64 *)v121;
    if ( (unsigned int)MiPteInShadowRange(v121, v41) )
    {
      if ( (unsigned int)MiPteHasShadow(v96, v41, v97, v98) )
      {
        if ( !HIBYTE(word_140C4E008) && (v94 & 1) != 0 )
          v94 |= 0x8000000000000000uLL;
        *v95 = v94;
        MiWritePteShadow(v95, v94);
        goto LABEL_244;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v94 & 1) != 0 )
      {
        v94 |= 0x8000000000000000uLL;
      }
    }
    *v95 = v94;
LABEL_244:
    v93 = -2147483647;
    goto LABEL_245;
  }
  if ( v123 )
  {
    PfnPriority = MiGetPfnPriority(v39, *(_DWORD *)(v123 + 80) & 7, v35, v44);
    if ( (unsigned int)v48 > PfnPriority )
      *(_BYTE *)(v39 + 35) = v48 | *(_BYTE *)(v39 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), v49);
    LOBYTE(v48) = 17;
    MiUnlockProtoPoolPage(v116, v48);
    return 0LL;
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(v39) )
  {
    v52 = *(_QWORD *)(v39 + 16);
    if ( (v52 & 0x400) != 0 && ((*(_QWORD *)(v39 + 40) >> 60) & 7) != 3 )
    {
      v53 = *(_QWORD *)(v39 + 16);
      if ( qword_140C4DF40 && (v52 & 0x10) == 0 )
        v53 = ~qword_140C4DF40 & v52;
      v54 = v53 >> 16;
      if ( (*(_DWORD *)(*(_QWORD *)v54 + 56LL) & 0x20) != 0 )
      {
        v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v54 + 96LL) + 40LL);
        if ( v55 )
        {
          if ( (v55 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v55 & 3) != 2 )
          {
            if ( v124 >= 0xFFFF800000000000uLL )
            {
              if ( (MiFlags & 0x10000) == 0 || (v52 & 0x40) == 0 )
                goto LABEL_125;
LABEL_138:
              _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              LOBYTE(v51) = 17;
              MiUnlockProtoPoolPage(v116, v51);
              return 3221226536LL;
            }
            Address = MiLocateAddress(v124);
            v51 = Address;
            if ( !Address )
              goto LABEL_138;
            v62 = *(_DWORD *)(Address + 48);
            if ( (v62 & 0x70) != 0x20 )
              goto LABEL_138;
            if ( (v62 & 0xF80) != 0x80
              && ((*(_DWORD *)(Address + 64) & 0x8000000) == 0 || (v60 & 4) != 0)
              && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v61 + 34) & 2) == 0) )
            {
              goto LABEL_138;
            }
          }
        }
      }
    }
  }
LABEL_125:
  v56 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v39 + 24) ^= (*(_QWORD *)(v39 + 24) ^ (*(_QWORD *)(v39 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v57 = 0;
  v127 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v127);
      while ( *(__int64 *)(v12 - 0x57FFFFFFFE8LL) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 - 0x57FFFFFFFE8LL), 0x3FuLL) );
    v56 = 0x3FFFFFFFFFFFFFFFLL;
  }
  *v32 &= ~0x20u;
  v58 = *v122;
  if ( !*v122 )
    MiBadRefCount(v116);
  v63 = v12 - 0x58000000000LL;
  v64 = v58 == 1;
  v65 = v58 - 1;
  *v122 = v65;
  if ( v64 && (unsigned int)MiIsPfnFileOnly(v116) )
    goto LABEL_180;
  v66 = *(_QWORD *)(v63 + 40);
  if ( (v66 & 0x1000000000LL) == 0 && (v66 & 0x2000000000000LL) == 0 )
  {
    v67 = v56 & *(_QWORD *)(v12 - 0x57FFFFFFFE8LL);
    if ( !v65 )
    {
      v68 = 1;
      goto LABEL_152;
    }
    if ( v65 != 1 )
    {
      if ( v65 == 2 && v67 )
      {
LABEL_149:
        if ( (*v32 & 8) != 0 )
          goto LABEL_150;
      }
      goto LABEL_181;
    }
    if ( !v67 )
      goto LABEL_149;
LABEL_150:
    v68 = 0;
LABEL_152:
    v69 = *v131 | 0x8000000000000000uLL;
    if ( v69 > 0xFFFFF6BFFFFFFF78uLL || v69 < 0xFFFFF68000000000uLL )
    {
      v70 = *(_BYTE *)(v12 - 0x57FFFFFFFDDLL);
      if ( (v70 & 0x20) != 0 )
      {
        *(_BYTE *)(v12 - 0x57FFFFFFFDDLL) = v70 & 0xDF;
        goto LABEL_179;
      }
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v63) && (*(_DWORD *)(v12 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
    {
      v57 = 1;
    }
    else if ( v71 <= v74 && v71 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v12 - 0x57FFFFFFFDDLL) & 0x20) != 0 )
    {
      v57 = 1;
    }
    else if ( v68 == 1 && (v73 & 0x4000000000000000LL) != 0 )
    {
      v57 = 1;
    }
    v75 = (v72 >> 39) & 0x3FF;
    v76 = *(_QWORD *)(qword_140C4E648 + 8 * v75);
    if ( v57 == 1 )
    {
      MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8 * v75), 1LL);
      v63 = v12 - 0x58000000000LL;
    }
    if ( (ULONG_PTR *)v76 == &MiSystemPartition )
    {
      v77 = KeGetCurrentPrcb();
      v78 = (int)v77->CachedResidentAvailable;
      if ( (_DWORD)v78 != -1 )
      {
        if ( (unsigned __int64)(v78 + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v79 = _InterlockedCompareExchange((volatile signed __int32 *)&v77->CachedResidentAvailable, v78 + 1, v78);
            v64 = (_DWORD)v78 == v79;
            LODWORD(v78) = v79;
            if ( v64 )
              break;
            if ( v79 == -1 || (unsigned __int64)(v79 + 1LL) > 0x100 )
              goto LABEL_174;
          }
LABEL_179:
          if ( v68 )
LABEL_180:
            MiPfnReferenceCountIsZero(v63, v12 / 48);
          goto LABEL_181;
        }
LABEL_174:
        if ( (int)v78 > 192
          && (_DWORD)v78 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v77->CachedResidentAvailable,
                              192,
                              v78) )
        {
          v19 = (int)v78 - 192 + 1LL;
        }
        if ( !v19 )
          goto LABEL_179;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v76 + 7168), v19);
    goto LABEL_179;
  }
LABEL_181:
  _InterlockedAnd64((volatile signed __int64 *)(v12 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E98u);
  result = MiCompleteProtoPteFault(a1, v43, v136, 0, v117);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
