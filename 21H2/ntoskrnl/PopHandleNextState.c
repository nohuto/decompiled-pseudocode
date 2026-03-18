/*
 * XREFs of PopHandleNextState @ 0x140A4B5A0
 * Callers:
 *     PopIssueNextState @ 0x140A4B4D4 (PopIssueNextState.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140A4B520 (PopInvokeStateHandlerTargetProcessor.c)
 * Callees:
 *     KeRestoreExtendedAndSupervisorState @ 0x14022E848 (KeRestoreExtendedAndSupervisorState.c)
 *     KeForceAttachProcess @ 0x1402393FC (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x140241980 (KeForceDetachProcess.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1402421DC (KeSaveExtendedAndSupervisorState.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     PopFxNotifySystemStateTransition @ 0x14038BF74 (PopFxNotifySystemStateTransition.c)
 *     KeResumeClockTimer @ 0x14038BF94 (KeResumeClockTimer.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x14038C0C8 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSaveProcessorSpecificFeatures @ 0x14038D050 (KeSaveProcessorSpecificFeatures.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x14038D068 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeSuspendClockTimer @ 0x14038D088 (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x14038D0F4 (KeRestoreProcessorSpecificFeatures.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeFlushCurrentTbImmediately @ 0x1403B1CF0 (KeFlushCurrentTbImmediately.c)
 *     HvlEnlightenProcessor @ 0x1403B6B58 (HvlEnlightenProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PpmResetPerfEngineForProcessorEx @ 0x140419B58 (PpmResetPerfEngineForProcessorEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KdPowerTransition @ 0x1405657E0 (KdPowerTransition.c)
 *     PopRestoreHiberContext @ 0x140A4C960 (PopRestoreHiberContext.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140A529EC (PopSstDiagInitializeResumeTimer.c)
 */

void __fastcall PopHandleNextState(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  unsigned int Number; // ecx
  int v13; // r14d
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  __int16 v21; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)a2 )
  {
    if ( (++v6 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v6);
    }
    else
    {
      _mm_pause();
    }
  }
  v7 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v7;
  v8 = 0x140000000uLL;
  switch ( v7 )
  {
    case 2:
      PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 1, dword_140C227E0);
      break;
    case 3:
      KeSaveIptStateBeforeProcessorGoesOffline();
      *(_BYTE *)(a2 + 5) = 0;
      if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        *(_BYTE *)(a2 + 5) = (int)KeSaveExtendedAndSupervisorState(
                                    (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                    (__int64 *)(a2 + 8)) >= 0;
      KeSaveProcessorSpecificFeatures();
      *(_QWORD *)(a2 + 128) = KeGetPcr();
      break;
    case 4:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
      }
      *(_BYTE *)(a2 + 7) = CurrentIrql;
      _disable();
      *(_BYTE *)(a2 + 4) = (v21 & 0x200) != 0;
      KeSuspendClockTimer();
      break;
    case 5:
      if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
      {
        *(_BYTE *)(a2 + 6) = 1;
        KeForceAttachProcess((ULONG_PTR)PsInitialSystemProcess, a2 + 64);
      }
      break;
    case 6:
      if ( (PopSimulate & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
      {
        PoResumeFromHibernate = 1;
        *(_DWORD *)(a2 + 120) = 0;
      }
      else
      {
        if ( !CurrentPrcb->Number && !*(_QWORD *)(a1 + 8) )
          KdPowerTransition(4);
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(
                *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                *(_QWORD *)(a1 + 8),
                *(_QWORD *)(a1 + 16),
                *(unsigned int *)(a1 + 48),
                a1 + 60);
        Number = CurrentPrcb->Number;
        v13 = v11;
        if ( !Number )
        {
          if ( !PoResumeFromHibernate )
          {
            KdPowerTransition(1);
            Number = CurrentPrcb->Number;
          }
          if ( !Number )
          {
            PopSstDiagInitializeResumeTimer();
            if ( !CurrentPrcb->Number )
              qword_140C22E00 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C1D010;
          }
        }
        *(_DWORD *)(a2 + 120) = v13;
      }
      break;
    case 7:
      HvlEnlightenProcessor(1);
      break;
    case 8:
      KeRestoreProcessorSpecificFeatures(a2 + 112);
      break;
    case 9:
      PopRestoreHiberContext(*(_QWORD *)(a1 + 24));
      break;
    case 10:
      KeFlushCurrentTbImmediately();
      __wbinvd();
      break;
    case 11:
      if ( *(_BYTE *)(a2 + 6) )
      {
        KeForceDetachProcess((_OWORD *)(a2 + 64), 1);
        *(_BYTE *)(a2 + 6) = 0;
      }
      break;
    case 12:
      v14 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)v14 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))v14)(
          *(unsigned int *)(a1 + 40),
          *(_QWORD *)(v14 + 8),
          *(unsigned __int8 *)(a1 + 44));
      break;
    case 13:
      KeResumeClockTimer();
      PpmResetPerfEngineForProcessorEx((__int64)CurrentPrcb, 0);
      if ( *(_BYTE *)(a2 + 4) )
        _enable();
      v15 = *(unsigned __int8 *)(a2 + 7);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = v17->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v20 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)v17);
          }
        }
      }
      __writecr8(v15);
      break;
    case 14:
      PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 0, dword_140C227E0);
      break;
    case 15:
      if ( *(_BYTE *)(a2 + 5) )
        KeRestoreExtendedAndSupervisorState(a2 + 8);
      KeRestoreIptStateAfterProcessorComesOnline(v8, a2, a3);
      PpmResetPerfEngineForProcessorEx((__int64)CurrentPrcb, 1);
      break;
    default:
      break;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
}
