/*
 * XREFs of KiExitDispatcher @ 0x1402C4150
 * Callers:
 *     KeRegisterObjectNotification @ 0x140202ED8 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140203110 (NtWaitForWorkViaWorkerFactory.c)
 *     KeInsertPriQueue @ 0x14023B8E0 (KeInsertPriQueue.c)
 *     ExpQueueWorkItem @ 0x140240E10 (ExpQueueWorkItem.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402424E0 (NtReleaseWorkerFactoryWorker.c)
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x140245BA0 (IoSetIoCompletionEx2.c)
 *     ExpSetTimerObject @ 0x140248D90 (ExpSetTimerObject.c)
 *     KeSetProcess @ 0x14025157C (KeSetProcess.c)
 *     KeAlertThreadByThreadId @ 0x14025C2F0 (KeAlertThreadByThreadId.c)
 *     KeInsertQueueApc @ 0x14025F120 (KeInsertQueueApc.c)
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x14025F790 (KeSetTimerEx.c)
 *     KeReleaseSemaphoreEx @ 0x140262770 (KeReleaseSemaphoreEx.c)
 *     KeSetEventBoostPriorityEx @ 0x140271E08 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x1402C2B40 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402CBCD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402CD8D0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeTimeOutQueueWaiters @ 0x1402DCFBC (KeTimeOutQueueWaiters.c)
 *     IoSetIoCompletionEx @ 0x1402E6D30 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x1402E6F10 (KeInsertQueueEx.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402ED670 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSemaphore @ 0x1402F19A0 (KeReleaseSemaphore.c)
 *     KeRundownQueueEx @ 0x140302618 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x140302978 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x1403121AC (KeWakeWaitChain.c)
 *     KeThawProcess @ 0x1403150C4 (KeThawProcess.c)
 *     KeFreezeProcess @ 0x14031529C (KeFreezeProcess.c)
 *     KeSignalGate @ 0x14031BEE0 (KeSignalGate.c)
 *     KeInsertQueue @ 0x140326130 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14033AAD0 (KePulseEvent.c)
 *     KiRundownMutants @ 0x140340660 (KiRundownMutants.c)
 *     KeForceResumeThread @ 0x14034281C (KeForceResumeThread.c)
 *     KiSchedulerApc @ 0x140342C10 (KiSchedulerApc.c)
 *     KeResumeThread @ 0x140343158 (KeResumeThread.c)
 *     KeSuspendThread @ 0x140343270 (KeSuspendThread.c)
 *     KeRequestTerminationThread @ 0x14035BD28 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x14035BE90 (KeAlertThread.c)
 *     KeForceResumeProcess @ 0x14035BFB8 (KeForceResumeProcess.c)
 *     KiSetSystemTimeDpc @ 0x14039D8B0 (KiSetSystemTimeDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x14051370C (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x14051AEC0 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x1405243AC (KeRundownPriQueue.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiDirectSwitchThread @ 0x14024C1B0 (KiDirectSwitchThread.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KiDeferredReadySingleThread @ 0x1402C4550 (KiDeferredReadySingleThread.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiRequestProcessInSwap @ 0x1402F28A0 (KiRequestProcessInSwap.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x1405A7EB0 (EtwTraceReadyThread.c)
 */

char __fastcall KiExitDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  unsigned __int8 v5; // r14
  char v6; // bl
  unsigned __int8 v7; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  ULONG_PTR v11; // rsi
  __int64 **v12; // r13
  __int64 v13; // rax
  __int64 *v14; // rbp
  __int64 *v15; // rsi
  __int64 *v16; // r15
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 *v19; // rcx
  __int64 **v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v27; // rbp
  __int64 v28; // r8
  __int64 v29; // r9
  volatile signed __int32 *v30; // rsi
  signed __int64 *v31; // rbp
  signed __int64 v32; // rax
  signed __int64 v33; // rcx
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  bool v41; // zf
  _DWORD *v42; // rdx
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  volatile signed __int32 *v46; // [rsp+20h] [rbp-48h]
  _QWORD *v47; // [rsp+70h] [rbp+8h] BYREF
  int v48; // [rsp+78h] [rbp+10h] BYREF

  v5 = a4;
  v6 = a2 & 1;
  v7 = a3;
  if ( *(_QWORD *)(a1 + 11528) )
  {
    if ( v6 && KiDirectSwitchThread(a1, (unsigned int)a4, (a2 & 2) != 0, a4) )
      goto LABEL_32;
    v12 = *(__int64 ***)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = 0LL;
    do
    {
      v13 = *((unsigned __int8 *)v12 + 371);
      v14 = (__int64 *)(v12 - 27);
      v15 = *(v12 - 1);
      v12 = (__int64 **)*v12;
      v16 = &v15[6 * v13];
      do
      {
        if ( *((_BYTE *)v15 + 17) < 5u )
        {
          v46 = (volatile signed __int32 *)v15[4];
          KiAcquireKobjectLockSafe(v46, a2, a3, a4);
          if ( *((_BYTE *)v15 + 17) == 4 )
          {
            v19 = (__int64 *)*v15;
            v20 = (__int64 **)v15[1];
            if ( *(__int64 **)(*v15 + 8) != v15 || *v20 != v15 )
              __fastfail(3u);
            *v20 = v19;
            v19[1] = (__int64)v20;
          }
          _InterlockedAnd(v46, 0xFFFFFF7F);
        }
        v15 += 6;
      }
      while ( v15 != v16 );
      *((_BYTE *)v14 + 566) = v7;
      *((_BYTE *)v14 + 567) = v5;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceReadyThread(v14, v7, v5, 0LL);
      v17 = *((_DWORD *)v14 + 30);
      if ( (v17 & 0x20000) != 0 )
      {
        if ( (v17 & 0x100000) == 0 )
          goto LABEL_18;
        _interlockedbittestandreset((volatile signed __int32 *)v14 + 30, 0x14u);
        if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(v14[23] + 840), 8u) & 7) == 0 )
          goto LABEL_18;
        v30 = (volatile signed __int32 *)v14[23];
        KiAcquireKobjectLockSafe(v30, a2, a3, a4);
        if ( (v30[210] & 7) == 0 )
        {
          _InterlockedAnd(v30, 0xFFFFFF7F);
LABEL_18:
          v18 = v14 + 27;
          v47 = 0LL;
          v14[27] = 0LL;
          while ( 1 )
          {
            KiDeferredReadySingleThread(a1, v18 - 27, &v47);
            v18 = v47;
            if ( !v47 )
              break;
            v47 = (_QWORD *)*v47;
          }
          continue;
        }
      }
      else
      {
        v30 = (volatile signed __int32 *)v14[23];
        KiAcquireKobjectLockSafe(v30, a2, a3, a4);
        if ( (v30[210] & 7) == 0 )
        {
          _InterlockedExchangeAdd(v30 + 210, 8u);
          _InterlockedAnd(v30, 0xFFFFFF7F);
          _interlockedbittestandreset((volatile signed __int32 *)v14 + 30, 0x14u);
          *((_BYTE *)v14 + 388) = 6;
          v31 = v14 + 27;
          _m_prefetchw(&KiStackInSwapListHead);
          v32 = KiStackInSwapListHead;
          do
          {
            *v31 = v32;
            v33 = v32;
            v32 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v31, v32);
          }
          while ( v32 != v33 );
          if ( !v32 )
            KeSetEvent(&KiSwapEvent, 10, 0);
          continue;
        }
      }
      KiRequestProcessInSwap(v14, v30);
    }
    while ( v12 );
  }
  if ( v6 )
  {
LABEL_32:
    v21 = *(_QWORD *)(a1 + 8);
    LOBYTE(v10) = a5;
    *(_DWORD *)(v21 + 116) |= 4u;
    *(_BYTE *)(v21 + 390) = v10;
    return v10;
  }
  v9 = a5;
  v10 = *(_QWORD *)(a1 + 16);
  if ( a5 < 2u )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( v10 )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v48 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v36 = SchedulerAssist[6];
          SchedulerAssist[6] = v36 + 1;
          if ( v36 == -1 )
LABEL_58:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v34 = CurrentPrcb->SchedulerAssist;
        if ( v34 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v37 = v34[6] - 1;
            v34[6] = v37;
            if ( !v37 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v48, v22, v23, v24);
        while ( *(_QWORD *)(a1 + 48) );
        v35 = CurrentPrcb->SchedulerAssist;
        if ( v35 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v38 = v35[6];
            v35[6] = v38 + 1;
            if ( v38 == -1 )
              goto LABEL_58;
          }
        }
      }
      v27 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v11, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v27;
      if ( *(_BYTE *)(v27 + 388) == 1 )
        *(_DWORD *)(v27 + 132) = *(_DWORD *)(v27 + 132) - *(_DWORD *)(v27 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v27 + 388) = 2;
      *(_BYTE *)(v11 + 643) = 32;
      *(_BYTE *)(v11 + 390) = v9;
      KiQueueReadyThread(a1, v11, v28, v29);
      if ( !(unsigned __int8)KiSwapContext(v11, v27, (unsigned __int8)v9) )
        goto LABEL_6;
      if ( !KiIrqlFlags )
        goto LABEL_41;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_41;
      if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
        goto LABEL_41;
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      v41 = (v40[5] & 0xFFFF0003) == 0;
      v40[5] &= 0xFFFF0003;
      if ( !v41 )
        goto LABEL_41;
    }
    else
    {
      if ( (*(_DWORD *)(v11 + 116) & 0x40) == 0 )
        goto LABEL_6;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
        || (v39 = KeGetCurrentPrcb(),
            v42 = v39->SchedulerAssist,
            v41 = (v42[5] & 0xFFFF0003) == 0,
            v42[5] &= 0xFFFF0003,
            !v41) )
      {
LABEL_41:
        __writecr8(1uLL);
        *(_DWORD *)(v11 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_6:
        LOBYTE(v10) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v10) = KeGetCurrentIrql() - 2;
            if ( (unsigned __int8)v10 <= 0xDu )
            {
              v43 = KeGetCurrentPrcb();
              v44 = v43->SchedulerAssist;
              LODWORD(v10) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v41 = ((unsigned int)v10 & v44[5]) == 0;
              v44[5] &= v10;
              if ( v41 )
                LOBYTE(v10) = KiRemoveSystemWorkPriorityKick(v43);
            }
          }
        }
        __writecr8(v9);
        return v10;
      }
    }
    KiRemoveSystemWorkPriorityKick(v39);
    goto LABEL_41;
  }
  if ( v10 )
  {
    LOBYTE(v10) = *(_BYTE *)(a1 + 12586);
    if ( !(_BYTE)v10 )
    {
      LOBYTE(a2) = 2;
      LOBYTE(v10) = KiRequestSoftwareInterrupt(a1, a2);
    }
  }
  return v10;
}
