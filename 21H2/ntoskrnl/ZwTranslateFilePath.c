/*
 * XREFs of ZwTranslateFilePath @ 0x1403FDE40
 * Callers:
 *     ExpSetBootEntry @ 0x1409512D0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140951AC4 (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x140972F08 (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x140973C24 (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        PULONG OutputFilePathLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InputFilePath);
}
