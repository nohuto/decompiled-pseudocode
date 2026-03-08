/*
 * XREFs of MiReserveFaultPte @ 0x140631D64
 * Callers:
 *     MiValidateImagePfn @ 0x14069EF78 (MiValidateImagePfn.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiReserveFaultPte()
{
  __int64 ClearBitsAndSet; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v9; // [rsp+30h] [rbp-28h] BYREF

  BitMapHeader.SizeOfBitMap = 16;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  memset(&v9, 0, sizeof(v9));
  BitMapHeader.Buffer = (unsigned int *)byte_140C69358;
  KeAcquireInStackQueuedSpinLock(&qword_140C69350, &v9);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v9);
  OldIrql = v9.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v9.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v5 = ~(unsigned __int16)(-1LL << (v9.OldIrql + 1));
      v6 = (v5 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v5;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( (_DWORD)ClearBitsAndSet == -1 )
    return 0LL;
  else
    return qword_140C69348 + 8 * ClearBitsAndSet;
}
