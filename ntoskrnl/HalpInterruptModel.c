/*
 * XREFs of HalpInterruptModel @ 0x14028EADC
 * Callers:
 *     HalpInterruptSetDestination @ 0x14028E950 (HalpInterruptSetDestination.c)
 *     HalEnumerateProcessors @ 0x140371430 (HalEnumerateProcessors.c)
 *     HalStartNextProcessor @ 0x140371EB0 (HalStartNextProcessor.c)
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 *     HalpTimerInitSystem @ 0x1403776D0 (HalpTimerInitSystem.c)
 *     HalpInterruptRemap @ 0x140378D78 (HalpInterruptRemap.c)
 *     HalpMmReservePageTablePages @ 0x14037B1CC (HalpMmReservePageTablePages.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403A9F1C (HalpInitializeInterruptsBspLate.c)
 *     HalpInterruptRegisterDynamicProcessor @ 0x140502D0C (HalpInterruptRegisterDynamicProcessor.c)
 *     HalpPrepareForBugcheck @ 0x140509440 (HalpPrepareForBugcheck.c)
 *     HalpSaveAndDisableEnlightenment @ 0x14050A1D0 (HalpSaveAndDisableEnlightenment.c)
 *     HalpQueryAcpiResourceRequirements @ 0x14080BBE4 (HalpQueryAcpiResourceRequirements.c)
 *     HaliAcpiMachineStateInit @ 0x14085A4F0 (HaliAcpiMachineStateInit.c)
 *     HalpInterruptQueryControllerInfo @ 0x14085FB64 (HalpInterruptQueryControllerInfo.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1408603E8 (HalpGetAcpiStaticNumaTopology.c)
 *     HalpInterruptUnmap @ 0x140930578 (HalpInterruptUnmap.c)
 *     HalpPiix4Detect @ 0x140A85B70 (HalpPiix4Detect.c)
 *     HalpInterruptInitSystem @ 0x140A86CD0 (HalpInterruptInitSystem.c)
 *     HalpWheaInitSystem @ 0x140A8CF90 (HalpWheaInitSystem.c)
 *     HalpDpInitSystem @ 0x140A8E2D0 (HalpDpInitSystem.c)
 *     HalpMiscGetParameters @ 0x140B672C8 (HalpMiscGetParameters.c)
 *     HalpAcpiIBMExaMatch @ 0x140B8F8D0 (HalpAcpiIBMExaMatch.c)
 *     HalpAcpiIBMVigilMatch @ 0x140B8F910 (HalpAcpiIBMVigilMatch.c)
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
