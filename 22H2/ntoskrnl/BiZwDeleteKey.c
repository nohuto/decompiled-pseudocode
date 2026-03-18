/*
 * XREFs of BiZwDeleteKey @ 0x140374304
 * Callers:
 *     BiDeleteKey @ 0x140805E5C (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x14041C1E0 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
