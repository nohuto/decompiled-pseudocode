/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1402DBAE0
 * Callers:
 *     <none>
 * Callees:
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140202DC8 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140242860 (ExpWorkerFactoryCheckCreate.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1402DC800 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCreateThread @ 0x1402DC898 (ExpWorkerFactoryCreateThread.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x140317ADC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiValidateCpuSetMasks @ 0x14035F358 (KiValidateCpuSetMasks.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407D4E30 (ExSystemExceptionFilter.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int32 v9; // r12d
  ULONG v10; // r14d
  NTSTATUS result; // eax
  __int64 v12; // rax
  NTSTATUS Thread; // esi
  PVOID v14; // rcx
  int v15; // eax
  PVOID v16; // r15
  unsigned __int64 *v17; // rdi
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v21; // rdx
  int v22; // eax
  _QWORD *v23; // rdx
  char *v24; // rdi
  __int64 v25; // rdx
  unsigned int v26; // edx
  int v27; // ecx
  _DWORD *v28; // r12
  unsigned int v29; // eax
  bool v30; // r13
  _DWORD *v31; // r13
  _DWORD *v32; // r14
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  bool v38; // zf
  __int64 v39; // rax
  char v40; // r13
  unsigned int v41; // edx
  bool v42; // al
  unsigned int v43; // ecx
  unsigned int v44; // edx
  PKSPIN_LOCK *v45; // r14
  unsigned int v46; // eax
  int *v47; // rbx
  int v48; // ecx
  unsigned __int64 v49; // rsi
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v55; // rcx
  _DWORD *v56; // rdx
  int v57; // eax
  unsigned __int64 v58; // rbx
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r9
  _DWORD *v61; // r8
  int v62; // eax
  char v63; // [rsp+34h] [rbp-134h]
  PVOID Object; // [rsp+38h] [rbp-130h] BYREF
  char v65; // [rsp+42h] [rbp-126h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-120h] BYREF
  _DWORD *v67; // [rsp+60h] [rbp-108h]
  _QWORD v68[23]; // [rsp+68h] [rbp-100h] BYREF
  void *retaddr; // [rsp+168h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_OWORD *)v68 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&v68[3], 0, 0xA0uLL);
  v9 = WorkerFactoryInformationClass - 2;
  switch ( WorkerFactoryInformationClass )
  {
    case WorkerFactoryIdleTimeout:
      v10 = 8;
      goto LABEL_9;
    case WorkerFactoryBindingCount:
    case WorkerFactoryThreadMinimum:
    case WorkerFactoryThreadMaximum:
    case WorkerFactoryAdjustThreadGoal:
    case WorkerFactoryCallbackType:
    case WorkerFactoryThreadBasePriority:
    case WorkerFactoryTimeoutWaiters:
    case WorkerFactoryFlags:
    case WorkerFactoryThreadSoftMaximum:
      v10 = 4;
      goto LABEL_9;
    case WorkerFactoryPaused:
      return -1073741822;
    case WorkerFactoryStackInformation:
      v10 = 16;
      goto LABEL_9;
    case WorkerFactoryThreadCpuSets:
      if ( WorkerFactoryInformationLength >= 0xA0 )
        v10 = 160;
      else
        v10 = WorkerFactoryInformationLength + (WorkerFactoryInformationLength & 7);
LABEL_9:
      if ( WorkerFactoryInformationLength == v10 )
      {
        switch ( WorkerFactoryInformationClass )
        {
          case WorkerFactoryIdleTimeout:
            if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v68[3] = *(_QWORD *)WorkerFactoryInformation;
            break;
          case WorkerFactoryBindingCount:
          case WorkerFactoryThreadMinimum:
          case WorkerFactoryThreadMaximum:
            if ( PreviousMode )
            {
              v12 = (__int64)WorkerFactoryInformation;
              if ( (unsigned __int64)WorkerFactoryInformation >= 0x7FFFFFFF0000LL )
                v12 = 0x7FFFFFFF0000LL;
              LODWORD(v68[3]) = *(_DWORD *)v12;
            }
            else
            {
              LODWORD(v68[3]) = *(_DWORD *)WorkerFactoryInformation;
            }
            break;
          default:
            __fastfail(0x25u);
        }
        Thread = 0;
        Object = 0LL;
        result = ObReferenceObjectByHandle(
                   WorkerFactoryHandle,
                   4u,
                   ExpWorkerFactoryObjectType,
                   PreviousMode,
                   &Object,
                   0LL);
        if ( result >= 0 )
        {
          if ( WorkerFactoryInformationClass == WorkerFactoryAdjustThreadGoal )
          {
            v14 = Object;
            v15 = v68[3];
            if ( !LODWORD(v68[3]) )
            {
              v15 = KeNumberProcessors_0;
              v14 = Object;
            }
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v15;
            ObfDereferenceObjectWithTag(v14, 0x746C6644u);
            result = 0;
          }
          else
          {
            v65 = 0;
            v63 = 1;
            v16 = Object;
            v17 = (unsigned __int64 *)*((_QWORD *)Object + 2);
            LockHandle.LockQueue.Lock = v17;
            LockHandle.LockQueue.Next = 0LL;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
            }
            LockHandle.OldIrql = CurrentIrql;
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = CurrentPrcb->SchedulerAssist;
            if ( v21 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v22 = v21[6];
                v21[6] = v22 + 1;
                if ( v22 == -1 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&LockHandle, v17);
            }
            else
            {
              v23 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v17, (__int64)&LockHandle);
              if ( v23 )
                KxWaitForLockOwnerShip((__int64)&LockHandle, v23);
            }
            switch ( v9 )
            {
              case 0:
                if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
                {
                  Thread = 128;
                  v24 = (char *)Object;
                }
                else if ( v68[3] >= 0LL )
                {
                  Thread = -1073741811;
                  v24 = (char *)Object;
                }
                else
                {
                  v25 = -10000000LL;
                  if ( v68[3] <= -10000000LL )
                  {
                    v25 = v68[3];
                    if ( v68[3] < -6000000000LL )
                      v25 = -6000000000LL;
                  }
                  v68[3] = v25;
                  v24 = (char *)Object;
                  *((_QWORD *)Object + 14) = v25;
                  v68[1] = -1LL;
                  KeSetTimer2((__int64)(v24 + 328), v25, -v25, (__int64)v68);
                }
                goto LABEL_95;
              case 1:
                v24 = (char *)Object;
                v26 = *((_DWORD *)Object + 77);
                if ( SLODWORD(v68[3]) < 0 )
                {
                  if ( v26 <= -LODWORD(v68[3]) )
                  {
                    *((_DWORD *)Object + 77) = 0;
                    v27 = 0;
                  }
                  else
                  {
                    v27 = v26 + LODWORD(v68[3]);
                    *((_DWORD *)Object + 77) = v26 + LODWORD(v68[3]);
                  }
                }
                else
                {
                  v27 = -1;
                  if ( v26 < v26 + LODWORD(v68[3]) )
                    v27 = v26 + LODWORD(v68[3]);
                  *((_DWORD *)Object + 77) = v27;
                }
                if ( v26 )
                {
                  if ( !v27 && (*((_DWORD *)v24 + 78) & 0x200) != 0 )
                    ExpLeaveWorkerFactoryAwayMode(v24);
                }
                else if ( v27 && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v24) )
                {
                  ExpWorkerFactoryCheckCreate(v24, &LockHandle, 0);
                  v63 = 0;
                }
                goto LABEL_95;
              case 2:
                v24 = (char *)Object;
                if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
                {
                  Thread = 128;
                  goto LABEL_95;
                }
                v28 = (char *)Object + 280;
                v29 = v68[3];
                v30 = LODWORD(v68[3]) > *((_DWORD *)Object + 70);
                *((_DWORD *)Object + 70) = v68[3];
                if ( *((_DWORD *)v24 + 71) < v29 )
                  *((_DWORD *)v24 + 71) = v29;
                if ( !v30 )
                {
                  v42 = 0;
                  v40 = 0;
                  goto LABEL_96;
                }
                if ( (*((_DWORD *)v24 + 78) & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v24);
                v31 = v24 + 296;
                v67 = v24 + 288;
                if ( (unsigned int)(*((_DWORD *)v24 + 72) + *((_DWORD *)v24 + 74)) < *v28 )
                {
                  v32 = v24 + 304;
                  while ( 1 )
                  {
                    ++*v32;
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                    OldIrql = LockHandle.OldIrql;
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        v34 = KeGetCurrentIrql();
                        if ( v34 <= 0xFu && LockHandle.OldIrql <= 0xFu && v34 >= 2u )
                        {
                          v35 = KeGetCurrentPrcb();
                          v36 = v35->SchedulerAssist;
                          v37 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                          v38 = (v37 & v36[5]) == 0;
                          v36[5] &= v37;
                          if ( v38 )
                            KiRemoveSystemWorkPriorityKick(v35);
                          v24 = (char *)Object;
                        }
                      }
                    }
                    __writecr8(OldIrql);
                    Thread = ExpWorkerFactoryCreateThread(v24);
                    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v16 + 2), &LockHandle);
                    if ( Thread < 0 )
                      break;
                    if ( (unsigned int)(*v67 + *v31) >= *v28 )
                      goto LABEL_95;
                  }
                  --*v32;
                }
                goto LABEL_95;
              case 3:
                v39 = *((_QWORD *)v16 + 2);
                v24 = (char *)Object;
                if ( *(_BYTE *)(v39 + 33) )
                {
                  Thread = 128;
LABEL_95:
                  v42 = 0;
                  v40 = 0;
                }
                else
                {
                  v40 = 1;
                  v41 = v68[3];
                  v42 = LODWORD(v68[3])
                     && (!*((_DWORD *)Object + 71) && *(_DWORD *)(v39 + 24) || *(int *)(*(_QWORD *)(v39 + 8) + 4LL) > 0);
                  *((_DWORD *)Object + 71) = v68[3];
                  if ( v41 < *((_DWORD *)v24 + 70) )
                    *((_DWORD *)v24 + 70) = v41;
                }
LABEL_96:
                if ( v42 )
                {
                  v43 = *((_DWORD *)v24 + 72);
                  v44 = v43 + *((_DWORD *)v24 + 74);
                  v45 = (PKSPIN_LOCK *)(v24 + 16);
                  if ( *(_BYTE *)(*((_QWORD *)v24 + 2) + 33LL) )
                  {
                    Thread = 128;
                  }
                  else
                  {
                    v46 = *((_DWORD *)v24 + 71);
                    if ( v43 < v46 )
                    {
                      v47 = (int *)(v24 + 304);
                      v48 = *((_DWORD *)v24 + 76);
                      if ( v48 || v44 >= v46 )
                        goto LABEL_116;
                      if ( (*((_DWORD *)v24 + 78) & 0x200) != 0 )
                      {
                        ExpLeaveWorkerFactoryAwayMode(v24);
                        v48 = *v47;
                      }
                      *v47 = v48 + 1;
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                      v49 = LockHandle.OldIrql;
                      if ( KiIrqlFlags )
                      {
                        if ( (KiIrqlFlags & 1) != 0 )
                        {
                          v50 = KeGetCurrentIrql();
                          if ( v50 <= 0xFu && LockHandle.OldIrql <= 0xFu && v50 >= 2u )
                          {
                            v51 = KeGetCurrentPrcb();
                            v52 = v51->SchedulerAssist;
                            v53 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                            v38 = (v53 & v52[5]) == 0;
                            v52[5] &= v53;
                            if ( v38 )
                              KiRemoveSystemWorkPriorityKick(v51);
                            v24 = (char *)Object;
                          }
                        }
                      }
                      __writecr8(v49);
                      v63 = 0;
                      Thread = ExpWorkerFactoryCreateThread(v24);
                      if ( Thread < 0 )
                      {
                        v63 = 1;
                        KeAcquireInStackQueuedSpinLock(*v45, &LockHandle);
                        --*v47;
                        if ( v40 )
LABEL_116:
                          Thread = 0;
                      }
                    }
                    else if ( !v40 )
                    {
                      Thread = -1073741527;
                    }
                  }
                }
                if ( !v63 )
                  goto LABEL_136;
                if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                {
                  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
                  goto LABEL_124;
                }
                _m_prefetchw(&LockHandle);
                Next = LockHandle.LockQueue.Next;
                if ( LockHandle.LockQueue.Next )
                  goto LABEL_123;
                if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                     0LL,
                                                     (signed __int64)&LockHandle) != &LockHandle )
                {
                  Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
LABEL_123:
                  LockHandle.LockQueue.Next = 0LL;
                  _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
                }
LABEL_124:
                v55 = KeGetCurrentPrcb();
                v56 = v55->SchedulerAssist;
                if ( v56 )
                {
                  if ( v55->NestingLevel <= 1u )
                  {
                    v57 = v56[6] - 1;
                    v56[6] = v57;
                    if ( !v57 )
                      KiRemoveSystemWorkPriorityKick(v55);
                  }
                }
                v58 = LockHandle.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v59 = KeGetCurrentIrql();
                    if ( v59 <= 0xFu && LockHandle.OldIrql <= 0xFu && v59 >= 2u )
                    {
                      v60 = KeGetCurrentPrcb();
                      v61 = v60->SchedulerAssist;
                      v62 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                      v38 = (v62 & v61[5]) == 0;
                      v61[5] &= v62;
                      if ( v38 )
                        KiRemoveSystemWorkPriorityKick(v60);
                    }
                  }
                }
                __writecr8(v58);
                v24 = (char *)Object;
LABEL_136:
                ObfDereferenceObjectWithTag(v24, 0x746C6644u);
                result = Thread;
                break;
              default:
                __fastfail(0x25u);
            }
          }
        }
      }
      else
      {
        result = -1073741820;
      }
      break;
    default:
      result = -1073741821;
      break;
  }
  return result;
}
