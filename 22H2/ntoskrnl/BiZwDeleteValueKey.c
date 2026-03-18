/*
 * XREFs of BiZwDeleteValueKey @ 0x140374614
 * Callers:
 *     BiDeleteRegistryValue @ 0x1408097F4 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x14041C240 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
