/*
 * XREFs of MiPerformMemoryChange @ 0x140619688
 * Callers:
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x140394A40 (MiInitializeNonPagedPoolThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiPerformMemoryChange(__int64 a1, __int64 a2, void **a3, __int64 *a4, int a5, __int64 ***a6)
{
  KIRQL v10; // al
  void *v11; // r8
  unsigned __int64 v12; // rsi
  ULONG_PTR v13; // rax
  bool v14; // zf
  void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v21; // eax
  _DWORD *SchedulerAssist; // r8
  __int64 **i; // rdx
  __int64 v24; // r8
  __int64 *v25; // rax

  v10 = ExAcquireSpinLockExclusive(&dword_140C6B1A0);
  v11 = *a3;
  v12 = v10;
  v13 = a2 - 1 + a1;
  v14 = (*((_QWORD *)MmPhysicalMemoryBlock - 1))-- == 1LL;
  v15 = 0LL;
  v16 = qword_140C6B0E0;
  if ( v14 )
    v15 = MmPhysicalMemoryBlock;
  *a3 = v15;
  v17 = *a4;
  MmPhysicalMemoryBlock = v11;
  v14 = (*(_QWORD *)(v16 - 8))-- == 1LL;
  v18 = 0LL;
  if ( v14 )
    v18 = qword_140C6B0E0;
  *a4 = v18;
  qword_140C6B0E0 = v17;
  if ( (a5 & 1) != 0 )
  {
    if ( v13 > qword_140C6F348 )
      qword_140C6F348 = a2 - 1 + a1;
    if ( (a5 & 0x100008) == 0 )
    {
      qword_140C6F350 += a2;
LABEL_14:
      byte_140C6B0CC = 1;
    }
  }
  else
  {
    if ( v13 == qword_140C6F348 )
      qword_140C6F348 = a1 - 1;
    if ( (a5 & 0x100000) == 0 )
    {
      qword_140C6F350 -= a2;
      goto LABEL_14;
    }
  }
  MiInitializeNonPagedPoolThresholds();
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6B1A0);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v12);
  if ( (a5 & 0x100000) != 0 )
  {
    for ( i = *a6; i != (__int64 **)a6; i = (__int64 **)*i )
    {
      v24 = *((unsigned int *)i + 9) + 4LL * *((unsigned int *)i + 8);
      v25 = i[3];
      if ( (a5 & 1) != 0 )
        qword_140C67250[v24] += v25;
      else
        qword_140C67250[v24] -= v25;
    }
  }
}
