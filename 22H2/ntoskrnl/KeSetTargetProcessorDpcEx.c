/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x14032A950
 * Callers:
 *     KeMaskInterrupt @ 0x1403769B0 (KeMaskInterrupt.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C5150 (HalpHvInitMcaPcrContext.c)
 *     KeSetTargetProcessorDpc @ 0x140519CB0 (KeSetTargetProcessorDpc.c)
 *     HalpMcaInitializePcrContext @ 0x14099FEAC (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140344E90 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  if ( !Dpc->DpcData )
    Dpc->Number = ProcessorIndexFromNumber + 1280;
  return 0;
}
