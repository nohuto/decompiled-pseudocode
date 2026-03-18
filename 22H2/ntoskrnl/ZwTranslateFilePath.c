/*
 * XREFs of ZwTranslateFilePath @ 0x14041E120
 * Callers:
 *     DifZwTranslateFilePathWrapper @ 0x1405F7F10 (DifZwTranslateFilePathWrapper.c)
 *     BiTranslateFilePath @ 0x140808558 (BiTranslateFilePath.c)
 *     ExpSetBootEntry @ 0x1409FD220 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FD9B0 (ExpSetDriverEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x140A5F924 (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTranslateFilePath(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
