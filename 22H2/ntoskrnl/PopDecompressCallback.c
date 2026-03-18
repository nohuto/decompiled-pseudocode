/*
 * XREFs of PopDecompressCallback @ 0x140AA23D0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x140AA3C40 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
