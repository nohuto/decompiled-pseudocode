char __fastcall KiDispatchException(NTSTATUS *a1, __int64 a2, __int64 a3, unsigned __int8 a4, char a5)
{
  _KPROCESS *Process; // rdx
  unsigned int v10; // r14d
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  void *v13; // rsp
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  struct _KTHREAD *v17; // rax
  NTSTATUS v18; // esi
  NTSTATUS v19; // eax
  unsigned __int64 v20; // rcx
  unsigned __int64 v22; // rdx
  struct _KPRCB *v23; // r8
  _DWORD *v24; // rdx
  int v25; // ett
  struct _KPRCB *CurrentPrcb; // rcx
  char IsThisAKdTrap; // al
  char v28; // r8
  NTSTATUS v29; // r9d
  _KPROCESS *v30; // rdx
  struct _KPRCB *v31; // r8
  signed __int32 *v32; // rdx
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  unsigned __int64 v35; // r8
  _QWORD *v36; // rdi
  _OWORD *v37; // rsi
  int v38; // ecx
  __int64 v39; // r9
  __int64 v40; // r10
  bool v41; // zf
  __int64 v42; // r8
  _DWORD *SchedulerAssist; // r8
  int v44; // ett
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  int v47; // [rsp+30h] [rbp+0h] BYREF
  int v48; // [rsp+34h] [rbp+4h]
  int v49; // [rsp+38h] [rbp+8h]
  NTSTATUS v50; // [rsp+3Ch] [rbp+Ch]
  unsigned int v51; // [rsp+40h] [rbp+10h] BYREF
  __int64 v52; // [rsp+48h] [rbp+18h]
  unsigned __int64 v53; // [rsp+50h] [rbp+20h]
  __int64 v54; // [rsp+58h] [rbp+28h] BYREF
  _KPROCESS *v55; // [rsp+60h] [rbp+30h]
  unsigned __int64 v56; // [rsp+68h] [rbp+38h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+40h]
  unsigned __int64 v58; // [rsp+78h] [rbp+48h]
  __int64 v59; // [rsp+80h] [rbp+50h]
  NTSTATUS *v60; // [rsp+88h] [rbp+58h]
  int *v61; // [rsp+90h] [rbp+60h]
  __int64 v62; // [rsp+A0h] [rbp+70h]
  _QWORD *v63; // [rsp+A8h] [rbp+78h]
  _QWORD *v64; // [rsp+B0h] [rbp+80h]
  _QWORD *v65; // [rsp+B8h] [rbp+88h]
  _QWORD *v66; // [rsp+C0h] [rbp+90h]
  unsigned __int64 v67; // [rsp+C8h] [rbp+98h]
  int v68; // [rsp+D0h] [rbp+A0h]
  _DWORD v69[37]; // [rsp+D4h] [rbp+A4h] BYREF
  __int128 v70; // [rsp+170h] [rbp+140h] BYREF
  __int128 v71; // [rsp+180h] [rbp+150h]

  LOWORD(v47) = a4;
  v59 = a3;
  v52 = a2;
  v60 = a1;
  v62 = a3;
  v54 = 0LL;
  v51 = 0;
  memset(v69, 0, sizeof(v69));
  v70 = 0LL;
  v71 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v55 = Process;
  __incgsdword(0x82F0u);
  if ( a5 && Process && *(_QWORD *)&Process[2].Affinity.Count )
  {
    v18 = *a1;
    switch ( *a1 )
    {
      case 268435458:
        *a1 = -1073741795;
        break;
      case 268435459:
        *a1 = -1073741676;
        break;
      case 268435460:
        *a1 = -1073741819;
        break;
    }
    if ( ObGetCurrentIrql() < 2u )
    {
      if ( a4
        || ((v19 = *a1, *a1 == -1073741819) || v19 == -2147483647 || v19 == -1073741818)
        && *((_QWORD *)a1 + 5) <= 0x7FFFFFFF0000uLL )
      {
        LOBYTE(v17) = ((__int64 (__fastcall *)(NTSTATUS *, __int64, __int64, _QWORD, unsigned __int8))xmmword_140C37D40)(
                        a1,
                        a2,
                        a3,
                        0LL,
                        a4);
        if ( (_BYTE)v17 )
          return (char)v17;
      }
    }
    *a1 = v18;
    Process = v55;
  }
  v10 = 1048607;
  v49 = 1048607;
  v11 = 0LL;
  if ( a4 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      v10 = 1048671;
      v49 = 1048671;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v20 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800LL) != 0
          && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) == 0 )
        {
          v20 &= ~0x800uLL;
        }
        v11 = v20 & 0xFFFFFFFFFFF9FFFFuLL;
        if ( (a1[1] & 0x80u) == 0 )
          v11 = v20;
        if ( (unsigned __int16)PsWow64GetProcessMachine(Process) == 332 )
          v11 &= 0xFFFFFFFFFFF9FFFFuLL;
      }
    }
  }
  else
  {
    if ( (_BYTE)KiKernelCetEnabled )
      v10 = 1048735;
    v49 = v10;
  }
  RtlGetExtendedContextLength2(v10, &v51, v11);
  v12 = v51 + 15LL;
  if ( v12 <= v51 )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
  v61 = &v47;
  if ( (_BYTE)v47 )
    memset(&v47, 0, v51);
  RtlInitializeExtendedContext2(&v47, v10, &v54, v11);
  KeContextFromKframes(a3, v52, (__int64)&v47);
  if ( *a1 == -2147483645 )
  {
    --*(_QWORD *)&v69[21];
    if ( (KiDynamicTraceMask & 2) != 0 )
    {
      --*(_QWORD *)(a3 + 360);
      LOBYTE(v15) = a5;
      LOBYTE(v14) = v47;
      if ( (unsigned __int8)KiTpHandleTrap(a1, &v47, v14, v15) )
        goto LABEL_18;
      ++*(_QWORD *)(a3 + 360);
    }
  }
  if ( KiPreprocessFault((ULONG_PTR)a1, (ULONG_PTR)&v47, v47) )
    goto LABEL_18;
  if ( !(_BYTE)v47 )
  {
    if ( (!a5
       || !(unsigned __int8)KdTrap(a3, v52, (int)a1, (int)&v47, v47, v47)
       && !RtlDispatchException((ULONG_PTR)a1, (__int64)&v47))
      && !(unsigned __int8)KdTrap(a3, v52, (int)a1, (int)&v47, 0, 1) )
    {
      KeBugCheckEx(0x1Eu, *a1, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 5));
    }
LABEL_18:
    LOBYTE(BugCheckParameter4) = v47;
    LOBYTE(v17) = KeContextToKframes(a3, v52, (unsigned int)&v47, (_DWORD)v55, BugCheckParameter4);
    if ( !BYTE1(v47) )
      return (char)v17;
    _disable();
    LOBYTE(v17) = KiSetupForInstrumentationReturn(a3);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( !SchedulerAssist )
      goto LABEL_92;
    _m_prefetchw(SchedulerAssist);
    LODWORD(v17) = *SchedulerAssist;
    do
    {
      v44 = (int)v17;
      LODWORD(v17) = _InterlockedCompareExchange(SchedulerAssist, (unsigned int)v17 & 0xFFDFFFFF, (signed __int32)v17);
    }
    while ( v44 != (_DWORD)v17 );
    if ( ((unsigned int)v17 & 0x200000) == 0 )
      goto LABEL_92;
    goto LABEL_91;
  }
  v22 = v67;
  v53 = v67;
  v58 = v67;
  if ( (HIDWORD(v55[2].Header.WaitListHead.Flink) & 1) == 0 )
  {
    v17 = KeGetCurrentThread();
    if ( v17->ApcState.Process[1].Affinity.StaticBitmap[30]
      && *a1 == -2147483646
      && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x40000u;
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      if ( !v24 )
        goto LABEL_92;
      _m_prefetchw(v24);
      LODWORD(v17) = *v24;
      do
      {
        v25 = (int)v17;
        LODWORD(v17) = _InterlockedCompareExchange(v24, (unsigned int)v17 & 0xFFDFFFFF, (signed __int32)v17);
      }
      while ( v25 != (_DWORD)v17 );
      if ( ((unsigned int)v17 & 0x200000) == 0 )
        goto LABEL_92;
      CurrentPrcb = v23;
LABEL_91:
      LOBYTE(v17) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_92:
      _enable();
      return (char)v17;
    }
    if ( (v56 & 0xFFF8) == 0x20 )
    {
      if ( *a1 == -2147483645 )
      {
        *a1 = 1073741855;
      }
      else if ( *a1 == -2147483644 )
      {
        *a1 = 1073741854;
      }
      v22 = (unsigned int)v22 & 0xFFFFFFF0;
      v53 = v22;
      v58 = v22;
    }
  }
  if ( a5 )
  {
    v50 = *a1;
    IsThisAKdTrap = KdIsThisAKdTrap(a1);
    BYTE1(v47) = IsThisAKdTrap;
    v30 = KeGetCurrentThread()->ApcState.Process;
    if ( !v30[1].Affinity.StaticBitmap[29] && !KdIgnoreUmExceptions && v29 != -2147483597 || IsThisAKdTrap )
    {
      if ( (unsigned __int8)KdTrap(a3, v52, (int)a1, (int)&v47, v28, 0) )
        goto LABEL_18;
      v29 = v50;
    }
    if ( v29 == -2147483597 || (LOBYTE(v30) = 1, LOBYTE(v17) = DbgkForwardException(a1, v30, 0LL), !(_BYTE)v17) )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x100u;
      v31 = KeGetCurrentPrcb();
      v32 = (signed __int32 *)v31->SchedulerAssist;
      if ( v32 )
      {
        _m_prefetchw(v32);
        v33 = *v32;
        do
        {
          v34 = v33;
          v33 = _InterlockedCompareExchange(v32, v33 & 0xFFDFFFFF, v33);
        }
        while ( v34 != v33 );
        if ( (v33 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
      _enable();
      v68 = -1073741819;
      v48 = 0;
      v35 = v53;
      v56 = v53;
      if ( (v10 & 0x100040) == 0x100040 )
      {
        v35 = (v53 - *(unsigned int *)(v54 + 20)) & 0xFFFFFFFFFFFFFFC0uLL;
        v56 = v35;
      }
      v36 = (_QWORD *)((v35 - 40) & 0xFFFFFFFFFFFFFFF0uLL);
      v63 = v36;
      v64 = v36 - 20;
      v37 = v36 - 24;
      v65 = v36 - 24;
      v66 = v36 - 178;
      LODWORD(v70) = -1232;
      DWORD1(v70) = v53 - ((_DWORD)v36 - 1424);
      *((_QWORD *)&v70 + 1) = 0x4D0FFFFFB30LL;
      LODWORD(v71) = v35 - ((_DWORD)v36 - 192);
      DWORD1(v71) = v53 - v35;
      ProbeForWrite(v36 - 178, v53 - (_QWORD)(v36 - 178), 0x10u);
      v36[3] = v53;
      *v36 = *((_QWORD *)v61 + 31);
      KeCopyExceptionRecord(v36 - 20, a1);
      LOBYTE(v38) = 1;
      RtlpCopyExtendedContext(v38, (_DWORD)v36 - 192, (unsigned int)&v70, v49, v54, 0LL);
      *v37 = v70;
      v37[1] = v71;
      --CurrentThread->SpecialApcDisable;
      v48 = 1;
      KePopulateContinuationContext(*(_QWORD *)(v59 + 360));
      *(_QWORD *)(v39 + 384) = v36 - 178;
      *(_WORD *)(v39 + 368) = 51;
      *(_QWORD *)(v39 + 360) = qword_140D1F340;
      KiSetupForInstrumentationReturn(v39);
      LOWORD(v17) = *(_WORD *)(v40 + 486);
      v41 = (_WORD)v17 == 0xFFFF;
      LOWORD(v17) = (_WORD)v17 + 1;
      *(_WORD *)(v40 + 486) = (_WORD)v17;
      if ( v41 )
      {
        v17 = (struct _KTHREAD *)(v40 + 152);
        if ( *(struct _KTHREAD **)&v17->Header.Lock != v17 )
          LOBYTE(v17) = KiCheckForKernelApcDelivery();
      }
      v48 = 0;
    }
  }
  else
  {
    LOBYTE(v16) = 1;
    LOBYTE(v22) = 1;
    LOBYTE(v17) = DbgkForwardException(a1, v22, v16);
    if ( !(_BYTE)v17 )
    {
      LOBYTE(v42) = 1;
      LOBYTE(v17) = DbgkForwardException(a1, 0LL, v42);
      if ( !(_BYTE)v17 )
        LOBYTE(v17) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *a1);
    }
  }
  return (char)v17;
}
