/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x14030F5C0
 * Callers:
 *     IopCheckVpbMounted @ 0x14030EE30 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1403D162C (IopDecrementDeviceObjectHandleCount.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406B5020 (IoCreateStreamFileObjectEx2.c)
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopDeleteFile @ 0x1407BAF80 (IopDeleteFile.c)
 *     IopLoadFileSystemDriver @ 0x140872E40 (IopLoadFileSystemDriver.c)
 *     IopShutdownBaseFileSystems @ 0x140A96E64 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3)
{
  unsigned __int8 v6; // r14
  KIRQL CurrentIrql; // bp
  char *v8; // rcx
  int v9; // eax
  volatile signed __int64 **v10; // rdi
  __int64 v11; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int8 v17; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  signed __int32 v22[8]; // [rsp+0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v14) = 4;
    else
      v14 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v14;
  }
  v8 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v8, *((_QWORD *)v8 + 1));
  }
  else if ( _InterlockedExchange64(*((volatile __int64 **)v8 + 1), (__int64)v8) )
  {
    KxWaitForLockOwnerShip(v8);
  }
  v9 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v9;
  if ( v9 < 0 )
  {
    v16 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v16 )
    {
      IoAddTriageDumpDataBlock(v16, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  if ( !v9 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2, a3, CurrentIrql);
  v10 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(v10);
    v11 = (__int64)*v10;
    if ( !*v10 )
    {
      if ( v10 == (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
        goto LABEL_10;
      v11 = KxWaitForLockChainValid((__int64 *)v10);
    }
    *v10 = 0LL;
    v15 = (__int64)v10[1];
    if ( (((unsigned __int8)v15 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), v15)) & 4) != 0 )
    {
      _InterlockedOr(v22, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v11 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_10;
  }
  KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
LABEL_10:
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v21 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v6;
}
