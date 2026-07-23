/*
 * XREFs of ZwQueryBootOptions @ 0x1403FC240
 * Callers:
 *     BiQueryBootOptions @ 0x140972984 (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140973FF8 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
