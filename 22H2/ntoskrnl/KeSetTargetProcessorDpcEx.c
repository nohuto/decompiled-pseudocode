/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x14036B680
 * Callers:
 *     KeMaskInterrupt @ 0x14031F3D4 (KeMaskInterrupt.c)
 *     HalpHvInitMcaPcrContext @ 0x140380934 (HalpHvInitMcaPcrContext.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140507A38 (HalpPmuReservedResourcesProcessorCallback.c)
 *     KeSetTargetProcessorDpc @ 0x140572460 (KeSetTargetProcessorDpc.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405802A4 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x140612FE4 (WheaFlushETWEventsAddWorkRtn.c)
 *     HalpMcaInitializePcrContext @ 0x140A90488 (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140255090 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  if ( !Dpc->DpcData )
    Dpc->Number = ProcessorIndexFromNumber + 2048;
  return 0;
}
