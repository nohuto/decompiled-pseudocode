/*
 * XREFs of PspRemoveProperty @ 0x1403882F0
 * Callers:
 *     PsSetThreadProperty @ 0x1403882B0 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x1405E0580 (PsSetJobProperty.c)
 *     PspEmptyPropertySet @ 0x1407A08FC (PspEmptyPropertySet.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     PspFindPropertySetEntry @ 0x140224080 (PspFindPropertySetEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspRemoveProperty(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v6; // rbp
  PVOID *PropertySetEntry; // rax
  PVOID *v8; // rbx
  PVOID **v9; // rcx
  PVOID **v10; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v6 = KeAcquireSpinLockRaiseToDpc(a1 + 2);
  PropertySetEntry = (PVOID *)PspFindPropertySetEntry(a1, a2);
  v8 = PropertySetEntry;
  if ( PropertySetEntry )
  {
    if ( a3 )
      *a3 = PropertySetEntry[3];
    v9 = (PVOID **)*PropertySetEntry;
    v10 = (PVOID **)PropertySetEntry[1];
    if ( v9[1] != v8 || *v10 != v8 )
      __fastfail(3u);
    *v10 = (PVOID *)v9;
    v9[1] = (PVOID *)v10;
  }
  KxReleaseSpinLock(a1 + 2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  if ( v8 )
  {
    ObfDereferenceObjectWithTag(v8[3], 0x72507350u);
    ExFreePoolWithTag(v8, 0x50737050u);
  }
  return 0LL;
}
