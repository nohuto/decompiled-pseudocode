/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x14033A92C
 * Callers:
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MmGetAvailablePagesBelowPriority @ 0x14032833C (MmGetAvailablePagesBelowPriority.c)
 *     MiStoreUpdateMemoryConditions @ 0x14033A2F4 (MiStoreUpdateMemoryConditions.c)
 *     MiComputeSystemTrimCriteria @ 0x14033A450 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x14033A7E8 (MiComputeAgingPercent.c)
 *     MiPrefetchNormally @ 0x14033A8E8 (MiPrefetchNormally.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14033A9BC (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeZeroClusterMaximum @ 0x14033D4AC (MiComputeZeroClusterMaximum.c)
 *     MiGetHardFaultPages @ 0x1403592E4 (MiGetHardFaultPages.c)
 *     MiForcedTrim @ 0x14036BE70 (MiForcedTrim.c)
 *     MiAllocateCrcList @ 0x140727A78 (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesBelowPriority(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // r9
  __int64 result; // rax
  unsigned __int64 v4; // rdx

  v2 = a1 + 304;
  result = a1[280] + a1[288];
  v4 = (unsigned __int64)&a1[5 * a2 + 304];
  while ( (unsigned __int64)v2 < v4 )
  {
    result += *v2;
    v2 += 5;
  }
  return result;
}
