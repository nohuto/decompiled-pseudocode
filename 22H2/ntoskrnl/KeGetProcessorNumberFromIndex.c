/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x14030CCE0
 * Callers:
 *     KeMaskInterrupt @ 0x14031F3D4 (KeMaskInterrupt.c)
 *     HalpInterruptInitializeIpis @ 0x14037ED00 (HalpInterruptInitializeIpis.c)
 *     IoGetAffinityInterrupt @ 0x1403B5880 (IoGetAffinityInterrupt.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403CE794 (KeSetIdealProcessorThreadByNumber.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140507A38 (HalpPmuReservedResourcesProcessorCallback.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x140580350 (WheaFlushETWEventsSelectProcessor.c)
 *     PspWriteTebIdealProcessor @ 0x14076FF4C (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x14096587C (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1409EF810 (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x140A9D540 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v2; // ecx

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < 0x800 )
  {
    v2 = KiProcessorIndexToNumberMappingTable[ProcIndex];
    if ( v2 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v2 >> 6;
      ProcNumber->Number = v2 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
