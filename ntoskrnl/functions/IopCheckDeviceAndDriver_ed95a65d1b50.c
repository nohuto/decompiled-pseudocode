__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v5; // rcx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // esi
  volatile signed __int64 **v9; // rdi
  __int64 v10; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int8 v16; // cl
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v18; // r9
  int v19; // edx
  bool v20; // zf
  signed __int32 v21[8]; // [rsp+0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v13) = 4;
    else
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, *((_QWORD *)v5 + 1));
  }
  else if ( _InterlockedExchange64(*((volatile __int64 **)v5 + 1), (__int64)v5) )
  {
    KxWaitForLockOwnerShip(v5);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v6 = *(_DWORD *)(a2 + 48), (v6 & 0x80u) != 0) )
  {
    v8 = -1073741810;
  }
  else if ( (v6 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 4) + 1;
    *(_DWORD *)(a2 + 4) = v7;
    if ( v7 <= 0 )
    {
      v15 = *(_QWORD *)(a2 + 8);
      if ( v15 )
      {
        IoAddTriageDumpDataBlock(v15, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, *(int *)(a2 + 4));
    }
    v8 = 0;
  }
  else
  {
    v8 = -1073741790;
  }
  v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v9, retaddr);
    goto LABEL_13;
  }
  _m_prefetchw(v9);
  v10 = (__int64)*v9;
  if ( !*v9 )
  {
    if ( v9 == (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
      goto LABEL_13;
    v10 = KxWaitForLockChainValid((__int64 *)v9);
  }
  *v9 = 0LL;
  v14 = (__int64)v9[1];
  if ( (((unsigned __int8)v14 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v10 + 8), v14)) & 4) != 0 )
  {
    _InterlockedOr(v21, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v10 + 8) >> 5) & 0x7F], 0LL));
  }
LABEL_13:
  if ( KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v20 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}
