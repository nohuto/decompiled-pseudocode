/*
 * XREFs of MmGetPageBadStatus @ 0x140629080
 * Callers:
 *     HalpPmemErrorDeferredHandler @ 0x1405175AC (HalpPmemErrorDeferredHandler.c)
 *     WheapProcessOfflineList @ 0x1406120C0 (WheapProcessOfflineList.c)
 *     WheapExecuteRowFailureCheck @ 0x140A05D80 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaMemoryCheck @ 0x140A06078 (WheapPfaMemoryCheck.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiIsPageOnBadList @ 0x14034B1D0 (MiIsPageOnBadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetPageInHugePageBadStatus @ 0x14061DAC4 (MiGetPageInHugePageBadStatus.c)
 */

__int64 __fastcall MmGetPageBadStatus(_QWORD *a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1 >> 12;
  if ( v1 <= qword_140C65820 && _bittest64((const signed __int64 *)(48 * v1 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    v2 = 48 * v1 - 0x220000000000LL;
    v3 = (unsigned __int8)MiLockPageInline(v2);
    if ( MiIsPageOnBadList(v2) )
    {
      v4 = -1073740023;
    }
    else
    {
      v4 = 0;
      if ( (*(_BYTE *)(v2 + 35) & 0x40) != 0 )
        v4 = 259;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v3);
    return v4;
  }
  else
  {
    v11 = 0;
    return MiGetPageInHugePageBadStatus(v1, 0LL, &v11);
  }
}
