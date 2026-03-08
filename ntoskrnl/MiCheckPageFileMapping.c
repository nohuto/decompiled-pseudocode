/*
 * XREFs of MiCheckPageFileMapping @ 0x140392580
 * Callers:
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckPageFileMapping(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf

  if ( !*(_QWORD *)(a1 + 40) )
    return 0LL;
  v2 = 0;
  v3 = ExAcquireSpinLockExclusive(&dword_140C651C0);
  v4 = *(_QWORD **)(a1 + 40);
  if ( v4 && (*v4 || v4[2]) )
    v2 = -1073741747;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
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
  return v2;
}
