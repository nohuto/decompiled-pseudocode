/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x1402058C0
 * Callers:
 *     SepInitSingletonEntry @ 0x14020585C (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140206780 (SepCleanupMarkedForDeletionEntries.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140300534 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x1405F577C (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1405F58AC (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SepGetSingletonEntryFromIndexNumber(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf

  v1 = a1 & 0x3F;
  v2 = a1 >> 6;
  v3 = 0LL;
  v4 = ExAcquireSpinLockShared(SepSingletonGlobal);
  if ( (unsigned int)v2 < *((_DWORD *)SepSingletonGlobal + 1) )
    v3 = *(_QWORD *)(*((_QWORD *)SepSingletonGlobal + 1) + 8 * v2) + 24 * v1;
  ExReleaseSpinLockSharedFromDpcLevel(SepSingletonGlobal);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v3;
}
