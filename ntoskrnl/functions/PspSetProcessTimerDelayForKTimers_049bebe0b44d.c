__int64 __fastcall PspSetProcessTimerDelayForKTimers(__int64 a1)
{
  volatile signed __int64 *v1; // r13
  unsigned int v3; // r15d
  KIRQL v4; // si
  unsigned __int8 CurrentIrql; // cl
  char v6; // cl
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned __int64 v10; // r14
  volatile signed __int32 *v11; // rbx
  unsigned __int64 v12; // rsi
  volatile signed __int32 *v13; // r13
  char v14; // al
  __int64 v15; // rbx
  _QWORD *v16; // r14
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v19; // eax
  _DWORD *SchedulerAssist; // r8
  bool v21; // zf
  KIRQL v23; // [rsp+80h] [rbp+8h]
  __int64 v24; // [rsp+88h] [rbp+10h]

  v1 = (volatile signed __int64 *)(a1 + 2440);
  v3 = 10000 * (*(_QWORD *)(a1 + 2416) & 0x3FFFFFFF);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2440));
  v23 = v4;
  if ( v3 == *(_DWORD *)(a1 + 68) )
  {
    KxReleaseSpinLock(v1);
    if ( !KiIrqlFlags )
      goto LABEL_34;
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 || CurrentIrql > 0xFu || v4 > 0xFu || CurrentIrql < 2u )
      goto LABEL_34;
    v6 = v4 + 1;
    goto LABEL_32;
  }
  v7 = 0LL;
  v8 = MEMORY[0xFFFFF78000000008];
  v9 = *(_DWORD *)(a1 + 68);
  v24 = MEMORY[0xFFFFF78000000008];
  if ( v3 <= v9 )
  {
    if ( v3 < v9 )
    {
      v10 = -1LL;
      v11 = *(volatile signed __int32 **)(a1 + 2448);
      if ( v11 != (volatile signed __int32 *)(a1 + 2448) )
      {
        v12 = 0LL;
        do
        {
          v13 = v11 - 72;
          KiAcquireKobjectLockSafe(v11 - 72);
          v14 = *((_BYTE *)v11 - 285) & 0x40;
          if ( v14 )
            v12 = *((_QWORD *)v13 + 3);
          _InterlockedAnd(v13, 0xFFFFFF7F);
          if ( v14 && v12 < v10 )
            v10 = v12;
          v11 = *(volatile signed __int32 **)v11;
        }
        while ( v11 != (volatile signed __int32 *)(a1 + 2448) );
        v4 = v23;
        v1 = (volatile signed __int64 *)(a1 + 2440);
        v8 = v24;
      }
      v15 = *(_DWORD *)(a1 + 68) - v3;
      if ( v10 - v15 >= v8 )
        v7 = -v15;
      else
        v7 = v8 - v10;
    }
  }
  else
  {
    v7 = v3 - v9;
  }
  v16 = *(_QWORD **)(a1 + 2448);
  if ( v16 != (_QWORD *)(a1 + 2448) )
  {
    do
    {
      ExpTimerAdjust((PKTIMER)(v16 - 36), v24);
      v16 = (_QWORD *)*v16;
    }
    while ( v16 != (_QWORD *)(a1 + 2448) );
    v4 = v23;
    v1 = (volatile signed __int64 *)(a1 + 2440);
  }
  KeAdjustTimerDelayProcess(a1, v7, v3);
  KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && v4 <= 0xFu && v17 >= 2u )
    {
      v6 = v4 + 1;
LABEL_32:
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = ~(unsigned __int16)(-1LL << v6);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
LABEL_34:
  __writecr8(v4);
  return 0LL;
}
