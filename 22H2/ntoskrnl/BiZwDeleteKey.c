/*
 * XREFs of BiZwDeleteKey @ 0x14038C948
 * Callers:
 *     BiDeleteKey @ 0x140779860 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1403FB4A0 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
