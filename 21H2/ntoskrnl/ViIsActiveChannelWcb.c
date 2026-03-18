/*
 * XREFs of ViIsActiveChannelWcb @ 0x1405FE78C
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140A84180 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140A843D0 (VfAllocateAdapterChannelEx.c)
 *     ViAdapterCallback @ 0x140A86EA0 (ViAdapterCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ViIsActiveChannelWcb(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  char v4; // si
  __int64 *v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 i; // rax
  __int64 v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf

  v2 = (KSPIN_LOCK *)(a1 + 144);
  v4 = 0;
  v5 = (__int64 *)(a1 + 128);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  for ( i = *v5; ; i = *(_QWORD *)(v8 + 72) )
  {
    v8 = i - 72;
    if ( v5 == (__int64 *)(v8 + 72) )
      break;
    if ( a2 == v8 )
    {
      v4 = 1;
      break;
    }
  }
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
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
  }
  __writecr8(v6);
  return v4;
}
