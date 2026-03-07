__int64 __fastcall KeIntSteerPeriodic(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  __int128 v23; // [rsp+20h] [rbp-78h] BYREF
  __int128 v24; // [rsp+30h] [rbp-68h] BYREF
  __int128 v25; // [rsp+40h] [rbp-58h] BYREF

  if ( a2 )
  {
    v8 = (unsigned __int16 *)a2;
  }
  else
  {
    v8 = (unsigned __int16 *)a4;
    if ( a3 )
      v8 = (unsigned __int16 *)a3;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  v25 = 0LL;
  if ( a2 )
  {
    if ( *(_WORD *)a2 )
      v10 = *(_QWORD *)(a2 + 8);
    else
      v10 = 0LL;
    *(_QWORD *)&v25 = v10;
  }
  v24 = 0LL;
  if ( a3 )
  {
    if ( *(_WORD *)a3 )
      v11 = *(_QWORD *)(a3 + 8);
    else
      v11 = 0LL;
    *(_QWORD *)&v24 = v11;
  }
  v23 = 0LL;
  if ( *(_WORD *)a4 )
    v12 = *(_QWORD *)(a4 + 8);
  else
    v12 = 0LL;
  *(_QWORD *)&v23 = v12;
  KiCopyAffinityEx((__int64)&KiIntSteerMask, HIWORD(KiIntSteerMask), v8);
  ((void (__fastcall *)(__int64, __int128 *, __int128 *, __int128 *))KiIntSteerCalculateDistribution)(
    a1,
    &v25,
    &v24,
    &v23);
  KiIntSteerLogStatus(0LL);
  KiIntSteerDistributeInterrupts(v14, v13, v15, v16, v23, *((_QWORD *)&v23 + 1));
  KxReleaseSpinLock((volatile signed __int64 *)&KiIntTrackSpinlock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v22 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  return 0LL;
}
