ULONG __stdcall RtlEnlargedUnsignedDivide(ULARGE_INTEGER Dividend, ULONG Divisor, PULONG Remainder)
{
  if ( Remainder )
    *Remainder = Dividend.QuadPart % 0x989680;
  return Dividend.QuadPart / 0x989680;
}
