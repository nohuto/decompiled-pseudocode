__int64 __fastcall IopRemoveTimerFromTimerList(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || *v4 != a1 + 8 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( *(_WORD *)(a1 + 2) )
    --IopTimerCount;
  result = KxReleaseSpinLock((volatile signed __int64 *)&IopTimerLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
