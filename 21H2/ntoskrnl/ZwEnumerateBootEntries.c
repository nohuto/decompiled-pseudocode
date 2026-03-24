/*
 * XREFs of ZwEnumerateBootEntries @ 0x1403FBF80
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094B010 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x140971998 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x140973FA8 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateBootEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
