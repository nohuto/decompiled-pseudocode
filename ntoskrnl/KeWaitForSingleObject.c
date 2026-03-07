NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 *p_WaitIrql; // r13
  unsigned __int8 v8; // r14
  BOOLEAN v9; // di
  KPROCESSOR_MODE v10; // r12
  unsigned __int8 v11; // r12
  bool v12; // zf
  ULONG_PTR v13; // rdi
  __int64 v14; // rcx
  volatile __int64 WaitStatus; // rsi
  unsigned __int8 v16; // al
  __int64 *v17; // r11
  unsigned int v18; // r14d
  struct _KPRCB *v19; // r15
  int v20; // edx
  __int64 v21; // r9
  unsigned int v22; // r10d
  unsigned __int64 v23; // rax
  __int64 **v24; // rcx
  __int64 *v25; // r15
  unsigned __int8 v26; // dl
  int v27; // eax
  unsigned __int64 v28; // rdi
  _KWAIT_STATUS_REGISTER v29; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v32; // r11
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  volatile unsigned __int8 DpcRoutineActive; // cl
  volatile signed __int32 v38; // eax
  char v39; // al
  __int64 *p_AbWaitObject; // r9
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v42; // rcx
  __int64 v43; // rcx
  _KWAIT_STATUS_REGISTER v44; // al
  _DWORD *v45; // r10
  __int64 v46; // r8
  unsigned __int8 v47; // dl
  struct _KPRCB *v48; // rcx
  unsigned __int8 v49; // cl
  unsigned __int8 v50; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v52; // rdx
  _DWORD *v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rax
  ULONG_PTR v56; // rax
  __int64 v57; // rax
  char v58; // bl
  __int64 *v59; // rax
  __int64 v60; // rdx
  __int64 *v61; // r11
  char v62; // r10
  __int64 v63; // rdx
  unsigned int v64; // r10d
  __int64 *v65; // rcx
  char v66; // bl
  __int64 *RescheduleContextEntryForPrcb; // rax
  __int64 v68; // rdx
  __int64 *v69; // r11
  char v70; // r10
  __int64 v71; // rdx
  unsigned int v72; // r10d
  __int64 *v73; // rcx
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // rcx
  _DWORD *v76; // rdx
  unsigned __int8 v77; // cl
  struct _KPRCB *v78; // r9
  _DWORD *v79; // r8
  int v80; // eax
  signed __int32 v81[8]; // [rsp+0h] [rbp-100h] BYREF
  KPROCESSOR_MODE v82; // [rsp+30h] [rbp-D0h]
  bool v83; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v84; // [rsp+32h] [rbp-CEh]
  BOOLEAN v85; // [rsp+33h] [rbp-CDh]
  unsigned int v86; // [rsp+34h] [rbp-CCh]
  LONGLONG QuadPart; // [rsp+38h] [rbp-C8h]
  __int64 v88; // [rsp+40h] [rbp-C0h]
  int v89; // [rsp+48h] [rbp-B8h] BYREF
  KWAIT_REASON v90; // [rsp+4Ch] [rbp-B4h]
  int v91; // [rsp+50h] [rbp-B0h] BYREF
  int v92; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v93; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v94; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v95; // [rsp+68h] [rbp-98h] BYREF
  __int64 v96; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v97[2]; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h]
  __int128 v99; // [rsp+90h] [rbp-70h]
  __int64 v100; // [rsp+A0h] [rbp-60h]
  _DWORD v101[84]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v102[84]; // [rsp+200h] [rbp+100h] BYREF

  CurrentThread = KeGetCurrentThread();
  BugCheckParameter2 = (ULONG_PTR)Object;
  v85 = Alertable;
  v82 = WaitMode;
  v90 = WaitReason;
  v97[0] = 0LL;
  QuadPart = 0LL;
  v83 = 0;
  v88 = 0LL;
  v84 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( v84 )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v32) = 4;
      else
        v32 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v32;
    }
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v86 = 1;
    }
    else
    {
      p_WaitIrql = &CurrentThread->WaitIrql;
      v86 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v86 = 0;
  }
  while ( 1 )
  {
    v8 = *p_WaitIrql;
    v9 = v85;
    v10 = v82;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v10;
      if ( v9 )
        CurrentThread->MiscFlags |= 0x10u;
      v89 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v89);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || v8 || CurrentThread->SpecialApcDisable )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        v50 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v50 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v52 = CurrentPrcb->SchedulerAssist;
          v12 = (v52[5] & 0xFFFF0003) == 0;
          v52[5] &= 0xFFFF0003;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v49 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
      {
        v53 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v49 == 2 )
          LODWORD(v54) = 4;
        else
          v54 = (-1LL << (v49 + 1)) & 4;
        v53[5] |= v54;
      }
      *p_WaitIrql = 0;
    }
    v11 = v84;
    v12 = v9 == 0;
    v13 = BugCheckParameter2;
    if ( v12 )
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && v82 )
      {
        LODWORD(WaitStatus) = 192;
LABEL_99:
        CurrentThread->ThreadLock = 0LL;
        v47 = v8;
        v48 = KeGetCurrentPrcb();
LABEL_100:
        KiCheckForThreadDispatch((__int64)v48, v47);
        return WaitStatus;
      }
      v14 = 0LL;
    }
    else
    {
      if ( CurrentThread->Alerted[v82] )
      {
        CurrentThread->Alerted[v82] = 0;
        LODWORD(WaitStatus) = 257;
        v14 = 0LL;
      }
      else if ( !v82
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        v14 = 0LL;
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          LODWORD(WaitStatus) = 257;
        }
        else
        {
          LODWORD(WaitStatus) = 0;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        LODWORD(WaitStatus) = 192;
        v14 = 0LL;
      }
      if ( (_DWORD)WaitStatus )
        goto LABEL_99;
    }
    v16 = v90;
    v17 = (__int64 *)&CurrentThread->320;
    CurrentThread->WaitBlockFill6[68] = 5;
    LODWORD(WaitStatus) = 0;
    CurrentThread->WaitReason = v16;
    v18 = 0;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v19 = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)v13;
    if ( _interlockedbittestandset((volatile signed __int32 *)v13, 7u) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
        {
          HvlNotifyLongSpinWait(v18);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v13 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v13, 7u) );
      v17 = (__int64 *)&CurrentThread->320;
    }
    v20 = *(_DWORD *)(v13 + 4);
    if ( (*(_BYTE *)v13 & 0x7F) == 2 )
      break;
    if ( v20 > 0 )
    {
      if ( (*(_BYTE *)v13 & 7) == 1 )
      {
        v27 = 0;
      }
      else
      {
        if ( (*(_BYTE *)v13 & 0x7F) != 5 )
          goto LABEL_36;
        v27 = v20 - 1;
      }
      *(_DWORD *)(v13 + 4) = v27;
      goto LABEL_36;
    }
LABEL_23:
    v21 = QuadPart;
    v22 = v86;
    v23 = QuadPart;
    if ( v86 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v34 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v23 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !*p_WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v23 = QuadPart + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !v86 )
        goto LABEL_25;
      if ( !QuadPart )
      {
LABEL_55:
        LODWORD(WaitStatus) = 258;
        goto LABEL_36;
      }
      v34 = MEMORY[0xFFFFF78000000014];
    }
    if ( v34 > v23 )
      goto LABEL_55;
LABEL_25:
    v24 = *(__int64 ***)(v13 + 16);
    if ( *v24 != (__int64 *)(v13 + 8) )
      goto LABEL_156;
    *v17 = v13 + 8;
    v17[1] = (__int64)v24;
    *v24 = v17;
    *(_QWORD *)(v13 + 16) = v17;
    _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
    v12 = !v83;
    CurrentThread->WaitBlockCount = 1;
    if ( v12 )
    {
      v25 = (__int64 *)v88;
    }
    else
    {
      v55 = KeAbPreAcquire(v13, 0LL);
      v21 = QuadPart;
      v17 = (__int64 *)&CurrentThread->320;
      v22 = v86;
      v25 = (__int64 *)v55;
      v88 = v55;
    }
    if ( v25 )
    {
      KeAbPreWait(v25);
      LODWORD(WaitStatus) = (unsigned int)KiCommitThreadWait(
                                            (ULONG_PTR)CurrentThread,
                                            (__int64 *)&CurrentThread->320,
                                            v86,
                                            QuadPart,
                                            v97);
      if ( (WaitStatus & 0xFFFFFF7F) != 0 )
      {
        v56 = KeAbPreAcquire(v13, (__int64)v25);
        KeAbPostReleaseEx(v13, v56);
        v88 = 0LL;
      }
      else
      {
        v88 = KeAbPreAcquire(v13, (__int64)v25);
        *(_BYTE *)(v88 + 18) = 1;
      }
    }
    else
    {
      LODWORD(WaitStatus) = (unsigned int)KiCommitThreadWait((ULONG_PTR)CurrentThread, v17, v22, v21, v97);
    }
    CurrentThread->AbWaitObject = 0LL;
    if ( (_DWORD)WaitStatus != 256 )
      return WaitStatus;
    v84 = 0;
    v26 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
    {
      v45 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v26 == 2 )
        LODWORD(v46) = 4;
      else
        v46 = (-1LL << (v26 + 1)) & 4;
      v45[5] |= v46;
    }
    *p_WaitIrql = v26;
  }
  v83 = (*(_BYTE *)(v13 + 48) & 2) != 0;
  if ( v20 <= 0 && (CurrentThread != *(struct _KTHREAD **)(v13 + 40) || *(_BYTE *)(v13 + 2) != v19->DpcRoutineActive) )
    goto LABEL_23;
  v35 = *(_DWORD *)(v13 + 4);
  if ( v35 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
    KiFastExitThreadWait((__int64)v19, (__int64)CurrentThread, v11);
    RtlRaiseStatus(-1073741423);
  }
  v36 = v35 - 1;
  *(_DWORD *)(v13 + 4) = v36;
  if ( v36 )
  {
LABEL_36:
    _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    _InterlockedOr(v81, 0);
    if ( CurrentThread->ThreadLock )
    {
      v92 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v92);
        while ( CurrentThread->ThreadLock );
      }
      CurrentThread->ThreadLock = 0LL;
    }
    v28 = *p_WaitIrql;
    v29.Flags = (unsigned __int8)CurrentThread->WaitRegister;
    v95 = 0LL;
    if ( (v29.Flags & 0x38) != 0 )
    {
      if ( (v29.Flags & 0x18) != 0 )
      {
        if ( (v29.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
        v96 = 0LL;
        v66 = 0;
        memset(v102, 0, sizeof(v102));
        KiAcquirePrcbLocksForIsolationUnit((__int64)v19, 0, &v95);
        if ( !v19->NextThread )
        {
          KiStartRescheduleContext((__int64)v102, &v95, 0LL);
          RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v102, (__int64)v19);
          KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v68, 0, 1);
          if ( (v70 & 2) != 0 )
          {
            v71 = LOBYTE(v102[0]);
            v72 = 0;
            if ( LOBYTE(v102[0]) )
            {
              do
              {
                v73 = (__int64 *)&v102[10 * v72 + 4];
                if ( v73 != v69 )
                {
                  KiAdjustRescheduleContextEntryForThreadRemoval(v73, v71, 0, 1);
                  v71 = LOBYTE(v102[0]);
                }
                ++v72;
              }
              while ( v72 < (unsigned __int8)v71 );
            }
            v102[1] = 0;
          }
          KiSearchForNewThreadsForRescheduleContext(v102, (__int64)&v96);
          v66 = KiCommitRescheduleContext((unsigned __int8 *)v102, v19, 0, &v96);
        }
        KiReleasePrcbLocksForIsolationUnit(&v95);
        if ( v66 )
        {
          KiCompleteRescheduleContext(v102, (__int64)v19);
          KiFlushSoftwareInterruptBatch((__int64)&v19->DeferredDispatchInterrupts);
        }
        KiProcessDeferredReadyList((__int64)v19, (__int64)&v96, v28);
        return WaitStatus;
      }
      goto LABEL_171;
    }
    goto LABEL_38;
  }
  CurrentThread->WaitStatus = 0LL;
  v91 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v91);
    while ( CurrentThread->ThreadLock );
  }
  if ( *(_BYTE *)(v13 + 49) )
    --CurrentThread->KernelApcDisable;
  if ( v19->CurrentThread == CurrentThread )
    DpcRoutineActive = v19->DpcRoutineActive;
  else
    DpcRoutineActive = 0;
  v100 = 0LL;
  v38 = *(_DWORD *)v13;
  v99 = 0LL;
  LODWORD(v99) = v38;
  BYTE2(v99) = DpcRoutineActive;
  *(_DWORD *)v13 = v99;
  v39 = *(_BYTE *)(v13 + 48);
  *(_QWORD *)(v13 + 40) = CurrentThread;
  if ( (v39 & 1) != 0 )
  {
    *(_BYTE *)(v13 + 48) = v39 & 0xFE;
    CurrentThread->WaitStatus |= 0x80uLL;
  }
  if ( (*(_BYTE *)(v13 + 48) & 2) != 0 )
    CurrentThread->AbWaitObject = (void *volatile)v13;
  else
    CurrentThread->AbWaitObject = 0LL;
  p_AbWaitObject = (__int64 *)&CurrentThread->AbWaitObject;
  Blink = CurrentThread->MutantListHead.Blink;
  v42 = (struct _LIST_ENTRY *)(v13 + 24);
  if ( Blink->Flink != &CurrentThread->MutantListHead )
LABEL_156:
    __fastfail(3u);
  v42->Flink = &CurrentThread->MutantListHead;
  *(_QWORD *)(v13 + 32) = Blink;
  Blink->Flink = v42;
  CurrentThread->MutantListHead.Blink = v42;
  _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
  CurrentThread->WaitBlockFill6[68] = 2;
  CurrentThread->ThreadLock = 0LL;
  WaitStatus = CurrentThread->WaitStatus;
  v43 = *p_AbWaitObject;
  if ( *p_AbWaitObject )
  {
    *p_AbWaitObject = 0LL;
    v57 = KeAbPreAcquire(v43, 0LL);
    if ( v57 )
      *(_BYTE *)(v57 + 18) = 1;
  }
  v28 = *p_WaitIrql;
  v44.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  v93 = 0LL;
  if ( (v44.Flags & 0x38) != 0 )
  {
    if ( (v44.Flags & 0x18) != 0 )
    {
      if ( (v44.Flags & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
      v94 = 0LL;
      v58 = 0;
      memset(v101, 0, sizeof(v101));
      KiAcquirePrcbLocksForIsolationUnit((__int64)v19, 0, &v93);
      if ( !v19->NextThread )
      {
        KiStartRescheduleContext((__int64)v101, &v93, 0LL);
        v59 = KiFindRescheduleContextEntryForPrcb(v101, (__int64)v19);
        KiAdjustRescheduleContextEntryForThreadRemoval(v59, v60, 0, 1);
        if ( (v62 & 2) != 0 )
        {
          v63 = LOBYTE(v101[0]);
          v64 = 0;
          if ( LOBYTE(v101[0]) )
          {
            do
            {
              v65 = (__int64 *)&v101[10 * v64 + 4];
              if ( v65 != v61 )
              {
                KiAdjustRescheduleContextEntryForThreadRemoval(v65, v63, 0, 1);
                v63 = LOBYTE(v101[0]);
              }
              ++v64;
            }
            while ( v64 < (unsigned __int8)v63 );
          }
          v101[1] = 0;
        }
        KiSearchForNewThreadsForRescheduleContext(v101, (__int64)&v94);
        v58 = KiCommitRescheduleContext((unsigned __int8 *)v101, v19, 0, &v94);
      }
      KiReleasePrcbLocksForIsolationUnit(&v93);
      if ( v58 )
      {
        KiCompleteRescheduleContext(v101, (__int64)v19);
        KiFlushSoftwareInterruptBatch((__int64)&v19->DeferredDispatchInterrupts);
      }
      KiProcessDeferredReadyList((__int64)v19, (__int64)&v94, v28);
      return WaitStatus;
    }
LABEL_171:
    KiCheckForThreadDispatch((__int64)v19, 1u);
    KiDeliverApc(0LL, 0LL, 0LL);
    if ( KiIrqlFlags )
    {
      v74 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v74 - 2) <= 0xDu )
      {
        v75 = KeGetCurrentPrcb();
        v76 = v75->SchedulerAssist;
        v12 = (v76[5] & 0xFFFF0001) == 0;
        v76[5] &= 0xFFFF0001;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v75);
      }
    }
    __writecr8(0LL);
    return WaitStatus;
  }
LABEL_38:
  if ( v11 )
  {
    v48 = v19;
    v47 = v28;
    goto LABEL_100;
  }
  if ( KiIrqlFlags )
  {
    v77 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v77 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v77 >= 2u )
    {
      v78 = KeGetCurrentPrcb();
      v79 = v78->SchedulerAssist;
      v80 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
      v12 = (v80 & v79[5]) == 0;
      v79[5] &= v80;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v78);
    }
  }
  __writecr8(v28);
  return WaitStatus;
}
