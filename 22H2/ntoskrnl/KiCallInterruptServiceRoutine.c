/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x1403439C0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403FF030 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403FF210 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FF360 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403FF4B0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1405218AC (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1402D8A70 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckAndRearmForceIdle @ 0x140328AEC (KiCheckAndRearmForceIdle.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140343C78 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x140344540 (KeFindFirstSetRightGroupAffinity.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x1405167CC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1405168D8 (KiReleaseSpinLockInstrumented.c)
 *     KiResetForceIdle @ 0x140523560 (KiResetForceIdle.c)
 */

char __fastcall KiCallInterruptServiceRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *IsrDpcStats; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  char v12; // bp
  unsigned __int64 v13; // rax
  unsigned int DpcWatchdogSequenceNumber; // edx
  unsigned __int64 v15; // rcx
  volatile signed __int32 *v17; // rbp
  struct _KPRCB *v18; // r13
  _DWORD *SchedulerAssist; // rcx
  volatile signed __int64 *v20; // rcx
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  unsigned int v23; // r8d
  char v24; // cl
  unsigned int FirstSetRightGroupAffinity; // eax
  unsigned __int64 v26; // rax
  _DWORD *v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  if ( (unsigned int)(*(_DWORD *)(a1 + 88) - 48) <= 0x9F && !KiForceIdleDisabled )
  {
    if ( KiForceIdleState == 4 )
    {
      KiResetForceIdle(1LL, 0LL);
    }
    else if ( (unsigned int)(KiForceIdleState - 1) <= 1 )
    {
      KiCheckAndRearmForceIdle(a1, a2, a3, a4);
    }
  }
  if ( !*(_BYTE *)(a1 + 93) )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
    return v12 != 0;
  }
  v6 = *(_QWORD *)(a1 + 272);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 16) )
    {
      v23 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
      v24 = v23 & 0x3F;
      a3 = v23 >> 6;
      if ( ((unsigned int)(*(_QWORD *)v6 >> v24) & ((_DWORD)a3 == *(unsigned __int16 *)(v6 + 8))) == 0 )
      {
        FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(*(_QWORD *)(a1 + 272));
        KiIntRedirectQueueRequestOnProcessor(FirstSetRightGroupAffinity);
        return 2;
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  IsrDpcStats = CurrentPrcb->IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 1;
  CurrentPrcb->IsrDpcStats = (void *)(a1 + 176);
  v9 = __rdtsc();
  v10 = (unsigned __int64)HIDWORD(v9) << 32;
  *(_QWORD *)(a1 + 184) = v9;
  v11 = v9;
  if ( v4 )
  {
    v17 = *(volatile signed __int32 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(*(_QWORD *)(a1 + 72));
    }
    else
    {
      v18 = KeGetCurrentPrcb();
      SchedulerAssist = v18->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v18->NestingLevel <= 1u )
        {
          v28 = SchedulerAssist[6];
          SchedulerAssist[6] = v28 + 1;
          if ( v28 == -1 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
      if ( _interlockedbittestandset64(v17, 0LL) )
      {
        v27 = v18->SchedulerAssist;
        if ( v27 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v29 = v27[6] - 1;
            v27[6] = v29;
            if ( !v29 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        KxWaitForSpinLockAndAcquire(v17, v10, a3, v6);
      }
    }
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
  if ( v4 )
  {
    v20 = *(volatile signed __int64 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v20, retaddr);
    else
      _InterlockedAnd64(v20, 0LL);
    v21 = KeGetCurrentPrcb();
    v22 = v21->SchedulerAssist;
    if ( v22 )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v30 = v22[6] - 1;
        v22[6] = v30;
        if ( !v30 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
  }
  v13 = __rdtsc();
  DpcWatchdogSequenceNumber = CurrentPrcb->DpcWatchdogSequenceNumber;
  v15 = v13 - *(_QWORD *)(a1 + 184);
  if ( DpcWatchdogSequenceNumber != *(_DWORD *)(a1 + 232) )
  {
    *(_DWORD *)(a1 + 232) = DpcWatchdogSequenceNumber;
    *(_QWORD *)(a1 + 240) = 0LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 256) = 0LL;
    *(_QWORD *)(a1 + 264) = 0LL;
  }
  *(_QWORD *)(a1 + 176) += v15;
  *(_QWORD *)(a1 + 240) += v15;
  if ( IsrDpcStats != (_QWORD *)1 )
  {
    v26 = v13 - v11;
    if ( *((_BYTE *)IsrDpcStats + 48) )
      IsrDpcStats[1] += v26;
    else
      IsrDpcStats[4] += v26;
  }
  CurrentPrcb->IsrDpcStats = IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 0;
  if ( v12 )
  {
    ++*(_QWORD *)(a1 + 192);
    ++*(_QWORD *)(a1 + 248);
    return v12 != 0;
  }
  return 0;
}
