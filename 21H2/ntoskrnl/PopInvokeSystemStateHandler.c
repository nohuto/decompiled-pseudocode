/*
 * XREFs of PopInvokeSystemStateHandler @ 0x140993A68
 * Callers:
 *     PopTransitionToSleep @ 0x1409960D0 (PopTransitionToSleep.c)
 *     PopEndMirroring @ 0x140997250 (PopEndMirroring.c)
 *     PopShutdownSystem @ 0x1409B3554 (PopShutdownSystem.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140252060 (VfIsVerifierEnabled.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KeRebaselineInterruptTime @ 0x14038407C (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x14038DEE8 (KeRebaselineSystemTime.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140407A90 (DbgBreakPointWithStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalReturnToFirmware @ 0x1404BE3E0 (HalReturnToFirmware.c)
 *     PopIssueNextState @ 0x14099400C (PopIssueNextState.c)
 *     PopCheckpointSystemSleep @ 0x140994484 (PopCheckpointSystemSleep.c)
 *     MiUpdateUserMappings @ 0x140995E58 (MiUpdateUserMappings.c)
 *     MiConvertHiberPhasePages @ 0x140995F28 (MiConvertHiberPhasePages.c)
 *     MmInvalidateDumpAddresses @ 0x140998AE8 (MmInvalidateDumpAddresses.c)
 *     VfNotifyOfHibernate @ 0x1409CDB8C (VfNotifyOfHibernate.c)
 *     BgLibraryInitialize @ 0x1409F2854 (BgLibraryInitialize.c)
 */

__int64 __fastcall PopInvokeSystemStateHandler(int a1, __int64 a2)
{
  __int64 v3; // r15
  unsigned __int8 CurrentIrql; // r13
  signed int Next; // r12d
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(ULONG_PTR); // rsi
  __int64 v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // rbx
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // bl
  char v15; // bl
  __int64 v16; // rcx
  char v17; // al
  __int64 v19; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned int i; // ebx
  int v22; // edi
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v26; // r8
  int v27; // eax
  LARGE_INTEGER v28; // [rsp+30h] [rbp-D0h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER v30; // [rsp+48h] [rbp-B8h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD DeferredContext[10]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v33; // [rsp+E0h] [rbp-20h] BYREF
  int v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+ECh] [rbp-14h]
  _QWORD v36[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v37[2]; // [rsp+100h] [rbp+0h] BYREF
  _SLIST_ENTRY v38[9]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v39; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v40; // [rsp+1B0h] [rbp+B0h]

  v3 = a1;
  Affinity = 0LL;
  memset(&Dpc, 0, sizeof(Dpc));
  v28.QuadPart = 0LL;
  CurrentIrql = 0;
  Next = -1073741823;
  memset(DeferredContext, 0, sizeof(DeferredContext));
  LODWORD(DeferredContext[5]) = v3;
  v40 = 0LL;
  DeferredContext[0] = &v39;
  DeferredContext[4] = &PopPowerStateNotifyHandler;
  v39 = 0LL;
  if ( (_DWORD)v3 != 7 )
  {
    DeferredContext[0] = (char *)&PopPowerStateHandlers + 24 * v3;
    if ( !*(_QWORD *)(DeferredContext[0] + 8LL) )
      return 3221225664LL;
  }
  LODWORD(DeferredContext[6]) = KeNumberProcessors_0;
  HIDWORD(DeferredContext[7]) = KeNumberProcessors_0;
  LODWORD(DeferredContext[7]) = 1;
  if ( (unsigned int)(v3 - 4) > 1 && PopCheckpointSystemSleepEnabled )
  {
    v19 = *(unsigned int *)(DeferredContext[0] + 16LL);
    LODWORD(v19) = v19 | 0x40000;
    *(_QWORD *)(DeferredContext[0] + 16LL) = v19;
  }
  if ( ((_DWORD)v3 == 3 || (_DWORD)v3 == 6) && a2 )
  {
    v6 = a2;
    DeferredContext[2] = a2;
    v7 = PopSaveHiberContextWrapper;
    DeferredContext[3] = a2;
    DeferredContext[1] = PopSaveHiberContextWrapper;
    v8 = a2;
  }
  else
  {
    v6 = DeferredContext[3];
    v8 = DeferredContext[2];
    v7 = (__int64 (__fastcall *)(ULONG_PTR))DeferredContext[1];
  }
  memset(v38, 0, sizeof(v38));
  if ( a2 )
  {
    PopHibernateSystemContext = DeferredContext[0];
    qword_140C506C0 = DeferredContext[4];
    dword_140C506C8 = DeferredContext[5];
    byte_140C506CC = BYTE4(DeferredContext[5]);
    dword_140C506D0 = DeferredContext[6];
    qword_140C506A8 = (__int64)v7;
    v9 = &PopHibernateSystemContext;
    qword_140C506B0 = v8;
    qword_140C506B8 = v6;
    qword_140C506D8 = DeferredContext[7];
    RtlpInterlockedPushEntrySList(&stru_140C506E0, &v38[8]);
  }
  else
  {
    Affinity.Reserved[1] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    Affinity.Reserved[2] = 0;
    Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    KeInitializeDpc(&Dpc, PopInvokeStateHandlerTargetProcessor, DeferredContext);
    Dpc.Importance = 2;
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      if ( i != KeGetCurrentPrcb()->Number )
      {
        v22 = HIDWORD(DeferredContext[6]);
        if ( !Dpc.DpcData )
          Dpc.Number = i + 1280;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v22 == HIDWORD(DeferredContext[6]) )
          _mm_pause();
      }
    }
    v9 = DeferredContext;
  }
  PopIssueNextState(v9, v38, 2LL);
  PopIssueNextState(v9, v38, 3LL);
  if ( dword_140C23A80 == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v10 = 1000000LL * KeGetCurrentPrcb()->MHz;
  }
  else
  {
    v10 = PopQpcFrequency;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    v35 = 0;
    v33 = v37;
    v37[0] = PerformanceCounter.QuadPart;
    v37[1] = v10;
    v34 = 16;
    EtwTraceKernelEvent((int)&v33, 1, 0x80008000, 4656, 4200450);
  }
  PopIssueNextState(v9, v38, 4LL);
  if ( a2 )
  {
    RtlpDebugPrintCallbacksActive = 0;
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      LOBYTE(v12) = 1;
      VfNotifyOfHibernate(v12);
    }
  }
  PoAllProcIntrDisabled = 1;
  PopCheckpointSystemSleep(17LL);
  if ( SLODWORD(v38[7].Next) >= 0 )
  {
    *((_BYTE *)v9 + 44) = 1;
    PopIssueNextState(v9, v38, 12LL);
    if ( (_DWORD)v3 != 3 && (_DWORD)v3 != 6 )
      off_140C008C8[0]();
    if ( a2 )
    {
      PopIssueNextState(v9, v38, 5LL);
      if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
        MiUpdateUserMappings();
      PopIssueNextState(v9, v38, 10LL);
    }
    PopCheckpointSystemSleep(18LL);
    PopIssueNextState(v9, v38, 6LL);
    PopCheckpointSystemSleep(26LL);
    Next = (signed int)v38[7].Next;
    KeRebaselineInterruptTime();
    off_140C008B8[0]();
    if ( a2 && Next == 1073742484 )
      PopIssueNextState(v9, v38, 7LL);
    PopIssueNextState(v9, v38, 8LL);
    if ( a2 )
    {
      if ( Next == 1073742484 )
      {
        PopCheckpointSystemSleep(27LL);
        PopIssueNextState(v9, v38, 9LL);
        PopCheckpointSystemSleep(32LL);
      }
      MmInvalidateDumpAddresses(qword_140C23E88, 19LL);
      v13 = *(_QWORD *)(a2 + 304);
      if ( v13 )
        MmInvalidateDumpAddresses(v13, (unsigned int)(16 * *(_DWORD *)(a2 + 256)));
      PopIssueNextState(v9, v38, 10LL);
      if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      {
        MiUpdateUserMappings();
        MiConvertHiberPhasePages(0LL);
      }
      *(_BYTE *)(a2 + 3) = 0;
      PopIssueNextState(v9, v38, 11LL);
    }
    v14 = PopDebugFlags;
    if ( (PopDebugFlags & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(Next);
    if ( (v14 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    PopNoMoreInput = 0;
    if ( Next >= 0 )
    {
      ++PoPowerSequence;
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      dword_140C23968 = 1;
      if ( PoResumeFromHibernate )
      {
        _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
        _InterlockedOr(&PopPendingUserPresenceMonitorOnReason, 0x19u);
      }
    }
    *((_BYTE *)v9 + 44) = 0;
    PopIssueNextState(v9, v38, 12LL);
  }
  if ( a2 )
  {
    if ( Next == -1073741632 )
    {
      if ( (PopSimulate & 0x1000) == 0 )
      {
        while ( 1 )
          ;
      }
      *(_BYTE *)a2 = 1;
    }
    else
    {
      PoHiberInProgress = 0;
      *(_DWORD *)(a2 + 188) = Next;
      if ( !*(_BYTE *)a2 )
      {
        if ( (unsigned int)VfIsVerifierEnabled() )
          VfNotifyOfHibernate(0LL);
        if ( RtlpDebugPrintCallbackList == (_UNKNOWN *)&RtlpDebugPrintCallbackList )
          RtlpDebugPrintCallbacksActive = 1;
        *(_DWORD *)(a2 + 188) = 1073742484;
        goto LABEL_49;
      }
    }
    v23 = qword_140C23200 == 0;
    *v9 = (__int64)&unk_140C231F8;
    v9[3] = 0LL;
    if ( !v23 )
      PopIssueNextState(v9, v38, 6LL);
    HalReturnToFirmware(3);
  }
LABEL_49:
  KeRebaselineInterruptTime();
  KeRebaselineSystemTime();
  PopCheckpointSystemSleep(33LL);
  PoAllProcIntrDisabled = 0;
  PopIssueNextState(v9, v38, 13LL);
  if ( Next >= 0 )
  {
    if ( dword_140C23A80 != 4 || PoResumeFromHibernate )
    {
      v15 = 0;
      v28 = KeQueryPerformanceCounter(0LL);
      ((void (__fastcall *)(void *, __int64 *))off_140C006A0[0])(&unk_140C240A8, &qword_140C240B0);
    }
    else
    {
      v15 = 1;
      if ( !((unsigned __int8 (__fastcall *)(LARGE_INTEGER *, _QWORD))off_140C006A0[0])(&v28, 0LL) )
        v28.QuadPart = 0LL;
    }
    if ( (xmmword_140CFC490 & 0x8000) != 0 )
    {
      v30 = v28;
      v36[1] = 8LL;
      v36[0] = &v30;
      EtwTraceKernelEvent((int)v36, 1, 0x80008000, 4657, 4200450);
    }
    if ( v15 )
    {
      v28.QuadPart = v28.QuadPart / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz) * (PopQpcFrequency / 0x3E8);
      qword_140C23F88 = v28.QuadPart - PerformanceCounter.QuadPart;
    }
  }
  PopIssueNextState(v9, v38, 14LL);
  PopIssueNextState(v9, v38, 15LL);
  PopIssueNextState(v9, v38, 16LL);
  if ( SLODWORD(v38[7].Next) >= 0 )
  {
    v16 = *v9;
    LODWORD(v38[7].Next) = 0;
    v17 = *(_BYTE *)(v16 + 5);
    if ( v17 != -1 )
      *(_BYTE *)(v16 + 5) = v17 + 1;
  }
  if ( a2 )
  {
    if ( !byte_140C23EA1 && Next == 1073742484 )
    {
      if ( byte_140C50690 )
        BgLibraryInitialize(qword_140C50688, 0LL);
    }
  }
  else
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return LODWORD(v38[7].Next);
}
