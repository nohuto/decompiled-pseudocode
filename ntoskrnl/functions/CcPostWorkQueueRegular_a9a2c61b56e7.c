__int64 __fastcall CcPostWorkQueueRegular(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // r13
  int v10; // eax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 *v14; // rdx
  __int64 v15; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *SchedulerAssist; // r11
  bool v20; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 136);
  v5 = *(_QWORD *)(a1 + 152);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 144);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 128);
    if ( v10 == 2 || v10 == 4 )
      LOBYTE(a4) = 1;
    else
      a4 = 0LL;
    CcPerfLogWorkItemEnqueue(a2, a1, 0LL, a4, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 832), &LockHandle);
  if ( *(_DWORD *)(a1 + 128) == 3 && *(_QWORD *)(v5 + 104) != v5 + 104 )
  {
    v11 = *(_QWORD *)(v4 + 1056);
    if ( (v11 >= *(_QWORD *)(v4 + 1080) >> 2 || v11 > *(_QWORD *)(**(_QWORD **)(v4 + 8) + 17216LL) >> 1)
      && !(unsigned __int8)CcIsWriteBehindThreadpoolAtLowPriority(v4) )
    {
      *(_BYTE *)(v5 + 224) = 1;
    }
  }
  v12 = *(_QWORD **)(a2 + 8);
  if ( *v12 != a2 )
    goto LABEL_31;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v12;
  *v12 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( !*(_BYTE *)(v5 + 196) )
  {
    v13 = (_QWORD *)(v5 + 56);
    v14 = *(__int64 **)(v5 + 56);
    if ( v14 != (__int64 *)(v5 + 56)
      && (*(_DWORD *)(a1 + 128) != 2 || (unsigned int)(*(_DWORD *)(v5 + 188) + 1) <= *(_DWORD *)(v4 + 1288)) )
    {
      v6 = *(_QWORD **)(v5 + 56);
      v15 = *v14;
      if ( (_QWORD *)v14[1] == v13 && *(__int64 **)(v15 + 8) == v14 )
      {
        *v13 = v15;
        *(_QWORD *)(v15 + 8) = v13;
        ++*(_DWORD *)(v5 + 48);
        CcReferencePartitionAndPrivateVolumeCacheMap(v4, v7);
        goto LABEL_21;
      }
LABEL_31:
      __fastfail(3u);
    }
  }
LABEL_21:
  result = KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v20 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v20 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v6 )
  {
    *v6 = 0LL;
    return ExQueueWorkItemToPartition((ULONG_PTR)v6);
  }
  return result;
}
