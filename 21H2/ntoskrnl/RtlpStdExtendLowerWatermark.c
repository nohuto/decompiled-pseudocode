/*
 * XREFs of RtlpStdExtendLowerWatermark @ 0x14058614C
 * Callers:
 *     RtlpStdGetSpaceForTrace @ 0x140586500 (RtlpStdGetSpaceForTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwAllocateVirtualMemory @ 0x1403FA880 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall RtlpStdExtendLowerWatermark(KSPIN_LOCK *SpinLock, __int64 a2)
{
  KSPIN_LOCK v4; // rbp
  KSPIN_LOCK v5; // rdi
  char v6; // dl
  void *v7; // rcx
  KSPIN_LOCK v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v12; // edx
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  RegionSize = 0LL;
  v4 = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v5 = SpinLock[20];
  v6 = *((_BYTE *)SpinLock + 128);
  v7 = (void *)SpinLock[18];
  BaseAddress = v7;
  v8 = v5 + a2;
  if ( !v6 )
  {
    if ( v8 > (unsigned __int64)v7 )
    {
      RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned __int64)v7 + RegionSize >= SpinLock[19]
        || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      {
        goto LABEL_9;
      }
      SpinLock[18] = (KSPIN_LOCK)BaseAddress + RegionSize;
    }
LABEL_8:
    ++*((_DWORD *)SpinLock + 48);
    SpinLock[20] = v5 + a2;
    v4 = v5;
    goto LABEL_9;
  }
  if ( v8 <= SpinLock[21] )
    goto LABEL_8;
LABEL_9:
  v9 = *((unsigned __int8 *)SpinLock + 8);
  KxReleaseSpinLock(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v4;
}
