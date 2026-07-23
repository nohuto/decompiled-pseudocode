/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x140595540
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x140594C0C (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1405958D4 (RtlpHpLargeLockAcquireShared.c)
 */

char __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char v4; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v4 = a3;
  LOBYTE(v6) = RtlpHpLargeLockAcquireShared(a1, a3);
  v7 = (unsigned __int8)v6;
  v8 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    if ( v8 )
      v8 ^= a1 + 72;
    else
      v8 = 0LL;
  }
  while ( v8 )
  {
    v6 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < v6 )
    {
      v6 = *(_QWORD *)v8;
    }
    else
    {
      if ( a2 <= v6 )
        goto LABEL_16;
      v6 = *(_QWORD *)(v8 + 8);
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v6 )
      v8 ^= v6;
    else
      v8 = v6;
  }
  v8 = 0LL;
LABEL_16:
  if ( (v4 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      LOBYTE(v6) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v6) = KeGetCurrentIrql();
          if ( (unsigned __int8)v6 <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)v6 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            LODWORD(v6) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v11 = ((unsigned int)v6 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v6;
            if ( v11 )
              LOBYTE(v6) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 64));
      KeAbPostRelease(a1 + 64);
      LOBYTE(v6) = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  *(_QWORD *)(v8 + 32) |= 1uLL;
  return v6;
}
