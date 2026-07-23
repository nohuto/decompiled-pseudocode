/*
 * XREFs of PspRevertContainerImpersonation @ 0x1402C43E0
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1402C0590 (PsImpersonateContainerOfThread.c)
 *     IopProcessWorkItem @ 0x1402F9DA0 (IopProcessWorkItem.c)
 *     NtRevertContainerImpersonation @ 0x140582050 (NtRevertContainerImpersonation.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1402C1A70 (ExpAcquireSpinLockExclusive.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402C45D0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeClearSystemPriority @ 0x1402D4800 (KeClearSystemPriority.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *a4)
{
  void *v4; // rdi
  unsigned __int8 v7; // si
  struct _KPRCB *v8; // rcx
  _DWORD *v9; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v12; // r14
  _DWORD *v13; // rcx
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  bool v25; // zf
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v32; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(void **)(BugCheckParameter1 + 1472);
  if ( !v4 )
    return 3221225473LL;
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x200) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread(CurrentPrcb, BugCheckParameter1, 0LL);
    _enable();
    v12 = KeGetCurrentPrcb();
    v32 = 0;
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v19 = v13[6];
        v13[6] = v19 + 1;
        if ( v19 == -1 )
LABEL_27:
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v16 = v12->SchedulerAssist;
      if ( v16 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v20 = v16[6] - 1;
          v16[6] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      do
        KeYieldProcessorEx(&v32);
      while ( CurrentPrcb->PrcbLock );
      v17 = v12->SchedulerAssist;
      if ( v17 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v21 = v17[6];
          v17[6] = v21 + 1;
          if ( v21 == -1 )
            goto LABEL_27;
        }
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x12u);
    *(_QWORD *)(BugCheckParameter1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 9u);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v22 = v15[6] - 1;
        v15[6] = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = (v24[5] & 0xFFFF0001) == 0;
        v24[5] &= 0xFFFF0001;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    __writecr8(0LL);
  }
  v7 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v7 <= 0xFu )
  {
    a4 = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (-1 << (v7 + 1)) & 4u | a4[5];
    a4[5] = a3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, v7);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, v7, a3, (__int64)a4);
  *(_QWORD *)(BugCheckParameter1 + 1472) = 0LL;
  KeClearSystemPriority(BugCheckParameter1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  else
    PspThreadWorkOnBehalfLock = 0;
  v8 = KeGetCurrentPrcb();
  v9 = v8->SchedulerAssist;
  if ( v9 )
  {
    if ( v8->NestingLevel <= 1u )
    {
      v26 = v9[6] - 1;
      v9[6] = v26;
      if ( !v26 )
        KiRemoveSystemWorkPriorityKick(v8);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && v7 <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (v7 + 1));
        v25 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
  }
  __writecr8(v7);
  EtwTraceThreadWorkOnBehalfUpdate(v4, 0LL);
  ObDereferenceObjectDeferDeleteWithTag(v4, 0x746E6F43u);
  return 0LL;
}
