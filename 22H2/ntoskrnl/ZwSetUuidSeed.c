/*
 * XREFs of ZwSetUuidSeed @ 0x1403FD080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetUuidSeed(PCHAR Seed)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Seed);
}
