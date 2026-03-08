/*
 * XREFs of PopInvokeSystemStateHandler @ 0x140AA542C
 * Callers:
 *     PopEndMirroring @ 0x140A9F6B0 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140AA21D0 (PopTransitionToSleep.c)
 *     PopShutdownSystem @ 0x140AA5DA4 (PopShutdownSystem.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KeInsertQueueDpc @ 0x140230290 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     VfIsVerifierEnabled @ 0x14036B1B0 (VfIsVerifierEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1404203E0 (DbgBreakPointWithStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 *     KeRebaselineInterruptTime @ 0x140568AAC (KeRebaselineInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x140568ADC (KeRebaselineSystemTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeResumeDynamicTracing @ 0x14057C7D8 (KeResumeDynamicTracing.c)
 *     KeSuspendDynamicTracing @ 0x14057C7E8 (KeSuspendDynamicTracing.c)
 *     PopIssueNextState @ 0x140AA5CEC (PopIssueNextState.c)
 *     PopCheckpointSystemSleep @ 0x140AA7378 (PopCheckpointSystemSleep.c)
 *     MiConvertHiberPhasePages @ 0x140AA8EFC (MiConvertHiberPhasePages.c)
 *     MiUpdateUserMappings @ 0x140AA95F4 (MiUpdateUserMappings.c)
 *     MmInvalidateDumpAddresses @ 0x140AA9E60 (MmInvalidateDumpAddresses.c)
 *     VfNotifyOfHibernate @ 0x140AC4218 (VfNotifyOfHibernate.c)
 *     BgLibraryInitialize @ 0x140AEB57C (BgLibraryInitialize.c)
 */

__int64 __fastcall PopInvokeSystemStateHandler(int a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 CurrentIrql; // r13
  signed int v5; // r12d
  __int64 v7; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  unsigned int v10; // ebx
  int v11; // edi
  __int64 *v12; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // bl
  bool v18; // zf
  char v19; // bl
  __int64 v20; // rcx
  char v21; // al
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v24; // r8
  int v25; // eax
  LARGE_INTEGER v26; // [rsp+30h] [rbp-D0h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER v28; // [rsp+48h] [rbp-B8h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD DeferredContext[10]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v31; // [rsp+E0h] [rbp-20h] BYREF
  int v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+ECh] [rbp-14h]
  _QWORD v34[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v35[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _SLIST_ENTRY v36[10]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v37; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v38; // [rsp+1C0h] [rbp+C0h]

  v2 = a1;
  v26.QuadPart = 0LL;
  CurrentIrql = 0;
  Affinity = 0LL;
  v5 = -1073741823;
  memset(&Dpc, 0, 60);
  memset(DeferredContext, 0, sizeof(DeferredContext));
  LODWORD(DeferredContext[5]) = v2;
  v38 = 0LL;
  DeferredContext[0] = &v37;
  DeferredContext[4] = &PopPowerStateNotifyHandler;
  v37 = 0LL;
  if ( (_DWORD)v2 != 7 )
  {
    DeferredContext[0] = (char *)&PopPowerStateHandlers + 24 * v2;
    if ( !*(_QWORD *)(DeferredContext[0] + 8LL) )
      return 3221225664LL;
  }
  LODWORD(DeferredContext[6]) = KeNumberProcessors_0;
  HIDWORD(DeferredContext[7]) = KeNumberProcessors_0;
  LODWORD(DeferredContext[7]) = 1;
  if ( (unsigned int)(v2 - 4) > 1 )
  {
    if ( PopCheckpointSystemSleepEnabled )
    {
      v7 = *(unsigned int *)(DeferredContext[0] + 16LL);
      LODWORD(v7) = v7 | 0x40000;
      *(_QWORD *)(DeferredContext[0] + 16LL) = v7;
    }
    if ( ((_DWORD)v2 == 3 || (_DWORD)v2 == 6) && a2 )
    {
      DeferredContext[3] = a2;
      DeferredContext[1] = PopSaveHiberContextWrapper;
      DeferredContext[2] = a2;
    }
  }
  memset(v36, 0, sizeof(v36));
  if ( a2 )
  {
    PopHibernateSystemContext = DeferredContext[0];
    v12 = &PopHibernateSystemContext;
    qword_140D182A8 = DeferredContext[1];
    qword_140D182B0 = DeferredContext[2];
    qword_140D182B8 = DeferredContext[3];
    qword_140D182C0 = DeferredContext[4];
    dword_140D182C8 = DeferredContext[5];
    byte_140D182CC = BYTE4(DeferredContext[5]);
    dword_140D182D0 = DeferredContext[6];
    qword_140D182D8 = DeferredContext[7];
    RtlpInterlockedPushEntrySList(&stru_140D182E0, &v36[9]);
  }
  else
  {
    Affinity.Reserved[1] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    Affinity.Reserved[2] = 0;
    KeSetSystemGroupAffinityThread(&Affinity, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v9) = 4;
      else
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v9;
    }
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopInvokeStateHandlerTargetProcessor, DeferredContext);
    v10 = 0;
    for ( Dpc.Importance = 2; v10 < (unsigned int)KeNumberProcessors_0; ++v10 )
    {
      if ( v10 != KeGetCurrentPrcb()->Number )
      {
        v11 = HIDWORD(DeferredContext[6]);
        if ( !Dpc.DpcData )
          Dpc.Number = v10 + 2048;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v11 == HIDWORD(DeferredContext[6]) )
          _mm_pause();
      }
    }
    v12 = DeferredContext;
  }
  PopIssueNextState(v12, v36, 2LL);
  PopIssueNextState(v12, v36, 3LL);
  if ( dword_140C3CD80 == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v14 = 1000000LL * KeGetCurrentPrcb()->MHz;
  }
  else
  {
    v14 = PopQpcFrequency;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v33 = 0;
    v31 = v35;
    v35[0] = PerformanceCounter.QuadPart;
    v35[1] = v14;
    v32 = 16;
    EtwTraceKernelEvent((__int64)&v31, 1u, 0x80008000, 0x1230u, 0x401802u);
  }
  PopIssueNextState(v12, v36, 4LL);
  if ( a2 )
  {
    RtlpDebugPrintCallbacksActive = 0;
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      LOBYTE(v15) = 1;
      VfNotifyOfHibernate(v15);
    }
  }
  PoAllProcIntrDisabled = 1;
  PopCheckpointSystemSleep(17LL);
  if ( *((int *)&v36[7].Next + 2) >= 0 )
  {
    *((_BYTE *)v12 + 44) = 1;
    PopIssueNextState(v12, v36, 12LL);
    if ( (_DWORD)v2 != 3 && (_DWORD)v2 != 6 )
      off_140C01CD8[0]();
    if ( a2 )
    {
      PopIssueNextState(v12, v36, 5LL);
      KeSuspendDynamicTracing();
      if ( !_bittest(&PopSimulateHiberBugcheck, 8u) )
        MiUpdateUserMappings();
      PopIssueNextState(v12, v36, 10LL);
    }
    PopCheckpointSystemSleep(18LL);
    PopIssueNextState(v12, v36, 6LL);
    PopCheckpointSystemSleep(26LL);
    v5 = *((_DWORD *)&v36[7].Next + 2);
    KeRebaselineInterruptTime();
    off_140C01CC8[0]();
    if ( a2 && v5 == 1073742484 )
      PopIssueNextState(v12, v36, 7LL);
    PopIssueNextState(v12, v36, 8LL);
    if ( a2 )
    {
      if ( v5 == 1073742484 )
      {
        PopCheckpointSystemSleep(27LL);
        PopIssueNextState(v12, v36, 9LL);
        PopCheckpointSystemSleep(32LL);
      }
      MmInvalidateDumpAddresses(qword_140C3CA88, 19LL);
      v16 = *(_QWORD *)(a2 + 304);
      if ( v16 )
        MmInvalidateDumpAddresses(v16, (unsigned int)(16 * *(_DWORD *)(a2 + 256)));
      PopIssueNextState(v12, v36, 10LL);
      if ( !_bittest(&PopSimulateHiberBugcheck, 8u) )
      {
        MiUpdateUserMappings();
        MiConvertHiberPhasePages(0LL);
      }
      *(_BYTE *)(a2 + 3) = 0;
      KeResumeDynamicTracing();
      PopIssueNextState(v12, v36, 11LL);
    }
    v17 = PopDebugFlags;
    if ( (PopDebugFlags & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(v5);
    if ( (v17 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    PopNoMoreInput = 0;
    if ( v5 >= 0 )
    {
      ++PoPowerSequence;
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      dword_140C3C988 = 1;
      if ( PoResumeFromHibernate )
      {
        _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
        _InterlockedOr(&PopPendingUserPresenceMonitorOnReason, 0x19u);
      }
    }
    *((_BYTE *)v12 + 44) = 0;
    PopIssueNextState(v12, v36, 12LL);
  }
  if ( a2 )
  {
    if ( v5 == -1073741632 )
    {
      if ( (PopSimulate & 0x1000) == 0 )
      {
        while ( 1 )
          ;
      }
      *(_BYTE *)a2 = 1;
LABEL_71:
      v18 = qword_140C3D6A0 == 0;
      *v12 = (__int64)&unk_140C3D698;
      v12[3] = 0LL;
      if ( !v18 )
        PopIssueNextState(v12, v36, 6LL);
      HalReturnToFirmware(3);
    }
    PoHiberInProgress = 0;
    *(_DWORD *)(a2 + 188) = v5;
    if ( *(_BYTE *)a2 )
      goto LABEL_71;
    if ( (unsigned int)VfIsVerifierEnabled() )
      VfNotifyOfHibernate(0LL);
    if ( RtlpDebugPrintCallbackList == (_UNKNOWN *)&RtlpDebugPrintCallbackList )
      RtlpDebugPrintCallbacksActive = 1;
    *(_DWORD *)(a2 + 188) = 1073742484;
  }
  KeRebaselineInterruptTime();
  KeRebaselineSystemTime();
  PopCheckpointSystemSleep(33LL);
  PoAllProcIntrDisabled = 0;
  PopIssueNextState(v12, v36, 13LL);
  if ( v5 >= 0 )
  {
    if ( dword_140C3CD80 != 4 || PoResumeFromHibernate )
    {
      v19 = 0;
      v26 = KeQueryPerformanceCounter(0LL);
      qword_140C3D0C8 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39050;
    }
    else
    {
      v19 = 1;
      if ( !((unsigned __int8 (__fastcall *)(LARGE_INTEGER *, _QWORD))off_140C01AB0[0])(&v26, 0LL) )
        v26.QuadPart = 0LL;
    }
    if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
    {
      v28 = v26;
      v34[1] = 8LL;
      v34[0] = &v28;
      EtwTraceKernelEvent((__int64)v34, 1u, 0x80008000, 0x1231u, 0x401802u);
    }
    if ( v19 )
    {
      v26.QuadPart = v26.QuadPart / (1000 * (unsigned __int64)KeGetCurrentPrcb()->MHz) * (PopQpcFrequency / 0x3E8);
      qword_140C3CFA8 = v26.QuadPart - PerformanceCounter.QuadPart;
    }
  }
  PopIssueNextState(v12, v36, 14LL);
  PopIssueNextState(v12, v36, 15LL);
  PopIssueNextState(v12, v36, 16LL);
  if ( *((int *)&v36[7].Next + 2) >= 0 )
  {
    v20 = *v12;
    *((_DWORD *)&v36[7].Next + 2) = 0;
    v21 = *(_BYTE *)(v20 + 5);
    if ( v21 != -1 )
      *(_BYTE *)(v20 + 5) = v21 + 1;
  }
  if ( a2 )
  {
    if ( v5 == 1073742484 && !byte_140C3CAA1 && byte_140D17C58 )
      BgLibraryInitialize(qword_140D18150, 0LL);
  }
  else
  {
    if ( KiIrqlFlags )
    {
      v22 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v24 = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return *((unsigned int *)&v36[7].Next + 2);
}
