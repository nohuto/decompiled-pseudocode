__int64 __fastcall MiUpdateActiveSubsection(_QWORD *BugCheckParameter2)
{
  ULONG_PTR v1; // rdi
  unsigned int v2; // ebx
  int FileExtents; // r12d
  __int64 v4; // r13
  volatile LONG *v5; // r15
  KIRQL v6; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  BOOL v12; // r14d
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  int v16; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  int v22; // [rsp+70h] [rbp+8h]
  __int64 v23; // [rsp+78h] [rbp+10h]

  v1 = (ULONG_PTR)BugCheckParameter2;
  v2 = 0;
  v23 = *BugCheckParameter2;
  FileExtents = 0;
  v4 = 0LL;
  v5 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  v6 = ExAcquireSpinLockExclusive(v5);
  while ( 1 )
  {
    if ( !*(_QWORD *)(v1 + 8) || (*(_DWORD *)(v1 + 52) & 0x40000000) == 0 )
      goto LABEL_16;
    if ( (int)MiReferenceSubsection(v1) < 2 )
      break;
    v22 = *(_DWORD *)(v1 + 44) - (*(_DWORD *)(v1 + 52) & 0x3FFFFFFF);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (v6 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v6);
    FileExtents = MiAllocateFileExtents(v1, 0, 0);
    v12 = 0;
    v6 = ExAcquireSpinLockExclusive(v5);
    if ( FileExtents >= 0 )
      v12 = v22 != *(_DWORD *)(v1 + 44) - (*(_DWORD *)(v1 + 52) & 0x3FFFFFFF);
    v4 += MiDecrementSubsections(v1, v1, 0);
    if ( v12 )
      goto LABEL_17;
    if ( FileExtents < 0 )
      goto LABEL_18;
LABEL_16:
    v1 = *(_QWORD *)(v1 + 16);
LABEL_17:
    if ( !v1 )
    {
LABEL_18:
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      if ( KiIrqlFlags )
      {
        v13 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && v6 <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v11 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)v14);
        }
      }
      __writecr8(v6);
      if ( v4 )
      {
        LOBYTE(v2) = *(_QWORD *)(v23 + 64) != 0LL;
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v23 + 60) & 0x3FF)),
          v2,
          v4);
      }
      return (unsigned int)FileExtents;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && v6 <= 0xFu && v18 >= 2u )
    {
      v19 = KeGetCurrentPrcb();
      v20 = v19->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (v6 + 1));
      v11 = (v21 & v20[5]) == 0;
      v20[5] &= v21;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)v19);
    }
  }
  __writecr8(v6);
  return 0LL;
}
