/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1403FC220
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094B060 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x1409728AC (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x140973FF8 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
