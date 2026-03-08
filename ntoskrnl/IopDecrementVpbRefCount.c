/*
 * XREFs of IopDecrementVpbRefCount @ 0x14030F780
 * Callers:
 *     IopDeleteFile @ 0x1407BAF80 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x140944740 (IoVerifyVolume.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // si
  char *v4; // rcx
  unsigned int v5; // ebp
  volatile signed __int64 **v6; // rdi
  __int64 v7; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int8 v12; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // edx
  bool v16; // zf
  signed __int32 v17[8]; // [rsp+0h] [rbp-38h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
    return (unsigned int)--*(_DWORD *)(a1 + 28);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v10) = 4;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
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
  v5 = --*(_DWORD *)(a1 + 28);
  v6 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(v6);
    v7 = (__int64)*v6;
    if ( !*v6 )
    {
      if ( v6 == (volatile signed __int64 **)_InterlockedCompareExchange64(v6[1], 0LL, (signed __int64)v6) )
        goto LABEL_9;
      v7 = KxWaitForLockChainValid((__int64 *)v6);
    }
    *v6 = 0LL;
    v11 = (__int64)v6[1];
    if ( (((unsigned __int8)v11 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v7 + 8), v11)) & 4) != 0 )
    {
      _InterlockedOr(v17, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v7 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_9;
  }
  KiReleaseQueuedSpinLockInstrumented(v6, retaddr);
LABEL_9:
  if ( KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
