/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x140378AAC
 * Callers:
 *     HalpInterruptUnmap @ 0x140760E58 (HalpInterruptUnmap.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407D1D7C (HalpInterruptQueryControllerInfo.c)
 *     HalpIommuInitializeAll @ 0x14099B3C4 (HalpIommuInitializeAll.c)
 *     HalpIommuInitSystem @ 0x14099EB40 (HalpIommuInitSystem.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A8D94 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 220)) & 1;
}
