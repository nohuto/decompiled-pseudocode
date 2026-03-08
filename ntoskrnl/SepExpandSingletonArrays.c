/*
 * XREFs of SepExpandSingletonArrays @ 0x1403022EC
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14070B8C0 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 SepExpandSingletonArrays()
{
  void *Pool2; // rax
  void *v1; // rsi
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  PEX_SPIN_LOCK v5; // rbx
  void *v6; // rsi
  volatile LONG *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax

  Pool2 = (void *)ExAllocatePool2(64LL, 1536LL, 1950639443LL);
  v1 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  memset(Pool2, 0, 0x600uLL);
  v2 = ExAcquireSpinLockExclusive(SepSingletonGlobal);
  v3 = (_QWORD *)ExAllocatePool2(64LL, 8LL * (unsigned int)(*((_DWORD *)SepSingletonGlobal + 1) + 1), 1950639443LL);
  v4 = v3;
  if ( !v3 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SepSingletonGlobal);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
    ExFreePoolWithTag(v1, 0x74446553u);
    return 3221225495LL;
  }
  v5 = SepSingletonGlobal;
  memmove(v3, *((const void **)SepSingletonGlobal + 1), 8LL * *((unsigned int *)SepSingletonGlobal + 1));
  v4[*((unsigned int *)v5 + 1)] = v1;
  v6 = (void *)*((_QWORD *)v5 + 1);
  v7 = SepSingletonGlobal;
  ++*((_DWORD *)v5 + 1);
  *((_QWORD *)v5 + 1) = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v2 <= 0xFu && v14 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v13 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  __writecr8(v2);
  ExFreePoolWithTag(v6, 0x74446553u);
  return 0LL;
}
