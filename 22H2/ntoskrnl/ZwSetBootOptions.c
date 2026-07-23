/*
 * XREFs of ZwSetBootOptions @ 0x1403FCB60
 * Callers:
 *     BiSetBootOptions @ 0x140972B8C (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
