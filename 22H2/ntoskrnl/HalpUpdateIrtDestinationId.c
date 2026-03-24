/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x1404D14D8
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A8D94 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x1409A7560 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
