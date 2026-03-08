/*
 * XREFs of KiHandleDeferredPreemption @ 0x1402AE8D0
 * Callers:
 *     KiSchedulerApc @ 0x140353560 (KiSchedulerApc.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140227260 (KiEndThreadCycleAccumulation.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140227C10 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402280CC (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiAbProcessContextSwitch @ 0x140239508 (KiAbProcessContextSwitch.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiStartRescheduleContext @ 0x140258AD0 (KiStartRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1402ADC00 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFindRescheduleContextEntryForPrcb @ 0x1402ADFD8 (KiFindRescheduleContextEntryForPrcb.c)
 *     KiAdjustRescheduleContextEntryForThreadRemoval @ 0x1402AE004 (KiAdjustRescheduleContextEntryForThreadRemoval.c)
 *     KiCommitRescheduleContext @ 0x1402AE04C (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     KiCompleteRescheduleContext @ 0x140302484 (KiCompleteRescheduleContext.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140342A68 (KiCheckForMaxOverQuotaScb.c)
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiHandleDeferredPreemption(ULONG_PTR a1)
{
  char v2; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  char v7; // al
  _QWORD **v8; // rdi
  __int64 v9; // r9
  _KTHREAD *NextThread; // rdi
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  signed __int32 *v15; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  char v18; // r11
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // rsi
  __int64 *RescheduleContextEntryForPrcb; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 *v23; // r11
  char v24; // r10
  unsigned int v25; // r10d
  __int64 *v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  bool v30; // zf
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  _QWORD *v35; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v37[84]; // [rsp+38h] [rbp-D0h] BYREF

  memset(v37, 0, sizeof(v37));
  v2 = 0;
  v36 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v13) = 4;
    if ( CurrentIrql != 2 )
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xAu);
  KiAbProcessContextSwitch(a1, 0);
  KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v36);
  if ( !CurrentPrcb->NextThread )
  {
    v35 = 0LL;
    KiStartRescheduleContext((__int64)v37, &v36, 0LL);
    if ( KiIsThreadConstrainedBySchedulingGroup(a1) )
    {
      v5 = *(_QWORD *)(a1 + 104);
      if ( v5 )
      {
        v6 = CurrentPrcb->ScbOffset + v5;
        if ( v6 )
        {
          if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v6) )
          {
            RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v37, (__int64)CurrentPrcb);
            KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v21, 0, 1);
            if ( (v24 & 2) != 0 )
            {
              LOBYTE(v22) = v37[0];
              v25 = 0;
              if ( LOBYTE(v37[0]) )
              {
                do
                {
                  v26 = (__int64 *)&v37[10 * v25 + 4];
                  if ( v26 != v23 )
                  {
                    KiAdjustRescheduleContextEntryForThreadRemoval(v26, v22, 0, 1);
                    LOBYTE(v22) = v37[0];
                  }
                  ++v25;
                }
                while ( v25 < (unsigned __int8)v22 );
              }
              v37[1] = 0;
            }
          }
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(v37, (__int64)&v35);
    v7 = KiCommitRescheduleContext((unsigned __int8 *)v37, CurrentPrcb, 0, &v35);
    v8 = (_QWORD **)v35;
    if ( v7 || v35 )
    {
      KiReleasePrcbLocksForIsolationUnit(&v36);
      if ( v18 )
      {
        KiCompleteRescheduleContext(v37, CurrentPrcb);
        p_DeferredDispatchInterrupts = &CurrentPrcb->DeferredDispatchInterrupts;
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
      }
      else
      {
        p_DeferredDispatchInterrupts = &CurrentPrcb->DeferredDispatchInterrupts;
      }
      if ( v8 )
      {
        v35 = *v8;
        do
        {
          KiDeferredReadySingleThread((__int64)CurrentPrcb, (unsigned __int64)(v8 - 27), (__int64)&v35);
          v8 = (_QWORD **)v35;
          ++v2;
          if ( v35 )
            v35 = (_QWORD *)*v35;
          if ( (v2 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(p_DeferredDispatchInterrupts);
        }
        while ( v8 );
        KiFlushSoftwareInterruptBatch(p_DeferredDispatchInterrupts);
      }
      KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, &v36);
    }
  }
  KiDowngradeIsolationUnitLockHandle(&v36, 0);
  NextThread = CurrentPrcb->NextThread;
  if ( NextThread )
  {
    CurrentPrcb->NextThread = 0LL;
    _disable();
    LOBYTE(v9) = 1;
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL, v9);
    v14 = KeGetCurrentPrcb();
    v15 = (signed __int32 *)v14->SchedulerAssist;
    if ( v15 )
    {
      _m_prefetchw(v15);
      v16 = *v15;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(v15, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    if ( NextThread != CurrentPrcb->IdleThread && (CurrentPrcb->IdleState & 1) == 0 )
      __fastfail(0x21u);
    *(_BYTE *)(a1 + 643) = 38;
    *(_BYTE *)(a1 + 390) = 0;
    KiQueueReadyThread((__int64)CurrentPrcb, &v36, a1);
    if ( (unsigned __int8)KiSwapContext(a1, NextThread, 0LL) )
    {
      if ( KiIrqlFlags )
      {
        v27 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v27 - 2) <= 0xDu )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = (v29[5] & 0xFFFF0003) == 0;
          v29[5] &= 0xFFFF0003;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(a1 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
  }
  else
  {
    KiReleasePrcbLocksForIsolationUnit(&v36);
  }
  if ( KiIrqlFlags )
  {
    v31 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v30 = (v34 & v33[5]) == 0;
      v33[5] &= v34;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
