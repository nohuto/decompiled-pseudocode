/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x140224C00
 * Callers:
 *     MiAgeWorkingSet @ 0x1402248A0 (MiAgeWorkingSet.c)
 *     MiPrefetchNormally @ 0x1402282A4 (MiPrefetchNormally.c)
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x14028CE24 (MiGetHardFaultPages.c)
 *     MiComputeZeroClusterMaximum @ 0x14029EAD0 (MiComputeZeroClusterMaximum.c)
 *     MiTrimWorkingSetTail @ 0x1402E29B0 (MiTrimWorkingSetTail.c)
 *     MiPreUnlockWorkingSetShared @ 0x1402F0758 (MiPreUnlockWorkingSetShared.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403561BC (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140356350 (MiUseLowIoPriorityForModifiedPages.c)
 *     MmGetAvailablePagesBelowPriority @ 0x14035AF7C (MmGetAvailablePagesBelowPriority.c)
 *     MiComputeSystemTrimCriteria @ 0x14035FE9C (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x140360274 (MiComputeAgingPercent.c)
 *     MiForcedTrim @ 0x1406324C0 (MiForcedTrim.c)
 *     MiGetExtendedStandbyPage @ 0x14064E0CC (MiGetExtendedStandbyPage.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MiAllocateCrcList @ 0x1407961D4 (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesBelowPriority(_QWORD *a1, unsigned int a2)
{
  __int64 *v2; // r8
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  v2 = a1 + 368;
  v3 = a1[320] + a1[336];
  v4 = (unsigned __int64)&a1[11 * a2 + 368];
  if ( (unsigned __int64)(a1 + 368) < v4 )
  {
    do
    {
      v5 = *v2;
      v2 += 11;
      v3 += v5;
    }
    while ( (unsigned __int64)v2 < v4 );
  }
  return v3;
}
