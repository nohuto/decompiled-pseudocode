/*
 * XREFs of ViIsActiveChannelWcb @ 0x1405CC650
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140AC1B90 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC1DE0 (VfAllocateAdapterChannelEx.c)
 *     ViAdapterCallback @ 0x140AC4860 (ViAdapterCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ViIsActiveChannelWcb(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rbp
  char v4; // si
  _QWORD **v5; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // r8
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf

  v2 = (volatile signed __int64 *)(a1 + 176);
  v4 = 0;
  v5 = (_QWORD **)(a1 + 160);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  v7 = *v5;
  v8 = (__int64)(*v5 - 9);
  if ( v5 != *v5 )
  {
    while ( a2 != v8 )
    {
      v8 = *v7 - 72LL;
      v7 = (_QWORD *)*v7;
      if ( v5 == v7 )
        goto LABEL_6;
    }
    v4 = 1;
  }
LABEL_6:
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  return v4;
}
