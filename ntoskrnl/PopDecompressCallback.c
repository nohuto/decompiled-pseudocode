/*
 * XREFs of PopDecompressCallback @ 0x140A9F1A0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestRead @ 0x140AA0A10 (PopRequestRead.c)
 */

__int64 __fastcall PopDecompressCallback(ULONG_PTR a1)
{
  return PopRequestRead(a1);
}
