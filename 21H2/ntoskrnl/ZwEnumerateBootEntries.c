/*
 * XREFs of ZwEnumerateBootEntries @ 0x14041D3E0
 * Callers:
 *     DifZwEnumerateBootEntriesWrapper @ 0x14061FF00 (DifZwEnumerateBootEntriesWrapper.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F7390 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x140A1F8F4 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x140A22034 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateBootEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
