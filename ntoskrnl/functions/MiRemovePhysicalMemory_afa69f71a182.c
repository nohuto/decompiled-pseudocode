__int64 __fastcall MiRemovePhysicalMemory(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 DanglingExtent; // rdi
  __int64 v6; // r15
  ULONG_PTR v7; // rbx
  unsigned __int16 *v8; // r12
  int v9; // ebx
  unsigned __int16 *v10; // rcx
  ULONG_PTR v12; // rsi
  int v13; // r15d
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int *v17; // rax
  __int64 *i; // r15
  __int64 v19; // r8
  int v20; // ecx
  int v21; // eax
  unsigned __int16 *v22; // rcx
  unsigned int *v23; // rcx
  __int64 v24; // rax
  unsigned int *v25; // [rsp+40h] [rbp-49h] BYREF
  __int64 v26[3]; // [rsp+48h] [rbp-41h] BYREF
  char *v27; // [rsp+60h] [rbp-29h] BYREF
  unsigned int *v28; // [rsp+68h] [rbp-21h]
  __int64 v29; // [rsp+70h] [rbp-19h]
  _QWORD v30[13]; // [rsp+78h] [rbp-11h] BYREF
  ULONG_PTR v31; // [rsp+F8h] [rbp+6Fh] BYREF
  int v32; // [rsp+100h] [rbp+77h]
  __int64 v33; // [rsp+108h] [rbp+7Fh]

  v31 = a2;
  v26[1] = (__int64)v26;
  v26[2] = 0LL;
  v26[0] = (__int64)v26;
  CurrentThread = KeGetCurrentThread();
  DanglingExtent = BugCheckParameter2;
  v30[1] = 0LL;
  v6 = 0LL;
  v30[4] = 0LL;
  v7 = 6 * BugCheckParameter2;
  v25 = 0LL;
  v27 = 0LL;
  v33 = 0LL;
  v8 = (unsigned __int16 *)MiPartitionIdToPointer((*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FF);
  if ( v8 == MiSystemPartition )
  {
    MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  }
  else
  {
    MiLockDynamicMemoryExclusive((__int64)v8, (__int64)CurrentThread);
    MiLockDynamicMemoryNestedExclusive();
  }
  if ( (a3 & 2) != 0 )
  {
    v9 = 0;
    if ( (a3 & 0x40) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v31);
      if ( DanglingExtent == -1LL )
      {
        if ( v8 == MiSystemPartition )
        {
          v10 = MiSystemPartition;
        }
        else
        {
          MiUnlockDynamicMemoryNestedExclusive();
          v10 = v8;
        }
        MiUnlockDynamicMemoryExclusive((__int64)v10, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v12 = v31;
    v13 = a3 & 0x10000;
  }
  else
  {
    v30[0] = 0LL;
    v12 = v31;
    v32 = a3 & 0x10000;
    v30[2] = DanglingExtent;
    v30[3] = v31;
    if ( (a3 & 0x10000) != 0 )
    {
      v14 = 8 * v7 - 0x220000000000LL;
      v15 = v14 + 48 * v31;
      while ( v14 < v15 )
      {
        if ( MiGetPfnRemovalRequested(v14) )
        {
          v9 = -1073740023;
          goto LABEL_52;
        }
        v14 = v16 + 48;
      }
    }
    v9 = MiConfigureMemoryRemoval(&v27, (unsigned int *)MmPhysicalMemoryBlock, v30);
    if ( v9 < 0 )
      goto LABEL_52;
    v29 = DanglingExtent + v12 - 1;
    v9 = KeConfigureDynamicMemory(DanglingExtent, v29, 2LL);
    if ( v9 < 0 )
      goto LABEL_52;
    v33 = MiReferencePageRuns((__int64)MiSystemPartition, 1u);
    v6 = v33;
    if ( !(unsigned int)MiDescribePageRun((__int64)v26, DanglingExtent, v12) )
    {
      v9 = -1073741670;
LABEL_37:
      KeConfigureDynamicMemory(DanglingExtent, v29, 8LL);
      goto LABEL_52;
    }
    v17 = (unsigned int *)v6;
    for ( i = (__int64 *)v26[0]; ; i = (__int64 *)*i )
    {
      v28 = v17;
      if ( i == v26 )
        break;
      v9 = MiConfigureMemoryRemoval(&v25, v17, i);
      if ( v28 != (unsigned int *)v33 )
        ExFreePoolWithTag(v28 - 4, 0);
      if ( v9 < 0 )
      {
        v6 = v33;
        goto LABEL_37;
      }
      v17 = v25;
    }
    if ( (a3 & 0x100000) == 0 )
    {
      MiReduceCommitLimits(MiSystemPartition, v12, v12);
      MiReturnCommit((__int64)MiSystemPartition, v12, v19);
    }
    MiPerformMemoryChange(DanglingExtent, v12, (void **)&v27, (__int64 *)&v25, a3, (__int64 ***)v26);
    MiComputeNodeMemory((__int16 *)MiSystemPartition, 1);
    if ( (a3 & 0x100000) == 0 )
    {
      v20 = -1;
      if ( qword_140C6F350 <= 0xFFFFFFFF )
        v20 = qword_140C6F350;
      *(_DWORD *)(MmWriteableSharedUserData + 744) = v20;
    }
    v21 = KeConfigureDynamicMemory(DanglingExtent, DanglingExtent + v12 - 1, 4LL);
    v9 = v21;
    if ( v21 < 0 )
      KeBugCheckEx(0x1Au, 0x61A02uLL, DanglingExtent, DanglingExtent + v12, v21);
    v13 = v32;
  }
  MiInitializeDynamicPfns(DanglingExtent, v12, MiSystemPartition, a3, 0LL, 0LL);
  MiPhysicalMemoryEverRemoved(DanglingExtent, v12, 0);
  if ( (a3 & 0x20) != 0 )
  {
    qword_140C6B110 += v12;
    if ( (unsigned __int64)qword_140C6B110 >= 0x5555 && !byte_140C6B1A4 )
    {
      stru_140C6B0F0.List.Flink = 0LL;
      stru_140C6B0F0.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
      stru_140C6B0F0.Parameter = MiSystemPartition;
      ExQueueWorkItem(&stru_140C6B0F0, DelayedWorkQueue);
      byte_140C6B1A4 = 1;
    }
  }
  if ( (a3 & 2) == 0 )
  {
    if ( stru_140C66F68.Header.SignalState && ((unsigned __int8)MiFlags & 0x30u) >= 0x20 )
      ZwUpdateWnfStateData((__int64)&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL);
    KePulseEvent(qword_140C6B220, 0, 0);
    if ( v13 )
    {
      MiPartitionDeleteMemoryNode((__int64)v8, DanglingExtent, v12);
      MiHotAddHugeRange((_DWORD)v8, DanglingExtent, v12, 0, 2 - ((a3 & 0x200) != 0), 1);
    }
    if ( (a3 & 0x200000) == 0 )
    {
      MiFlushEntireTbDueToAttributeChange();
      MiFlushCacheRange(DanglingExtent, v12);
    }
  }
  v6 = v33;
LABEL_52:
  if ( v8 == MiSystemPartition )
  {
    v22 = MiSystemPartition;
  }
  else
  {
    MiUnlockDynamicMemoryNestedExclusive();
    v22 = v8;
  }
  MiUnlockDynamicMemoryExclusive((__int64)v22, (__int64)CurrentThread);
  if ( v27 )
    ExFreePoolWithTag(v27 - 16, 0);
  if ( !v25 )
    goto LABEL_60;
  v23 = v25 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v23, 0);
LABEL_60:
    v23 = (unsigned int *)v26[0];
    if ( (__int64 *)v26[0] == v26 )
      break;
    if ( *(__int64 **)(v26[0] + 8) != v26 || (v24 = *(_QWORD *)v26[0], *(_QWORD *)(*(_QWORD *)v26[0] + 8LL) != v26[0]) )
      __fastfail(3u);
    v26[0] = *(_QWORD *)v26[0];
    *(_QWORD *)(v24 + 8) = v26;
  }
  if ( v6 )
    MiDereferencePageRuns(v6);
  if ( v9 >= 0 && (a3 & 0x10) == 0 && (a3 & 0x200002) == 0 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v9;
}
