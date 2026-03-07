char __fastcall ExpUpdateTimerConfigurationWorker(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v5; // rcx
  _BYTE *v6; // rax
  int v7; // ebx
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v12; // rdx
  int v13; // eax
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  bool v16; // zf

  v3 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v9) = 0x8000;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v9;
  }
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)a2 )
  {
    v7 = KiSetClockInterval(ExpLastRequestedTime, 1, (unsigned __int64)&ExpClockIntervalRequest);
    KiSendClockInterruptToClockOwner();
    **(_DWORD **)a2 = v7;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&ExpKernelResolutionLock);
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v10 - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      v13 = v12[5];
      v12[5] = v13;
      if ( !v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(0xFuLL);
  v5 = *(_QWORD **)(a2 + 8);
  if ( v5 )
    *(_DWORD *)(a2 + 24) = KeSetTimeAdjustment(*v5);
  v6 = *(_BYTE **)(a2 + 16);
  if ( v6 )
  {
    LOBYTE(v6) = *v6;
    KeTimeSynchronization = (char)v6;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)v6 <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)v6 >= 2u )
    {
      v14 = KeGetCurrentPrcb();
      LODWORD(v6) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v15 = v14->SchedulerAssist;
      v16 = ((unsigned int)v6 & v15[5]) == 0;
      v15[5] &= (unsigned int)v6;
      if ( v16 )
        LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  __writecr8(v3);
  return (char)v6;
}
