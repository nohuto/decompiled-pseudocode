/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x1403007C0
 * Callers:
 *     KeMaskInterrupt @ 0x14028E5A8 (KeMaskInterrupt.c)
 *     HalpHvInitMcaPcrContext @ 0x14037CEA4 (HalpHvInitMcaPcrContext.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140505958 (HalpPmuReservedResourcesProcessorCallback.c)
 *     KeSetTargetProcessorDpc @ 0x14056FDF0 (KeSetTargetProcessorDpc.c)
 *     KiAltContextWorkQueueAddItem @ 0x14057DD74 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x140610BC4 (WheaFlushETWEventsAddWorkRtn.c)
 *     HalpMcaInitializePcrContext @ 0x140A8CFF8 (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
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
