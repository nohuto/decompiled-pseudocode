void __fastcall IopDereferenceVpbAndFree(__int64 a1)
{
  void *v1; // rbp
  unsigned __int8 CurrentIrql; // si
  char *v4; // rcx
  bool v5; // zf
  volatile signed __int64 **v6; // rdi
  __int64 v7; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  signed __int32 v15[8]; // [rsp+0h] [rbp-38h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = 0LL;
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
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, *((_QWORD *)v4 + 1));
  }
  else if ( _InterlockedExchange64(*((volatile __int64 **)v4 + 1), (__int64)v4) )
  {
    KxWaitForLockOwnerShip(v4);
  }
  v5 = (*(_DWORD *)(a1 + 28))-- == 1;
  if ( v5 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) != a1 && (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v1 = (void *)a1;
  v6 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v6, retaddr);
    goto LABEL_9;
  }
  _m_prefetchw(v6);
  v7 = (__int64)*v6;
  if ( !*v6 )
  {
    if ( v6 == (volatile signed __int64 **)_InterlockedCompareExchange64(v6[1], 0LL, (signed __int64)v6) )
      goto LABEL_9;
    v7 = KxWaitForLockChainValid(v6);
  }
  *v6 = 0LL;
  v10 = (__int64)v6[1];
  if ( (((unsigned __int8)v10 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v7 + 8), v10)) & 4) != 0 )
  {
    _InterlockedOr(v15, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v7 + 8) >> 5) & 0x7F], 0LL));
  }
LABEL_9:
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v5 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v5 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
