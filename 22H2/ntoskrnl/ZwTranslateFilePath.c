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

__int64 __fastcall ZwTranslateFilePath(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
