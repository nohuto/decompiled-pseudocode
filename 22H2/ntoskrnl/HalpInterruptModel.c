/*
 * XREFs of HalpInterruptModel @ 0x14031F8FC
 * Callers:
 *     HalpInterruptSetDestination @ 0x14031F770 (HalpInterruptSetDestination.c)
 *     HalEnumerateProcessors @ 0x1403766E0 (HalEnumerateProcessors.c)
 *     HalStartNextProcessor @ 0x140377100 (HalStartNextProcessor.c)
 *     HalpTimerInitSystem @ 0x14037B080 (HalpTimerInitSystem.c)
 *     HalpInterruptRemap @ 0x14037C728 (HalpInterruptRemap.c)
 *     HalpMmReservePageTablePages @ 0x14037EBBC (HalpMmReservePageTablePages.c)
 *     HalQueryMaximumProcessorCount @ 0x14037FEF0 (HalQueryMaximumProcessorCount.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403AEC6C (HalpInitializeInterruptsBspLate.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x140504DEC (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpPrepareForBugcheck @ 0x14050B520 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x14050C2B0 (HalpSaveAndDisableEnlightenment.c)
 *     HalpQueryAcpiResourceRequirements @ 0x140820B60 (HalpQueryAcpiResourceRequirements.c)
 *     HaliAcpiMachineStateInit @ 0x14085E4B0 (HaliAcpiMachineStateInit.c)
 *     HalpInterruptQueryControllerInfo @ 0x140864024 (HalpInterruptQueryControllerInfo.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x140864A28 (HalpGetAcpiStaticNumaTopology.c)
 *     HalpInterruptUnmap @ 0x1409334A8 (HalpInterruptUnmap.c)
 *     HalpInterruptInitSystem @ 0x140A8A2E0 (HalpInterruptInitSystem.c)
 *     HalpPiix4Detect @ 0x140A8F324 (HalpPiix4Detect.c)
 *     HalpWheaInitSystem @ 0x140A90420 (HalpWheaInitSystem.c)
 *     HalpDpInitSystem @ 0x140A91760 (HalpDpInitSystem.c)
 *     HalpMiscGetParameters @ 0x140B6B158 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140B93AF0 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140B93B30 (HalpAcpiIBMVigilMatch.c)
 * Callees:
 *     <none>
 */

__int64 HalpInterruptModel()
{
  __int64 result; // rax

  if ( !HalpInterruptController )
    return 1LL;
  result = 2LL;
  if ( *(_DWORD *)(HalpInterruptController + 240) == 2 )
    return 1LL;
  if ( *(_DWORD *)(HalpInterruptController + 240) != 3 )
  {
    if ( *(_DWORD *)(HalpInterruptController + 240) == 4 )
    {
      return 3LL;
    }
    else if ( *(_DWORD *)(HalpInterruptController + 240) == 6 )
    {
      return 4LL;
    }
    else
    {
      return 4096LL;
    }
  }
  return result;
}
