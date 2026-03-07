NTSTATUS __fastcall PopIrpWorker(__int64 *Entry, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 v4; // r15
  __int64 v6; // rcx
  LARGE_INTEGER *Timeout; // r12
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 OldIrql; // rdi
  int v11; // ecx
  __int64 v12; // rax
  ULONG_PTR v13; // r14
  ULONG_PTR v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  char v20; // si
  int DeviceDStateReason; // eax
  int v22; // r10d
  __int64 v23; // r11
  int v24; // ecx
  int v25; // edx
  __int128 v26; // kr00_16
  char v27; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  _DWORD *v34; // r9
  __int64 v35; // rdx
  unsigned __int8 v36; // cl
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int128 v41; // [rsp+48h] [rbp-38h] BYREF
  __m256i v42; // [rsp+58h] [rbp-28h]
  int v43; // [rsp+B0h] [rbp+30h] BYREF
  LARGE_INTEGER v44; // [rsp+B8h] [rbp+38h] BYREF

  v44.QuadPart = 0LL;
  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v41 = 0LL;
  *(_OWORD *)&v42.m256i_u64[2] = 0LL;
  *(_OWORD *)v42.m256i_i8 = (unsigned __int64)KeGetCurrentThread();
  if ( Entry )
  {
    v6 = *Entry;
    if ( v6 )
    {
      v43 = 0;
      KeReleaseSemaphoreEx(v6, 0, 1, a4, 8, (__int64)&v43);
    }
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, Entry);
    v44.QuadPart = -100000000LL;
    Timeout = &v44;
    v42.m256i_i8[24] = 0;
  }
  else
  {
    Timeout = 0LL;
    v42.m256i_i8[24] = 1;
  }
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  --PopIrpWorkerPendingCount;
  ++PopIrpWorkerCount;
  if ( *(__int64 **)qword_140C3A148 != &PopIrpThreadList )
LABEL_43:
    __fastfail(3u);
  *(_QWORD *)&v41 = &PopIrpThreadList;
  *((_QWORD *)&v41 + 1) = qword_140C3A148;
  *(_QWORD *)qword_140C3A148 = &v41;
  qword_140C3A148 = (__int64)&v41;
LABEL_7:
  ExReleaseFastMutex(&PopIrpWorkerMutex);
  do
  {
    if ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      v8 = PopIrpWorkerList;
      PopIrpLockThread = (__int64)KeGetCurrentThread();
      v9 = *(_QWORD *)PopIrpWorkerList;
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList || *(_QWORD *)(v9 + 8) != PopIrpWorkerList )
        goto LABEL_43;
      PopIrpLockThread = 0LL;
      PopIrpWorkerList = v9;
      *(_QWORD *)(v9 + 8) = &PopIrpWorkerList;
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v33 = (v32 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v32;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      v11 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v11 == PopIrpWorkerCount
        && !PopIrpWorkerPendingCount
        && !PopIrpWorkerRequested
        && (unsigned int)PopIrpWorkerCount < 0xF )
      {
        PopIrpWorkerRequested = 1;
        KeSetEvent(&PopIrpWorkerControlEvent, 0, 0);
      }
      ExReleaseFastMutex(&PopIrpWorkerMutex);
      v12 = *(_QWORD *)(v8 + 16);
      v13 = v8 - 168;
      v14 = *(_QWORD *)(v12 + 40);
      LOBYTE(v15) = *(_BYTE *)(v12 + 1);
      PoDeviceAcquireIrp(v13, v15, v14);
      v16 = *(_QWORD *)(v13 + 72LL * *(char *)(v13 + 66) + 200);
      if ( *(_BYTE *)(v16 + 184) == 2 && *(_DWORD *)(v16 + 188) == 1 && *(_QWORD *)(v16 + 32) == v14 )
      {
        v17 = *(_QWORD *)(v16 + 24);
        v18 = *(_QWORD *)(v16 + 200);
        v19 = v17 ? *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) : 0LL;
        *(_DWORD *)(v19 + 156) = *(_DWORD *)(v16 + 192);
        if ( v18 )
        {
          DeviceDStateReason = PopFxGetDeviceDStateReason(v18);
          *(_DWORD *)(v23 + 280) = DeviceDStateReason;
          *(_BYTE *)(v23 + 208) = 0;
          if ( DeviceDStateReason == 1 )
            *(_BYTE *)(v23 + 208) = 1;
          v24 = *(_DWORD *)(v23 + 192);
          *(_BYTE *)(v23 + 209) = v24 != v22;
          if ( v24 != v22 )
          {
            if ( v24 == 1 )
              _InterlockedOr((volatile signed __int32 *)(v18 + 32), 2u);
            PopPepDeviceDState(*(_QWORD *)(v18 + 56), *(unsigned int *)(v23 + 192), 0LL, *(unsigned int *)(v23 + 280));
          }
        }
      }
      v20 = 0;
      v42.m256i_i64[1] = v13;
      v42.m256i_i64[2] = v14;
      if ( (*(_DWORD *)(v14 + 48) & 0x2000) == 0 && v13 == PopInrushIrp )
      {
        v4 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v4 <= 0xFu )
        {
          v34 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v4 == 2 )
            LODWORD(v35) = 4;
          else
            v35 = (-1LL << (v4 + 1)) & 4;
          v34[5] |= v35;
        }
        v20 = 1;
      }
      (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR))(*(_QWORD *)(v14 + 8) + 288LL))(v14, v13);
      if ( v20 )
      {
        if ( KiIrqlFlags )
        {
          v36 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v36 <= 0xFu && v4 <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            v38 = v37->SchedulerAssist;
            v39 = ~(unsigned __int16)(-1LL << (v4 + 1));
            v33 = (v39 & v38[5]) == 0;
            v38[5] &= v39;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
        __writecr8(v4);
      }
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        KeBugCheckEx(0xA0u, 0x901uLL, v14, v13, KeGetCurrentThread()->CombinedApcDisable);
      *(_OWORD *)&v42.m256i_u64[1] = 0LL;
      ObfDereferenceObjectWithTag((PVOID)v14, 0x72496F50u);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      --PopIrpWorkerInFlightCount;
      goto LABEL_7;
    }
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    if ( PopCreateIrpWorkerAllowed
      && ((v25 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v26 = v41;
      v27 = 0;
      if ( *(__int128 **)(v41 + 8) != &v41 || **((__int128 ***)&v41 + 1) != &v41 )
        goto LABEL_43;
      **((_QWORD **)&v41 + 1) = v41;
      *(_QWORD *)(v26 + 8) = *((_QWORD *)&v26 + 1);
      PopIrpWorkerCount = v25;
    }
    else
    {
      v27 = 1;
    }
    ExReleaseFastMutex(&PopIrpWorkerMutex);
  }
  while ( v27 );
  return PsTerminateSystemThread(0);
}
