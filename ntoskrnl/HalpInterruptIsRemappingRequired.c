/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x14028EDCC
 * Callers:
 *     HalpInterruptQueryControllerInfo @ 0x14085FB64 (HalpInterruptQueryControllerInfo.c)
 *     HalpInterruptUnmap @ 0x140930578 (HalpInterruptUnmap.c)
 *     HalpIommuInitSystem @ 0x140A86E10 (HalpIommuInitSystem.c)
 *     HalpIommuInitializeAll @ 0x140A8DA7C (HalpIommuInitializeAll.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A94CE0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 244)) & 1;
}
