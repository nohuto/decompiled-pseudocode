/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x14031FBEC
 * Callers:
 *     HalpInterruptQueryControllerInfo @ 0x140864024 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x1409334A8 (HalpInterruptUnmap.c)
 *     HalpIommuInitSystem @ 0x140A8A420 (HalpIommuInitSystem.c)
 *     HalpIommuInitializeAll @ 0x140A90F0C (HalpIommuInitializeAll.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A97E20 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 244)) & 1;
}
