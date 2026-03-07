char __fastcall CcInitializePrivateVolumeCacheMap(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  char v4; // si
  const void *v9; // r15
  bool v10; // zf
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 NumberOfPhysicalPagesForPartitionObject; // rax
  bool v13; // cf
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned int v23; // ebx
  PVOID PoolWithTag; // rax
  const char *v25; // rax
  unsigned __int64 v27; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  ULONG v32; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  __int64 v35; // [rsp+E0h] [rbp+67h] BYREF
  const void *v36; // [rsp+E8h] [rbp+6Fh]

  v4 = 0;
  v35 = *a3;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v36 = 0LL;
  v9 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset((void *)a2, 0, 0x680uLL);
  v10 = CcEnableAsyncLazywrite == 0;
  *(_DWORD *)(a2 + 1592) = CcAsyncLazywriteQueueDepthPerThread;
  *(_DWORD *)(a2 + 1596) = CcMaxAsyncLazywriteCompletionWorkers;
  *(_DWORD *)a2 = 109052661;
  *(_QWORD *)(a2 + 32) = a1;
  *(_DWORD *)(a2 + 1536) = 20;
  *(_DWORD *)(a2 + 1540) = 10;
  *(_QWORD *)(a2 + 8) = 1LL;
  if ( !v10 )
    *(_DWORD *)(a2 + 1600) |= 1u;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
    __fastfail(0xEu);
  *(_DWORD *)(a2 + 656) = 2048;
  *(_QWORD *)(a2 + 56) = a2 + 48;
  *(_QWORD *)(a2 + 48) = a2 + 48;
  *(_QWORD *)(a2 + 584) = a2 + 576;
  *(_QWORD *)(a2 + 576) = a2 + 576;
  *(_QWORD *)(a2 + 600) = a2 + 592;
  *(_QWORD *)(a2 + 592) = a2 + 592;
  *(_QWORD *)(a2 + 632) = a2 + 624;
  *(_QWORD *)(a2 + 624) = a2 + 624;
  *(_QWORD *)(a2 + 616) = a2 + 608;
  *(_QWORD *)(a2 + 608) = a2 + 608;
  *(_QWORD *)(a2 + 696) = a2 + 688;
  *(_QWORD *)(a2 + 688) = a2 + 688;
  *(_QWORD *)(a2 + 664) = a2 + 640;
  *(_QWORD *)(a2 + 672) = a2 + 640;
  *(_QWORD *)(a2 + 640) = a2 + 664;
  *(_QWORD *)(a2 + 648) = a2 + 664;
  *(_DWORD *)(a2 + 680) = 2048;
  if ( a4 )
  {
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a4 + 512);
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(*(_QWORD *)(a4 + 512) + 204LL);
    v9 = *(const void **)(*(_QWORD *)(a4 + 512) + 8LL);
    v36 = v9;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 40) + 4LL);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v31 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v31;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  *(_QWORD *)(a2 + 16) = v9;
  *(_QWORD *)(a2 + 768) = 0LL;
  *(_QWORD *)(a2 + 792) = a2 + 784;
  *(_QWORD *)(a2 + 784) = a2 + 784;
  *(_QWORD *)(a2 + 1256) = a2 + 1248;
  *(_QWORD *)(a2 + 1248) = a2 + 1248;
  *(_QWORD *)(a2 + 1552) = a2 + 1544;
  *(_QWORD *)(a2 + 1544) = a2 + 1544;
  *(_QWORD *)(a2 + 832) = a2 + 824;
  *(_QWORD *)(a2 + 824) = a2 + 824;
  *(_WORD *)(a2 + 816) = 1;
  *(_BYTE *)(a2 + 818) = 6;
  *(_DWORD *)(a2 + 820) = 0;
  *(_QWORD *)(a2 + 856) = a2 + 848;
  *(_QWORD *)(a2 + 848) = a2 + 848;
  *(_WORD *)(a2 + 840) = 1;
  *(_BYTE *)(a2 + 842) = 6;
  *(_DWORD *)(a2 + 844) = 0;
  *(_QWORD *)(a2 + 880) = a2 + 872;
  *(_QWORD *)(a2 + 872) = a2 + 872;
  *(_WORD *)(a2 + 864) = 1;
  *(_BYTE *)(a2 + 866) = 6;
  *(_DWORD *)(a2 + 868) = 0;
  *(_QWORD *)(a2 + 904) = a2 + 896;
  *(_QWORD *)(a2 + 896) = a2 + 896;
  *(_WORD *)(a2 + 888) = 1;
  *(_BYTE *)(a2 + 890) = 6;
  *(_DWORD *)(a2 + 892) = 0;
  *(_QWORD *)(a2 + 1192) = a2 + 1184;
  *(_QWORD *)(a2 + 1184) = a2 + 1184;
  *(_WORD *)(a2 + 1176) = 0;
  *(_BYTE *)(a2 + 1178) = 6;
  *(_DWORD *)(a2 + 1180) = 0;
  *(_QWORD *)(a2 + 1216) = a2 + 1208;
  *(_QWORD *)(a2 + 1208) = a2 + 1208;
  *(_WORD *)(a2 + 1200) = 0;
  *(_BYTE *)(a2 + 1202) = 6;
  *(_DWORD *)(a2 + 1204) = 0;
  *(_QWORD *)(a2 + 1576) = a2 + 1568;
  *(_QWORD *)(a2 + 1568) = a2 + 1568;
  *(_WORD *)(a2 + 1560) = 1;
  *(_BYTE *)(a2 + 1562) = 6;
  *(_DWORD *)(a2 + 1564) = 0;
  *(_OWORD *)(a2 + 992) = 0LL;
  *(_QWORD *)(a2 + 1008) = 0LL;
  *(_OWORD *)(a2 + 1016) = 0LL;
  *(_OWORD *)(a2 + 1032) = 0LL;
  *(_OWORD *)(a2 + 1048) = 0LL;
  *(_QWORD *)(a2 + 1064) = 0LL;
  *(_OWORD *)(a2 + 1232) = 0LL;
  *(_DWORD *)(a2 + 1232) = 2;
  *(_QWORD *)(a2 + 1240) = a2;
  memset((void *)(a2 + 920), 0, 0x48uLL);
  v10 = CcEnableAsyncLazywrite == 0;
  *(_QWORD *)(a2 + 936) = a2 + 928;
  *(_QWORD *)(a2 + 928) = a2 + 928;
  *(_BYTE *)(a2 + 920) = 9;
  *(_DWORD *)(a2 + 924) = 0;
  *(_QWORD *)(a2 + 944) = 0LL;
  *(_DWORD *)(a2 + 980) = 0;
  *(_WORD *)(a2 + 976) = 0;
  *(_BYTE *)(a2 + 984) = 1;
  if ( !v10 && CcEnableAsyncLazywriteMulti )
    *(_DWORD *)(a2 + 1600) |= 2u;
  NumberOfPhysicalPagesForPartitionObject = MmGetNumberOfPhysicalPagesForPartitionObject(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)dword_140D1D1EC )
  {
    v13 = (unsigned int)CcAzure_TopBottomDPTEqual < 2;
    *(_QWORD *)(a2 + 1024) = NumberOfPhysicalPagesForPartitionObject >> 1;
    v14 = *(_QWORD *)(a1 + 8);
    if ( v13 )
      v15 = (unsigned __int64)MmGetNumberOfPhysicalPagesForPartitionObject(v14) >> 1;
    else
      v15 = (unsigned __int64)MmGetNumberOfPhysicalPagesForPartitionObject(v14) >> 3;
    *(_QWORD *)(a2 + 1032) = v15;
    *(_QWORD *)(a2 + 1016) = v16;
    v17 = ExCriticalWorkerThreads - 1;
  }
  else
  {
    v27 = NumberOfPhysicalPagesForPartitionObject >> 3;
    *(_QWORD *)(a2 + 1032) = v27;
    *(_QWORD *)(a2 + 1024) = v27;
    *(_QWORD *)(a2 + 1016) = v27;
    v17 = 1;
  }
  *(_DWORD *)(a2 + 800) = v17;
  *(_DWORD *)(a2 + 1064) = 10;
  *(_QWORD *)(a2 + 1056) = 0LL;
  v18 = 10 * MmGetNumberOfPhysicalPagesForPartitionObject(*(_QWORD *)(a1 + 8));
  v19 = ExCriticalWorkerThreads - 1;
  *(_QWORD *)(a2 + 1048) = v18;
  *(_DWORD *)(a2 + 776) = v19;
  *(_DWORD *)(a2 + 804) = CcMaxCachemapUninitWorkerThreads;
  v20 = (*(_QWORD *)(a2 + 1016) >> 1) + (*(_QWORD *)(a2 + 1016) >> 2);
  if ( CcAzure_LazyWriterPercentageOfNumProcs )
  {
    v32 = CcAzure_LazyWriterPercentageOfNumProcs * KeQueryActiveProcessorCountEx(0xFFFFu) / 0x64;
    if ( *(_DWORD *)(a2 + 776) < v32 )
      *(_DWORD *)(a2 + 776) = v32;
  }
  *(_DWORD *)(a2 + 704) = 0;
  *(_BYTE *)(a2 + 708) = 0;
  *(_QWORD *)(a2 + 1152) = 0LL;
  *(_DWORD *)(a2 + 1168) = -1;
  ObjectAttributes.Length = 48;
  if ( v20 > 0xFFFFFFFF )
    LODWORD(v20) = -1;
  ObjectAttributes.RootDirectory = 0LL;
  *(_DWORD *)(a2 + 1040) = v20;
  *(_QWORD *)(a2 + 1112) = a2 + 1104;
  *(_QWORD *)(a2 + 1104) = a2 + 1104;
  v21 = *(_QWORD *)(a1 + 8);
  ObjectAttributes.Attributes = 0;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( PsCreateSystemThread(
         (PHANDLE)(a2 + 1224),
         0x1FFFFFu,
         &ObjectAttributes,
         *(HANDLE *)(v21 + 120),
         0LL,
         (PKSTART_ROUTINE)CcQueueLazyWriteScanThreadForVolume,
         (PVOID)a2) < 0 )
    goto LABEL_41;
  v23 = 0;
  if ( CcNumberNumaNodes )
  {
    while ( (unsigned __int8)CcInitializeNumaNodeForVolume(a2, v35 + 440LL * v23, v22, v23) )
    {
      if ( *a3 )
        *a3 = 0LL;
      if ( ++v23 >= CcNumberNumaNodes )
        goto LABEL_21;
    }
    goto LABEL_41;
  }
LABEL_21:
  if ( !(unsigned __int8)CcInitializeQuickLWSThreadItem(a2)
    || (PoolWithTag = ExAllocatePoolWithTag(
                        (POOL_TYPE)1536,
                        8LL * (unsigned int)(*(_DWORD *)(a2 + 800) + 1),
                        0x70546343u)) == 0LL
    || (*(_QWORD *)(a2 + 1072) = PoolWithTag,
        *(_QWORD *)(a2 + 1160) = 0LL,
        LOBYTE(v35) = 1,
        CcForEachNumaNode(CcInitializeAsyncReadForNodeHelper, a1, a2, &v35),
        !(_BYTE)v35)
    || (*(_DWORD *)(a2 + 1600) & 1) != 0
    && (LOBYTE(v35) = 1, CcForEachNumaNode(CcInitializeAsyncLazywriteForNodeHelper, a1, a2, &v35), !(_BYTE)v35) )
  {
LABEL_41:
    v25 = "NO";
    goto LABEL_26;
  }
  ++*(_DWORD *)(a2 + 4);
  v4 = 1;
  *(_BYTE *)(a2 + 1236) = 1;
  v25 = "YES";
LABEL_26:
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcInitializePrivateVolumeCacheMap: VCM:%p(vid:%2lx), DO:%p, PVCM:%p, Success:%s -> DONE\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    *(const void **)(a2 + 40),
    *(_DWORD *)(a2 + 24),
    v36,
    (const void *)a2,
    v25);
  return v4;
}
