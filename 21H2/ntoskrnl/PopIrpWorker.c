/*
 * XREFs of PopIrpWorker @ 0x1403B1270
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     PoDeviceAcquireIrp @ 0x1403A39B8 (PoDeviceAcquireIrp.c)
 *     PopPepDeviceDState @ 0x1403B1624 (PopPepDeviceDState.c)
 *     PopFxGetDeviceDStateReason @ 0x1403B1794 (PopFxGetDeviceDStateReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PsTerminateSystemThread @ 0x1406E5A70 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall PopIrpWorker(volatile signed __int32 **Entry, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int8 v4; // r15
  volatile signed __int32 *v6; // rcx
  LARGE_INTEGER *Timeout; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 OldIrql; // rsi
  int v11; // ecx
  ULONG_PTR v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r10
  char v17; // si
  __int64 v18; // rax
  __int64 v19; // r11
  __int64 v20; // rcx
  int v21; // esi
  int DeviceDStateReason; // eax
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // rdx
  int v26; // edx
  __int128 v27; // kr00_16
  char v28; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  bool v34; // zf
  _DWORD *v35; // r9
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int128 v41; // [rsp+48h] [rbp-38h] BYREF
  __m256i v42; // [rsp+58h] [rbp-28h]
  LARGE_INTEGER v43; // [rsp+A0h] [rbp+20h] BYREF

  v43.QuadPart = 0LL;
  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v41 = 0LL;
  *(_OWORD *)&v42.m256i_u64[2] = 0LL;
  *(_OWORD *)v42.m256i_i8 = (unsigned __int64)KeGetCurrentThread();
  if ( Entry )
  {
    v6 = *Entry;
    if ( v6 )
      KeReleaseSemaphoreEx(v6, 0LL, 1LL, a4, 0);
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, Entry);
    v43.QuadPart = -100000000LL;
    Timeout = &v43;
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
  if ( *(__int64 **)qword_140C1FB58 != &PopIrpThreadList )
LABEL_43:
    __fastfail(3u);
  *(_QWORD *)&v41 = &PopIrpThreadList;
  *((_QWORD *)&v41 + 1) = qword_140C1FB58;
  *(_QWORD *)qword_140C1FB58 = &v41;
  qword_140C1FB58 = (__int64)&v41;
LABEL_7:
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  do
  {
    if ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      v8 = PopIrpWorkerList;
      v9 = *(_QWORD *)PopIrpWorkerList;
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList || *(_QWORD *)(v9 + 8) != PopIrpWorkerList )
        goto LABEL_43;
      PopIrpWorkerList = *(_QWORD *)PopIrpWorkerList;
      *(_QWORD *)(v9 + 8) = &PopIrpWorkerList;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v34 = (v33 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v33;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      v11 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v11 == PopIrpWorkerCount
        && (unsigned int)PopIrpWorkerCount < 0xF
        && !PopIrpWorkerPendingCount
        && !PopIrpWorkerRequested )
      {
        PopIrpWorkerRequested = 1;
        KeSetEvent(&PopIrpWorkerControlEvent, 0, 0);
      }
      KeReleaseGuardedMutex(&PopIrpWorkerMutex);
      v12 = v8 - 168;
      v13 = *(_QWORD *)(v8 - 168 + 184);
      v14 = v8 - 168;
      v15 = *(_QWORD *)(v13 + 40);
      PoDeviceAcquireIrp(v14, *(_BYTE *)(v13 + 1), v15);
      v16 = *(_QWORD *)(v12 + 72LL * *(char *)(v12 + 66) + 200);
      if ( *(_BYTE *)(v16 + 184) == 2 && *(_DWORD *)(v16 + 188) == 1 && *(_QWORD *)(v16 + 32) == v15 )
      {
        v18 = *(_QWORD *)(v16 + 24);
        v19 = *(_QWORD *)(v16 + 200);
        v20 = v18 ? *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL) : 0LL;
        v21 = *(_DWORD *)(v20 + 156);
        *(_DWORD *)(v20 + 156) = *(_DWORD *)(v16 + 192);
        if ( v19 )
        {
          DeviceDStateReason = PopFxGetDeviceDStateReason(v19);
          *(_DWORD *)(v23 + 280) = DeviceDStateReason;
          *(_BYTE *)(v23 + 208) = 0;
          if ( DeviceDStateReason == 1 )
            *(_BYTE *)(v23 + 208) = 1;
          v25 = *(unsigned int *)(v23 + 192);
          *(_BYTE *)(v23 + 209) = (_DWORD)v25 != v21;
          if ( (_DWORD)v25 != v21 )
          {
            if ( (_DWORD)v25 == 1 )
            {
              _InterlockedOr((volatile signed __int32 *)(v24 + 32), 2u);
              v25 = *(unsigned int *)(v23 + 192);
            }
            PopPepDeviceDState(*(_QWORD *)(v24 + 56), v25, 0LL, *(unsigned int *)(v23 + 280));
          }
        }
      }
      v17 = 0;
      v42.m256i_i64[1] = v12;
      v42.m256i_i64[2] = v15;
      if ( (*(_DWORD *)(v15 + 48) & 0x2000) == 0 && v12 == PopInrushIrp )
      {
        v4 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v4 <= 0xFu )
        {
          v35 = KeGetCurrentPrcb()->SchedulerAssist;
          v35[5] |= (-1 << (v4 + 1)) & 4;
        }
        v17 = 1;
      }
      (*(void (__fastcall **)(__int64, ULONG_PTR))(*(_QWORD *)(v15 + 8) + 288LL))(v15, v12);
      if ( v17 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v36 = KeGetCurrentIrql();
            if ( v36 <= 0xFu && v4 <= 0xFu && v36 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v38 = v37->SchedulerAssist;
              v39 = ~(unsigned __int16)(-1LL << (v4 + 1));
              v34 = (v39 & v38[5]) == 0;
              v38[5] &= v39;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(v37);
            }
          }
        }
        __writecr8(v4);
      }
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        KeBugCheckEx(0xA0u, 0x901uLL, v15, v12, KeGetCurrentThread()->CombinedApcDisable);
      *(_OWORD *)&v42.m256i_u64[1] = 0LL;
      ObfDereferenceObjectWithTag((PVOID)v15, 0x72496F50u);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      --PopIrpWorkerInFlightCount;
      goto LABEL_7;
    }
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    if ( PopCreateIrpWorkerAllowed
      && ((v26 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v27 = v41;
      v28 = 0;
      if ( *(__int128 **)(v41 + 8) != &v41 || **((__int128 ***)&v41 + 1) != &v41 )
        goto LABEL_43;
      **((_QWORD **)&v41 + 1) = v41;
      *(_QWORD *)(v27 + 8) = *((_QWORD *)&v27 + 1);
      PopIrpWorkerCount = v26;
    }
    else
    {
      v28 = 1;
    }
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  }
  while ( v28 );
  return PsTerminateSystemThread(0);
}
