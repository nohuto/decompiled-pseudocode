__int64 __fastcall MiProcessLoaderEntry(int *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v5; // r8
  int **v6; // rax
  _QWORD *v7; // rdx
  ULONG_PTR v8; // r10
  _QWORD *v9; // rax
  unsigned __int8 v10; // bl
  __int64 v12; // rcx
  int **v13; // rax
  unsigned __int8 v14; // bl
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  unsigned __int8 v24; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v24 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  if ( a2 != 1 )
  {
    if ( (MiFlags & 0x40000) == 0 )
      RtlRemoveInvertedFunctionTable(*((_QWORD *)a1 + 6));
    MmLockLoadedModuleListExclusive(&v24);
    v12 = *(_QWORD *)a1;
    v13 = (int **)*((_QWORD *)a1 + 1);
    if ( *(int **)(*(_QWORD *)a1 + 8LL) == a1 && *v13 == a1 )
    {
      *v13 = (int *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      RtlAvlRemoveNode(&BugCheckParameter3, a1 + 58);
      ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
      if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
      {
        v14 = v24;
        if ( v24 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = v24;
          v23 = ~(unsigned __int16)(-1LL << (v24 + 1));
          v19 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v14 = v24;
      }
      __writecr8(v14);
      goto LABEL_16;
    }
LABEL_24:
    __fastfail(3u);
  }
  MmLockLoadedModuleListExclusive(&v24);
  v6 = (int **)*(&PsLoadedModuleList + 1);
  if ( *(PVOID **)*(&PsLoadedModuleList + 1) != &PsLoadedModuleList )
    goto LABEL_24;
  *(_QWORD *)a1 = &PsLoadedModuleList;
  LOBYTE(v5) = 0;
  *((_QWORD *)a1 + 1) = v6;
  *v6 = a1;
  v7 = (_QWORD *)BugCheckParameter3;
  *(&PsLoadedModuleList + 1) = a1;
  v8 = *((_QWORD *)a1 + 6);
  if ( BugCheckParameter3 )
  {
    while ( 1 )
    {
      v5 = *(v7 - 23);
      if ( v8 <= v5 + (unsigned int)(*((_DWORD *)v7 - 42) - 1) )
      {
        if ( v8 >= v5 )
          KeBugCheckEx(0x1Au, 0x2101uLL, v8, (ULONG_PTR)v7, 0LL);
        v9 = (_QWORD *)*v7;
        if ( !*v7 )
        {
          LOBYTE(v5) = 0;
          break;
        }
      }
      else
      {
        v9 = (_QWORD *)v7[1];
        if ( !v9 )
        {
          LOBYTE(v5) = 1;
          break;
        }
      }
      v7 = v9;
    }
  }
  RtlAvlInsertNodeEx(&BugCheckParameter3, v7, v5, a1 + 58);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (v15 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v15 <= 0xFu )
  {
    v10 = v24;
    if ( v24 <= 0xFu && v15 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      v10 = v24;
      v18 = ~(unsigned __int16)(-1LL << (v24 + 1));
      v19 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  else
  {
    v10 = v24;
  }
  __writecr8(v10);
  if ( (MiFlags & 0x40000) == 0 )
    RtlInsertInvertedFunctionTable(*((_QWORD *)a1 + 6), a1[16]);
LABEL_16:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(CurrentThread);
}
