/*
 * XREFs of RtlFreeNonVolatileToken @ 0x1405AD500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFreeNonVolatileToken(char a1)
{
  return (a1 & 1) == 0 ? 0xC000000D : 0;
}
