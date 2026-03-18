/*
 * XREFs of ZwTranslateFilePath @ 0x14041F160
 * Callers:
 *     DifZwTranslateFilePathWrapper @ 0x140628230 (DifZwTranslateFilePathWrapper.c)
 *     ExpSetBootEntry @ 0x1409FD4A0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FDC88 (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x140A20C90 (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x140A21AB4 (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTranslateFilePath(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
