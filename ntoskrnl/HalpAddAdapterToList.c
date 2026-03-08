/*
 * XREFs of HalpAddAdapterToList @ 0x14038CBA8
 * Callers:
 *     HalGetAdapterV3 @ 0x140821010 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1408215A0 (HalGetAdapterV2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpAddAdapterToList(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
  v3 = (_QWORD *)qword_140C64028;
  v4 = (_QWORD *)(a1 + 464);
  if ( *(__int64 **)qword_140C64028 != &HalpDmaAdapterList )
    __fastfail(3u);
  *v4 = &HalpDmaAdapterList;
  v4[1] = v3;
  *v3 = v4;
  qword_140C64028 = (__int64)v4;
  result = KxReleaseSpinLock((volatile signed __int64 *)&HalpDmaAdapterListLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
