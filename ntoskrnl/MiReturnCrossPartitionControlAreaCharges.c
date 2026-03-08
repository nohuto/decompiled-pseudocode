/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x1406238BC
 * Callers:
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     MiSessionInsertImage @ 0x14036BEC4 (MiSessionInsertImage.c)
 *     MiReleaseSessionDriverCharges @ 0x14067FD74 (MiReleaseSessionDriverCharges.c)
 *     MiMapImageInSystemSpace @ 0x1406A53F8 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406A556C (MiUnmapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x140334C10 (MiDecrementSubsectionViewCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionControlAreaCharges(__int64 a1)
{
  BOOL v2; // r14d
  unsigned __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  v2 = *(_QWORD *)(a1 + 64) != 0LL;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v5 = MiDecrementSubsectionViewCount((_QWORD *)(a1 + 128), 24LL, v4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( v5 )
    return MiReturnCrossPartitionSectionCharges(
             *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF)),
             v2,
             v5);
  return result;
}
