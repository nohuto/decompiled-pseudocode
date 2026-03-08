/*
 * XREFs of HalpDmaFindAdapterByDeviceObject @ 0x14038CAF8
 * Callers:
 *     HalGetAdapterV3 @ 0x140821010 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1408215A0 (HalGetAdapterV2.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall HalpDmaFindAdapterByDeviceObject(__int64 a1)
{
  __int64 *v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 *i; // rax
  __int64 *v5; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  if ( !a1 )
    return 0LL;
  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
  for ( i = (__int64 *)HalpDmaAdapterList; i != &HalpDmaAdapterList; i = (__int64 *)*i )
  {
    v5 = i - 58;
    if ( i[8] == a1 )
    {
      if ( ObReferenceObjectSafeWithTag((__int64)(i - 58)) )
        v2 = v5;
      break;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpDmaAdapterListLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  return v2;
}
