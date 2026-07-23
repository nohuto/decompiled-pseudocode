/*
 * XREFs of ZwQueryBootOptions @ 0x1403FCDA0
 * Callers:
 *     BiQueryBootOptions @ 0x140972B14 (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140974188 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
