/*
 * XREFs of KiUpdateBugcheckRecoveryProgress @ 0x1405793F8
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x140577FAC (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x140578228 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405786C8 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x140578960 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiSaveBugCheckRecoveryStatusMultipleBugChecks @ 0x140578E88 (KiSaveBugCheckRecoveryStatusMultipleBugChecks.c)
 *     KiSaveBugCheckRecoveryStatusPhase0 @ 0x140578EE4 (KiSaveBugCheckRecoveryStatusPhase0.c)
 *     KiSaveBugCheckRecoveryStatusPhase1 @ 0x140578F68 (KiSaveBugCheckRecoveryStatusPhase1.c)
 *     KiSaveBugCheckRecoveryStatusPhase2 @ 0x140578FBC (KiSaveBugCheckRecoveryStatusPhase2.c)
 * Callees:
 *     KiSendThawExecution @ 0x14036B330 (KiSendThawExecution.c)
 *     IoSaveBugCheckProgress @ 0x14054E5E0 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x14054E7F0 (IoSaveInitialBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14054EC04 (IoUpdateBugCheckProgressEnvVariable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057833C (KiBugCheckRecoveryFreezeOtherProcessors.c)
 */

__int64 __fastcall KiUpdateBugcheckRecoveryProgress(_DWORD *a1)
{
  unsigned int v3; // ebx
  char v4; // r14
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned __int8 CurrentIrql; // si
  _DWORD *v7; // r9
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  struct _KPRCB *v14; // rcx
  signed __int32 *v15; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int16 v18; // [rsp+40h] [rbp-8h]

  if ( KiRecoveryCheckpointsFailure )
    return 3221225473LL;
  v3 = 0;
  v4 = 1;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v8) = 0x8000;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    v7[5] |= v8;
  }
  if ( (unsigned int)KiBugCheckRecoveryFreezeOtherProcessors(0xF4240u) > 1 )
  {
    v4 = 0;
    KiRecoveryCheckpointsFailure = 1;
LABEL_14:
    v3 = -1073741823;
    goto LABEL_23;
  }
  if ( *a1 )
  {
    if ( *a1 != 1 )
    {
      if ( *a1 == 2 )
      {
        if ( CrashdmpDumpBlock )
        {
          *(_DWORD *)(CrashdmpDumpBlock + 1404) |= a1[2];
          IoUpdateBugCheckProgressEnvVariable();
        }
        goto LABEL_23;
      }
      KiRecoveryCheckpointsFailure = 1;
      goto LABEL_14;
    }
    IoSaveBugCheckProgress(a1[2]);
  }
  else
  {
    IoSaveInitialBugCheckProgress(a1[4], *((_QWORD *)a1 + 1));
  }
LABEL_23:
  KiSendThawExecution(v4);
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( (v18 & 0x200) != 0 )
  {
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
        KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
    _enable();
  }
  return v3;
}
