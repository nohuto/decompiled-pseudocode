/*
 * XREFs of ZwTranslateFilePath @ 0x1403FD2E0
 * Callers:
 *     ExpSetBootEntry @ 0x140951150 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140951944 (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x140972D78 (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x140973A94 (SiBootEntryGetNtFilePath.c)
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
