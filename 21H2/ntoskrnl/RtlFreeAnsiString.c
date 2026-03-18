/*
 * XREFs of RtlFreeAnsiString @ 0x14070AFC0
 * Callers:
 *     EtwpWriteProcessEvent @ 0x14070AE08 (EtwpWriteProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x140759130 (MmGetSystemRoutineAddress.c)
 *     EtwpTraceProcessRundown @ 0x1408149AC (EtwpTraceProcessRundown.c)
 *     KsepGetModuleInfoByName @ 0x140964D68 (KsepGetModuleInfoByName.c)
 *     MiLoadUserSymbols @ 0x14096CCF8 (MiLoadUserSymbols.c)
 *     ViThunkHookExportAddress @ 0x140A94030 (ViThunkHookExportAddress.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall RtlFreeAnsiString(PANSI_STRING AnsiString)
{
  ULONG v1; // edx
  char *Buffer; // rcx

  Buffer = AnsiString->Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, v1);
    *AnsiString = 0LL;
  }
}
