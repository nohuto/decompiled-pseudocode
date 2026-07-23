/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x140311964
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x14031187C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x140311964 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x140311964 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpAcquireLockShared @ 0x140311AC4 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140312480 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpLfhOwnerCompact(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r15d
  __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD **v8; // rdi
  volatile LONG *v9; // rbx
  unsigned __int8 v10; // al
  _QWORD *v11; // r14
  unsigned __int64 v12; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  v3 = a3;
  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v6 = 0LL;
    v7 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(*(_QWORD *)(a2 + 96) + v6), v3);
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  v8 = (_QWORD **)(a2 + 24);
  if ( *v8 != v8 || (result = a2 + 40, *(_QWORD *)result != result) )
  {
    v9 = (volatile LONG *)(a2 + 16);
    v10 = RtlpHpAcquireLockShared(v9, *(unsigned __int8 *)(a1 + 57), a3);
    v11 = *v8;
    v12 = v10;
    while ( v11 != v8 )
    {
      RtlpHpLfhSubsegmentDecommitPages(a1, (_DWORD)v11, -1, 1, v3);
      v11 = (_QWORD *)*v11;
    }
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v9);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v16 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v12);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v9);
      KeAbPostRelease((ULONG_PTR)v9);
      return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  return result;
}
