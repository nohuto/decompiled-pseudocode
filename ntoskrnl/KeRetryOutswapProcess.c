/*
 * XREFs of KeRetryOutswapProcess @ 0x14056CFF0
 * Callers:
 *     MiProcessWorkingSets @ 0x14035F6F0 (MiProcessWorkingSets.c)
 *     MmReleaseCommitForMemResetPages @ 0x140617408 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall KeRetryOutswapProcess(volatile signed __int32 *a1)
{
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  int v5; // ebx
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  signed __int64 v11; // rax
  signed __int64 *v12; // rdi
  signed __int64 v13; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v4 = 4;
    if ( CurrentIrql != 2 )
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v4;
  }
  KiAcquireKobjectLockSafe(a1);
  v5 = a1[210] & 7;
  if ( v5 == 1 )
    _InterlockedXor(a1 + 210, 7u);
  _InterlockedAnd(a1, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    v6 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v10 = (v9 & v8[5]) == 0;
      v8[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  LODWORD(v11) = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v5 == 1 )
  {
    v12 = (signed __int64 *)(a1 + 90);
    _m_prefetchw(&KiProcessOutSwapListHead);
    v11 = KiProcessOutSwapListHead;
    do
    {
      *v12 = v11;
      v13 = v11;
      v11 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v12, v11);
    }
    while ( v11 != v13 );
    if ( !v11 )
      LODWORD(v11) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v11;
}
