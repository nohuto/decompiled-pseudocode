ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  ULONG v1; // edi
  unsigned __int8 CurrentIrql; // bp
  volatile LONG *DataSectionObject; // rbx
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // cl
  struct _KPRCB *v14; // rax
  _DWORD *v15; // r9
  int v16; // edx
  unsigned __int8 v17; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v22; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v7) = 4;
      else
        v7 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v7;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C651C0, CurrentIrql);
    }
    else
    {
      v22 = 0;
      if ( _interlockedbittestandset(&dword_140C651C0, 0x1Fu) )
        v22 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140C651C0);
      while ( (dword_140C651C0 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_140C651C0 & 0x40000000) == 0 )
          _InterlockedOr(&dword_140C651C0, 0x40000000u);
        KeYieldProcessorEx(&v22);
      }
    }
    DataSectionObject = (volatile LONG *)SectionPointer->DataSectionObject;
    if ( !SectionPointer->DataSectionObject )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C651C0, retaddr);
      else
        dword_140C651C0 = 0;
      if ( KiIrqlFlags )
      {
        v17 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      return 0;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
    if ( KiIrqlFlags )
    {
      v8 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
    __writecr8(CurrentIrql);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C651C0);
  if ( (unsigned int)MiDoesControlAreaHaveUserWritableReferences((__int64)DataSectionObject) )
    v1 = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      v14 = KeGetCurrentPrcb();
      v15 = v14->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v12 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  __writecr8(CurrentIrql);
  return v1;
}
