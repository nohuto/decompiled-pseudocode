/*
 * XREFs of CmpTransGetTransPtr @ 0x140872DEC
 * Callers:
 *     CmpTransIsTransActive @ 0x1404EC99C (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
