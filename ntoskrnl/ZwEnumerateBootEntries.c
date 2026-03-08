/*
 * XREFs of ZwEnumerateBootEntries @ 0x140413FB0
 * Callers:
 *     DifZwEnumerateBootEntriesWrapper @ 0x1405ED9F0 (DifZwEnumerateBootEntriesWrapper.c)
 *     BiEnumerateBootEntries @ 0x140830608 (BiEnumerateBootEntries.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F43F8 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x140A5D1A4 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateBootEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
