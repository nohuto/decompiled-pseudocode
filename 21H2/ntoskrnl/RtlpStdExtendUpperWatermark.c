/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x140586294
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1405863D0 (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwAllocateVirtualMemory @ 0x1403FA880 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall RtlpStdExtendUpperWatermark(KSPIN_LOCK *SpinLock, void *a2)
{
  KSPIN_LOCK v3; // rsi
  KSPIN_LOCK v4; // rdi
  char v5; // dl
  char *v6; // rcx
  KSPIN_LOCK v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v11; // edx
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF

  BaseAddress = a2;
  RegionSize = 0LL;
  v3 = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v4 = SpinLock[21];
  v5 = *((_BYTE *)SpinLock + 128);
  v6 = (char *)SpinLock[19];
  BaseAddress = v6;
  v7 = v4 - 8;
  if ( !v5 )
  {
    if ( v7 < (unsigned __int64)v6 )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(v6 - 4096) <= SpinLock[18] )
        goto LABEL_9;
      BaseAddress = v6 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_9;
      SpinLock[19] = (KSPIN_LOCK)BaseAddress;
    }
LABEL_8:
    ++*((_DWORD *)SpinLock + 45);
    v3 = v4 - 8;
    SpinLock[21] = v4 - 8;
    goto LABEL_9;
  }
  if ( v7 >= SpinLock[20] )
    goto LABEL_8;
LABEL_9:
  v8 = *((unsigned __int8 *)SpinLock + 8);
  KxReleaseSpinLock(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return v3;
}
