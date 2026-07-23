/*
 * XREFs of ZwEnumerateBootEntries @ 0x1403FB600
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094B060 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x1409719E8 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x140973FF8 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
