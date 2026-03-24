/*
 * XREFs of KeSetThreadChargeOnlySchedulingGroup @ 0x1402FFA40
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14021BC50 (PsImpersonateContainerOfThread.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x14022F230 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeSetThreadChargeOnlySchedulingGroup(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KPRCB *v10; // rbp
  _DWORD *v11; // rcx
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  bool v23; // zf
  int v24; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x200) != 0 )
  {
    if ( a2 )
      return 0;
  }
  else if ( !a2 || *(_QWORD *)(a1 + 104) )
  {
    return 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
  _enable();
  v10 = KeGetCurrentPrcb();
  v24 = 0;
  v11 = v10->SchedulerAssist;
  if ( v11 )
  {
    if ( v10->NestingLevel <= 1u )
    {
      v17 = v11[6];
      v11[6] = v17 + 1;
      if ( v17 == -1 )
LABEL_24:
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    v14 = v10->SchedulerAssist;
    if ( v14 )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v18 = v14[6] - 1;
        v14[6] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    do
      KeYieldProcessorEx(&v24, v7, v8, v9);
    while ( CurrentPrcb->PrcbLock );
    v15 = v10->SchedulerAssist;
    if ( v15 )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v19 = v15[6];
        v15[6] = v19 + 1;
        if ( v19 == -1 )
          goto LABEL_24;
      }
    }
  }
  if ( a2 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 9u);
    *(_QWORD *)(a1 + 104) = a2;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 9u);
  }
  _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  v12 = KeGetCurrentPrcb();
  v13 = v12->SchedulerAssist;
  if ( v13 )
  {
    if ( v12->NestingLevel <= 1u )
    {
      v20 = v13[6] - 1;
      v13[6] = v20;
      if ( !v20 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
  {
    v21 = KeGetCurrentPrcb();
    v22 = v21->SchedulerAssist;
    v23 = (v22[5] & 0xFFFF0001) == 0;
    v22[5] &= 0xFFFF0001;
    if ( v23 )
      KiRemoveSystemWorkPriorityKick(v21);
  }
  __writecr8(0LL);
  return 1;
}
