/*
 * XREFs of MiMarkPxeAsShadowed @ 0x140371944
 * Callers:
 *     MiInitializeShadowPageTable @ 0x14080B974 (MiInitializeShadowPageTable.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMarkPxeAsShadowed(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf
  struct _KLOCK_QUEUE_HANDLE v7; // [rsp+30h] [rbp-28h] BYREF

  memset(&v7, 0, sizeof(v7));
  v1 = ((a1 >> 3) & 0x1FF) - 256;
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &v7);
  *((_BYTE *)qword_140C66C04 + ((unsigned __int64)v1 >> 3)) |= 1 << (v1 & 7);
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v7);
  OldIrql = v7.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v7.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v7.OldIrql + 1));
      v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v6 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
