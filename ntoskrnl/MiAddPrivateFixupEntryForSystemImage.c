/*
 * XREFs of MiAddPrivateFixupEntryForSystemImage @ 0x1403A6104
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1407F6010 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInitializePrivateFixupBitmap @ 0x14072E1E0 (MiInitializePrivateFixupBitmap.c)
 *     MiCreateSessionDriverProtos @ 0x140A4316C (MiCreateSessionDriverProtos.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAddPrivateFixupEntryForSystemImage(_DWORD *a1, unsigned __int64 a2)
{
  PVOID Pool; // rsi
  _QWORD *v5; // rbx
  void *v6; // rcx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf

  Pool = MiAllocatePool(
           64,
           8
         * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6)
          + ((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
          + 2LL),
           0x69536D4Du);
  if ( !Pool )
    return 0LL;
  v5 = MiAllocatePool(64, 0x38uLL, 0x6946694Du);
  v6 = Pool;
  if ( !v5 )
  {
LABEL_7:
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  MiInitializePrivateFixupBitmap(Pool, a1, 1LL);
  v5[5] = Pool;
  v5[6] = a1;
  v5[2] = a2;
  v5[3] = a2 + (unsigned int)((*(_DWORD *)(*(_QWORD *)a1 + 8LL) << 12) - 1);
  v5[4] = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1
    && (a1[14] & 0x800) == 0
    && !(unsigned int)MiCreateSessionDriverProtos(a1, a2, v5) )
  {
    ExFreePoolWithTag(v5, 0);
    v6 = Pool;
    goto LABEL_7;
  }
  v7 = ExAcquireSpinLockExclusive(&dword_140C65564);
  v8 = (_QWORD *)qword_140C65548;
  if ( *(__int64 **)qword_140C65548 != &qword_140C65540 )
    __fastfail(3u);
  *v5 = &qword_140C65540;
  v5[1] = v8;
  *v8 = v5;
  qword_140C65548 = (__int64)v5;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65564);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return 1LL;
}
