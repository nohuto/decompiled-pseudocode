/*
 * XREFs of NtGdiCancelDC @ 0x1C02C4760
 * Callers:
 *     <none>
 * Callees:
 *     GreCancelDC @ 0x1C02AC7D8 (GreCancelDC.c)
 */

__int64 __fastcall NtGdiCancelDC(__int64 a1)
{
  return GreCancelDC(a1);
}
