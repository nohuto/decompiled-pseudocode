/*
 * XREFs of BiZwDeleteValueKey @ 0x1403905D4
 * Callers:
 *     BiDeleteRegistryValue @ 0x14083089C (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
