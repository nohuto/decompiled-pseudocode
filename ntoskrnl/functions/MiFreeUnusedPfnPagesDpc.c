__int64 __fastcall MiFreeUnusedPfnPagesDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  char *AnyMultiplexedVm; // r15
  volatile LONG *SharedVm; // rbx
  KIRQL v11; // al
  unsigned __int8 v12; // r12
  int v13; // edx
  __int64 result; // rax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v20; // zf
  int v21[10]; // [rsp+20h] [rbp-28h] BYREF
  int v22; // [rsp+68h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v22 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v22);
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v8;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    SharedVm = (volatile LONG *)MiGetSharedVm((__int64)AnyMultiplexedVm);
    v11 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
    v12 = v11;
    ExAcquireSpinLockExclusive(&dword_140C6B1A0);
    if ( qword_140C6B0E8 )
    {
      if ( *(_QWORD *)a2 )
      {
        v16 = *(_QWORD *)(a2 + 8);
        *(_DWORD *)(v16 + 12) = 0;
        *(_QWORD *)(v16 + 24) = v16 + 16;
        *(_QWORD *)(v16 + 16) = v16 + 16;
        *(_WORD *)(v16 + 8) = 263;
        *(_BYTE *)(v16 + 10) = 6;
        *(_QWORD *)v16 = qword_140C6B118;
        qword_140C6B118 = v16;
      }
      else
      {
        stru_140C6B0F0.List.Flink = 0LL;
        stru_140C6B0F0.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
        stru_140C6B0F0.Parameter = &MiSystemPartition;
        ExQueueWorkItem(&stru_140C6B0F0, DelayedWorkQueue);
        byte_140C6B1A4 = 1;
      }
      v13 = 259;
    }
    else
    {
      MiFreedUnusedPfnPagesWorker(a2);
      v13 = 0;
    }
    *(_DWORD *)(a2 + 16) = v13;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6B1A0);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
        SchedulerAssist[5] &= 0xFFFF0007;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(2uLL);
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v12);
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v15 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x7FFFFFFF) != 0 )
  {
    v21[0] = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v15 )
        break;
      KeYieldProcessorEx(v21);
    }
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v15;
  }
  _InterlockedDecrement(a3);
  return result;
}
