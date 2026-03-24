/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5BA4
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140208210 (MiTrimOrAgeWorkingSet.c)
 *     MiProbeAndLockPrepare @ 0x14020A2B0 (MiProbeAndLockPrepare.c)
 *     MiUserFault @ 0x14020D730 (MiUserFault.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiMakeHyperRangeAccessible @ 0x14021B4A0 (MiMakeHyperRangeAccessible.c)
 *     ExAcquireSpinLockShared @ 0x14021CD40 (ExAcquireSpinLockShared.c)
 *     MiSynchronizeSystemVa @ 0x1402922C0 (MiSynchronizeSystemVa.c)
 *     MiMoveDirtyBitsToPfns @ 0x140297B10 (MiMoveDirtyBitsToPfns.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14029CF60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiMakeSystemCacheRangeValid @ 0x14029F220 (MiMakeSystemCacheRangeValid.c)
 *     MiOffsetToProtos @ 0x1402A11E0 (MiOffsetToProtos.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     ExpAddTagForBigPages @ 0x1402BC450 (ExpAddTagForBigPages.c)
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402F3E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x1405AB314 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v5; // esi
  int v6; // r15d
  char v7; // r12
  char v9; // bp
  unsigned __int64 v10; // rax
  int InterruptCount; // r14d
  _DWORD *SchedulerAssist; // rcx
  int v13; // eax
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  _DWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v6 = 0;
  v7 = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v9 = 1;
    v10 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    a2 = (unsigned __int64)HIDWORD(v10) << 32;
    v6 = v10;
  }
  else
  {
    v9 = 0;
    InterruptCount = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v13 = SchedulerAssist[6];
      SchedulerAssist[6] = v13 + 1;
      if ( v13 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  _m_prefetchw(a1);
  v15 = *a1 & 0x7FFFFFFF;
  v14 = _InterlockedCompareExchange(a1, v15 + 1, v15);
  if ( v15 != v14 )
  {
    v16 = CurrentPrcb->SchedulerAssist;
    if ( v16 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = v16[6] - 1;
        v16[6] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    LOBYTE(a2) = v7;
    v14 = ExpWaitForSpinLockSharedAndAcquire((unsigned __int64)a1, a2, a3, a4);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v5 = v14;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v14;
  }
  if ( v9 )
  {
    v18 = __rdtsc();
    LOBYTE(v14) = PerfLogSpinLockAcquire((__int64)a1, v18, v18 - v6, v5, InterruptCount, 2);
  }
  return v14;
}
