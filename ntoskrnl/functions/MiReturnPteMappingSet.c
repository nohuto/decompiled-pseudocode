unsigned __int64 __fastcall MiReturnPteMappingSet(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf

  if ( *(_BYTE *)(a1 + 8) == 17 )
    return MiReleasePtes((__int64)&qword_140C695C0, *(__int64 **)(a1 + 16), *(_DWORD *)(a1 + 4));
  result = (unsigned __int64)KeGetCurrentPrcb();
  *(_QWORD *)(*(_QWORD *)(result + 33592) + 12344LL) = 0LL;
  v2 = *(unsigned __int8 *)(a1 + 8);
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
      v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v5 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
