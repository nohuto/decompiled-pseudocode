/*
 * XREFs of ZwTranslateFilePath @ 0x1403FDC60
 * Callers:
 *     ExpSetBootEntry @ 0x140951100 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409518F4 (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x140972D28 (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x140973A44 (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTranslateFilePath(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
