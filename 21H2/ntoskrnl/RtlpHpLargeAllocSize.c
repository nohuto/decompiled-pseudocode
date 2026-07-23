/*
 * XREFs of RtlpHpLargeAllocSize @ 0x140595694
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x140594D5C (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1405958D4 (RtlpHpLargeLockAcquireShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSize(__int64 a1, unsigned __int64 a2, unsigned int a3, int *a4)
{
  char v6; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v16; // edx
  _DWORD *SchedulerAssist; // r9
  bool v18; // zf
  signed __int32 v20[18]; // [rsp+0h] [rbp-48h] BYREF

  v6 = a3;
  v8 = (unsigned __int8)RtlpHpLargeLockAcquireShared(a1, a3);
  v9 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= a1 + 72;
    else
      v9 = 0LL;
  }
  while ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < v10 )
    {
      v11 = *(_QWORD *)v9;
    }
    else
    {
      if ( a2 <= v10 )
        goto LABEL_16;
      v11 = *(_QWORD *)(v9 + 8);
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v11 )
      v9 ^= v11;
    else
      v9 = v11;
  }
  v9 = 0LL;
LABEL_16:
  if ( v9 )
  {
    if ( a4 )
    {
      if ( (*(_BYTE *)(v9 + 32) & 1) != 0 )
      {
        _InterlockedOr(v20, 0);
        v13 = 1;
      }
      else
      {
        v13 = 0;
      }
      *a4 = v13;
    }
    v12 = (*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFF000uLL) - (unsigned __int16)*(_DWORD *)(v9 + 24);
  }
  else
  {
    v12 = -1LL;
  }
  if ( (v6 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v18 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 64));
      KeAbPostRelease(a1 + 64);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return v12;
}
