/*
 * XREFs of MiMarkFileOnlyPfnBad @ 0x14063BC40
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiTrimSharedPage @ 0x1403A0EBC (MiTrimSharedPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPersistPage @ 0x14063C604 (MiPersistPage.c)
 *     MiSetPfnRemovalRequested @ 0x14064B908 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkFileOnlyPfnBad(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  PVOID Pool; // rbp
  unsigned __int8 v5; // al
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  char v14; // al
  char v15; // al
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r8
  int v19; // eax
  int v20; // eax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r8
  int v24; // eax

  Pool = MiAllocatePool(64, 0x20uLL, 0x6C42694Du);
  v5 = MiLockPageInline(BugCheckParameter2);
  v6 = *(_QWORD *)(BugCheckParameter2 + 40);
  v7 = v5;
  if ( (v6 & 0x20000000000000LL) == 0 )
    goto LABEL_6;
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) != 5 )
  {
    if ( v6 >= 0 )
      goto LABEL_6;
    goto LABEL_17;
  }
  if ( v6 < 0 )
  {
LABEL_17:
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
      goto LABEL_18;
LABEL_6:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v7);
    if ( Pool )
      ExFreePoolWithTag(Pool, 0);
    return 3221226548LL;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 8) || *(_QWORD *)(BugCheckParameter2 + 16) )
    goto LABEL_6;
LABEL_18:
  if ( (a2 & 0x10000000) != 0 )
  {
    v14 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( v14 >= 0 )
      *(_BYTE *)(BugCheckParameter2 + 35) = v14 | 0x80;
  }
  v15 = *(_BYTE *)(BugCheckParameter2 + 35);
  if ( (v15 & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
    __writecr8(v7);
    if ( Pool )
      ExFreePoolWithTag(Pool, 0);
  }
  else
  {
    if ( (v15 & 0x10) != 0
      || *(_WORD *)(BugCheckParameter2 + 32)
      || (v20 = *(_BYTE *)(BugCheckParameter2 + 34) & 7, v20 != 2) && v20 != 3 )
    {
      MiSetPfnRemovalRequested(BugCheckParameter2, 1LL, 0LL);
      if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 6 )
        MiTrimSharedPage(BugCheckParameter2, v7, a2);
    }
    else
    {
      MiUnlinkPageFromListEx(BugCheckParameter2, 0LL);
      if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) != 0 )
      {
        if ( *(char *)(BugCheckParameter2 + 35) >= 0 )
          MiPersistPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
        *(_BYTE *)(BugCheckParameter2 + 34) &= ~0x10u;
      }
      MiSetPfnRemovalRequested(BugCheckParameter2, 1LL, 0LL);
      MiInsertPageInList(BugCheckParameter2, 4u);
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v21 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v22);
      }
    }
    __writecr8(v7);
  }
  return 259LL;
}
