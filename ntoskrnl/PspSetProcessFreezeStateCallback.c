/*
 * XREFs of PspSetProcessFreezeStateCallback @ 0x1402FEF40
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     ExpTimerPause @ 0x1402FDBFC (ExpTimerPause.c)
 *     ExpTimerResume @ 0x1402FF9C0 (ExpTimerResume.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PspRequestProcessExecutionState @ 0x1406FF388 (PspRequestProcessExecutionState.c)
 */

__int64 __fastcall PspSetProcessFreezeStateCallback(__int64 a1, _DWORD **a2)
{
  __int64 v2; // r8
  _BYTE *v3; // r14
  volatile signed __int64 *v5; // r13
  KIRQL v6; // bp
  _QWORD *v7; // rsi
  __int64 v8; // rbp
  _QWORD *v9; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  KIRQL v16; // [rsp+60h] [rbp+8h]
  unsigned __int64 v17; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 1296);
  v3 = a2;
  if ( (*(_DWORD *)(a1 + 1124) & 0x40000008) == 0
    && (*(_DWORD *)(a1 + 1124) & 0x4000000) != 0
    && (*(_DWORD *)(v2 + 1536) & 0x40000) != 0
    && (**a2 & 1) != 0
    && *(_DWORD *)(v2 + 1048) <= 1u )
  {
    v5 = (volatile signed __int64 *)(a1 + 2440);
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
        if ( *(_BYTE *)(*(_QWORD *)v3 + 4LL) )
        {
          ExpTimerPause((__int64)(v7 - 36), v8, v17, 0);
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
      v5 = (volatile signed __int64 *)(a1 + 2440);
    }
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        a2 = (_DWORD **)(-1LL << (v6 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)a2;
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
  }
  LOBYTE(a2) = v3[8];
  PspRequestProcessExecutionState(a1, a2, 0LL);
  return 0LL;
}
