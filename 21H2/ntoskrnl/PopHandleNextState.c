/*
 * XREFs of PopHandleNextState @ 0x1409940D0
 * Callers:
 *     PopIssueNextState @ 0x14099400C (PopIssueNextState.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140994050 (PopInvokeStateHandlerTargetProcessor.c)
 * Callees:
 *     KeForceDetachProcess @ 0x140238598 (KeForceDetachProcess.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14023F3FC (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1402411B8 (KeRestoreExtendedAndSupervisorState.c)
 *     KeForceAttachProcess @ 0x14027D7E8 (KeForceAttachProcess.c)
 *     PopFxNotifySystemStateTransition @ 0x1403835F8 (PopFxNotifySystemStateTransition.c)
 *     KeResumeClockTimer @ 0x140383618 (KeResumeClockTimer.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x140383704 (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x140383DF8 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeSuspendClockTimer @ 0x140383E18 (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x140383E7C (KeRestoreProcessorSpecificFeatures.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeFlushCurrentTbImmediately @ 0x1403A0BD0 (KeFlushCurrentTbImmediately.c)
 *     HvlEnlightenProcessor @ 0x1403A7AE8 (HvlEnlightenProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmResetPerfEngineForProcessorEx @ 0x1403F81B0 (PpmResetPerfEngineForProcessorEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KdPowerTransition @ 0x1405111E0 (KdPowerTransition.c)
 *     PopRestoreHiberContext @ 0x1409944E8 (PopRestoreHiberContext.c)
 */

void __fastcall PopHandleNextState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v5; // edi
  int v6; // eax
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r8
  int v9; // eax
  __int64 v10; // rdx
  unsigned int Number; // ecx
  int v12; // r14d
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // eax
  bool v19; // zf
  __int64 v20; // rdx
  __int16 v21; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)a2 )
  {
    if ( (++v5 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v5);
    }
    else
    {
      _mm_pause();
    }
  }
  v6 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v6;
  switch ( v6 )
  {
    case 2:
      PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 1, dword_140C23A80);
      break;
    case 3:
      KeSaveIptStateBeforeProcessorGoesOffline();
      *(_BYTE *)(a2 + 5) = 0;
      if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        *(_BYTE *)(a2 + 5) = (int)KeSaveExtendedAndSupervisorState(
                                    (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                    (PVOID *)(a2 + 8)) >= 0;
      *(_QWORD *)(a2 + 120) = KeGetPcr();
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
        *(_DWORD *)(a2 + 112) = 0;
      }
      else
      {
        if ( !CurrentPrcb->Number && !*(_QWORD *)(a1 + 8) )
          KdPowerTransition(4LL, a2);
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(
               *(_QWORD *)(*(_QWORD *)a1 + 16LL),
               *(_QWORD *)(a1 + 8),
               *(_QWORD *)(a1 + 16),
               *(unsigned int *)(a1 + 48),
               a1 + 60);
        Number = CurrentPrcb->Number;
        v12 = v9;
        if ( !Number )
        {
          if ( !PoResumeFromHibernate )
          {
            KdPowerTransition(1LL, v10);
            Number = CurrentPrcb->Number;
          }
          if ( !Number )
            qword_140C240A0 = __rdtsc();
        }
        *(_DWORD *)(a2 + 112) = v12;
      }
      break;
    case 7:
      HvlEnlightenProcessor(1);
      break;
    case 8:
      KeRestoreProcessorSpecificFeatures();
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
      v13 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)v13 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))v13)(
          *(unsigned int *)(a1 + 40),
          *(_QWORD *)(v13 + 8),
          *(unsigned __int8 *)(a1 + 44));
      break;
    case 13:
      KeResumeClockTimer();
      PpmResetPerfEngineForProcessorEx((__int64)CurrentPrcb, 0LL);
      if ( *(_BYTE *)(a2 + 4) )
        _enable();
      v14 = *(unsigned __int8 *)(a2 + 7);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v15 = KeGetCurrentIrql();
          if ( v15 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v15 >= 2u )
          {
            v16 = KeGetCurrentPrcb();
            v17 = v16->SchedulerAssist;
            v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v19 = (v18 & v17[5]) == 0;
            v17[5] &= v18;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick((__int64)v16);
          }
        }
      }
      __writecr8(v14);
      break;
    case 14:
      PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 0, dword_140C23A80);
      break;
    case 15:
      if ( *(_BYTE *)(a2 + 5) )
        KeRestoreExtendedAndSupervisorState(a2 + 8);
      KeRestoreIptStateAfterProcessorComesOnline();
      LOBYTE(v20) = 1;
      PpmResetPerfEngineForProcessorEx((__int64)CurrentPrcb, v20);
      break;
    default:
      break;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
}
