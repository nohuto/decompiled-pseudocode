/*
 * XREFs of PspSetProcessTimerDelayForKTimers @ 0x140582698
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x140582118 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAdjustTimerDelayProcess @ 0x140513A0C (KeAdjustTimerDelayProcess.c)
 *     ExpTimerAdjust @ 0x1405B69C4 (ExpTimerAdjust.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForKTimers(__int64 a1)
{
  KSPIN_LOCK *v1; // r13
  unsigned int v3; // r15d
  KIRQL v4; // bp
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 CurrentIrql; // al
  char v8; // cl
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned __int64 v12; // r14
  volatile signed __int32 *v13; // rbx
  unsigned __int64 v14; // rbp
  volatile signed __int32 *v15; // r13
  char v16; // al
  unsigned int v17; // ecx
  _QWORD *v18; // r14
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v21; // eax
  _DWORD *SchedulerAssist; // r8
  bool v23; // zf
  KIRQL v25; // [rsp+80h] [rbp+8h]
  __int64 v26; // [rsp+88h] [rbp+10h]

  v1 = (KSPIN_LOCK *)(a1 + 2440);
  v3 = 10000 * (*(_QWORD *)(a1 + 2416) & 0x3FFFFFFF);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2440));
  v25 = v4;
  if ( v3 == *(_DWORD *)(a1 + 68) )
  {
    KxReleaseSpinLock(v1);
    if ( !KiIrqlFlags )
      goto LABEL_34;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_34;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu || v4 > 0xFu || CurrentIrql < 2u )
      goto LABEL_34;
    v8 = v4 + 1;
    goto LABEL_32;
  }
  v9 = 0LL;
  v10 = MEMORY[0xFFFFF78000000008];
  v11 = *(_DWORD *)(a1 + 68);
  v26 = MEMORY[0xFFFFF78000000008];
  if ( v3 <= v11 )
  {
    if ( v3 < v11 )
    {
      v12 = -1LL;
      v13 = *(volatile signed __int32 **)(a1 + 2448);
      if ( v13 != (volatile signed __int32 *)(a1 + 2448) )
      {
        v14 = 0LL;
        do
        {
          v15 = v13 - 72;
          KiAcquireKobjectLockSafe(v13 - 72, v10, v5, v6);
          v16 = *((_BYTE *)v13 - 285) & 0x40;
          if ( v16 )
            v14 = *((_QWORD *)v15 + 3);
          _InterlockedAnd(v15, 0xFFFFFF7F);
          if ( v16 && v14 < v12 )
            v12 = v14;
          v13 = *(volatile signed __int32 **)v13;
        }
        while ( v13 != (volatile signed __int32 *)(a1 + 2448) );
        v11 = *(_DWORD *)(a1 + 68);
        v1 = (KSPIN_LOCK *)(a1 + 2440);
        v4 = v25;
        v10 = v26;
      }
      v17 = v11 - v3;
      if ( v12 - v17 >= v10 )
        v9 = -(__int64)v17;
      else
        v9 = v10 - v12;
    }
  }
  else
  {
    v9 = v3 - v11;
  }
  v18 = *(_QWORD **)(a1 + 2448);
  if ( v18 != (_QWORD *)(a1 + 2448) )
  {
    do
    {
      ExpTimerAdjust((PKTIMER)(v18 - 36), v26);
      v18 = (_QWORD *)*v18;
    }
    while ( v18 != (_QWORD *)(a1 + 2448) );
    v4 = v25;
    v1 = (KSPIN_LOCK *)(a1 + 2440);
  }
  KeAdjustTimerDelayProcess(a1, v9, v3);
  KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && v4 <= 0xFu && v19 >= 2u )
      {
        v8 = v4 + 1;
LABEL_32:
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = ~(unsigned __int16)(-1LL << v8);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
LABEL_34:
  __writecr8(v4);
  return 0LL;
}
