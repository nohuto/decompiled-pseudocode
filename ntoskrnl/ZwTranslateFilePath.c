/*
 * XREFs of ZwTranslateFilePath @ 0x140415D90
 * Callers:
 *     DifZwTranslateFilePathWrapper @ 0x1405F5A60 (DifZwTranslateFilePathWrapper.c)
 *     BiTranslateFilePath @ 0x14082F6B4 (BiTranslateFilePath.c)
 *     ExpSetBootEntry @ 0x1409FA390 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FAB20 (ExpSetDriverEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x140A5CC24 (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTranslateFilePath(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
