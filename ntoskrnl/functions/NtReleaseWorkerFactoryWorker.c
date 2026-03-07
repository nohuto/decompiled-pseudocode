NTSTATUS __fastcall NtReleaseWorkerFactoryWorker(void *a1)
{
  NTSTATUS result; // eax
  volatile __int64 *v2; // r8
  unsigned __int8 CurrentIrql; // dl
  __int64 v4; // r14
  signed __int64 *v5; // rdx
  _QWORD *v6; // rdx
  char v7; // bl
  __int64 v8; // rcx
  int v9; // eax
  int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 *v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 MiniCompletionPacket; // rdi
  __int64 v17; // rbx
  _QWORD *v18; // rsi
  unsigned __int8 v19; // r15
  struct _KPRCB *v20; // r14
  _KTHREAD *CurrentThread; // r13
  _DWORD *SchedulerAssist; // r10
  int v23; // r11d
  _DWORD *v24; // r8
  int v25; // edx
  __int64 *v26; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v28; // r9
  int v29; // eax
  bool v30; // zf
  unsigned __int8 IsThreadRunning; // al
  signed __int32 v32[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v33; // [rsp+30h] [rbp-38h] BYREF
  __int64 v34; // [rsp+40h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+10h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v34 = 0LL;
  v33 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             1u,
             ExpWorkerFactoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result < 0 )
    return result;
  v2 = (volatile __int64 *)*((_QWORD *)Object + 2);
  *((_QWORD *)&v33 + 1) = v2;
  *(_QWORD *)&v33 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LODWORD(v4) = 4;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      v23 = 4;
    else
      v23 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v23;
  }
  LOBYTE(v34) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v33, v2);
  }
  else
  {
    v5 = (signed __int64 *)_InterlockedExchange64(v2, (__int64)&v33);
    if ( v5 )
      KxWaitForLockOwnerShip((signed __int64)&v33, v5);
  }
  v6 = Object;
  v7 = 0;
  v8 = *((_QWORD *)Object + 2);
  if ( *(_BYTE *)(v8 + 33) )
  {
    v10 = 128;
  }
  else
  {
    v9 = *(_DWORD *)(v8 + 24);
    if ( v9 == -1 )
    {
      v10 = -1073741823;
    }
    else
    {
      v10 = 0;
      *(_DWORD *)(v8 + 24) = v9 + 1;
      v11 = v6[2];
      if ( !*(_BYTE *)(v11 + 32) )
      {
        *(_BYTE *)(v11 + 32) = 1;
        v7 = 1;
        if ( (v6[51] & 0x200) != 0 )
          ExpLeaveWorkerFactoryAwayMode(v6);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v33);
    v12 = v33;
    if ( !(_QWORD)v33 )
    {
      v13 = &v33;
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v33 + 1), 0LL, (signed __int64)&v33) == &v33 )
        goto LABEL_14;
      v12 = KxWaitForLockChainValid((__int64 *)&v33);
    }
    *(_QWORD *)&v33 = 0LL;
    v13 = (__int128 *)*((_QWORD *)&v33 + 1);
    if ( (((unsigned __int8)v13 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v12 + 8),
                                                     *((__int64 *)&v33 + 1))) & 4) != 0 )
    {
      _InterlockedOr(v32, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v12 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_14;
  }
  KiReleaseQueuedSpinLockInstrumented(&v33, retaddr);
LABEL_14:
  v14 = (unsigned __int8)v34;
  if ( KiIrqlFlags )
  {
    v13 = (__int128 *)KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)v13 <= 0xFu
      && (unsigned __int8)v34 <= 0xFu
      && (unsigned __int8)v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v28 = CurrentPrcb->SchedulerAssist;
      v13 = (__int128 *)((unsigned int)(unsigned __int8)v34 + 1);
      v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
      v30 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v14);
  if ( v7 )
  {
    v15 = *((_QWORD *)Object + 2);
    MiniCompletionPacket = *(_QWORD *)(v15 + 16);
    v17 = *(_QWORD *)(v15 + 8);
    if ( MiniCompletionPacket
      || (LOBYTE(v13) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(v13, 0LL)) != 0) )
    {
      *(_QWORD *)(MiniCompletionPacket + 24) = 0LL;
      *(_QWORD *)(MiniCompletionPacket + 32) = 0LL;
      *(_DWORD *)(MiniCompletionPacket + 40) = 0;
      *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
      v18 = (_QWORD *)(v17 + 8);
      v19 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
      {
        v24 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v19 != 2 )
          v4 = (-1LL << (v19 + 1)) & 4;
        v24[5] |= v4;
      }
      v20 = KeGetCurrentPrcb();
      CurrentThread = v20->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v20->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v17);
      if ( (_QWORD *)*v18 == v18
        || *(_DWORD *)(v17 + 40) >= *(_DWORD *)(v17 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v17 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v20, v17, MiniCompletionPacket) )
      {
        v25 = *(_DWORD *)(v17 + 4);
        *(_DWORD *)(v17 + 4) = v25 + 1;
        v26 = *(__int64 **)(v17 + 32);
        if ( *v26 != v17 + 24 )
          __fastfail(3u);
        *(_QWORD *)MiniCompletionPacket = v17 + 24;
        *(_QWORD *)(MiniCompletionPacket + 8) = v26;
        *v26 = MiniCompletionPacket;
        *(_QWORD *)(v17 + 32) = MiniCompletionPacket;
        if ( !v25 && (_QWORD *)*v18 != v18 )
          KiWakeOtherQueueWaiters((__int64)v20, v17);
      }
      else
      {
        *(_QWORD *)MiniCompletionPacket = 0LL;
      }
      _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
      KiExitDispatcher((__int64)v20, 0, (struct _PROCESSOR_NUMBER)1, 0, v19);
    }
    ExpWorkerFactoryCheckCreate((PSLIST_ENTRY)Object, 0LL);
  }
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v10;
}
