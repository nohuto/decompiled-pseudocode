/*
 * XREFs of ZwSetBootOptions @ 0x1403FD6C0
 * Callers:
 *     BiSetBootOptions @ 0x140972D1C (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
