/*
 * XREFs of ZwEnumerateBootEntries @ 0x1403FB600
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094B060 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x1409719E8 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x140973FF8 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateBootEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
