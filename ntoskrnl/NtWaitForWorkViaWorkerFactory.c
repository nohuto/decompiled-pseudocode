/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x140316BE0
 * Callers:
 *     <none>
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140231900 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeRegisterObjectNotification @ 0x14024F260 (KeRegisterObjectNotification.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1402EC010 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ObpDeferObjectDeletion @ 0x1402ECA68 (ObpDeferObjectDeletion.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x1402EE788 (ExpWorkerFactoryWantsToCreate.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IoRemoveIoCompletion @ 0x140315A70 (IoRemoveIoCompletion.c)
 *     ExpWorkerFactoryFinishDeferredWork @ 0x140317790 (ExpWorkerFactoryFinishDeferredWork.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     ObpIncrPointerCount @ 0x14033BAEC (ObpIncrPointerCount.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14033BB14 (ObpTraceObjectReferenceIfActive.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     AlpciSendDeferredMessageBeforeWait @ 0x14033E1E0 (AlpciSendDeferredMessageBeforeWait.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140340CC0 (ExpWorkerFactoryCheckCreate.c)
 *     KeAreAllApcsDisabled @ 0x14034C170 (KeAreAllApcsDisabled.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14035A830 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140367ED0 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036A030 (KiUpdateTotalCyclesCurrentThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObpRemoveObjectRoutine @ 0x1407C38A0 (ObpRemoveObjectRoutine.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     NtAlpcSendWaitReceivePort @ 0x1407CCAC0 (NtAlpcSendWaitReceivePort.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1407DEDE0 (ObpHandleRevocationBlockRemoveObject.c)
 *     ExSystemExceptionFilter @ 0x140861790 (ExSystemExceptionFilter.c)
 *     ObpDeregisterObject @ 0x140979950 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtWaitForWorkViaWorkerFactory(
        HANDLE Handle,
        char *a2,
        ULONG a3,
        struct _KPRCB *a4,
        unsigned __int64 a5)
{
  ULONG v5; // r12d
  char *v7; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v9; // rcx
  int v10; // r14d
  unsigned __int64 *v11; // r8
  unsigned __int8 CurrentIrql; // dl
  PVOID v13; // rbx
  _DWORD *v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  struct _KTHREAD *v18; // r14
  PVOID v19; // r15
  unsigned __int64 *v20; // r8
  unsigned __int8 v21; // dl
  _DWORD *v22; // r12
  struct _KTHREAD *v23; // r15
  unsigned int v24; // ecx
  _QWORD *v25; // rbx
  struct _KTHREAD **v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  PVOID *v29; // rbx
  __int64 v30; // r15
  __int64 Next; // rax
  unsigned __int64 v32; // rbx
  signed __int64 v33; // rdi
  bool v34; // cc
  signed __int64 v35; // rdi
  _DWORD *v37; // r11
  __int64 v38; // r9
  _DWORD *SchedulerAssist; // r11
  __int64 v40; // r9
  struct _KPRCB *v41; // rcx
  ULONG_PTR SystemPriority; // rcx
  unsigned __int8 v43; // al
  unsigned __int8 v44; // al
  unsigned int v45; // edx
  char Priority; // dl
  char v47; // cl
  KIRQL v48; // r14
  int v49; // ecx
  _DWORD *v50; // r9
  __int64 v51; // rdx
  unsigned __int8 v52; // cl
  void *v53; // rcx
  struct _KPRCB *v54; // rcx
  signed __int32 *v55; // r8
  struct _KPRCB *v56; // rbx
  bool v57; // zf
  __int64 v58; // r10
  _DWORD *v59; // r9
  __int64 v60; // rdx
  signed __int32 v61; // eax
  signed __int32 v62; // ett
  unsigned __int8 Lock; // cl
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v65; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v67; // r9
  int v68; // eax
  unsigned __int8 v69; // cl
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  unsigned __int8 v73; // cl
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  unsigned __int8 v77; // cl
  struct _KPRCB *v78; // r10
  _DWORD *v79; // r9
  int v80; // eax
  unsigned __int8 v81; // cl
  struct _KPRCB *v82; // r10
  _DWORD *v83; // r9
  int v84; // eax
  BOOLEAN v85; // al
  signed __int64 v86; // rcx
  __int64 v87; // rax
  signed __int32 v88[8]; // [rsp+0h] [rbp-1C8h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-1A0h]
  KIRQL v90; // [rsp+40h] [rbp-188h]
  KPROCESSOR_MODE v91; // [rsp+41h] [rbp-187h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-180h] BYREF
  __int64 v93; // [rsp+60h] [rbp-168h] BYREF
  PVOID Object; // [rsp+68h] [rbp-160h] BYREF
  _DWORD *v95; // [rsp+70h] [rbp-158h]
  char *v96; // [rsp+78h] [rbp-150h]
  struct _KPRCB *v97; // [rsp+80h] [rbp-148h]
  struct _KPRCB *v98; // [rsp+88h] [rbp-140h]
  PVOID P; // [rsp+90h] [rbp-138h]
  HANDLE v100; // [rsp+98h] [rbp-130h]
  int v101; // [rsp+A0h] [rbp-128h] BYREF
  int v102; // [rsp+A4h] [rbp-124h] BYREF
  volatile void *Address; // [rsp+A8h] [rbp-120h]
  PVOID v104; // [rsp+B0h] [rbp-118h]
  __int128 v105; // [rsp+B8h] [rbp-110h] BYREF
  HANDLE Handlea[2]; // [rsp+C8h] [rbp-100h]
  __int64 v107; // [rsp+D8h] [rbp-F0h]
  __int64 v108; // [rsp+E0h] [rbp-E8h] BYREF
  PVOID v109; // [rsp+E8h] [rbp-E0h]
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-D8h]
  _BYTE v111[128]; // [rsp+100h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+0h]

  v98 = a4;
  v5 = a3;
  Address = a2;
  v100 = Handle;
  v96 = a2;
  LODWORD(v95) = a3;
  v97 = a4;
  v105 = 0LL;
  *(_OWORD *)Handlea = 0LL;
  v107 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v111, 0, sizeof(v111));
  LODWORD(v93) = 0;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v91 = PreviousMode;
  v90 = PreviousMode;
  P = v111;
  if ( v5 - 1 > 0x7FFFFFE )
  {
    v10 = -1073741811;
    goto LABEL_55;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(Address, 32LL * v5, 8u);
    v9 = (__int64)v98;
    if ( (unsigned __int64)v98 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( (a5 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a5 + 24 > 0x7FFFFFFF0000LL || a5 + 24 < a5 )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_OWORD *)Handlea = *(_OWORD *)a5;
    v107 = *(_QWORD *)(a5 + 16);
  }
  else
  {
    *(_OWORD *)Handlea = *(_OWORD *)a5;
    v107 = *(_QWORD *)(a5 + 16);
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  v7 = (char *)Object;
  v104 = Object;
  if ( v10 >= 0 )
  {
    if ( v5 > 0x10 )
    {
      P = (PVOID)ExAllocatePool2(64LL, 8LL * v5, 1701736270LL);
      if ( !P )
      {
        v5 = 16;
        P = v111;
      }
    }
    v11 = (unsigned __int64 *)*((_QWORD *)v7 + 2);
    LockHandle.LockQueue.Lock = v11;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v40) = 4;
      else
        v40 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v40;
    }
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)v11, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    v13 = Object;
    v109 = Object;
    if ( *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) )
    {
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v65 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v65 <= 0xFu && LockHandle.OldIrql <= 0xFu && v65 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v67 = CurrentPrcb->SchedulerAssist;
          v68 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v57 = (v68 & v67[5]) == 0;
          v67[5] &= v68;
          if ( v57 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      v10 = 128;
      goto LABEL_55;
    }
    if ( (*((_DWORD *)Object + 102) & 0x200) != 0 )
      ExpLeaveWorkerFactoryAwayMode(Object);
    ++*(_DWORD *)(*((_QWORD *)v13 + 2) + 28LL);
    v14 = (char *)Object + 380;
    v96 = (char *)Object + 380;
    v15 = (char *)Object + 384;
    v95 = (char *)Object + 384;
    while ( 1 )
    {
      if ( *v14 < *v15 || *(_BYTE *)(*((_QWORD *)v13 + 2) + 33LL) )
      {
        v10 = 258;
LABEL_37:
        --*(_DWORD *)(*((_QWORD *)v7 + 2) + 28LL);
        if ( v10 == 258 )
        {
          --*((_DWORD *)v7 + 96);
          --*((_DWORD *)v7 + 97);
          ExpRemoveCurrentThreadFromThreadHistory((__int64)v7);
          v22 = v7 + 408;
        }
        else
        {
          v22 = v7 + 408;
          if ( (*((_DWORD *)v7 + 102) & 7) != 4 )
          {
            v23 = KeGetCurrentThread();
            v24 = 0;
            v25 = (char *)Object + 72;
            v26 = (struct _KTHREAD **)((char *)Object + 72);
            while ( *v26 != v23 )
            {
              ++v24;
              ++v26;
              if ( v24 >= 4 )
              {
                ObfReferenceObjectWithTag(v23, 0x746C6644u);
                v27 = 0LL;
                while ( *v25 )
                {
                  v27 = (unsigned int)(v27 + 1);
                  ++v25;
                  if ( (unsigned int)v27 >= 4 )
                  {
                    v28 = *v22 & 7;
                    v29 = (PVOID *)&v7[8 * v28];
                    ObfDereferenceObjectWithTag(v29[9], 0x746C6644u);
                    v29[9] = v23;
                    *v22 = *v22 & 0xFFFFFFF8 | ((_BYTE)v28 + 1) & 3;
                    goto LABEL_46;
                  }
                }
                *(_QWORD *)&v7[8 * v27 + 72] = v23;
                break;
              }
            }
          }
        }
LABEL_46:
        v30 = *((_QWORD *)v7 + 2);
        if ( *((_DWORD *)v7 + 96) >= *((_DWORD *)v7 + 95) || *(_DWORD *)(v30 + 28) )
        {
LABEL_48:
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_51;
          }
          _m_prefetchw(&LockHandle);
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_51;
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
          if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                           (volatile __int64 *)(Next + 8),
                                           (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
          {
            _InterlockedOr(v88, 0);
            KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(Next + 8) >> 5) & 0x7F], 0LL));
          }
LABEL_51:
          v32 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            v81 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v81 <= 0xFu && LockHandle.OldIrql <= 0xFu && v81 >= 2u )
            {
              v82 = KeGetCurrentPrcb();
              v83 = v82->SchedulerAssist;
              v84 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v57 = (v84 & v83[5]) == 0;
              v83[5] &= v84;
              if ( v57 )
                KiRemoveSystemWorkPriorityKick(v82);
            }
          }
          __writecr8(v32);
        }
        else
        {
          if ( *((_DWORD *)v7 + 101) )
          {
            v49 = *v22 | 0x200;
            *v22 = v49;
            if ( !*(_DWORD *)(*(_QWORD *)(v30 + 8) + 4LL) )
            {
              if ( (v49 & 0x400) == 0 )
              {
                *v22 = v49 | 0x400;
                ObpTraceObjectReferenceIfActive(v7 - 48, 1LL, 1953261124LL);
                ObpIncrPointerCount(v7 - 48);
                KeRegisterObjectNotification(
                  *(_QWORD *)(v30 + 8),
                  (__int64)&ExpWorkerFactoryManagerQueue,
                  (__int64)(v7 + 616));
              }
              goto LABEL_48;
            }
          }
          ExpWorkerFactoryCheckCreate((PSLIST_ENTRY)v7, &LockHandle);
        }
        if ( !v10 )
          v98->MxCsr = v93;
        break;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_26;
      }
      _m_prefetchw(&LockHandle);
      v16 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_26;
        v16 = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      v52 = (unsigned __int8)LockHandle.LockQueue.Lock;
      if ( ((v52 ^ (unsigned __int8)_InterlockedExchange64(
                                      (volatile __int64 *)(v16 + 8),
                                      (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      {
        _InterlockedOr(v88, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v16 + 8) >> 5) & 0x7F], 0LL));
      }
LABEL_26:
      v17 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v69 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v69 <= 0xFu && LockHandle.OldIrql <= 0xFu && v69 >= 2u )
        {
          v70 = KeGetCurrentPrcb();
          v71 = v70->SchedulerAssist;
          v72 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v57 = (v72 & v71[5]) == 0;
          v71[5] &= v72;
          if ( v57 )
            KiRemoveSystemWorkPriorityKick(v70);
        }
      }
      __writecr8(v17);
      if ( (v107 & 0x200000000LL) != 0 )
      {
        v18 = KeGetCurrentThread();
        v19 = v18[1].WaitBlock[1].Object;
        if ( v19 )
        {
          if ( (*((_DWORD *)&v18->0 + 1) & 0x200) != 0 )
          {
            v53 = (void *)KeGetCurrentIrql();
            v100 = v53;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v53 <= 0xFu )
            {
              v59 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( (_BYTE)v53 == 2 )
                LODWORD(v60) = 4;
              else
                v60 = (-1LL << ((unsigned __int8)v53 + 1)) & 4;
              v59[5] |= v60;
            }
            v97 = KeGetCurrentPrcb();
            _disable();
            KiUpdateTotalCyclesCurrentThread(v97, v18, 0LL);
            v54 = KeGetCurrentPrcb();
            v55 = (signed __int32 *)v54->SchedulerAssist;
            if ( v55 )
            {
              _m_prefetchw(v55);
              v61 = *v55;
              do
              {
                v62 = v61;
                v61 = _InterlockedCompareExchange(v55, v61 & 0xFFDFFFFF, v61);
              }
              while ( v62 != v61 );
              if ( (v61 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v54);
            }
            _enable();
            v101 = 0;
            v56 = v97;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v56->PrcbLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v101);
              while ( v56->PrcbLock );
            }
            _interlockedbittestandreset(&v18->Header.Lock, 0x12u);
            v18->SchedulingGroup = 0LL;
            _interlockedbittestandreset((volatile signed __int32 *)&v18->116 + 1, 9u);
            _InterlockedAnd64((volatile signed __int64 *)&v56->PrcbLock, 0LL);
            v13 = v109;
            if ( KiIrqlFlags )
            {
              v73 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v73 <= 0xFu && (unsigned __int8)v100 <= 0xFu && v73 >= 2u )
              {
                v74 = KeGetCurrentPrcb();
                v75 = v74->SchedulerAssist;
                v76 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v100 + 1));
                v57 = (v76 & v75[5]) == 0;
                v75[5] &= v76;
                if ( v57 )
                  KiRemoveSystemWorkPriorityKick(v74);
              }
            }
            __writecr8((unsigned __int8)v100);
          }
          v90 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
          v18[1].WaitBlock[1].Object = 0LL;
          v108 = 0LL;
          v41 = (struct _KPRCB *)KeGetCurrentIrql();
          v97 = v41;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v41 <= 0xFu )
          {
            v50 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( (_BYTE)v41 == 2 )
              LODWORD(v51) = 4;
            else
              v51 = (-1LL << ((unsigned __int8)v41 + 1)) & 4;
            v50[5] |= v51;
          }
          v102 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v102);
            while ( v18->ThreadLock );
          }
          SystemPriority = v18->SystemPriority;
          v18->SystemPriority = 0;
          v43 = v18->PriorityFloorCounts[SystemPriority];
          if ( !v43 )
            KeBugCheckEx(0x157u, (ULONG_PTR)v18, SystemPriority, 2uLL, 0LL);
          v44 = v43 - 1;
          v18->PriorityFloorCounts[SystemPriority] = v44;
          if ( !v44 )
          {
            v45 = v18->PriorityFloorSummary ^ (1 << SystemPriority);
            v18->PriorityFloorSummary = v45;
            if ( v45 < 1 << SystemPriority )
            {
              Priority = v18->Priority;
              if ( Priority <= 31 )
              {
                v47 = (v18->PriorityDecrement & 0xF)
                    + v18->BasePriority
                    + ((unsigned __int8)v18->PriorityDecrement >> 4);
                if ( v47 < Priority )
                  KiSetPriorityThread((__int64)v18, (unsigned __int64)&v108, v47);
              }
            }
          }
          v18->ThreadLock = 0LL;
          KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), (__int64)&v108, (unsigned __int8)v97);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
          else
            PspThreadWorkOnBehalfLock = 0;
          if ( KiIrqlFlags && (v77 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v77 <= 0xFu )
          {
            v48 = v90;
            if ( v90 <= 0xFu && v77 >= 2u )
            {
              v78 = KeGetCurrentPrcb();
              v79 = v78->SchedulerAssist;
              v80 = ~(unsigned __int16)(-1LL << (v90 + 1));
              v57 = (v80 & v79[5]) == 0;
              v79[5] &= v80;
              if ( v57 )
                KiRemoveSystemWorkPriorityKick(v78);
            }
          }
          else
          {
            v48 = v90;
          }
          __writecr8(v48);
          EtwTraceThreadWorkOnBehalfUpdate((__int64)v19, 0LL);
          ObDereferenceObjectDeferDeleteWithTag(v19, 0x746E6F43u);
        }
        PreviousMode = v91;
      }
      if ( (v107 & 0x100000000LL) != 0 )
      {
        LOBYTE(HandleInformation) = PreviousMode;
        AlpciSendDeferredMessageBeforeWait(&v105, Handlea[1], (unsigned int)v107, Handlea[0]);
      }
      v10 = IoRemoveIoCompletion(
              *(struct _KQUEUE **)(*((_QWORD *)v13 + 2) + 8LL),
              (__int64)Address,
              (PLIST_ENTRY *)P,
              v5,
              (ULONG *)&v93,
              PreviousMode,
              0LL,
              1u);
      ExpWorkerFactoryFinishDeferredWork(&v105);
      v20 = (unsigned __int64 *)*((_QWORD *)v13 + 2);
      LockHandle.LockQueue.Lock = v20;
      LockHandle.LockQueue.Next = 0LL;
      v21 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
      {
        v37 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v21 == 2 )
          LODWORD(v38) = 4;
        else
          v38 = (-1LL << (v21 + 1)) & 4;
        v37[5] |= v38;
      }
      LockHandle.OldIrql = v21;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v20);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)v20, (__int64)&LockHandle) )
      {
        KxWaitForLockOwnerShip(&LockHandle);
      }
      if ( v10 != 258 )
        goto LABEL_37;
      v57 = !ExpWorkerFactoryWantsToCreate((__int64)Object, 1);
      v15 = v95;
      v14 = v96;
      if ( v57 )
      {
        v15 = v95;
        v14 = v96;
        if ( *v95 > *(_DWORD *)(v58 + 376) )
        {
          if ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber == (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
            goto LABEL_37;
          v15 = v95;
        }
      }
    }
  }
LABEL_55:
  if ( P != v111 )
    ExFreePoolWithTag(P, 0);
  if ( v7 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)v7 - 48);
    v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7 - 6, 0xFFFFFFFFFFFFFFFFuLL);
    v34 = v33 <= 1;
    v35 = v33 - 1;
    if ( v34 )
    {
      if ( *((_QWORD *)v7 - 5) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v7 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v7 - 48) >> 8)],
          (ULONG_PTR)v7,
          1uLL,
          *((_QWORD *)v7 - 5));
      if ( v35 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v7, 2uLL, v35);
      v85 = KeAreAllApcsDisabled();
      v86 = (signed __int64)(v7 - 48);
      if ( v85 )
      {
        ObpDeferObjectDeletion(v86);
      }
      else
      {
        v87 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v86);
        if ( v87 )
          ObpHandleRevocationBlockRemoveObject(v87);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v7 - 48);
        ObpRemoveObjectRoutine(v7 - 48, 0LL);
      }
    }
  }
  if ( (v107 & 0x100000000LL) != 0 )
    NtAlpcSendWaitReceivePort(Handlea[1], 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v10;
}
