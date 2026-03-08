/*
 * XREFs of RtlEnlargedUnsignedDivide @ 0x14056AD74
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140A9BEC0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlEnlargedUnsignedDivide(ULARGE_INTEGER Dividend, ULONG Divisor, PULONG Remainder)
{
  if ( Remainder )
    *Remainder = Dividend.QuadPart % 0x989680;
  return Dividend.QuadPart / 0x989680;
}
