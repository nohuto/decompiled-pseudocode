/*
 * XREFs of PopCompressCallback @ 0x140AA2010
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestWrite @ 0x140AA4070 (PopRequestWrite.c)
 */

__int64 __fastcall PopCompressCallback(ULONG_PTR a1)
{
  return PopRequestWrite(a1);
}
