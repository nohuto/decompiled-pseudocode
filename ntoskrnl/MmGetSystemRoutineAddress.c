/*
 * XREFs of MmGetSystemRoutineAddress @ 0x1407EA850
 * Callers:
 *     HalMcFinishMicrocode @ 0x1403ABA24 (HalMcFinishMicrocode.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1403ABBE0 (HalpCmciLoadThresholdConfiguration.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140519160 (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpMcGetLoadConfiguration @ 0x140519574 (HalpMcGetLoadConfiguration.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     MiMarkKernelCfgTarget @ 0x14035D3FC (MiMarkKernelCfgTarget.c)
 *     RtlUnicodeStringToAnsiString @ 0x1407A34D0 (RtlUnicodeStringToAnsiString.c)
 *     RtlFreeAnsiString @ 0x1407EA820 (RtlFreeAnsiString.c)
 *     RtlFindExportedRoutineByName @ 0x1407EBE40 (RtlFindExportedRoutineByName.c)
 */

PVOID __stdcall MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName)
{
  NTSTATUS i; // eax
  void *ExportedRoutineByName; // rbx
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  for ( i = RtlUnicodeStringToAnsiString(&DestinationString, SystemRoutineName, 1u);
        i < 0;
        i = RtlUnicodeStringToAnsiString(&DestinationString, SystemRoutineName, 1u) )
  {
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  ExportedRoutineByName = (void *)RtlFindExportedRoutineByName(PsNtosImageBase, DestinationString.Buffer);
  if ( !ExportedRoutineByName )
    ExportedRoutineByName = (void *)RtlFindExportedRoutineByName(PsHalImageBase, DestinationString.Buffer);
  RtlFreeAnsiString(&DestinationString);
  if ( ExportedRoutineByName && (int)MiMarkKernelCfgTarget() < 0 )
    return 0LL;
  return ExportedRoutineByName;
}
