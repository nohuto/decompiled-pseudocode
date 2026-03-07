__int64 PnprInitiateReplaceOperation()
{
  char v0; // r14
  char v1; // r15
  struct _WORK_QUEUE_ITEM *v2; // rdi
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned __int8 CurrentIrql; // bp
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  unsigned __int8 v19; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  unsigned int v24; // eax
  __int128 v26; // [rsp+30h] [rbp-48h] BYREF
  __int128 v27; // [rsp+40h] [rbp-38h]
  __int64 v28; // [rsp+50h] [rbp-28h]

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v0 = 0;
  v1 = 0;
  v2 = 0LL;
  KeInitializeEvent((PRKEVENT)(PnprContext + 33048), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33072), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33096), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33120), NotificationEvent, 0);
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) == 0 )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1366322768LL);
    v2 = Pool2;
    if ( !Pool2 )
    {
      v4 = PnprContext;
      v5 = -1073741670;
      v6 = *(_DWORD *)(PnprContext + 33272);
      if ( !v6 )
        v6 = 1656;
      v7 = *(_DWORD *)(PnprContext + 33276);
      *(_DWORD *)(PnprContext + 33272) = v6;
      if ( !v7 )
        v7 = 10;
LABEL_7:
      *(_DWORD *)(v4 + 33276) = v7;
      goto LABEL_46;
    }
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))PnprQuiesceWorker;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, CriticalWorkQueue);
  }
  v5 = PnprReplaceStart();
  if ( v5 < 0 )
  {
    v4 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 33272);
    if ( !v8 )
      v8 = 1671;
    v7 = *(_DWORD *)(PnprContext + 33276);
    *(_DWORD *)(PnprContext + 33272) = v8;
    if ( !v7 )
      v7 = 1;
    goto LABEL_7;
  }
  v1 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    goto LABEL_25;
  if ( (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    *((_QWORD *)&v27 + 1) = 0LL;
    *(_QWORD *)&v26 = PnprStartMirroring;
    *((_QWORD *)&v26 + 1) = PnprEndMirroring;
    *(_QWORD *)&v27 = PnprMirrorPhysicalMemory;
    v28 = 8LL;
    v5 = MmDuplicateMemory(&v26);
    if ( v5 == 1073742484 )
      v5 = 0;
    goto LABEL_46;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(PnprContext + 33240))(*(_QWORD *)(PnprContext + 33168));
  if ( v5 < 0 )
  {
    v9 = PnprContext;
    v10 = *(_DWORD *)(PnprContext + 33272);
    if ( !v10 )
      v10 = 1739;
    *(_DWORD *)(PnprContext + 33272) = v10;
    v11 = *(_DWORD *)(v9 + 33276);
    if ( !v11 )
      v11 = 8;
    *(_DWORD *)(v9 + 33276) = v11;
  }
  else
  {
LABEL_25:
    CurrentIrql = KeGetCurrentIrql();
    v5 = PnprQuiesce();
    if ( v5 < 0 )
    {
      v16 = PnprContext;
      v17 = *(_DWORD *)(PnprContext + 33272);
      if ( !v17 )
        v17 = 1772;
      *(_DWORD *)(PnprContext + 33272) = v17;
      v18 = *(_DWORD *)(v16 + 33276);
      if ( !v18 )
        v18 = 1;
      *(_DWORD *)(v16 + 33276) = v18;
    }
    else
    {
      v0 = 1;
      v5 = PnprSwap();
      if ( v5 < 0 )
      {
        ((void (__fastcall *)(__int64, _QWORD))off_140C01A98[0])(3LL, *(_QWORD *)(PnprContext + 33160));
        v13 = PnprContext;
        v14 = *(_DWORD *)(PnprContext + 33272);
        if ( !v14 )
          v14 = 1762;
        *(_DWORD *)(PnprContext + 33272) = v14;
        v15 = *(_DWORD *)(v13 + 33276);
        if ( !v15 )
          v15 = 1;
        *(_DWORD *)(v13 + 33276) = v15;
      }
      PnprWakeProcessors();
    }
    if ( KiIrqlFlags )
    {
      v19 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
LABEL_46:
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    if ( v0 )
      PnprCompleteWake();
  }
  else if ( v2 )
  {
    KeSetEvent((PRKEVENT)(PnprContext + 33096), 0, 0);
    KeWaitForSingleObject((PVOID)(PnprContext + 33120), Executive, 0, 0, 0LL);
  }
  if ( *(_QWORD *)(PnprContext + 33160) )
    off_140C01AA0[0]();
  if ( v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD))(PnprContext + 33208))(*(_QWORD *)(PnprContext + 33168));
      if ( v5 >= 0 )
        return v24;
    }
  }
  return (unsigned int)v5;
}
