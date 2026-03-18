/*
 * XREFs of ZwEnumerateBootEntries @ 0x14041C340
 * Callers:
 *     DifZwEnumerateBootEntriesWrapper @ 0x1405EFEA0 (DifZwEnumerateBootEntriesWrapper.c)
 *     BiEnumerateBootEntries @ 0x140809560 (BiEnumerateBootEntries.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F7288 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x140A5FEA4 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateBootEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
