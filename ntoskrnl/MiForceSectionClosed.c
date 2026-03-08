/*
 * XREFs of MiForceSectionClosed @ 0x1402F3AB0
 * Callers:
 *     MmForceSectionClosed @ 0x1402F3A70 (MmForceSectionClosed.c)
 *     MmForceSectionClosedEx @ 0x140623F50 (MmForceSectionClosedEx.c)
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiAttemptSectionDelete @ 0x1402F3B10 (MiAttemptSectionDelete.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x1403638A8 (MiLockSectionControlArea.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiForceSectionClosed(__int64 a1, char a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int8 v8; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0;
  v5 = MiLockSectionControlArea(a1, a2 & 1, &v14);
  if ( v5 )
  {
    if ( (a3 & 1) == 0 || (*(_BYTE *)(v5 + 62) & 0xC) != 0 )
    {
      LOBYTE(v6) = v14;
      return 2 - (unsigned int)((unsigned __int8)MiAttemptSectionDelete(v5, v6, a2 & 4) != 0);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v8 = v14;
      if ( v14 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = v14;
        v12 = ~(unsigned __int16)(-1LL << (v14 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v8 = v14;
    }
    __writecr8(v8);
  }
  return 0LL;
}
