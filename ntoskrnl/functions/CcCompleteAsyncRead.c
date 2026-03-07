__int64 __fastcall CcCompleteAsyncRead(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r8
  PVOID MappedSystemVa; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // r10
  __int64 v11; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v17; // eax
  bool v18; // zf
  unsigned int PagePriorityThread; // [rsp+9Ch] [rbp-D4h]
  unsigned int v20; // [rsp+A0h] [rbp-D0h]
  __int64 v21; // [rsp+A8h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-A8h]
  __int64 v24; // [rsp+D0h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-98h]
  __int64 v26; // [rsp+E0h] [rbp-90h]
  __int64 v27; // [rsp+E8h] [rbp-88h]
  PMDL MemoryDescriptorList; // [rsp+F0h] [rbp-80h]
  PVOID v29; // [rsp+F8h] [rbp-78h]
  int v30[2]; // [rsp+100h] [rbp-70h]
  __int64 v31; // [rsp+108h] [rbp-68h]
  __int64 v32; // [rsp+110h] [rbp-60h]
  __int64 v33; // [rsp+118h] [rbp-58h]
  struct _KTHREAD *v34; // [rsp+120h] [rbp-50h]
  unsigned int v35; // [rsp+180h] [rbp+10h]
  __int64 v36; // [rsp+190h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  LODWORD(v36) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 16);
  v26 = v2;
  *(_QWORD *)v30 = *(_QWORD *)(a1 + 32);
  v35 = *(_DWORD *)(a1 + 40);
  v20 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v31 = *(_QWORD *)(a1 + 72);
  v3 = v31;
  v4 = *(_QWORD *)(a1 + 80);
  v24 = v4;
  v21 = *(_QWORD *)(a1 + 104);
  v23 = v21;
  v5 = *(_QWORD *)(a1 + 120);
  v27 = v5;
  PsSetPagePriorityThread(v6, v20);
  v34 = KeGetCurrentThread();
  v34[1].TrapFrame = (_KTRAP_FRAME *)7;
  if ( *(int *)v3 < 0 )
  {
    v8 = v21;
  }
  else
  {
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = v35;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
    v29 = MappedSystemVa;
    if ( MappedSystemVa )
      CcMapAndCopyFromCache(v30[0], MappedSystemVa, (__int64)&v36, v20, v21, 0LL);
    else
      *(_DWORD *)v3 = -1073741670;
    v8 = v21;
  }
  if ( v8 )
    IoDiskIoAttributionDereference(v8);
  if ( (_DWORD)v36 )
    ++CcNumberAsyncReadRefaulted;
  if ( v4 && *(_QWORD *)v4 )
    (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v4 + 8));
  KeGetCurrentThread()[1].TrapFrame = 0LL;
  PsSetPagePriorityThread(CurrentThread, PagePriorityThread);
  _InterlockedAdd((volatile signed __int32 *)(v2 + 528), 0xFFFFFFFF);
  if ( !byte_140C5F501 )
  {
    v9 = *(_QWORD *)(v2 + 512);
    v32 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v5) / stru_140C5F4C8.QuadPart;
    CcTelemetryBucketizeLatency(v32, v9 + 1280, v9 + 1376);
    ++*(_QWORD *)(v9 + 1264);
    if ( v10 > *(_QWORD *)(v9 + 1272) )
      *(_QWORD *)(v9 + 1272) = v10;
  }
  v11 = *(_QWORD *)(a1 + 136);
  v33 = v11;
  if ( v11 != *(_QWORD *)(v2 + 536) )
    KeBugCheckEx(0x34u, 0x717uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 768), &LockHandle);
  CcDecrementOpenCount(v2);
  KxReleaseQueuedSpinLock(&LockHandle);
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
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
