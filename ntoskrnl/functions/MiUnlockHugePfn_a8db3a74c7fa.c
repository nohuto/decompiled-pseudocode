__int64 __fastcall MiUnlockHugePfn(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = a2;
  v3 = ((a1 - qword_140C67A70) >> 3) & 0x3FFFFF;
  result = (unsigned int)~(1 << (v3 & 0x1F));
  _InterlockedAnd((volatile signed __int32 *)(qword_140C67A78 + 4 * ((unsigned __int64)v3 >> 5)), result);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)result <= 0xFu && a2 <= 0xFu && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (a2 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
