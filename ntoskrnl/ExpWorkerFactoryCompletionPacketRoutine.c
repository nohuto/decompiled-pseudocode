void __fastcall ExpWorkerFactoryCompletionPacketRoutine(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // dl
  int v4; // esi
  bool v5; // zf
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // r10
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  signed __int32 v15[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int64 *v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-18h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v18 = 0LL;
  v16 = 0LL;
  v17 = (volatile signed __int64 *)a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  LOBYTE(v18) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v16, a2);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)a2, (__int64)&v16) )
  {
    KxWaitForLockOwnerShip(&v16);
  }
  v4 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v4 = 2;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a2 + 33) )
  {
    if ( !*(_DWORD *)(a2 + 28) )
      goto LABEL_8;
    v4 = 1;
  }
  else
  {
    v5 = (*(_DWORD *)(a2 + 24))-- == 1;
    if ( v5 )
    {
LABEL_8:
      *(_BYTE *)(a2 + 32) = 0;
      goto LABEL_9;
    }
    v4 = 1;
  }
LABEL_9:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v16, retaddr);
    goto LABEL_12;
  }
  _m_prefetchw(&v16);
  v6 = v16;
  if ( !v16 )
  {
    if ( (__int64 *)_InterlockedCompareExchange64(v17, 0LL, (signed __int64)&v16) == &v16 )
      goto LABEL_12;
    v6 = KxWaitForLockChainValid(&v16);
  }
  v16 = 0LL;
  v10 = (unsigned __int8)v17;
  if ( ((v10 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v6 + 8), (__int64)v17)) & 4) != 0 )
  {
    _InterlockedOr(v15, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v6 + 8) >> 5) & 0x7F], 0LL));
  }
LABEL_12:
  v7 = (unsigned __int8)v18;
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
      v5 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v5 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      IoSetIoCompletionEx3(*(_QWORD *)(a2 + 8), 0, 0, 0, 0LL, 0, *(_QWORD *)(a2 + 16), 0, 0);
    }
    else
    {
      IoFreeMiniCompletionPacket(*(_QWORD *)(a2 + 16));
      ExFreePoolWithTag((PVOID)a2, 0);
    }
  }
}
