/*
 * XREFs of PopHandleNextState @ 0x140AA4FAC
 * Callers:
 *     PopInvokeStateHandlerTargetProcessor @ 0x140AA53B0 (PopInvokeStateHandlerTargetProcessor.c)
 *     PopIssueNextState @ 0x140AA5CEC (PopIssueNextState.c)
 * Callees:
 *     KeForceDetachProcess @ 0x14020CC48 (KeForceDetachProcess.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KeForceAttachProcess @ 0x1402E6610 (KeForceAttachProcess.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x14036A3E8 (KeRestoreExtendedAndSupervisorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14036A62C (KeSaveExtendedAndSupervisorState.c)
 *     HvlEnlightenProcessor @ 0x14037F430 (HvlEnlightenProcessor.c)
 *     KeFlushCurrentTbImmediately @ 0x140396EE0 (KeFlushCurrentTbImmediately.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KdPowerTransition @ 0x1405655B0 (KdPowerTransition.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x140569B44 (KeRestoreProcessorSpecificFeatures.c)
 *     KeSaveProcessorSpecificFeatures @ 0x140569BCC (KeSaveProcessorSpecificFeatures.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeResumeClockTimer @ 0x14056D39C (KeResumeClockTimer.c)
 *     KeSuspendClockTimer @ 0x14056D49C (KeSuspendClockTimer.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x14057007C (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x1405700B8 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     PopFxNotifySystemStateTransition @ 0x140588B24 (PopFxNotifySystemStateTransition.c)
 *     PpmResetPerfEngineForProcessor @ 0x14058B178 (PpmResetPerfEngineForProcessor.c)
 *     PopRestoreHiberContext @ 0x140AA139C (PopRestoreHiberContext.c)
 *     PopSstDiagInitializeResumeTimer @ 0x140AA74F4 (PopSstDiagInitializeResumeTimer.c)
 */

void __fastcall PopHandleNextState(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // ebp
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r10
  __int64 v16; // r9
  volatile signed __int32 *v17; // rdx
  char v18; // dl
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KPRCB *v29; // rcx
  signed __int32 *v30; // r8
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  unsigned __int64 v33; // rbx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r8
  int v37; // eax
  bool v38; // zf
  __int64 v39; // rdx
  __int16 v40; // [rsp+50h] [rbp-8h]
  int v41; // [rsp+60h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v41 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)a2 )
    KeYieldProcessorEx(&v41);
  v6 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v6;
  if ( v6 <= 9 )
  {
    if ( v6 == 9 )
    {
      PopRestoreHiberContext(*(_QWORD *)(a1 + 24));
      goto LABEL_76;
    }
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                if ( v12 == 1 )
                  KeRestoreProcessorSpecificFeatures(a2 + 112);
              }
              else
              {
                HvlEnlightenProcessor(1);
              }
            }
            else
            {
              if ( (PopSimulate & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
              {
                v13 = 0;
                PoResumeFromHibernate = 1;
              }
              else
              {
                if ( !CurrentPrcb->Number && !*(_QWORD *)(a1 + 8) )
                  KdPowerTransition(4);
                v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(
                        *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                        *(_QWORD *)(a1 + 8),
                        *(_QWORD *)(a1 + 16),
                        *(unsigned int *)(a1 + 48),
                        a1 + 60);
                if ( !CurrentPrcb->Number )
                {
                  if ( !PoResumeFromHibernate )
                    KdPowerTransition(1);
                  if ( !CurrentPrcb->Number )
                  {
                    PopSstDiagInitializeResumeTimer();
                    if ( !CurrentPrcb->Number )
                      qword_140C3D0C0 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39050;
                  }
                }
              }
              *(_DWORD *)(a2 + 120) = v13;
            }
          }
          else if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
          {
            *(_BYTE *)(a2 + 6) = 1;
            KeForceAttachProcess((ULONG_PTR)PsInitialSystemProcess, a2 + 64);
          }
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            if ( CurrentIrql == 15 )
              LODWORD(v16) = 0x8000;
            else
              v16 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
            SchedulerAssist[5] |= v16;
          }
          *(_BYTE *)(a2 + 7) = CurrentIrql;
          _disable();
          v17 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
          if ( v17 )
            _InterlockedOr(v17, 0x200000u);
          *(_BYTE *)(a2 + 4) = (v40 & 0x200) != 0;
          KeSuspendClockTimer();
        }
      }
      else
      {
        KeSaveIptStateBeforeProcessorGoesOffline();
        *(_BYTE *)(a2 + 5) = 0;
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          *(_BYTE *)(a2 + 5) = (int)KeSaveExtendedAndSupervisorState(
                                      (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                      (__int64 *)(a2 + 8)) >= 0;
        KeSaveProcessorSpecificFeatures();
        *(_QWORD *)(a2 + 128) = KeGetPcr();
      }
      goto LABEL_76;
    }
    v18 = 1;
LABEL_44:
    PopFxNotifySystemStateTransition((__int64)CurrentPrcb, v18, dword_140C3CD80);
    goto LABEL_76;
  }
  v19 = v6 - 10;
  if ( !v19 )
  {
    KeFlushCurrentTbImmediately();
    __wbinvd();
    goto LABEL_76;
  }
  v20 = v19 - 1;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( !v23 )
        {
          v18 = 0;
          goto LABEL_44;
        }
        if ( v23 == 1 )
        {
          if ( *(_BYTE *)(a2 + 5) )
            KeRestoreExtendedAndSupervisorState(a2 + 8);
          KeRestoreIptStateAfterProcessorComesOnline(a1, a2, a3);
          LOBYTE(v24) = 1;
          PpmResetPerfEngineForProcessor((__int64)CurrentPrcb, v24, v25, v26);
        }
      }
      else
      {
        KeResumeClockTimer();
        PpmResetPerfEngineForProcessor((__int64)CurrentPrcb, 0LL, v27, v28);
        if ( *(_BYTE *)(a2 + 4) )
        {
          v29 = KeGetCurrentPrcb();
          v30 = (signed __int32 *)v29->SchedulerAssist;
          if ( v30 )
          {
            _m_prefetchw(v30);
            v31 = *v30;
            do
            {
              v32 = v31;
              v31 = _InterlockedCompareExchange(v30, v31 & 0xFFDFFFFF, v31);
            }
            while ( v32 != v31 );
            if ( (v31 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)v29);
          }
          _enable();
        }
        v33 = *(unsigned __int8 *)(a2 + 7);
        if ( KiIrqlFlags )
        {
          v34 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && (unsigned __int8)v33 <= 0xFu && v34 >= 2u )
          {
            v35 = KeGetCurrentPrcb();
            v36 = v35->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
            v38 = (v37 & v36[5]) == 0;
            v36[5] &= v37;
            if ( v38 )
              KiRemoveSystemWorkPriorityKick((__int64)v35);
          }
        }
        __writecr8(v33);
      }
    }
    else
    {
      v39 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)v39 )
      {
        LOBYTE(a3) = *(_BYTE *)(a1 + 44);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))v39)(*(unsigned int *)(a1 + 40), *(_QWORD *)(v39 + 8), a3);
      }
    }
  }
  else if ( *(_BYTE *)(a2 + 6) )
  {
    KeForceDetachProcess((_OWORD *)(a2 + 64), 1);
    *(_BYTE *)(a2 + 6) = 0;
  }
LABEL_76:
  _InterlockedAdd((volatile signed __int32 *)(a1 + 52), 1u);
}
