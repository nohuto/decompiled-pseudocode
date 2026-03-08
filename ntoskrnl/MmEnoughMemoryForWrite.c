/*
 * XREFs of MmEnoughMemoryForWrite @ 0x1403637E0
 * Callers:
 *     CcCanIWriteStreamEx @ 0x140363460 (CcCanIWriteStreamEx.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x1403638A8 (MiLockSectionControlArea.c)
 *     MiSufficientAvailablePages @ 0x1403643E4 (MiSufficientAvailablePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmEnoughMemoryForWrite(__int64 a1)
{
  __int64 v1; // rbp
  bool v2; // si
  unsigned __int8 v3; // bl
  __int64 v4; // rax
  _QWORD *v5; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0;
  v3 = 17;
  v12 = 17;
  if ( a1 )
  {
    v4 = MiLockSectionControlArea(a1, 1LL, &v12);
    v1 = v4;
    if ( !v4 )
      return 1;
    v3 = v12;
    v5 = *(_QWORD **)(qword_140C67048 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF));
  }
  else
  {
    v5 = &MiSystemPartition;
  }
  if ( (unsigned int)MiSufficientAvailablePages(v5, (_BYTE)dword_140D1D1EC != 0 ? 0x4000LL : 450LL) )
  {
    v2 = 1;
  }
  else
  {
    if ( v5[2200] < (unsigned __int64)(v5[2228] + 800LL) )
      v2 = (unsigned int)MiSufficientAvailablePages(v5, 80LL) != 0;
    v3 = v12;
  }
  if ( v3 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v3 = v12;
        v10 = ~(unsigned __int16)(-1LL << (v12 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v3);
  }
  return v2;
}
