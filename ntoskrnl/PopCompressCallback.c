/*
 * XREFs of PopCompressCallback @ 0x140A9EDE0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x140AA0E40 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
