/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1403FCD80
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094B1E0 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x140972A3C (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x140974188 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
