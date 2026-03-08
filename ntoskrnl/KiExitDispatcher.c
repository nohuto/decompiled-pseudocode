/*
 * XREFs of KiExitDispatcher @ 0x14025CA50
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x1402396C0 (KeSetEventBoostPriorityEx.c)
 *     KeRegisterObjectNotification @ 0x14024F260 (KeRegisterObjectNotification.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x140250F30 (KeSetTimerEx.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14025D990 (ExpReleaseResourceSharedForThreadLite.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     KeReleaseSemaphore @ 0x140292210 (KeReleaseSemaphore.c)
 *     KeInsertQueueEx @ 0x140292940 (KeInsertQueueEx.c)
 *     KeRundownQueueEx @ 0x140292C14 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x140292FB8 (KeDeleteMutant.c)
 *     KeSetProcess @ 0x140293FE4 (KeSetProcess.c)
 *     KeAlertThreadByThreadId @ 0x1402D52B8 (KeAlertThreadByThreadId.c)
 *     KeTimeOutQueueWaiters @ 0x1402E1F60 (KeTimeOutQueueWaiters.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1402F3300 (KeInsertQueue.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x14033AF30 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x14033B220 (ExpCommitWakeResourceShared.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14033B5E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     AlpcpSignal @ 0x14033E410 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     ExpQueueWorkItem @ 0x14033EE40 (ExpQueueWorkItem.c)
 *     KeInsertPriQueue @ 0x14033F6C0 (KeInsertPriQueue.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140340900 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140341170 (IoSetIoCompletionEx2.c)
 *     KiSchedulerApc @ 0x140353560 (KiSchedulerApc.c)
 *     KeForceResumeThread @ 0x1403537DC (KeForceResumeThread.c)
 *     KiRundownMutants @ 0x140353C9C (KiRundownMutants.c)
 *     KeResumeThread @ 0x140354130 (KeResumeThread.c)
 *     KeSuspendThread @ 0x140354244 (KeSuspendThread.c)
 *     KeRequestTerminationThread @ 0x140354D78 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x140354F40 (KeAlertThread.c)
 *     KeForceResumeProcess @ 0x140355998 (KeForceResumeProcess.c)
 *     KeFreezeProcess @ 0x140355C58 (KeFreezeProcess.c)
 *     KeThawMultiProcess @ 0x140356058 (KeThawMultiProcess.c)
 *     KePulseEvent @ 0x14035F580 (KePulseEvent.c)
 *     KiSetSystemTimeDpc @ 0x140396560 (KiSetSystemTimeDpc.c)
 *     KeReleaseMutantEx @ 0x14040A86C (KeReleaseMutantEx.c)
 *     KeRegisterObjectDpc @ 0x140565CE8 (KeRegisterObjectDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x14056CEF8 (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x140571290 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x14057C5D0 (KeRundownPriQueue.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     HalpInterruptSendIpi @ 0x140230870 (HalpInterruptSendIpi.c)
 *     HalRequestIpiSpecifyVector @ 0x140230C90 (HalRequestIpiSpecifyVector.c)
 *     KeAndGroupAffinityEx @ 0x140233690 (KeAndGroupAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 *     KiAbPropagateBoosts @ 0x1402395C0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140256710 (KiEndThreadAccountingPeriodEx.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiInswapAndReadyThread @ 0x1402C06E8 (KiInswapAndReadyThread.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwTraceReadyThread @ 0x14045EEF6 (EtwTraceReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiExitDispatcher(__int64 a1, char a2, struct _PROCESSOR_NUMBER a3, unsigned int a4, unsigned __int8 a5)
{
  _QWORD *v5; // rbx
  char v6; // si
  _QWORD *v8; // rdi
  char v9; // r12
  _QWORD *v10; // rcx
  _QWORD *v11; // r14
  __int64 *v12; // rsi
  __int64 *v13; // r13
  volatile signed __int32 *v14; // r15
  __int64 *v15; // rcx
  __int64 **v16; // rax
  _QWORD *v17; // rsi
  unsigned __int8 Group; // cl
  unsigned __int8 v19; // r15
  int v20; // eax
  char v21; // al
  struct _KPRCB *CurrentPrcb; // rax
  char v23; // cl
  _QWORD *v24; // rdi
  unsigned int v25; // r8d
  int v26; // ecx
  unsigned int v27; // edx
  char v28; // r8
  _QWORD *v29; // rdx
  __int64 v30; // rax
  ULONG_PTR v31; // rsi
  struct _KPRCB *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // r9
  unsigned __int64 v35; // r8
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  struct _KPRCB *v39; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v41; // eax
  signed __int32 v42; // ett
  bool v43; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  __int64 (__fastcall *v49)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // r10
  __int16 v50; // bp
  unsigned int *v51; // r14
  unsigned __int8 v52; // di
  int v53; // esi
  unsigned __int64 v54; // rbx
  __int64 (__fastcall *v55)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v56)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v57)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 v58; // rcx
  char v60; // [rsp+40h] [rbp-368h]
  _DWORD v61[2]; // [rsp+48h] [rbp-360h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp-358h] BYREF
  int v63; // [rsp+54h] [rbp-354h]
  _QWORD *v64; // [rsp+58h] [rbp-350h] BYREF
  __int128 v65; // [rsp+60h] [rbp-348h] BYREF
  int v66; // [rsp+70h] [rbp-338h]
  int v67; // [rsp+78h] [rbp-330h] BYREF
  _QWORD *v68; // [rsp+80h] [rbp-328h] BYREF
  _DWORD v69[2]; // [rsp+88h] [rbp-320h] BYREF
  _DWORD v70[2]; // [rsp+90h] [rbp-318h] BYREF
  _DWORD v71[2]; // [rsp+98h] [rbp-310h] BYREF
  _DWORD v72[2]; // [rsp+A0h] [rbp-308h] BYREF
  _DWORD v73[2]; // [rsp+A8h] [rbp-300h] BYREF
  _DWORD v74[2]; // [rsp+B0h] [rbp-2F8h] BYREF
  __int128 v75; // [rsp+B8h] [rbp-2F0h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-2E0h]
  __int64 *v77; // [rsp+D0h] [rbp-2D8h] BYREF
  _QWORD *v78; // [rsp+D8h] [rbp-2D0h]
  unsigned __int64 v79; // [rsp+E0h] [rbp-2C8h] BYREF
  __int64 v80; // [rsp+E8h] [rbp-2C0h] BYREF
  int v81; // [rsp+F0h] [rbp-2B8h]
  __int64 v82; // [rsp+F4h] [rbp-2B4h]
  int v83; // [rsp+100h] [rbp-2A8h] BYREF
  __int128 v84; // [rsp+104h] [rbp-2A4h]
  __int128 v85; // [rsp+118h] [rbp-290h] BYREF
  _QWORD v86[34]; // [rsp+130h] [rbp-278h] BYREF
  _QWORD v87[34]; // [rsp+240h] [rbp-168h] BYREF
  int v88; // [rsp+3A0h] [rbp-8h]

  v5 = 0LL;
  v61[0] = a4;
  ProcNumber = a3;
  v6 = a2 & 1;
  v60 = a2 & 1;
  if ( *(_QWORD *)(a1 + 11528) )
  {
    if ( v6 && (unsigned __int8)KiDirectSwitchThread(a1, a4, (a2 & 2) != 0) )
      goto LABEL_113;
    v8 = *(_QWORD **)(a1 + 11528);
    v64 = 0LL;
    v9 = 0;
    *(_QWORD *)(a1 + 11528) = 0LL;
    if ( v8 )
    {
      do
      {
        v10 = v8;
        v11 = v8;
        v8 = (_QWORD *)*v8;
        v78 = v10 - 27;
        v12 = (__int64 *)*(v10 - 1);
        v13 = &v12[6 * *((unsigned __int8 *)v10 + 371)];
        do
        {
          if ( *((_BYTE *)v12 + 17) < 5u )
          {
            v14 = (volatile signed __int32 *)v12[4];
            KiAcquireKobjectLockSafe(v14);
            if ( *((_BYTE *)v12 + 17) == 4 )
            {
              v15 = (__int64 *)*v12;
              v16 = (__int64 **)v12[1];
              if ( *(__int64 **)(*v12 + 8) != v12 || *v16 != v12 )
                __fastfail(3u);
              *v16 = v15;
              v15[1] = (__int64)v16;
            }
            _InterlockedAnd(v14, 0xFFFFFF7F);
          }
          v12 += 6;
        }
        while ( v12 != v13 );
        v17 = v78;
        Group = ProcNumber.Group;
        v19 = v61[0];
        *((_BYTE *)v78 + 566) = ProcNumber.Group;
        *((_BYTE *)v17 + 567) = v19;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceReadyThread(v17, Group, v19, 0LL);
        v20 = *((_DWORD *)v17 + 30);
        if ( (v20 & 0x20000) == 0 || (v20 & 0x100000) != 0 )
        {
          *v11 = v5;
          v5 = v11;
        }
        else
        {
          *v11 = v64;
          v64 = v11;
          v64 = (_QWORD *)*v11;
          do
          {
            KiDeferredReadySingleThread(a1, (unsigned __int64)(v11 - 27), (__int64)&v64);
            v11 = v64;
            ++v9;
            if ( v64 )
              v64 = (_QWORD *)*v64;
            if ( (v9 & 0xF) == 0 )
              KiFlushSoftwareInterruptBatch(a1 + 12760);
          }
          while ( v11 );
        }
      }
      while ( v8 );
      v6 = v60;
    }
    v21 = *(_BYTE *)(a1 + 12761);
    if ( v21 )
    {
      v43 = v21 == 1;
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v43 )
      {
        v26 = *(_DWORD *)(a1 + 12764);
        v27 = 31;
        v28 = *(_BYTE *)(a1 + 12760);
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        v81 = v26;
        v80 = 6LL;
        if ( v28 != 1 )
          v27 = 47;
        v82 = 0LL;
        HalpInterruptSendIpi(&v80, v27);
        v24 = (_QWORD *)(a1 + 12768);
      }
      else
      {
        v23 = *(_BYTE *)(a1 + 12760);
        v24 = (_QWORD *)(a1 + 12768);
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        v25 = 31;
        if ( v23 != 1 )
          v25 = 47;
        HalRequestIpiSpecifyVector(0, a1 + 12768, v25);
      }
      if ( *(_BYTE *)(a1 + 12761) == 2 )
      {
        *v24 = 2097153LL;
        memset(v24 + 1, 0, 0x100uLL);
      }
      *(_BYTE *)(a1 + 12761) = 0;
      *(_DWORD *)(a1 + 12764) = 0xFFFF;
    }
    while ( v5 )
    {
      v29 = v5;
      v5 = (_QWORD *)*v5;
      KiInswapAndReadyThread(a1, v29 - 27);
    }
  }
  if ( v6 )
  {
LABEL_113:
    v58 = *(_QWORD *)(a1 + 8);
    LOBYTE(v30) = a5;
    *(_DWORD *)(v58 + 116) |= 4u;
    *(_BYTE *)(v58 + 390) = a5;
    return v30;
  }
  v30 = *(_QWORD *)(a1 + 16);
  if ( a5 < 2u )
  {
    v31 = *(_QWORD *)(a1 + 8);
    if ( v30 )
    {
      if ( (*(unsigned __int8 *)(v31 + 792) | *(unsigned __int8 *)(v31 + 870)) != 0x3F )
      {
        v32 = KeGetCurrentPrcb();
        v68 = 0LL;
        v77 = 0LL;
        KiAbProcessThreadLocks(v31, 1u, 1, 1, (__int64)&v68, (__int64)&v77, (__int64)&v32->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v77, (__int64)&v32->AbSelfIoBoostsList, (__int64)&v68);
        KiReadyDeferredReadyList((__int64)v32, &v68);
      }
      v79 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
      v67 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v67);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v33 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      *(_BYTE *)(a1 + 32) = 1;
      v34 = __rdtsc();
      v35 = v34 - *(_QWORD *)(a1 + 33152);
      *(_QWORD *)(v31 + 72) += v35;
      v36 = *(unsigned int *)(v31 + 80);
      v37 = v35 * *(unsigned int *)(a1 + 33208);
      *(_QWORD *)(a1 + 33152) = v34;
      v38 = (v37 >> 16) + v36;
      if ( v38 > 0xFFFFFFFF )
        LODWORD(v38) = -1;
      v43 = (*(_BYTE *)(v31 + 2) & 0xBE) == 0;
      *(_DWORD *)(v31 + 80) = v38;
      if ( !v43 )
      {
        LOBYTE(v34) = 1;
        KiEndThreadAccountingPeriodEx(a1, v31, v35, v34);
      }
      v39 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v39->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v41 = *SchedulerAssist;
        do
        {
          v42 = v41;
          v41 = _InterlockedCompareExchange(SchedulerAssist, v41 & 0xFFDFFFFF, v41);
        }
        while ( v42 != v41 );
        if ( (v41 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
      _enable();
      *(_QWORD *)(a1 + 8) = v33;
      if ( *(_BYTE *)(v33 + 388) == 1 )
        *(_DWORD *)(v33 + 132) = *(_DWORD *)(v33 + 132) - *(_DWORD *)(v33 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v33 + 388) = 2;
      *(_BYTE *)(v31 + 643) = 32;
      *(_BYTE *)(v31 + 390) = a5;
      KiQueueReadyThread(a1, (__int64 *)&v79, v31);
      LOBYTE(v30) = KiSwapContext(v31, v33, a5);
      v43 = (_BYTE)v30 == 0;
    }
    else
    {
      LODWORD(v30) = *(_DWORD *)(v31 + 116);
      v43 = (v30 & 0x40) == 0;
    }
    if ( !v43 )
    {
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v43 = (v46[5] & 0xFFFF0003) == 0;
          v46[5] &= 0xFFFF0003;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v31 + 116) &= ~0x40u;
      LOBYTE(v30) = KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v30) = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v30) = v30 - 2;
        if ( (unsigned __int8)v30 <= 0xDu )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          LODWORD(v30) = ~(unsigned __int16)(-1LL << (a5 + 1));
          v43 = ((unsigned int)v30 & v48[5]) == 0;
          v48[5] &= v30;
          if ( v43 )
            LOBYTE(v30) = KiRemoveSystemWorkPriorityKick(v47);
        }
      }
    }
    __writecr8(a5);
    return v30;
  }
  if ( !v30 )
    return v30;
  LOBYTE(v30) = *(_BYTE *)(a1 + 13242);
  if ( (_BYTE)v30 )
    return v30;
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 6) = 1;
    return v30;
  }
  memset(&v86[1], 0, 0x100uLL);
  v84 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v83 = 3;
    v49 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                                 + 120);
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v61[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v61[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v63 = 1;
    _disable();
    LOBYTE(v30) = v49(*(_QWORD *)(HalpInterruptController + 16), v61, &v83, 47LL, &ProcNumber);
    if ( (v88 & 0x200) != 0 )
      _enable();
    return v30;
  }
  LODWORD(v86[0]) = 2097153;
  memset((char *)v86 + 4, 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v86, KeGetPcr()->Prcb.Number);
  v61[0] = 0;
  v76 = 0LL;
  v85 = 0LL;
  v75 = 0LL;
  memset(&v87[1], 0, 0x100uLL);
  v66 = 0;
  v65 = 0LL;
  if ( qword_140C621C8 )
  {
    LOBYTE(v30) = qword_140C621C8(v86, 47LL);
    return v30;
  }
  LODWORD(v87[0]) = 2097153;
  memset((char *)v87 + 4, 0, 0x104uLL);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v86, v87, 0x20u);
  v50 = v88;
  if ( !HalpInterruptClusterModeEnabled )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      *((_QWORD *)&v75 + 1) = v86[1];
      LODWORD(v65) = 5;
      *(_QWORD *)&v75 = v86;
      DWORD2(v65) = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(v61, (unsigned __int16 **)&v75) )
      {
        if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v61[0]) == 5 )
          DWORD2(v65) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v61[0] + 8);
      }
      if ( DWORD2(v65) )
      {
        v71[0] = -1;
        v71[1] = 1;
        v72[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v72[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v56 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        LODWORD(v30) = v56(*(_QWORD *)(HalpInterruptController + 16), v72, &v65, 47LL, v71);
        if ( (v50 & 0x200) != 0 )
          _enable();
        if ( (int)v30 < 0 )
          return v30;
      }
    }
LABEL_107:
    *((_QWORD *)&v75 + 1) = v87[1];
    v61[0] = 0;
    *(_QWORD *)&v75 = v87;
    LOWORD(v76) = 0;
    for ( LODWORD(v30) = KeEnumerateNextProcessor(v61, (unsigned __int16 **)&v75);
          !(_DWORD)v30;
          LODWORD(v30) = KeEnumerateNextProcessor(v61, (unsigned __int16 **)&v75) )
    {
      LODWORD(v65) = 4;
      v73[0] = -1;
      v73[1] = 1;
      DWORD2(v65) = *(_DWORD *)(HalpInterruptTargets + 24LL * v61[0] + 8);
      v74[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v74[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v57 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      LODWORD(v30) = v57(*(_QWORD *)(HalpInterruptController + 16), v74, &v65, 47LL, v73);
      if ( (v50 & 0x200) != 0 )
        _enable();
      if ( (int)v30 < 0 )
        break;
    }
    return v30;
  }
  v51 = (unsigned int *)HalpInterruptClusterData;
  ProcNumber = 0;
  if ( HalpInterruptClusterData >= (unsigned __int64)HalpInterruptClusterDataEnd )
    goto LABEL_107;
  while ( 1 )
  {
    if ( (unsigned int)KeAndGroupAffinityEx(v86, (__int64)(v51 + 2), (char *)&v85) )
    {
      v52 = 0;
      LODWORD(v65) = 6;
      v53 = 0;
      v54 = v85;
      *((_QWORD *)&v65 + 1) = *v51;
      ProcNumber.Group = WORD4(v85);
      for ( ProcNumber.Number = 0; v54; ProcNumber.Number = v52 )
      {
        if ( (v54 & 1) != 0 )
        {
          v61[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
          v53 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v61[0] + 12);
          HIDWORD(v65) = v53;
        }
        ++v52;
        v54 >>= 1;
      }
      v69[0] = -1;
      v69[1] = 1;
      v70[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v70[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v55 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      LODWORD(v30) = v55(*(_QWORD *)(HalpInterruptController + 16), v70, &v65, 47LL, v69);
      if ( (v50 & 0x200) != 0 )
        _enable();
      if ( (int)v30 < 0 )
        return v30;
    }
    v51 += 6;
    if ( (unsigned __int64)v51 >= HalpInterruptClusterDataEnd )
      goto LABEL_107;
  }
}
