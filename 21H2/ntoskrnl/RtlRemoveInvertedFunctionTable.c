/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x140259480
 * Callers:
 *     MiProcessLoaderEntry @ 0x1402D8C20 (MiProcessLoaderEntry.c)
 *     MiInitializeLoadedModuleList @ 0x140B09D6C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlxRemoveInvertedFunctionTable @ 0x1402594D4 (RtlxRemoveInvertedFunctionTable.c)
 *     MmLockLoadedModuleListExclusive @ 0x1402D8E9C (MmLockLoadedModuleListExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
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
