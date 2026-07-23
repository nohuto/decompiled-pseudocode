/*
 * XREFs of PspSetProcessFreezeStateCallback @ 0x140243CC0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ExpTimerResume @ 0x140243E1C (ExpTimerResume.c)
 *     ExpTimerPause @ 0x140246288 (ExpTimerPause.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PspRequestProcessExecutionState @ 0x1406F5050 (PspRequestProcessExecutionState.c)
 */

__int64 __fastcall PspSetProcessFreezeStateCallback(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  KSPIN_LOCK *v5; // r12
  KIRQL v6; // bp
  _QWORD *v7; // rsi
  __int64 v8; // rbp
  _QWORD *v9; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  KIRQL v16; // [rsp+60h] [rbp+8h]
  __int64 v17; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 1296);
  if ( (*(_DWORD *)(a1 + 1124) & 0x40000008) == 0
    && (*(_DWORD *)(a1 + 1124) & 0x4000000) != 0
    && (*(_DWORD *)(v2 + 1320) & 0x40000) != 0
    && (**(_DWORD **)a2 & 1) != 0
    && *(_DWORD *)(v2 + 856) <= 1u )
  {
    v5 = (KSPIN_LOCK *)(a1 + 2440);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2440));
    v16 = v6;
    v17 = MEMORY[0xFFFFF78000000008];
    v7 = *(_QWORD **)(a1 + 2448);
    if ( v7 != (_QWORD *)(a1 + 2448) )
    {
      v8 = MEMORY[0xFFFFF78000000014];
      do
      {
        v9 = v7 - 36;
        if ( *(_BYTE *)(*(_QWORD *)a2 + 4LL) )
        {
          ExpTimerPause(v7 - 36, v8, v17, 0LL);
        }
        else
        {
          KxAcquireSpinLock(v9 + 8);
          ExpTimerResume((PKTIMER)(v7 - 36));
          KxReleaseSpinLock(v9 + 8);
        }
        v7 = (_QWORD *)*v7;
      }
      while ( v7 != (_QWORD *)(a1 + 2448) );
      v6 = v16;
      v5 = (KSPIN_LOCK *)(a1 + 2440);
    }
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  PspRequestProcessExecutionState(a1, a2[2], 0LL);
  return 0LL;
}
