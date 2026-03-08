/*
 * XREFs of RtlEnlargedUnsignedDivide @ 0x1C02F661C
 * Callers:
 *     ?vUpdateStyleState@XCLIPOBJ@@QEAAXXZ @ 0x1C02F64C0 (-vUpdateStyleState@XCLIPOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlEnlargedUnsignedDivide(ULARGE_INTEGER Dividend, ULONG Divisor, PULONG Remainder)
{
  if ( Remainder )
    *Remainder = Dividend.QuadPart % Divisor;
  return Dividend.QuadPart / Divisor;
}
