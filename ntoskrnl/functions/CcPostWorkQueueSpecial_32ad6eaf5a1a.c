char __fastcall CcPostWorkQueueSpecial(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  char v6; // bp
  int v8; // eax
  char v9; // r9
  _QWORD *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r10
  int v17; // eax
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 144);
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 128);
    v9 = v8 == 2 || v8 == 4;
    CcPerfLogWorkItemEnqueue(a2, a1, 0, v9);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 832), &LockHandle);
  if ( !*(_BYTE *)(v3 + 196) )
  {
    v10 = (_QWORD *)(v5 + 1544);
    v11 = *(__int64 **)(v5 + 1544);
    if ( v11 != (__int64 *)(v5 + 1544) )
    {
      v4 = *(_QWORD **)(v5 + 1544);
      v12 = *v11;
      if ( (_QWORD *)v4[1] != v10 || *(_QWORD **)(v12 + 8) != v4 )
        __fastfail(3u);
      *v10 = v12;
      *(_QWORD *)(v12 + 8) = v10;
      v6 = 1;
      CcReferencePartitionAndPrivateVolumeCacheMap(v2, v5);
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[6] = a1;
    ExQueueWorkItemToPartition(v4, 0, *(_DWORD *)(v3 + 24), *(_QWORD *)(v2 + 8));
  }
  return v6;
}
