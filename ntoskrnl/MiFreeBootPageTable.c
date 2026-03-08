/*
 * XREFs of MiFreeBootPageTable @ 0x140B50684
 * Callers:
 *     MxZeroBootMappings @ 0x140B50568 (MxZeroBootMappings.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiLockAndInsertPageInFreeList @ 0x140387CB4 (MiLockAndInsertPageInFreeList.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeBootPageTable(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbx
  __int16 v2; // ax
  unsigned __int64 v3; // rdi
  char v4; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v8; // eax
  _DWORD *SchedulerAssist; // r8
  bool v10; // zf

  v1 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v2 = *(_WORD *)(v1 + 32);
  if ( v2 )
  {
    if ( v2 != 2 || (*(_QWORD *)(v1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(0x1Au, 0x3030307uLL, BugCheckParameter2, 0LL, 0LL);
    v3 = (unsigned __int8)MiLockPageInline(48 * BugCheckParameter2 - 0x220000000000LL);
    _InterlockedExchangeAdd64(&qword_140C69630, 0xFFFFFFFFFFFFFFFFuLL);
    v4 = *(_BYTE *)(v1 + 34);
    *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v1 + 32) = 0;
    *(_BYTE *)(v1 + 34) = v4 & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v3);
  }
  else
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_QWORD *)(v1 + 40) |= 0x40000000000000uLL;
  }
  return MiLockAndInsertPageInFreeList(v1);
}
