/*
 * XREFs of MiLockSectionControlArea @ 0x1403638A8
 * Callers:
 *     MmOnlySystemCacheViewsPresent @ 0x1402A3534 (MmOnlySystemCacheViewsPresent.c)
 *     MmDisableModifiedWriteOfSection @ 0x1402EE070 (MmDisableModifiedWriteOfSection.c)
 *     MmChangeSectionBackingFile @ 0x1402F34E4 (MmChangeSectionBackingFile.c)
 *     MiForceSectionClosed @ 0x1402F3AB0 (MiForceSectionClosed.c)
 *     MmUpdateSectionIoAttribution @ 0x1402F4F04 (MmUpdateSectionIoAttribution.c)
 *     MiReferenceExistingControlArea @ 0x140361BD4 (MiReferenceExistingControlArea.c)
 *     MmGetImageFileSignatureInformation @ 0x140361CA0 (MmGetImageFileSignatureInformation.c)
 *     MmEnoughMemoryForWrite @ 0x1403637E0 (MmEnoughMemoryForWrite.c)
 *     MiFlushDataSection @ 0x140368CA0 (MiFlushDataSection.c)
 *     MiCopyHeaderIfResident @ 0x140368D84 (MiCopyHeaderIfResident.c)
 *     MmIsFileSectionActive @ 0x1403BFA30 (MmIsFileSectionActive.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, int a2, KIRQL *a3)
{
  KIRQL v6; // al
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  int v18; // eax
  _DWORD *v19; // r8

  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140C651C0);
    v7 = v6;
    *a3 = v6;
    v8 = a2 ? *a1 : a1[2];
    if ( !v8 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
      return v8;
    }
    v10 = *a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v10);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
  if ( KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
    {
      v17 = KeGetCurrentPrcb();
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v19 = v17->SchedulerAssist;
      v15 = (v18 & v19[5]) == 0;
      v19[5] &= v18;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(v17);
    }
  }
  __writecr8(v7);
  return 0LL;
}
