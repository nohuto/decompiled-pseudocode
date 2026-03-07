__int64 __fastcall ExpShutdownWorkerFactory(_QWORD *Object)
{
  KSPIN_LOCK *v2; // rcx
  PVOID *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  char v6; // di
  unsigned __int64 OldIrql; // rbp
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+50h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)Object[2];
  memset(&v14, 0, sizeof(v14));
  KeAcquireInStackQueuedSpinLock(v2, &v14);
  v3 = (PVOID *)(Object + 9);
  v4 = 4LL;
  *((_DWORD *)Object + 102) = Object[51] & 0xFFFFFFF8 | 4;
  do
  {
    if ( *v3 )
    {
      ObfDereferenceObjectWithTag(*v3, 0x746C6644u);
      *v3 = 0LL;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( (Object[51] & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  if ( (_QWORD *)Object[74] == Object + 53 && (unsigned __int8)KiDeregisterObjectWaitBlock(Object + 53) )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  *(_BYTE *)(Object[2] + 33LL) = 1;
  v5 = Object[2];
  *((_DWORD *)Object + 95) = 0;
  *((_DWORD *)Object + 94) = 0;
  if ( !*(_DWORD *)(v5 + 28) || *(_BYTE *)(v5 + 32) )
  {
    v6 = 0;
  }
  else
  {
    *(_BYTE *)(v5 + 32) = 1;
    v6 = 1;
  }
  KxReleaseQueuedSpinLock(&v14);
  OldIrql = v14.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v14.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (v14.OldIrql + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  result = KeCancelTimer2(Object + 53, 0LL);
  if ( v6 )
    return IoSetIoCompletionEx3(*(_QWORD *)(Object[2] + 8LL), 0, 0, 0, 0LL, 0, *(_QWORD *)(Object[2] + 16LL), 0, 0);
  return result;
}
