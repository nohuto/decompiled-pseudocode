/*
 * XREFs of RtlFreeAnsiString @ 0x140756D50
 * Callers:
 *     EtwpWriteProcessEvent @ 0x1407555EC (EtwpWriteProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x140756D80 (MmGetSystemRoutineAddress.c)
 *     EtwpTraceProcessRundown @ 0x140827CF4 (EtwpTraceProcessRundown.c)
 *     KsepGetModuleInfoByName @ 0x140977654 (KsepGetModuleInfoByName.c)
 *     MiLoadUserSymbols @ 0x140A30B64 (MiLoadUserSymbols.c)
 *     ViThunkHookExportAddress @ 0x140ADCC48 (ViThunkHookExportAddress.c)
 * Callees:
 *     ExFreePool @ 0x140AAFCC0 (ExFreePool.c)
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
