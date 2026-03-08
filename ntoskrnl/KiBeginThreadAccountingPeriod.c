/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x140228310
 * Callers:
 *     KiChainedDispatch @ 0x140417850 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140418220 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140418660 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140418AA0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140418EE0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140419310 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140419FA0 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x14041D590 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x14041D9E0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x14041E0D0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x14041EFD0 (KiIpiInterrupt.c)
 *     SwapContext @ 0x14041F970 (SwapContext.c)
 * Callees:
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402280CC (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140342A68 (KiCheckForMaxOverQuotaScb.c)
 *     KiInsertDeferredPreemptionApc @ 0x1403554AC (KiInsertDeferredPreemptionApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiBeginCounterAccumulation @ 0x140571C80 (KiBeginCounterAccumulation.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // r10
  UCHAR Size; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned __int16 *v12; // rcx
  char v13; // r8
  _BYTE *SchedulerAssist; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v16; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  int v19; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *v21; // rcx
  struct _KPRCB *v22; // rcx
  signed __int32 *v23; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett

  CurrentThread = a2;
  if ( a2 )
  {
    v6 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
  }
  Size = CurrentThread->Header.Size;
  if ( (Size & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 33968);
    v9 = *(_QWORD *)(a1 + 33976);
    if ( v8 && v9 )
    {
      if ( *(_BYTE *)(v9 + 100) )
      {
        v10 = *(_DWORD *)(v9 + 116);
      }
      else
      {
        v10 = *(_DWORD *)(v9 + 72);
        if ( v10 >= *(_DWORD *)(v8 + 516) )
          v10 = *(_DWORD *)(v8 + 516);
      }
    }
    else
    {
      v10 = 100;
    }
    v11 = 0LL;
    v12 = (unsigned __int16 *)(a1 + 34154);
    do
    {
      if ( v10 <= *v12 )
        break;
      v11 = (unsigned int)(v11 + 1);
      ++v12;
    }
    while ( (unsigned int)v11 < 3 );
    if ( KeHeteroSystem )
      v13 = *(_BYTE *)(a1 + 34056);
    else
      v13 = *(_BYTE *)(a1 + 34059);
    a2 = (struct _KTHREAD *)(a1 + 8 * ((v13 != 0) + 2 * v11 + 4176));
    *(_QWORD *)&a2->Header.Lock += a3;
  }
  if ( (Size & 0x40) != 0 )
  {
    SchedulerAssist = CurrentThread->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[64] = 1;
  }
  *(_BYTE *)(a1 + 32) = 0;
  if ( v6 )
  {
    if ( (Size & 0xB6) != 0 )
    {
      if ( CurrentThread->WaitBlock[0].SparePtr )
      {
        LOBYTE(a2) = 1;
        KiBeginCounterAccumulation(CurrentThread, a2);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v16 )
      {
        _m_prefetchw(v16);
        v17 = *v16;
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange(v16, v17 & 0xFFDFFFFF, v17);
        }
        while ( v18 != v17 );
        if ( (v17 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      if ( (CurrentThread->Header.Size & 4) != 0 )
      {
        v19 = *(&CurrentThread->MiscFlags + 1);
        if ( (v19 & 0x800) != 0
          || (v19 & 0x400) == 0
          && KiIsThreadConstrainedBySchedulingGroup((__int64)CurrentThread)
          && (SchedulingGroup = CurrentThread->SchedulingGroup) != 0LL
          && (v21 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 216)) != 0LL
          && (unsigned __int8)KiCheckForMaxOverQuotaScb(v21) )
        {
          LOBYTE(v16) = 1;
          KiInsertDeferredPreemptionApc(a1, CurrentThread, v16);
        }
      }
    }
    else
    {
      v22 = KeGetCurrentPrcb();
      v23 = (signed __int32 *)v22->SchedulerAssist;
      if ( v23 )
      {
        _m_prefetchw(v23);
        v24 = *v23;
        do
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange(v23, v24 & 0xFFDFFFFF, v24);
        }
        while ( v25 != v24 );
        if ( (v24 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
      _enable();
    }
    if ( KiHgsPlusEnabled )
    {
      CurrentThread->HgsFeedbackCycles = 0LL;
      CurrentThread->HgsFeedbackStartTime = __rdtsc();
    }
  }
  else if ( (Size & 2) != 0 )
  {
    KiBeginCounterAccumulation(CurrentThread, 0LL);
  }
}
