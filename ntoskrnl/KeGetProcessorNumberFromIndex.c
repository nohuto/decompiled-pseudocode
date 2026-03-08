/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1403644D0
 * Callers:
 *     KeMaskInterrupt @ 0x14028E5A8 (KeMaskInterrupt.c)
 *     HalpInterruptInitializeIpis @ 0x14037B310 (HalpInterruptInitializeIpis.c)
 *     IoGetAffinityInterrupt @ 0x1403B0BF0 (IoGetAffinityInterrupt.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403C91E4 (KeSetIdealProcessorThreadByNumber.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140505958 (HalpPmuReservedResourcesProcessorCallback.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x14057DE20 (WheaFlushETWEventsSelectProcessor.c)
 *     PspWriteTebIdealProcessor @ 0x1407ED78C (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x14096285C (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1409EC980 (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x140A9A400 (PnprQuiesceProcessorDpc.c)
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
