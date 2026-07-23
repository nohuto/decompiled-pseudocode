/*
 * XREFs of KeReleaseMutant @ 0x1402C2B40
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1402AA8C0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403014B4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x140302064 (LdrpGetFromMUIMemCache.c)
 *     KeReleaseMutex @ 0x14035F9C0 (KeReleaseMutex.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EC0C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F520 (LdrUnloadAlternateResourceModuleEx.c)
 *     NtSignalAndWaitForSingleObject @ 0x1405648B0 (NtSignalAndWaitForSingleObject.c)
 *     NtReleaseMutant @ 0x140663B70 (NtReleaseMutant.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiWakeOtherQueueWaiters @ 0x140242C80 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024BE60 (KiWakeQueueWaiter.c)
 *     KeAbPreWakeupThread @ 0x140271FC0 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1402C2EB0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140302B34 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140512F94 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A7700 (EtwTraceEnqueueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  int v4; // edi
  _KTHREAD *CurrentThread; // rcx
  int v8; // r15d
  _KTHREAD *OwnerThread; // rbp
  char v10; // r13
  __int64 CurrentIrql; // r10
  __int64 v12; // r8
  __int64 v13; // r11
  struct _KPRCB *CurrentPrcb; // rsi
  int SignalState; // r14d
  LONG v16; // eax
  LONG LockNV; // eax
  struct _KPRCB *v18; // rsi
  _DWORD *v19; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  struct _KMUTANT *v24; // r15
  ULONG_PTR v25; // r12
  struct _KMUTANT *v27; // rax
  struct _KMUTANT *v28; // rdx
  struct _LIST_ENTRY *v29; // rcx
  char v30; // al
  bool v31; // zf
  char v32; // di
  NTSTATUS v33; // ecx
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  unsigned __int8 v40; // cl
  _DWORD *v41; // r9
  __int64 v42; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // r9
  _QWORD *v47; // r10
  __int64 v48; // rcx
  char v49; // al
  int v50; // r9d
  struct _KMUTANT *v51; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rax
  unsigned int SessionId; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  _DWORD *SchedulerAssist; // r8
  int v57; // eax
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-B8h]
  __int64 v59; // [rsp+38h] [rbp-B0h]
  struct _KPRCB *v60; // [rsp+40h] [rbp-A8h]
  int v61; // [rsp+48h] [rbp-A0h] BYREF
  struct _KMUTANT *v62; // [rsp+50h] [rbp-98h]
  __int64 v63; // [rsp+58h] [rbp-90h]
  _QWORD *v64; // [rsp+60h] [rbp-88h]
  struct _KPRCB *v65; // [rsp+68h] [rbp-80h]
  struct _SINGLE_LIST_ENTRY *v66; // [rsp+70h] [rbp-78h] BYREF
  __int64 v67; // [rsp+78h] [rbp-70h]
  __int128 v68; // [rsp+80h] [rbp-68h]
  __int64 v69; // [rsp+90h] [rbp-58h]
  int v70; // [rsp+F0h] [rbp+8h] BYREF
  KPRIORITY v71; // [rsp+F8h] [rbp+10h]
  int ApcDisable; // [rsp+100h] [rbp+18h]
  BOOLEAN v73; // [rsp+108h] [rbp+20h]

  v73 = Wait;
  v71 = Increment;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)CurrentThread;
  v8 = 0;
  OwnerThread = 0LL;
  v66 = 0LL;
  v10 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v63 = CurrentIrql;
  v12 = 2LL;
  __writecr8(2uLL);
  v13 = (unsigned __int8)v66 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    *(_QWORD *)&Wait = KeGetCurrentPrcb()->SchedulerAssist;
    *(_QWORD *)&Increment = (v13 << ((unsigned __int8)CurrentIrql + 1)) & 4;
    v12 = (unsigned int)Increment | *(_DWORD *)(Wait + 20LL);
    *(_DWORD *)(Wait + 20LL) = v12;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v70 = 0;
  v60 = CurrentPrcb;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v70, *(__int64 *)&Increment, v12, Wait);
      while ( (Mutant->Header.LockNV & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
    CurrentThread = (_KTHREAD *)BugCheckParameter1;
    v13 = -1LL;
    LOBYTE(CurrentIrql) = v63;
  }
  SignalState = Mutant->Header.SignalState;
  if ( Abandoned )
  {
    Mutant->MutantFlags |= 1u;
    v16 = 1;
    Mutant->Header.SignalState = 1;
  }
  else
  {
    if ( Mutant->OwnerThread != CurrentThread || Mutant->Header.Size != CurrentPrcb->DpcRoutineActive )
    {
      v32 = Mutant->MutantFlags & 1;
      _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v54 = KeGetCurrentIrql();
          if ( v54 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v54 >= 2u )
          {
            v55 = KeGetCurrentPrcb();
            SchedulerAssist = v55->SchedulerAssist;
            v57 = ~(unsigned __int16)(v13 << ((unsigned __int8)CurrentIrql + 1));
            v31 = (v57 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v57;
            if ( v31 )
            {
              KiRemoveSystemWorkPriorityKick(v55);
              LOBYTE(CurrentIrql) = v63;
            }
          }
        }
      }
      __writecr8((unsigned __int8)CurrentIrql);
      if ( v32 )
        v33 = 128;
      else
        v33 = -1073741754;
      RtlRaiseStatus(v33);
    }
    v16 = ++Mutant->Header.SignalState;
  }
  if ( v16 != 1 || SignalState > 0 )
  {
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
    v25 = BugCheckParameter1;
    goto LABEL_21;
  }
  v69 = 0LL;
  LockNV = Mutant->Header.LockNV;
  v68 = 0LL;
  LODWORD(v68) = LockNV;
  BYTE2(v68) = 0;
  Mutant->Header.LockNV = v68;
  v18 = KeGetCurrentPrcb();
  OwnerThread = Mutant->OwnerThread;
  ApcDisable = Mutant->ApcDisable;
  v19 = v18->SchedulerAssist;
  v61 = 0;
  if ( v19 )
  {
    if ( v18->NestingLevel <= 1u )
    {
      v36 = v19[6];
      v19[6] = v36 + 1;
      if ( v36 == -1 )
LABEL_56:
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
  {
    v34 = v18->SchedulerAssist;
    if ( v34 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v37 = v34[6] - 1;
        v34[6] = v37;
        if ( !v37 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    do
      KeYieldProcessorEx(&v61, *(__int64 *)&Increment, v12, Wait);
    while ( OwnerThread->ThreadLock );
    v35 = v18->SchedulerAssist;
    if ( v35 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v38 = v35[6];
        v35[6] = v38 + 1;
        if ( v38 == -1 )
          goto LABEL_56;
      }
    }
  }
  Flink = Mutant->MutantListEntry.Flink;
  Blink = Mutant->MutantListEntry.Blink;
  if ( Flink->Blink != &Mutant->MutantListEntry || Blink->Flink != &Mutant->MutantListEntry )
LABEL_29:
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  OwnerThread->ThreadLock = 0LL;
  v22 = KeGetCurrentPrcb();
  v23 = v22->SchedulerAssist;
  if ( v23 )
  {
    if ( v22->NestingLevel <= 1u )
    {
      v39 = v23[6] - 1;
      v23[6] = v39;
      if ( !v39 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  v24 = (struct _KMUTANT *)Mutant->Header.WaitListHead.Flink;
  Mutant->OwnerThread = 0LL;
  if ( v24 != (struct _KMUTANT *)&Mutant->Header.WaitListHead )
  {
    while ( 1 )
    {
      v27 = *(struct _KMUTANT **)&v24->Header.Lock;
      v28 = v24;
      v62 = v24;
      v24 = v27;
      v29 = v62->Header.WaitListHead.Flink;
      if ( (struct _KMUTANT *)v27->Header.WaitListHead.Flink != v62 || (struct _KMUTANT *)v29->Flink != v28 )
        goto LABEL_29;
      v29->Flink = (struct _LIST_ENTRY *)v27;
      v27->Header.WaitListHead.Flink = v29;
      v30 = (char)v28->Header.WaitListHead.Blink;
      if ( v30 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread(v60, v28, WORD1(v28->Header.WaitListHead.Blink), &v66) )
      {
        v31 = Mutant->Header.SignalState-- == 1;
        if ( v31 )
          goto LABEL_15;
      }
LABEL_48:
      if ( v24 == (struct _KMUTANT *)&Mutant->Header.WaitListHead )
        goto LABEL_15;
    }
    if ( v30 != 2 )
    {
      KiTryUnwaitThread(v60, v28, 256LL, 0LL);
      goto LABEL_48;
    }
    BYTE1(v28->Header.WaitListHead.Blink) = 5;
    v59 = (__int64)v28->MutantListEntry.Flink;
    v64 = (_QWORD *)(v59 + 8);
    *(_QWORD *)&v28->Header.Lock = 0LL;
    v40 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v40 <= 0xFu )
    {
      v41 = KeGetCurrentPrcb()->SchedulerAssist;
      v12 = (unsigned int)(-1LL << (v40 + 1)) & 4 | v41[5];
      v28 = v62;
      v41[5] = v12;
    }
    v65 = KeGetCurrentPrcb();
    v42 = (__int64)v65->CurrentThread;
    v67 = v42;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v42);
      EtwTraceEnqueueWork(v45, v44, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v59, (__int64)v28, v12, v42);
    v47 = v64;
    v48 = v59;
    if ( (_QWORD *)*v47 != v47
      && *(_DWORD *)(v59 + 40) < *(_DWORD *)(v59 + 44)
      && (*(_QWORD *)(v67 + 232) != v59 || *(_BYTE *)(v67 + 643) != 15) )
    {
      v49 = KiWakeQueueWaiter((__int64)v65, v59, (__int64)v62, v46);
      v48 = v59;
      if ( v49 )
        goto LABEL_82;
      v47 = v64;
    }
    v50 = *(_DWORD *)(v48 + 4);
    *(_DWORD *)(v48 + 4) = v50 + 1;
    v12 = *(_QWORD *)(v48 + 32);
    if ( *(_QWORD *)v12 != v48 + 24 )
      goto LABEL_29;
    v51 = v62;
    *(_QWORD *)&v62->Header.Lock = v48 + 24;
    v51->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v12;
    *(_QWORD *)v12 = v51;
    *(_QWORD *)(v48 + 32) = v51;
    if ( !v50 && (_QWORD *)*v47 != v47 )
    {
      KiWakeOtherQueueWaiters((__int64)v65, v48);
      v48 = v59;
    }
LABEL_82:
    _InterlockedAnd((volatile signed __int32 *)v48, 0xFFFFFF7F);
    v31 = Mutant->Header.SignalState-- == 1;
    if ( v31 )
      goto LABEL_15;
    goto LABEL_48;
  }
LABEL_15:
  if ( (Mutant->MutantFlags & 2) != 0 )
    v10 = 1;
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  if ( Abandoned )
    KiAcquireReleaseObjectRundownLockExclusive(Mutant);
  LODWORD(CurrentPrcb) = (_DWORD)v60;
  v25 = BugCheckParameter1;
  if ( v10 )
  {
    if ( v66 )
    {
      Next = v60->DeferredReadyListHead.Next;
      if ( Next )
      {
        if ( v66 == &Next[-27] )
          KeAbPreWakeupThread((__int64)v66, (__int64)Mutant, *(char *)(BugCheckParameter1 + 195));
      }
    }
  }
  v8 = ApcDisable;
LABEL_21:
  if ( v73 )
    v4 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v4, 1, v71, v63);
  if ( v10 )
  {
    if ( OwnerThread != (_KTHREAD *)v25 )
    {
      SessionId = MmGetSessionIdEx(*(_QWORD *)(v25 + 184));
      KeBugCheckEx(0x162u, v25, (ULONG_PTR)Mutant, SessionId, 1uLL);
    }
    KeAbPostRelease((ULONG_PTR)Mutant);
  }
  if ( v8 )
    KeLeaveCriticalRegionThread(v25);
  return SignalState;
}
