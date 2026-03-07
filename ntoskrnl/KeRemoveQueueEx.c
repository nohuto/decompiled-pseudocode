ULONG __stdcall KeRemoveQueueEx(
        PKQUEUE Queue,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PLIST_ENTRY *EntryArray,
        ULONG Count)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // r15
  __int64 v10; // rbp
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r11
  __int64 v13; // rdx
  LONGLONG QuadPart; // rcx
  ULONG v15; // r12d
  struct _LIST_ENTRY *Flink; // rdx
  LIST_ENTRY *p_EntryListHead; // r8
  ULONG v18; // esi
  struct _LIST_ENTRY *v19; // rax
  __int64 v20; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 WaitIrql; // r15
  ULONG_PTR v23; // rbp
  _KTHREAD *NextThread; // r14
  struct _KPRCB *v25; // rcx
  signed __int32 *v26; // r8
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  bool v29; // zf
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  unsigned __int8 v38; // si
  PLIST_ENTRY *v39; // r15
  int v40; // eax
  __int64 v41; // rcx
  struct _KPRCB *v42; // rsi
  unsigned __int64 v43; // r14
  ULONG_PTR v44; // rbp
  _KTHREAD *v45; // rdi
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  int v51; // eax
  _DWORD *v52; // r8
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // rcx
  _DWORD *v58; // rdx
  _DWORD *v59; // r9
  int v60; // r8d
  int v61; // eax
  __int64 v62; // rdi
  unsigned int v63; // edi
  ULONG v64; // edi
  __int64 v65; // r8
  unsigned __int64 v66; // rax
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v68; // rcx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v70; // rcx
  struct _LIST_ENTRY *v71; // rax
  unsigned __int8 v72; // r8
  _DWORD *v73; // r10
  __int64 v74; // rdx
  unsigned __int8 v75; // di
  _DWORD *v76; // r8
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r9
  _DWORD *v79; // r8
  int v80; // eax
  struct _LIST_ENTRY *v81; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v83; // rsi
  int v84; // [rsp+30h] [rbp-68h] BYREF
  int v85; // [rsp+34h] [rbp-64h] BYREF
  int v86; // [rsp+38h] [rbp-60h] BYREF
  LONGLONG v87; // [rsp+40h] [rbp-58h]
  __int64 v88; // [rsp+48h] [rbp-50h] BYREF
  __int64 v89[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v92; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v7 = WaitMode;
  v87 = 0LL;
  LODWORD(v10) = 4;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v13) = 4;
      else
        v13 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v13;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  QuadPart = 0xFFFFF78000000008uLL;
  v15 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v87 = Timeout->QuadPart;
      v92 = 1;
    }
    else
    {
      v92 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
      v87 = QuadPart;
    }
  }
  else
  {
    v92 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v84 = 0;
      while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v84);
        while ( (Queue->Header.LockNV & 0x80u) != 0 );
      }
      if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
      {
        Flink = Queue->EntryListHead.Flink;
        p_EntryListHead = &Queue->EntryListHead;
        v18 = 0;
        do
        {
          --Queue->Header.SignalState;
          v19 = Flink->Flink;
          if ( !Flink->Flink )
            KeBugCheckEx(0x96u, (ULONG_PTR)Flink, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)Flink[1].Flink);
          QuadPart = (LONGLONG)Flink->Blink;
          if ( v19->Blink != Flink || *(struct _LIST_ENTRY **)QuadPart != Flink )
            __fastfail(3u);
          *(_QWORD *)QuadPart = v19;
          v19->Blink = (struct _LIST_ENTRY *)QuadPart;
          v20 = v18++;
          Flink->Flink = 0LL;
          EntryArray[v20] = Flink;
          Flink = p_EntryListHead->Flink;
        }
        while ( p_EntryListHead->Flink != p_EntryListHead && v18 < Count );
        if ( v18 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          CurrentPrcb = KeGetCurrentPrcb();
          WaitIrql = CurrentThread->WaitIrql;
          v88 = 0LL;
          if ( (unsigned __int8)WaitIrql >= 2u )
          {
            if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
              KiRequestSoftwareInterrupt(CurrentPrcb, 2);
          }
          else
          {
            v23 = (ULONG_PTR)CurrentPrcb->CurrentThread;
            if ( CurrentPrcb->NextThread )
            {
              KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
              KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v88);
              NextThread = CurrentPrcb->NextThread;
              CurrentPrcb->NextThread = 0LL;
              _disable();
              KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v23, 0LL, 1LL);
              v25 = KeGetCurrentPrcb();
              v26 = (signed __int32 *)v25->SchedulerAssist;
              if ( v26 )
              {
                _m_prefetchw(v26);
                v27 = *v26;
                do
                {
                  v28 = v27;
                  v27 = _InterlockedCompareExchange(v26, v27 & 0xFFDFFFFF, v27);
                }
                while ( v28 != v27 );
                if ( (v27 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick(v25);
              }
              _enable();
              CurrentPrcb->CurrentThread = NextThread;
              if ( NextThread->WaitBlockFill6[68] == 1 )
                NextThread->ReadyTime = NextThread->ReadyTime
                                      - NextThread->WaitBlock[2].SpareLong
                                      + MEMORY[0xFFFFF78000000320];
              KiSetThreadState(NextThread, 2LL);
              *(_BYTE *)(v23 + 643) = 32;
              *(_BYTE *)(v23 + 390) = WaitIrql;
              KiQueueReadyThread((__int64)CurrentPrcb, &v88, v23);
              v29 = (unsigned __int8)KiSwapContext(v23, NextThread, (unsigned __int8)WaitIrql) == 0;
            }
            else
            {
              v29 = (*(_DWORD *)(v23 + 116) & 0x40) == 0;
            }
            if ( !v29 )
            {
              if ( KiIrqlFlags )
              {
                v30 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v30 - 2) <= 0xDu )
                {
                  v31 = KeGetCurrentPrcb();
                  v32 = v31->SchedulerAssist;
                  v29 = (v32[5] & 0xFFFF0003) == 0;
                  v32[5] &= 0xFFFF0003;
                  if ( v29 )
                    KiRemoveSystemWorkPriorityKick(v31);
                }
              }
              __writecr8(1uLL);
              *(_DWORD *)(v23 + 116) &= ~0x40u;
              KiDeliverApc(0LL, 0LL, 0LL);
            }
            if ( KiIrqlFlags )
            {
              v33 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v33 - 2) <= 0xDu )
              {
                v34 = KeGetCurrentPrcb();
                v35 = v34->SchedulerAssist;
                v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)WaitIrql + 1));
                v29 = (v36 & v35[5]) == 0;
                v35[5] &= v36;
                if ( v29 )
                  KiRemoveSystemWorkPriorityKick(v34);
              }
            }
            __writecr8(WaitIrql);
          }
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            EtwTraceDequeueWork(CurrentThread, EntryArray, v18);
          return v18;
        }
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      goto LABEL_62;
    }
    if ( Timeout && !Timeout->QuadPart )
    {
      if ( (Queue->Header.Signalling & 1) != 0 )
      {
        v39 = EntryArray;
        *EntryArray = (PLIST_ENTRY)128;
      }
      else
      {
        if ( Alertable )
        {
          v85 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v85);
            while ( CurrentThread->ThreadLock );
          }
        }
        v40 = KiTestForAlertPending((__int64)CurrentThread, Alertable, v7, 1);
        v39 = EntryArray;
        v41 = v40;
        if ( !v40 )
          v41 = 258LL;
        *EntryArray = (PLIST_ENTRY)v41;
        if ( Alertable )
          CurrentThread->ThreadLock = 0LL;
      }
      v42 = KeGetCurrentPrcb();
      v43 = CurrentThread->WaitIrql;
      v89[0] = 0LL;
      if ( (unsigned __int8)v43 >= 2u )
      {
        if ( v42->NextThread && !v42->DpcRoutineActive )
          KiRequestSoftwareInterrupt(v42, 2);
        goto LABEL_107;
      }
      v44 = (ULONG_PTR)v42->CurrentThread;
      if ( v42->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v42->CurrentThread, 0);
        KiAcquirePrcbLocksForIsolationUnit((__int64)v42, 0, v89);
        v45 = v42->NextThread;
        v42->NextThread = 0LL;
        KiCaptureTotalCyclesCurrentThread(v42, v44);
        KiUpdatePriorityMatrixForRunningTransition(v42, v45);
        *(_BYTE *)(v44 + 643) = 32;
        *(_BYTE *)(v44 + 390) = v43;
        KiQueueReadyThread((__int64)v42, v89, v44);
        if ( !(unsigned __int8)KiSwapContext(v44, v45, (unsigned __int8)v43) )
          goto LABEL_91;
        if ( KiIrqlFlags )
        {
          v46 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v46 - 2) <= 0xDu )
          {
            v47 = KeGetCurrentPrcb();
            v48 = v47->SchedulerAssist;
            v29 = (v48[5] & 0xFFFF0003) == 0;
            v48[5] &= 0xFFFF0003;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick(v47);
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(v44 + 116) & 0x40) == 0 )
        {
LABEL_91:
          if ( KiIrqlFlags )
          {
            v49 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v49 - 2) <= 0xDu )
            {
              v50 = KeGetCurrentPrcb();
              v51 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v43 + 1));
              v52 = v50->SchedulerAssist;
              v29 = (v51 & v52[5]) == 0;
              v52[5] &= v51;
              if ( v29 )
                KiRemoveSystemWorkPriorityKick(v50);
            }
          }
          __writecr8(v43);
LABEL_107:
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
            return v15;
          EtwTraceDequeueWork(CurrentThread, v39, 1LL);
          return 1;
        }
        if ( KiIrqlFlags )
        {
          v53 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v53 - 2) <= 0xDu )
          {
            v54 = KeGetCurrentPrcb();
            v55 = v54->SchedulerAssist;
            v29 = (v55[5] & 0xFFFF0003) == 0;
            v55[5] &= 0xFFFF0003;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick(v54);
          }
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v44 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
      goto LABEL_91;
    }
  }
LABEL_62:
  while ( 2 )
  {
    v38 = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v7;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v86 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v86);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || v38 )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        v56 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v56 - 2) <= 0xDu )
        {
          v57 = KeGetCurrentPrcb();
          v58 = v57->SchedulerAssist;
          v29 = (v58[5] & 0xFFFF0003) == 0;
          v58[5] &= 0xFFFF0003;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v57);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      QuadPart = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)QuadPart <= 0xFu )
      {
        v59 = KeGetCurrentPrcb()->SchedulerAssist;
        v60 = v59[5];
        if ( (_BYTE)QuadPart != 2 )
        {
          QuadPart = (unsigned int)(unsigned __int8)QuadPart + 1;
          v59[5] = (-1 << QuadPart) & 4 | v60;
          goto LABEL_123;
        }
        v59[5] = v60 | 4;
        CurrentThread->WaitIrql = 0;
      }
      else
      {
LABEL_123:
        CurrentThread->WaitIrql = 0;
      }
    }
    if ( Alertable )
    {
      if ( CurrentThread->Alerted[v7] )
      {
        v61 = 257;
        CurrentThread->Alerted[v7] = 0;
        v62 = 257LL;
      }
      else if ( !(_BYTE)v7
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( CurrentThread->Alerted[0] )
        {
          v61 = 257;
          CurrentThread->Alerted[0] = 0;
          v62 = 257LL;
        }
        else
        {
          v61 = 0;
          v62 = 0LL;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        v61 = 192;
        v62 = 192LL;
      }
      if ( !v61 )
      {
LABEL_134:
        CurrentThread->WaitBlockFill6[68] = 5;
        CurrentThread->WaitReason = 15;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_135;
      }
    }
    else
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !(_BYTE)v7 )
        goto LABEL_134;
      v62 = 192LL;
    }
    CurrentThread->ThreadLock = 0LL;
    KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), v38);
    if ( v62 )
    {
      *EntryArray = (PLIST_ENTRY)v62;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTraceDequeueWork(CurrentThread, EntryArray, 1LL);
      return v15;
    }
LABEL_135:
    if ( Queue != (PKQUEUE)CurrentThread->Queue )
      KiSwitchQueue(CurrentThread, Queue);
    CurrentThread->WaitBlock[0].WaitType = 3;
    v63 = 0;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].Object = Queue;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v63 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(QuadPart) )
        {
          HvlNotifyLongSpinWait(v63);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
    }
    if ( Queue->Header.SignalState )
    {
      if ( Queue->CurrentCount <= Queue->MaximumCount )
      {
        v64 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue, (__int64)EntryArray, Count);
        if ( v64 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
LABEL_208:
          CurrentThread->WaitReason = 0;
          v83 = KeGetCurrentPrcb();
          if ( v83->DeferredReadyListHead.Next )
            KiProcessThreadWaitList((__int64)v83, 1u, 0, 2u);
          KiFastExitThreadWait((__int64)v83, (__int64)CurrentThread, 1LL);
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            EtwTraceDequeueWork(CurrentThread, EntryArray, v64);
          return v64;
        }
      }
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      if ( CurrentThread->Queue )
      {
        v81 = CurrentThread->QueueListEntry.Flink;
        Blink = CurrentThread->QueueListEntry.Blink;
        if ( v81->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
LABEL_213:
          __fastfail(3u);
        Blink->Flink = v81;
        v81->Blink = Blink;
        CurrentThread->Queue = 0LL;
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      *EntryArray = (PLIST_ENTRY)128;
      goto LABEL_207;
    }
    v65 = v87;
    v66 = v87;
    if ( v92 != 2 )
    {
      if ( !v92 )
        goto LABEL_167;
      if ( v87 )
      {
        v68 = MEMORY[0xFFFFF78000000014];
        goto LABEL_166;
      }
      goto LABEL_178;
    }
    ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
    v68 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    v66 = v87;
    if ( CurrentThread->WaitMode
      && !CurrentThread->WaitBlock[3].SpareLong
      && !CurrentThread->WaitIrql
      && !CurrentThread->ApcState.InProgressFlags
      && (_DWORD)ThreadTimerDelay )
    {
      v66 = v87 + ThreadTimerDelay;
    }
LABEL_166:
    if ( v68 > v66 )
    {
LABEL_178:
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      *EntryArray = (PLIST_ENTRY)258;
LABEL_207:
      v64 = 1;
      goto LABEL_208;
    }
LABEL_167:
    _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
    p_WaitListHead = &Queue->Header.WaitListHead;
    v70 = Queue->Header.WaitListHead.Flink;
    if ( v70->Blink != &Queue->Header.WaitListHead )
      goto LABEL_213;
    CurrentThread->WaitBlock[0].WaitListEntry.Flink = v70;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
    v70->Blink = (struct _LIST_ENTRY *)&CurrentThread->320;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)&CurrentThread->320;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v71 = (struct _LIST_ENTRY *)KiCommitThreadWait(
                                  (ULONG_PTR)CurrentThread,
                                  (__int64 *)&CurrentThread->320,
                                  v92,
                                  v65,
                                  0LL);
    CurrentThread->WaitReason = 0;
    QuadPart = (LONGLONG)v71;
    if ( v71 == (struct _LIST_ENTRY *)256 )
    {
      v72 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v72 <= 0xFu )
      {
        v73 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v72 == 2 )
        {
          LODWORD(v74) = 4;
        }
        else
        {
          QuadPart = (unsigned int)v72 + 1;
          v74 = (-1LL << (v72 + 1)) & 4;
        }
        v73[5] |= v74;
      }
      CurrentThread->WaitIrql = v72;
      continue;
    }
    break;
  }
  *EntryArray = v71;
  if ( Count > 1
    && v71 != (struct _LIST_ENTRY *)128
    && (unsigned __int64)&v71[-17].Blink + 7 > 1
    && v71 != (struct _LIST_ENTRY *)192
    && Queue->Header.SignalState )
  {
    v75 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v75 <= 0xFu )
    {
      v76 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v75 != 2 )
        v10 = (-1LL << (v75 + 1)) & 4;
      v76[5] |= v10;
    }
    KiAcquireKobjectLockSafe(&Queue->Header.Lock);
    if ( Queue->Header.SignalState )
      v15 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue, (__int64)(EntryArray + 1), Count - 1) + 1;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      v77 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v77 <= 0xFu && v75 <= 0xFu && v77 >= 2u )
      {
        v78 = KeGetCurrentPrcb();
        v79 = v78->SchedulerAssist;
        v80 = ~(unsigned __int16)(-1LL << (v75 + 1));
        v29 = (v80 & v79[5]) == 0;
        v79[5] &= v80;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v78);
      }
    }
    __writecr8(v75);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
    return v15;
  EtwTraceDequeueWork(CurrentThread, EntryArray, v15);
  return v15;
}
