/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x1402FE620
 * Callers:
 *     MiProcessLoaderEntry @ 0x1402B2790 (MiProcessLoaderEntry.c)
 *     MiInitializeLoadedModuleList @ 0x140B5D84C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x1402B29E0 (MmLockLoadedModuleListExclusive.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x1402FE674 (RtlxRemoveInvertedFunctionTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  MmLockLoadedModuleListExclusive(&v10);
  RtlxRemoveInvertedFunctionTable(v2, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v3 = v10;
    if ( v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v3 = v10;
      v8 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v3 = v10;
  }
  result = v3;
  __writecr8(v3);
  return result;
}
