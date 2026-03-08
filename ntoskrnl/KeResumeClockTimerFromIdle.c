/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x14022E860
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiSetClockTimer @ 0x14022AC78 (KiSetClockTimer.c)
 *     KiSetPendingTick @ 0x14022AF40 (KiSetPendingTick.c)
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140236F18 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiEventClockStateChange @ 0x1402A9ADC (KiEventClockStateChange.c)
 *     KiRestoreClockTickRate @ 0x1402D9574 (KiRestoreClockTickRate.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402DF1B0 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSendClockInterruptToClockOwner @ 0x1402F984C (KiSendClockInterruptToClockOwner.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     KiUpdateTimeAssist @ 0x1403C9BA8 (KiUpdateTimeAssist.c)
 *     KiGetPendingTick @ 0x1403CED40 (KiGetPendingTick.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14056CE10 (KeFindFirstSetRightAffinityEx.c)
 *     KiAdjustTimersAfterDripsExit @ 0x14056D68C (KiAdjustTimersAfterDripsExit.c)
 *     KiResetForceIdle @ 0x14057ACCC (KiResetForceIdle.c)
 *     KiGetPastDueIRTimerInfo @ 0x14057B0D4 (KiGetPastDueIRTimerInfo.c)
 *     ExRecordOneTimerExpiry @ 0x140609608 (ExRecordOneTimerExpiry.c)
 */

void __fastcall KeResumeClockTimerFromIdle(_DWORD *a1, volatile signed __int32 *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  signed __int32 v4; // eax
  __int64 v5; // r14
  unsigned int *p_Number; // rsi
  __int64 v7; // rax
  __int64 ClockOwner; // rcx
  __int64 *v9; // r8
  char v10; // di
  struct _KPRCB *v11; // rax
  unsigned __int8 v12; // si
  __int64 InterruptTimePrecise; // rdi
  unsigned __int64 v14; // r12
  char v15; // r13
  unsigned int FirstSetRightAffinity; // r13d
  unsigned int v17; // ecx
  __int32 v18; // edi
  __int64 *v19; // r9
  __int64 v20; // rcx
  __int64 *v21; // r8
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  bool v30; // zf
  _BOOL8 v31; // rcx
  _DWORD *v32; // r8
  struct _KPRCB *v33; // r9
  int v34; // eax
  unsigned __int8 v35; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int8 v36; // [rsp+39h] [rbp-48h] BYREF
  char v37; // [rsp+3Ah] [rbp-47h] BYREF
  __int64 v38; // [rsp+40h] [rbp-41h] BYREF
  __int64 v39; // [rsp+48h] [rbp-39h] BYREF
  __int64 v40; // [rsp+50h] [rbp-31h] BYREF
  LARGE_INTEGER v41; // [rsp+58h] [rbp-29h] BYREF
  __int128 v42; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v43[2]; // [rsp+70h] [rbp-11h] BYREF
  char v44[32]; // [rsp+80h] [rbp-1h] BYREF
  char *v45; // [rsp+A0h] [rbp+1Fh]
  __int64 v46; // [rsp+A8h] [rbp+27h]

  v39 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v41.QuadPart = 0LL;
  v36 = 0;
  v35 = 0;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a1 )
    *a1 = -1;
  while ( 1 )
  {
    v4 = KiClockState;
    LODWORD(v5) = 0x8000;
    if ( KiClockState == 1 )
    {
      v4 = _InterlockedCompareExchange(&KiClockState, 3, 1);
      if ( v4 == 1 )
        break;
    }
    if ( v4 != 3 )
    {
      p_Number = &CurrentPrcb->Number;
      goto LABEL_7;
    }
    _mm_pause();
  }
  LOBYTE(a2) = 1;
  KiUpdateTimeAssist(0LL, a2, &v38, &v41);
  KiClockTimerOneShotEndTime = v38;
  if ( KeMinimumIncrement - 1 + (int)v38 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v38;
  v14 = v38;
  if ( (int)v38 - (int)KiLastPseudoHrTimerExpiration + KeMinimumIncrement - 1 >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v38;
  p_Number = &CurrentPrcb->Number;
  v15 = off_140C01CA8[0]();
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a1 )
    {
      if ( (_DWORD)KiClockTimerOwner == CurrentPrcb->Number )
      {
        p_Number = &CurrentPrcb->Number;
        if ( v14 >= KiClockTimerNextTickTime )
        {
          p_Number = &CurrentPrcb->Number;
          if ( v15 )
          {
            p_Number = &CurrentPrcb->Number;
            *a1 = v14 - KiClockTimerNextTickTime;
          }
        }
      }
    }
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( a1
    && (_DWORD)KiClockTimerOwner == *p_Number
    && v14 >= KiClockTimerNextTickTime
    && (unsigned __int8)off_140C01CA8[0]() )
  {
    *a1 = v14 - KiClockTimerNextTickTime;
  }
  KiClockLatencyMeasurementEnabled = 0;
  if ( v14 - KiClockTimerOneShotStartTime < qword_140C417E8 )
    qword_140C417E8 = v14 - KiClockTimerOneShotStartTime;
  if ( v14 - KiClockTimerOneShotStartTime > qword_140C417E0 )
    qword_140C417E0 = v14 - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    if ( v15 && (unsigned int)KiGetPastDueIRTimerInfo(v14, &v36, &v35) )
      ExRecordOneTimerExpiry(v36, v35);
    KiAdjustTimersAfterDripsExit(CurrentPrcb, v14);
    KiConsiderTimerRebasing = 0;
  }
  if ( !KiClockTimerPerCpu
    || (KeQuerySystemAllowedCpuSetAffinity(&KiClockOwnerAllowedCpuSet, &KiClockOwnerAllowedCpuSetVersion),
        FirstSetRightAffinity = *p_Number,
        !(unsigned int)KeCheckProcessorAffinityEx(&KiClockOwnerAllowedCpuSet, *p_Number))
    && (FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(&KiIntSteerMask), FirstSetRightAffinity == -1) )
  {
    FirstSetRightAffinity = *p_Number;
  }
  v17 = *p_Number;
  if ( *p_Number == FirstSetRightAffinity )
  {
    if ( v14 + (unsigned int)KiLastRequestedTimeIncrement <= KiClockTimerNextTickTime )
    {
      if ( KiClockTimerPerCpu )
      {
        CurrentPrcb->ClockOwner = 1;
        LODWORD(KiClockTimerOwner) = v17;
        if ( !(unsigned __int8)KiGetPendingTick() )
          off_140C01C90[0]();
      }
      if ( KiClockTimerPerCpuTickScheduling && CurrentPrcb->ClockOwner )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 15 )
            LODWORD(v24) = 0x8000;
          else
            v24 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
          v14 = v38;
          SchedulerAssist[5] |= v24;
        }
        KiSetClockTimer((__int64)CurrentPrcb, -(__int64)(unsigned int)KeMaximumIncrement, KeMinimumIncrement, 3, 1, 0);
        LOBYTE(v25) = 1;
        KiSetClockTimerKTimerDeadlines(CurrentPrcb, v25);
        if ( KiIrqlFlags )
        {
          v26 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v30 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v27);
            v14 = v38;
          }
        }
        __writecr8(CurrentIrql);
      }
      v18 = 0;
      KiRestoreClockTickRate(v14, &v40, &v39);
      v19 = &v40;
      v21 = &v39;
      KiClockTimerNextTickTime = v14 + (unsigned int)KeTimeIncrement;
      v20 = 0LL;
    }
    else
    {
      ++qword_140C417D8;
      v18 = 2;
      v19 = 0LL;
      v20 = 2LL;
      v21 = 0LL;
    }
    KiEventClockStateChange(v20, 1LL, v21, v19);
  }
  else
  {
    ++qword_140C417D8;
    v18 = 2;
    KiEventClockStateChange(2LL, 1LL, 0LL, 0LL);
    LODWORD(KiClockTimerOwner) = FirstSetRightAffinity;
    KiSendClockInterruptToClockOwner();
  }
  if ( KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v31 = (unsigned __int8)off_140C01CA8[0]() == 0;
    KiResetForceIdle(v31, 0LL);
  }
  v42 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    DWORD2(v42) = KiClockTimerOwner;
    v43[0] = &v42;
    *(_QWORD *)&v42 = v14;
    v43[1] = 16LL;
    EtwTraceKernelEvent((unsigned int)v43, 1, 1074790400, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v18);
LABEL_7:
  v7 = *p_Number;
  if ( (_DWORD)KiClockTimerOwner == (_DWORD)v7 && !CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 1;
  ClockOwner = CurrentPrcb->ClockOwner;
  v9 = KiProcessorBlock;
  if ( !(_BYTE)ClockOwner )
  {
    a2 = *(volatile signed __int32 **)(KiProcessorBlock[v7] + 35000);
    if ( a2 )
    {
      _InterlockedAnd(a2, 0xFFF7FFFF);
      ClockOwner = CurrentPrcb->ClockOwner;
    }
  }
  v10 = 0;
  if ( KiClockTimerPerCpu )
    v11 = KeGetCurrentPrcb();
  else
    v11 = (struct _KPRCB *)KiProcessorBlock[(unsigned int)KiClockTimerOwner];
  if ( (v11->PendingTickFlags & 1) != 0 )
    goto LABEL_20;
  if ( (_BYTE)ClockOwner || KiClockTimerPerCpuTickScheduling )
  {
    ((void (__fastcall *)(__int64, volatile signed __int32 *, __int64 *))off_140C01C90[0])(
      ClockOwner,
      a2,
      KiProcessorBlock);
    v10 = 1;
LABEL_20:
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( (unsigned int)dword_140C02F28 > 5 )
      {
        v37 = v10;
        v45 = &v37;
        v46 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140C02F28, word_14002CFF2, 0LL, 0LL, 3, v44);
      }
      v12 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
      {
        v32 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v12 != 15 )
          v5 = (-1LL << (v12 + 1)) & 0xFFFC;
        v32[5] |= v5;
      }
      KiSetClockTimer((__int64)CurrentPrcb, -(__int64)(unsigned int)KeMaximumIncrement, KeMinimumIncrement, 3, 1, 0);
      a2 = (volatile signed __int32 *)CurrentPrcb->ClockOwner;
      if ( (_BYTE)a2 || !KiSerializeTimerExpiration )
        KiSetClockTimerKTimerDeadlines(CurrentPrcb, a2);
      if ( KiIrqlFlags )
      {
        ClockOwner = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0
          && (unsigned __int8)ClockOwner <= 0xFu
          && v12 <= 0xFu
          && (unsigned __int8)ClockOwner >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          ClockOwner = (unsigned int)v12 + 1;
          v9 = (__int64 *)v33->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v30 = (v34 & *((_DWORD *)v9 + 5)) == 0;
          a2 = (volatile signed __int32 *)((unsigned int)v34 & *((_DWORD *)v9 + 5));
          *((_DWORD *)v9 + 5) = (_DWORD)a2;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
      __writecr8(v12);
      if ( v10 )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v41);
        KiRestoreClockTickRate(InterruptTimePrecise, &v40, &v39);
        if ( CurrentPrcb->ClockOwner )
        {
          ClockOwner = InterruptTimePrecise + (unsigned int)KeTimeIncrement;
          KiClockTimerNextTickTime = ClockOwner;
        }
      }
    }
  }
  if ( !CurrentPrcb->ClockOwner && (CurrentPrcb->PendingTickFlags & 1) != 0 && !KiClockTimerPerCpuTickScheduling )
  {
    ((void (__fastcall *)(__int64, volatile signed __int32 *, __int64 *))off_140C01C98[0])(ClockOwner, a2, v9);
    KiSetPendingTick(0);
    CurrentPrcb->ClockTimerState.ClockActive = 0;
  }
}
