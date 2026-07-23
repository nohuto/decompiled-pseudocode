/*
 * XREFs of CcCanIWrite @ 0x140293850
 * Callers:
 *     FsRtlCopyWrite @ 0x14088A8E0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B300 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     CcScheduleLazyWriteScan @ 0x1402773DC (CcScheduleLazyWriteScan.c)
 *     CcCanIWriteStreamEx @ 0x140293B50 (CcCanIWriteStreamEx.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1402B69C0 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     ExInterlockedInsertHeadList @ 0x1402F8650 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1402F86D0 (ExInterlockedInsertTailList.c)
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     DbgPrintEx @ 0x14037EFD0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 *     CcPostDeferredWrites @ 0x1404EA230 (CcPostDeferredWrites.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  char v5; // r12
  ULONG v6; // r8d
  int v7; // r13d
  ULONG Flags; // eax
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // r8
  _QWORD *v12; // rdx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PVOID SharedCacheMap; // rcx
  __int64 Partition; // rdi
  bool v16; // r15
  PSECTION_OBJECT_POINTERS v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // rax
  struct _KPRCB *v20; // rcx
  unsigned __int64 v21; // rsi
  char v22; // r15
  BOOLEAN v23; // si
  BOOLEAN CanIWriteStream; // al
  signed __int64 v25; // rbx
  bool v26; // cc
  signed __int64 v27; // rbx
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // rdx
  KSPIN_LOCK *v39; // r8
  _LIST_ENTRY *v40; // rcx
  unsigned __int64 v41; // rsi
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  unsigned __int8 v46; // al
  _DWORD *v47; // r9
  int v48; // eax
  char v49; // [rsp+38h] [rbp-D0h] BYREF
  UCHAR v50; // [rsp+39h] [rbp-CFh]
  BOOLEAN v51; // [rsp+3Ah] [rbp-CEh]
  ULONG v52; // [rsp+3Ch] [rbp-CCh]
  __int128 v53; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+50h] [rbp-B8h]
  __int64 Object; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+80h] [rbp-88h]
  LARGE_INTEGER Interval; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v60[12]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v61; // [rsp+F8h] [rbp-10h]
  __int64 v62; // [rsp+108h] [rbp+0h]
  _QWORD v63[2]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v64[3]; // [rsp+120h] [rbp+18h] BYREF
  ULONG v65; // [rsp+138h] [rbp+30h]
  int v66; // [rsp+13Ch] [rbp+34h]
  void *retaddr; // [rsp+180h] [rbp+78h]

  v51 = Wait;
  v54 = 0LL;
  v58 = 0LL;
  v53 = 0LL;
  v50 = Retrying;
  v52 = BytesToWrite;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v5 = 0;
  v6 = BytesToWrite;
  v7 = 0;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return 1;
  if ( !FileObject )
  {
    Partition = *((_QWORD *)PspSystemPartition + 1);
    goto LABEL_24;
  }
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) == 0 && (Flags & 0x1000000) == 0 )
  {
    *(_QWORD *)&v53 = 0LL;
    *((_QWORD *)&v53 + 1) = &CcMasterLock;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LOBYTE(v54) = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = v11[6];
        v11[6] = v30 + 1;
        if ( v30 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v53, &CcMasterLock);
    }
    else
    {
      v12 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v53);
      if ( v12 )
        KxWaitForLockOwnerShip((__int64)&v53, v12);
    }
    SectionObjectPointer = FileObject->SectionObjectPointer;
    if ( SectionObjectPointer && (SharedCacheMap = SectionObjectPointer->SharedCacheMap) != 0LL )
      Partition = CcGetPartition(SharedCacheMap);
    else
      Partition = *((_QWORD *)PspSystemPartition + 1);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 968)) <= 1 )
      __fastfail(0xEu);
    v16 = 0;
    v62 = 0LL;
    v17 = FileObject->SectionObjectPointer;
    v5 = 1;
    v61 = 0LL;
    if ( v17 )
    {
      v18 = v17->SharedCacheMap;
      if ( v18 )
        v16 = (v18[38] & 0x40000000) != 0;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v53, retaddr);
      goto LABEL_20;
    }
    _m_prefetchw(&v53);
    v19 = v53;
    if ( !(_QWORD)v53 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v53 + 1), 0LL, (signed __int64)&v53) == &v53 )
      {
LABEL_20:
        v20 = KeGetCurrentPrcb();
        *(_QWORD *)&BytesToWrite = v20->SchedulerAssist;
        if ( *(_QWORD *)&BytesToWrite )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v31 = *(_DWORD *)(*(_QWORD *)&BytesToWrite + 24LL) - 1;
            *(_DWORD *)(*(_QWORD *)&BytesToWrite + 24LL) = v31;
            if ( !v31 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        v21 = (unsigned __int8)v54;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && (unsigned __int8)v54 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = v33->SchedulerAssist;
              *(_QWORD *)&BytesToWrite = -1LL << ((unsigned __int8)v54 + 1);
              v35 = ~(unsigned __int16)BytesToWrite;
              v36 = (v35 & v34[5]) == 0;
              v34[5] &= v35;
              if ( v36 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
        }
        __writecr8(v21);
        if ( v16 )
        {
          v23 = 1;
        }
        else
        {
          while ( 1 )
          {
            v6 = v52;
            Retrying = v50;
LABEL_24:
            v22 = 0;
            ++v7;
            v23 = 0;
            v49 = 0;
            if ( Retrying
              || *(_QWORD *)(Partition + 784) == Partition + 784
              || CcAzure_LargeWriteSize && v6 && v6 >= CcAzure_LargeWriteSize )
            {
              CanIWriteStream = CcCanIWriteStreamEx(Partition, (_DWORD)FileObject, v6, 0, 0, (__int64)&v49);
              v22 = v49;
              v23 = CanIWriteStream;
              if ( CanIWriteStream && !v49 || v7 == 2 && CanIWriteStream )
                goto LABEL_28;
              v6 = v52;
            }
            if ( (xmmword_140CFC490 & 0x20000) != 0 )
            {
              v37 = *(_QWORD *)(Partition + 664);
              v38 = *(_QWORD *)(Partition + 640);
              v66 = 0;
              if ( FileObject )
                v64[0] = FileObject->FsContext;
              else
                v64[0] = 0LL;
              v65 = v6;
              v64[1] = v38;
              v64[2] = v37;
              v63[0] = v64;
              v63[1] = 32LL;
              EtwTraceKernelEvent((unsigned int)v63, 1, -2147352576, 5638, 4200706);
            }
            LOBYTE(BytesToWrite) = 1;
            CcAdjustWriteBehindThreadPoolIfNeeded(Partition, *(_QWORD *)&BytesToWrite);
            if ( v51 )
            {
              Object = 393216LL;
              memset(v60, 0, sizeof(v60));
              v60[9] = Partition;
              LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)&v56;
              v56 = (__int64)&v56;
              LODWORD(v60[2]) = v52;
              v60[5] = &Object;
              LODWORD(v60[0]) = 6292220;
              v60[1] = FileObject;
              v60[11] = MEMORY[0xFFFFF78000000320];
              if ( !v23 || (LOBYTE(v60[10]) = 1, !v49) )
                LOBYTE(v60[10]) = 0;
              v39 = (KSPIN_LOCK *)(Partition + 832);
              v40 = (_LIST_ENTRY *)(Partition + 784);
              if ( v50 )
                ExInterlockedInsertHeadList(v40, (PLIST_ENTRY)&v60[3], v39);
              else
                ExInterlockedInsertTailList(v40, (PLIST_ENTRY)&v60[3], v39);
              KeAcquireInStackQueuedSpinLock(
                (PKSPIN_LOCK)(Partition + 128),
                (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
              CcScheduleLazyWriteScan(Partition, 1, 0);
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
              v41 = (unsigned __int8)v58;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v42 = KeGetCurrentIrql();
                  if ( v42 <= 0xFu && (unsigned __int8)v58 <= 0xFu && v42 >= 2u )
                  {
                    v43 = KeGetCurrentPrcb();
                    v44 = v43->SchedulerAssist;
                    v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v58 + 1));
                    v36 = (v45 & v44[5]) == 0;
                    v44[5] &= v45;
                    if ( v36 )
LABEL_87:
                      KiRemoveSystemWorkPriorityKick(v43);
                  }
                }
              }
LABEL_88:
              __writecr8(v41);
              while ( 1 )
              {
                CcPostDeferredWrites(Partition);
                if ( !KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
                  break;
                if ( *(_BYTE *)(Partition + 964) || *(_BYTE *)(Partition + 140) )
                {
                  KeAcquireInStackQueuedSpinLock(
                    (PKSPIN_LOCK)(Partition + 128),
                    (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
                  CcScheduleLazyWriteScan(Partition, 1, 0);
                  if ( *(_BYTE *)(Partition + 140) )
                    *(_BYTE *)(Partition + 140) = 0;
                  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
                  v41 = (unsigned __int8)v58;
                  if ( !KiIrqlFlags )
                    goto LABEL_88;
                  if ( (KiIrqlFlags & 1) == 0 )
                    goto LABEL_88;
                  v46 = KeGetCurrentIrql();
                  if ( v46 > 0xFu )
                    goto LABEL_88;
                  if ( (unsigned __int8)v58 > 0xFu )
                    goto LABEL_88;
                  if ( v46 < 2u )
                    goto LABEL_88;
                  v43 = KeGetCurrentPrcb();
                  v47 = v43->SchedulerAssist;
                  v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v58 + 1));
                  v36 = (v48 & v47[5]) == 0;
                  v47[5] &= v48;
                  if ( !v36 )
                    goto LABEL_88;
                  goto LABEL_87;
                }
              }
LABEL_28:
              v23 = 1;
              goto LABEL_29;
            }
            if ( v7 != 1 )
              goto LABEL_29;
            if ( !v23 )
              break;
            if ( !v22 )
              goto LABEL_28;
            Interval.HighPart = -1;
            Interval.LowPart = -10000 * CcSoftThrottleDelay;
            DbgPrintEx(0x7Fu, 2u, "CcCanIWrite: will delay %lums before retrying async-write\n", CcSoftThrottleDelay);
            KeDelayExecutionThread(0, 0, &Interval);
          }
          v23 = 0;
LABEL_29:
          if ( !v5 )
            return v23;
        }
        v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(Partition + 968), 0xFFFFFFFFFFFFFFFFuLL);
        v26 = v25 <= 1;
        v27 = v25 - 1;
        if ( v26 )
        {
          if ( v27 )
            __fastfail(0xEu);
          KeSetEvent((PRKEVENT)(Partition + 1000), 0, 0);
        }
        return v23;
      }
      v19 = KxWaitForLockChainValid(&v53);
    }
    *(_QWORD *)&v53 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
    goto LABEL_20;
  }
  return 1;
}
