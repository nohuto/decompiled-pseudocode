/*
 * XREFs of HalpIommuGetSecurityPolicy @ 0x14032D20C
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C3E68 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaGetRemappingInformation @ 0x1407D4A28 (HalpDmaGetRemappingInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpIommuGetSecurityPolicy()
{
  return (unsigned int)HalpIommuSecurityPolicy;
}
