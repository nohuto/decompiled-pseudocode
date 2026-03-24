/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x14033E500
 * Callers:
 *     KeMaskInterrupt @ 0x1403769B0 (KeMaskInterrupt.c)
 *     HalGetProcessorIdByNtNumber @ 0x140376FC0 (HalGetProcessorIdByNtNumber.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A2E4 (KeSetIdealProcessorThreadByNumber.c)
 *     IoGetAffinityInterrupt @ 0x140381700 (IoGetAffinityInterrupt.c)
 *     HalpInterruptInitializeIpis @ 0x1403B045C (HalpInterruptInitializeIpis.c)
 *     PspWriteTebIdealProcessor @ 0x1406C0488 (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x1408AD0B4 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x14093E8DC (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AE4D0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v3; // ecx

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < 0x500 )
  {
    v3 = KiProcessorIndexToNumberMappingTable[ProcIndex];
    if ( v3 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v3 >> 6;
      ProcNumber->Number = v3 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
