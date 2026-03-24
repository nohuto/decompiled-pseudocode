/*
 * XREFs of HalpInterruptModel @ 0x14037ADC4
 * Callers:
 *     HalpInterruptRemap @ 0x140378050 (HalpInterruptRemap.c)
 *     HalQueryMaximumProcessorCount @ 0x14037AD70 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x1403A0DA0 (HalStartNextProcessor.c)
 *     HalpTimerInitSystem @ 0x1403AF740 (HalpTimerInitSystem.c)
 *     HalEnumerateProcessors @ 0x1403B4820 (HalEnumerateProcessors.c)
 *     HalpMmReservePageTablePages @ 0x1403BABAC (HalpMmReservePageTablePages.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403CD42C (HalpInitializeInterruptsBspLate.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x1404BC308 (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpPrepareForBugcheck @ 0x1404C23B0 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x1404C3090 (HalpSaveAndDisableEnlightenment.c)
 *     HalpInterruptUnmap @ 0x140760E58 (HalpInterruptUnmap.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407B9B04 (HalpQueryAcpiResourceRequirements.c)
 *     HaliAcpiMachineStateInit @ 0x1407CEA70 (HaliAcpiMachineStateInit.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407D1D7C (HalpInterruptQueryControllerInfo.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1407D403C (HalpGetAcpiStaticNumaTopology.c)
 *     HalpPiix4Detect @ 0x14099A3D0 (HalpPiix4Detect.c)
 *     HalpInterruptInitSystem @ 0x14099EA00 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x14099FE50 (HalpWheaInitSystem.c)
 *     HalpDpInitSystem @ 0x1409A11D0 (HalpDpInitSystem.c)
 *     HalpMiscGetParameters @ 0x140A6CF88 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140A8E0C0 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140A8E100 (HalpAcpiIBMVigilMatch.c)
 * Callees:
 *     <none>
 */

__int64 HalpInterruptModel()
{
  __int64 result; // rax

  if ( !HalpInterruptController )
    return 1LL;
  result = 2LL;
  if ( *(_DWORD *)(HalpInterruptController + 216) == 2 )
    return 1LL;
  if ( *(_DWORD *)(HalpInterruptController + 216) != 3 )
  {
    if ( *(_DWORD *)(HalpInterruptController + 216) == 4 )
    {
      return 3LL;
    }
    else if ( *(_DWORD *)(HalpInterruptController + 216) == 6 )
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
