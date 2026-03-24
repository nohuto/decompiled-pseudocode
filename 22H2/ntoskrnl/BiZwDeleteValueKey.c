/*
 * XREFs of BiZwDeleteValueKey @ 0x14039AF48
 * Callers:
 *     BiDeleteRegistryValue @ 0x1407820E4 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1403FB500 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
