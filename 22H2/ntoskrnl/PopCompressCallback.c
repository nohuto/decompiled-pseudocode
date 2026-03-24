/*
 * XREFs of PopCompressCallback @ 0x140994570
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x140994594 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
