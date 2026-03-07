bool __fastcall IntPartGetProcessorEfficiencyClass(struct _PROCESSOR_NUMBER *a1)
{
  ULONG ProcessorIndexFromNumber; // eax

  if ( (KiInterruptSteeringFlags & 0x10) != 0 )
    return 0;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a1);
  return KiGetProcessorEfficiencyClass(KiProcessorBlock[ProcessorIndexFromNumber]);
}
