char *__fastcall MiCanFileBeTruncatedInternal(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        unsigned __int64 *a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  bool v8; // zf
  unsigned __int64 v9; // rbx
  char *DataSectionObject; // rsi
  __int64 LastSubsection; // rax
  __int64 i; // rcx
  unsigned __int64 v14; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  unsigned __int64 v27; // rax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax

  while ( 1 )
  {
    v8 = SectionObjectPointer->ImageSectionObject == 0LL;
    *a5 = 17;
    if ( v8 )
    {
      v9 = ExAcquireSpinLockExclusive(&dword_140C651C0);
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_3;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v8 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v9);
    }
    if ( !MmFlushImageSection(SectionObjectPointer, MmFlushForWrite) )
      return 0LL;
    LOBYTE(v9) = ExAcquireSpinLockExclusive(&dword_140C651C0);
LABEL_3:
    DataSectionObject = (char *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
      if ( KiIrqlFlags )
      {
        v28 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v8 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      __writecr8((unsigned __int8)v9);
      *a5 = 0;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
    if ( KiIrqlFlags )
    {
      v19 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v8 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    __writecr8((unsigned __int8)v9);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
  if ( *((_DWORD *)DataSectionObject + 14) & 1 | ((*((_DWORD *)DataSectionObject + 14) & 2) != 0)
    || *((_QWORD *)DataSectionObject + 14) > 1uLL && (*((_DWORD *)DataSectionObject + 14) & 8) == 0 && !a4 )
  {
    goto LABEL_21;
  }
  if ( *((_QWORD *)DataSectionObject + 6) && (!a3 || *((_QWORD *)DataSectionObject + 5) && !a4) )
  {
    if ( !a2 )
      goto LABEL_21;
    LastSubsection = (__int64)(DataSectionObject + 128);
    if ( *((_QWORD *)DataSectionObject + 8) )
      LastSubsection = MiFindLastSubsection(DataSectionObject, 1LL);
    for ( i = *(_QWORD *)(LastSubsection + 16); i; i = *(_QWORD *)(i + 16) )
      LastSubsection = i;
    v14 = MiEndingOffset(LastSubsection);
    if ( *a2 < v14 )
    {
LABEL_21:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)DataSectionObject + 18);
      if ( KiIrqlFlags )
      {
        v23 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v8 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      __writecr8((unsigned __int8)v9);
      return 0LL;
    }
    v27 = (v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( *a2 < v27 )
      *a2 = v27;
  }
  *a5 = v9;
  return DataSectionObject;
}
