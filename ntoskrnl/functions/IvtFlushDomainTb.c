__int64 __fastcall IvtFlushDomainTb(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  *(_BYTE *)(a2 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)(a2 + 88));
  IvtFlushTbInternal(a1, 0, a2, 1, 0LL, (_QWORD *)(a2 + 56), a4, a5);
  v8 = *(unsigned __int8 *)(a2 + 96);
  result = KxReleaseSpinLock((volatile signed __int64 *)(a2 + 88));
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v8 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v12 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  return result;
}
