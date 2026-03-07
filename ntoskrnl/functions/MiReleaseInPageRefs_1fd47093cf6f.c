__int64 __fastcall MiReleaseInPageRefs(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdi
  _DWORD *SchedulerAssist; // r8
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v9; // eax
  bool v10; // zf
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r8

  v2 = 48 * (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_QWORD *)(v2 + 24) & 0x4000000000000000LL) != 0 )
    KeBugCheckEx(
      0x1Au,
      0x61950uLL,
      BugCheckParameter2,
      48 * (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL,
      *(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 0);
  v3 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v3);
    v5 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( qword_140C657C0 )
    {
      if ( (v5 & 0x10) == 0 )
        v5 &= ~qword_140C657C0;
    }
    return MiDereferenceControlAreaPfnList(*(_QWORD *)(v5 >> 16), v5 >> 16, SchedulerAssist, 3LL);
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
    result = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(BugCheckParameter2 + 16) &= ~2uLL;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v3 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v10 = ((unsigned int)result & v12[5]) == 0;
        v12[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    __writecr8(v3);
  }
  return result;
}
