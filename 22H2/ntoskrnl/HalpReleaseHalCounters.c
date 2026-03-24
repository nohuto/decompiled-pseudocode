/*
 * XREFs of HalpReleaseHalCounters @ 0x1404B9080
 * Callers:
 *     HalAllocateHardwareCounters @ 0x1408642D0 (HalAllocateHardwareCounters.c)
 *     HalFreeHardwareCounters @ 0x140864420 (HalFreeHardwareCounters.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleaseHalCounters()
{
  return (unsigned int)_InterlockedExchangeAdd(&HalpPmuInUse, 0xFFFFFFFE);
}
