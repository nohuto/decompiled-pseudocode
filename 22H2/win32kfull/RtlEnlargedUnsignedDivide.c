/*
 * XREFs of RtlEnlargedUnsignedDivide @ 0x1C02F482C
 * Callers:
 *     ?vUpdateStyleState@XCLIPOBJ@@QEAAXXZ @ 0x1C02F46D0 (-vUpdateStyleState@XCLIPOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlEnlargedUnsignedDivide(ULARGE_INTEGER Dividend, ULONG Divisor, PULONG Remainder)
{
  if ( Remainder )
    *Remainder = Dividend.QuadPart % Divisor;
  return Dividend.QuadPart / Divisor;
}
