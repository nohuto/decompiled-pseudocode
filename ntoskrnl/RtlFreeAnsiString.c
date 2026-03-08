/*
 * XREFs of RtlFreeAnsiString @ 0x1407EA820
 * Callers:
 *     EtwpWriteProcessEvent @ 0x1407E9594 (EtwpWriteProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x1407EA850 (MmGetSystemRoutineAddress.c)
 *     EtwpTraceProcessRundown @ 0x14080E0E4 (EtwpTraceProcessRundown.c)
 *     KsepGetModuleInfoByName @ 0x1409745B4 (KsepGetModuleInfoByName.c)
 *     MiLoadUserSymbols @ 0x140A2DE34 (MiLoadUserSymbols.c)
 *     ViThunkHookExportAddress @ 0x140AD8C48 (ViThunkHookExportAddress.c)
 * Callees:
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

void __stdcall RtlFreeAnsiString(PANSI_STRING AnsiString)
{
  char *Buffer; // rcx

  Buffer = AnsiString->Buffer;
  if ( Buffer )
  {
    ExFreePool(Buffer);
    *AnsiString = 0LL;
  }
}
