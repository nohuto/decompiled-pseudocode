unsigned __int64 __fastcall MiPreInitializeSystemImagePage(__int64 a1)
{
  unsigned __int64 v2; // rdi
  char v3; // al
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r8
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v2 = (unsigned __int8)MiLockPageInline(a1);
  *(_WORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)a1 = 0LL;
  MiSetPfnBlink(a1, 0LL, 1);
  v3 = *(_BYTE *)(a1 + 34) & 0xC7;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 34) = v3;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a1 + 16));
  if ( (_BYTE)v2 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), v5);
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
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v2);
  }
  return result;
}
