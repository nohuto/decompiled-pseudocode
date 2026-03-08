/*
 * XREFs of AlpcpSignal @ 0x14033E410
 * Callers:
 *     AlpciSendDeferredMessageBeforeWait @ 0x14033E1E0 (AlpciSendDeferredMessageBeforeWait.c)
 *     AlpcpSignalAndWait @ 0x14033E350 (AlpcpSignalAndWait.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140716B9C (AlpcpCompleteDeferSignalRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x1407CCAC0 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     AlpcpQueueIoCompletion @ 0x1402927FC (AlpcpQueueIoCompletion.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x1407D0108 (IopAllocateMiniCompletionPacket.c)
 */

void __fastcall AlpcpSignal(__int64 a1, BOOLEAN a2, char a3, int a4)
{
  _QWORD *v4; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  char v9; // r12
  unsigned int v10; // ecx
  _QWORD *v11; // r14
  __int64 MiniCompletionPacket; // r14
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // r15
  _QWORD *v21; // r15
  __int64 v22; // rcx
  _DWORD *v23; // r8
  __int64 v24; // rbp
  struct _KPRCB *v25; // rbp
  _KTHREAD *CurrentThread; // rdi
  unsigned __int8 IsThreadRunning; // al
  _QWORD *Object; // rax
  bool v29; // r12
  int v30; // edx
  __int64 *v31; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  unsigned __int64 v37; // rdi
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  char v47; // [rsp+90h] [rbp+8h] BYREF
  __int64 v48; // [rsp+A8h] [rbp+20h]

  v4 = *(_QWORD **)(a1 + 32);
  if ( v4 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v7 = v4[6];
      v8 = v4[4];
      v9 = *(_BYTE *)(a1 + 59);
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v7, &LockHandle);
      v10 = *(_DWORD *)(v7 + 12);
      if ( v10 >= *(_DWORD *)(v7 + 8) )
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v18 = (v36 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v36;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        if ( !AlpcpQueueIoCompletion(v8, v4[5], -(v9 != 0), 0LL, 0, 0) )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v7, &LockHandle);
          if ( v9 )
            ++*(_DWORD *)(v7 + 20);
          else
            ++*(_DWORD *)(v7 + 16);
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          v37 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            v38 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && LockHandle.OldIrql <= 0xFu && v38 >= 2u )
            {
              v39 = KeGetCurrentPrcb();
              v40 = v39->SchedulerAssist;
              v41 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v18 = (v41 & v40[5]) == 0;
              v40[5] &= v41;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick(v39);
            }
          }
          __writecr8(v37);
        }
        if ( _InterlockedCompareExchange64(v4 + 44, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v4 + 44);
        KeAbPostRelease((ULONG_PTR)(v4 + 44));
      }
      else
      {
        v11 = *(_QWORD **)(v7 + 32);
        if ( v11 )
          *(_QWORD *)(v7 + 32) = *v11;
        MiniCompletionPacket = v11[1];
        *(_DWORD *)(v7 + 12) = v10 + 1;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v13 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          v14 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && LockHandle.OldIrql <= 0xFu && v14 >= 2u )
          {
            v15 = KeGetCurrentPrcb();
            v16 = v15->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v18 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        __writecr8(v13);
        if ( _InterlockedCompareExchange64(v4 + 44, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v4 + 44);
        KeAbPostRelease((ULONG_PTR)(v4 + 44));
        v20 = v4[5];
        if ( MiniCompletionPacket
          || (LOBYTE(v19) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(v19, 0LL)) != 0) )
        {
          *(_QWORD *)(MiniCompletionPacket + 24) = v20;
          v21 = (_QWORD *)(v8 + 8);
          *(_QWORD *)(MiniCompletionPacket + 32) = -(__int64)(v9 != 0);
          *(_DWORD *)(MiniCompletionPacket + 40) = 0;
          *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
          v22 = KeGetCurrentIrql();
          v48 = v22;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v22 <= 0xFu )
          {
            v23 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( (_BYTE)v22 == 2 )
              LODWORD(v24) = 4;
            else
              v24 = (-1LL << ((unsigned __int8)v22 + 1)) & 4;
            v23[5] |= v24;
          }
          v25 = KeGetCurrentPrcb();
          CurrentThread = v25->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v25->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
          }
          Object = CurrentThread[1].WaitBlock[1].Object;
          if ( !Object )
            Object = &CurrentThread->Header.Lock;
          v29 = a2 && *(_BYTE *)(Object[68] + 1850LL) == 2;
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v8);
          if ( (_QWORD *)*v21 == v21
            || *(_DWORD *)(v8 + 40) >= *(_DWORD *)(v8 + 44) && !v29
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v8 && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v25, v8, MiniCompletionPacket) )
          {
            v30 = *(_DWORD *)(v8 + 4);
            *(_DWORD *)(v8 + 4) = v30 + 1;
            v31 = *(__int64 **)(v8 + 32);
            if ( *v31 != v8 + 24 )
              __fastfail(3u);
            *(_QWORD *)MiniCompletionPacket = v8 + 24;
            *(_QWORD *)(MiniCompletionPacket + 8) = v31;
            *v31 = MiniCompletionPacket;
            *(_QWORD *)(v8 + 32) = MiniCompletionPacket;
            if ( !v30 && (_QWORD *)*v21 != v21 )
              KiWakeOtherQueueWaiters((__int64)v25, v8);
          }
          else
          {
            *(_QWORD *)MiniCompletionPacket = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
          KiExitDispatcher((__int64)v25, a2 != 0 ? 3 : 0, (struct _PROCESSOR_NUMBER)1, 0, v48);
        }
      }
    }
    else
    {
      KeReleaseSemaphoreEx(v4[31], 1, 1, a4, (a2 != 0) + 8, (__int64)&v47);
    }
  }
  else
  {
    v42 = *(_QWORD *)(a1 + 24);
    if ( v42 )
    {
      if ( a2 )
      {
        v43 = 5;
        if ( a3 )
          v43 = 1;
        KeReleaseSemaphoreEx(v42 + 1240, 1, 1, a4, v43, 0LL);
      }
      else
      {
        KeReleaseSemaphoreEx(v42 + 1240, 1, 1, a4, 2, 0LL);
      }
    }
    else
    {
      v44 = *(_QWORD *)(a1 + 40);
      if ( (v44 & 1) != 0 )
      {
        if ( v44 >= 4 )
        {
          KeSetEvent((PRKEVENT)(v44 & 0xFFFFFFFFFFFFFFFCuLL), 0, a2);
          v45 = *(_QWORD *)(a1 + 40);
          if ( (v45 & 2) != 0 )
            ObfDereferenceObject((PVOID)(v45 & 0xFFFFFFFFFFFFFFFCuLL));
        }
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
}
