/*
 * XREFs of HalpIommuGetSecurityPolicy @ 0x140303164
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140822570 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaGetRemappingInformation @ 0x1408613F8 (HalpDmaGetRemappingInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpIommuGetSecurityPolicy()
{
  return (unsigned int)HalpIommuSecurityPolicy;
}
