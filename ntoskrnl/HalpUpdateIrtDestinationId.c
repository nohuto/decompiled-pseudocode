/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x140518148
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A94CE0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x140A92F78 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
