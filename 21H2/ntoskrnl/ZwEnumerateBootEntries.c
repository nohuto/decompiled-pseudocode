/*
 * XREFs of ZwEnumerateBootEntries @ 0x1403FC160
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094B1E0 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x140971B78 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x140974188 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
