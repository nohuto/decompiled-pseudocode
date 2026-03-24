/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1403FCBA0
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094B010 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x14097285C (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x140973FA8 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
