/*
 * XREFs of PopIrpWorker @ 0x14039FFC0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402D1E50 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PoDeviceAcquireIrp @ 0x14037C3B4 (PoDeviceAcquireIrp.c)
 *     PopPepDeviceDState @ 0x1403A0370 (PopPepDeviceDState.c)
 *     PopFxGetDeviceDStateReason @ 0x1403A0664 (PopFxGetDeviceDStateReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopAcquireIrpWorkerLock @ 0x140577E10 (PopAcquireIrpWorkerLock.c)
 *     PopReleaseIrpWorkerLock @ 0x140577E2C (PopReleaseIrpWorkerLock.c)
 *     PsTerminateSystemThread @ 0x14061F840 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall PopIrpWorker(struct _KSEMAPHORE **Entry)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KSEMAPHORE *v3; // rcx
  LARGE_INTEGER *Timeout; // r12
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // ecx
  ULONG_PTR v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r10
  char v13; // r14
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // rcx
  int v17; // r14d
  int DeviceDStateReason; // eax
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // rdx
  int v22; // edx
  __int128 v23; // kr00_16
  char v24; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v29; // r9
  int v30; // eax
  bool v31; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int128 v33; // [rsp+48h] [rbp-38h] BYREF
  __m256i v34; // [rsp+58h] [rbp-28h]
  LARGE_INTEGER v35; // [rsp+A0h] [rbp+20h] BYREF

  v35.QuadPart = 0LL;
  CurrentIrql = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v33 = 0LL;
  *(_OWORD *)&v34.m256i_u64[2] = 0LL;
  *(_OWORD *)v34.m256i_i8 = (unsigned __int64)KeGetCurrentThread();
  if ( Entry )
  {
    v3 = *Entry;
    if ( v3 )
      KeReleaseSemaphore(v3, 0, 1, 0);
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, Entry);
    v35.QuadPart = -100000000LL;
    Timeout = &v35;
    v34.m256i_i8[24] = 0;
  }
  else
  {
    Timeout = 0LL;
    v34.m256i_i8[24] = 1;
  }
  PopAcquireIrpWorkerLock();
  --PopIrpWorkerPendingCount;
  ++PopIrpWorkerCount;
  if ( *(__int64 **)qword_140C20C98 != &PopIrpThreadList )
LABEL_61:
    __fastfail(3u);
  *(_QWORD *)&v33 = &PopIrpThreadList;
  *((_QWORD *)&v33 + 1) = qword_140C20C98;
  *(_QWORD *)qword_140C20C98 = &v33;
  qword_140C20C98 = (__int64)&v33;
LABEL_7:
  PopReleaseIrpWorkerLock();
  do
  {
    if ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      v5 = PopIrpWorkerList;
      v6 = *(_QWORD *)PopIrpWorkerList;
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList || *(_QWORD *)(v6 + 8) != PopIrpWorkerList )
        goto LABEL_61;
      PopIrpWorkerList = *(_QWORD *)PopIrpWorkerList;
      *(_QWORD *)(v6 + 8) = &PopIrpWorkerList;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      PopAcquireIrpWorkerLock();
      v7 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v7 == PopIrpWorkerCount
        && !PopIrpWorkerPendingCount
        && (unsigned int)PopIrpWorkerCount < 0xF
        && !PopIrpWorkerRequested )
      {
        PopIrpWorkerRequested = 1;
        KeSetEvent(&PopIrpWorkerControlEvent, 0, 0);
      }
      PopReleaseIrpWorkerLock();
      v8 = v5 - 168;
      v9 = *(_QWORD *)(v5 - 168 + 184);
      v10 = v5 - 168;
      v11 = *(_QWORD *)(v9 + 40);
      PoDeviceAcquireIrp(v10, *(_BYTE *)(v9 + 1), v11);
      v12 = *(_QWORD *)(v8 + 72LL * *(char *)(v8 + 66) + 200);
      if ( *(_BYTE *)(v12 + 184) == 2 && *(_DWORD *)(v12 + 188) == 1 && *(_QWORD *)(v12 + 32) == v11 )
      {
        v14 = *(_QWORD *)(v12 + 24);
        v15 = *(_QWORD *)(v12 + 200);
        v16 = v14 ? *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL) : 0LL;
        v17 = *(_DWORD *)(v16 + 156);
        *(_DWORD *)(v16 + 156) = *(_DWORD *)(v12 + 192);
        if ( v15 )
        {
          DeviceDStateReason = PopFxGetDeviceDStateReason(v15);
          *(_DWORD *)(v19 + 248) = DeviceDStateReason;
          *(_BYTE *)(v19 + 208) = 0;
          if ( DeviceDStateReason == 1 )
            *(_BYTE *)(v19 + 208) = 1;
          v21 = *(unsigned int *)(v19 + 192);
          *(_BYTE *)(v19 + 209) = (_DWORD)v21 != v17;
          if ( (_DWORD)v21 != v17 )
          {
            if ( (_DWORD)v21 == 1 )
            {
              _InterlockedOr((volatile signed __int32 *)(v20 + 32), 2u);
              v21 = *(unsigned int *)(v19 + 192);
            }
            PopPepDeviceDState(*(_QWORD *)(v20 + 56), v21, 0LL, *(unsigned int *)(v19 + 248));
          }
        }
      }
      v13 = 0;
      v34.m256i_i64[1] = v8;
      v34.m256i_i64[2] = v11;
      if ( (*(_DWORD *)(v11 + 48) & 0x2000) == 0 && v8 == PopInrushIrp )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        v13 = 1;
      }
      (*(void (__fastcall **)(__int64, ULONG_PTR))(*(_QWORD *)(v11 + 8) + 288LL))(v11, v8);
      if ( v13 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v27 = KeGetCurrentIrql();
            if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v29 = CurrentPrcb->SchedulerAssist;
              v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v31 = (v30 & v29[5]) == 0;
              v29[5] &= v30;
              if ( v31 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        KeBugCheckEx(0xA0u, 0x901uLL, v11, v8, KeGetCurrentThread()->CombinedApcDisable);
      *(_OWORD *)&v34.m256i_u64[1] = 0LL;
      ObfDereferenceObjectWithTag((PVOID)v11, 0x72496F50u);
      PopAcquireIrpWorkerLock();
      --PopIrpWorkerInFlightCount;
      goto LABEL_7;
    }
    PopAcquireIrpWorkerLock();
    if ( PopCreateIrpWorkerAllowed
      && ((v22 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v23 = v33;
      v24 = 0;
      if ( *(__int128 **)(v33 + 8) != &v33 || **((__int128 ***)&v33 + 1) != &v33 )
        goto LABEL_61;
      **((_QWORD **)&v33 + 1) = v33;
      *(_QWORD *)(v23 + 8) = *((_QWORD *)&v23 + 1);
      PopIrpWorkerCount = v22;
    }
    else
    {
      v24 = 1;
    }
    PopReleaseIrpWorkerLock();
  }
  while ( v24 );
  return PsTerminateSystemThread(0);
}
