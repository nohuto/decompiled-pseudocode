/*
 * XREFs of IopCheckVpbMounted @ 0x14030EE30
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     IopDecrementDeviceObjectRef @ 0x14030F5C0 (IopDecrementDeviceObjectRef.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
  KIRQL CurrentIrql; // bp
  char *v7; // rcx
  ULONG_PTR v8; // rdi
  int v9; // eax
  volatile signed __int64 **v10; // rsi
  __int64 v11; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // eax
  KIRQL v17; // al
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int8 v20; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  signed __int32 v25[8]; // [rsp+0h] [rbp-58h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v27; // [rsp+68h] [rbp+10h] BYREF

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
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, *((_QWORD *)v7 + 1));
  }
  else if ( _InterlockedExchange64(*((volatile __int64 **)v7 + 1), (__int64)v7) )
  {
    KxWaitForLockOwnerShip(v7);
  }
  v8 = *(_QWORD *)(a2 + 56);
  if ( (*(_BYTE *)(v8 + 4) & 1) != 0 )
  {
LABEL_6:
    if ( (*(_BYTE *)(v8 + 4) & 2) != 0 )
    {
      *a4 = -1073741790;
      v8 = 0LL;
    }
    else
    {
      v9 = *(_DWORD *)(v8 + 28) + 1;
      *(_DWORD *)(v8 + 28) = v9;
      if ( v9 <= 0 )
      {
        v18 = *(_QWORD *)(v8 + 8);
        if ( v18 )
        {
          IoAddTriageDumpDataBlock(v18, (PVOID)0x150);
          v19 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL);
          if ( v19 )
          {
            IoAddTriageDumpDataBlock(v19, (PVOID)0x150);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 56LL));
          }
        }
        KeBugCheckEx(0x18u, 0LL, v8, 7uLL, *(unsigned int *)(v8 + 28));
      }
    }
    v10 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _m_prefetchw(v10);
      v11 = (__int64)*v10;
      if ( !*v10 )
      {
        if ( v10 == (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
          goto LABEL_11;
        v11 = KxWaitForLockChainValid((__int64 *)v10);
      }
      *v10 = 0LL;
      v15 = (__int64)v10[1];
      if ( (((unsigned __int8)v15 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), v15)) & 4) != 0 )
      {
        _InterlockedOr(v25, 0);
        KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v11 + 8) >> 5) & 0x7F], 0LL));
      }
      goto LABEL_11;
    }
    KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
LABEL_11:
    if ( KiIrqlFlags )
    {
      v20 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    if ( !v8 )
      IopDecrementDeviceObjectRef(a2);
    return v8;
  }
  while ( 1 )
  {
    KeReleaseQueuedSpinLock(9uLL, CurrentIrql);
    v27 = 0LL;
    v16 = IopMountVolume(a2, (__int64)&v27);
    *a4 = v16;
    if ( v16 < 0 || v16 == 192 || v16 == 257 )
      break;
    result = v27;
    if ( v27 )
      return result;
    v17 = KeAcquireQueuedSpinLock(9uLL);
    v8 = *(_QWORD *)(a2 + 56);
    CurrentIrql = v17;
    if ( (*(_BYTE *)(v8 + 4) & 1) != 0 )
      goto LABEL_6;
  }
  IopDecrementDeviceObjectRef(a2);
  result = 0LL;
  if ( *a4 >= 0 )
    *a4 = -1073741806;
  return result;
}
