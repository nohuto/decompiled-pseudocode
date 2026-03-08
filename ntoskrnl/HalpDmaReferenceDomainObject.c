/*
 * XREFs of HalpDmaReferenceDomainObject @ 0x14038D02C
 * Callers:
 *     HalJoinDmaDomain @ 0x14038C5D0 (HalJoinDmaDomain.c)
 *     HalpDmaAllocateDomain @ 0x14038C660 (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x14038CD80 (HalpDmaIsAutomaticDomain.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x14038CE84 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050D000 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalCreateCommonBufferFromMdl @ 0x14050FA20 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14050FF60 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x140510B70 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x140511380 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405116E8 (HalpAllocateCommonBufferDmarThin.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpDmaReferenceDomainObject(__int64 a1)
{
  char v2; // bl
  KIRQL v3; // al
  __int64 *v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v4 = (__int64 *)HalpDmaDomainList;
  v5 = v3;
  while ( v4 != &HalpDmaDomainList )
  {
    if ( (__int64 *)a1 == v4 )
    {
      ++*(_DWORD *)(a1 + 112);
      v2 = 1;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpDmaDomainListLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return v2 == 0 ? 0xC000000D : 0;
}
