/*
 * XREFs of SepIsLpacCapabilitySid @ 0x14068AC08
 * Callers:
 *     SepCheckCapabilities @ 0x14068AA90 (SepCheckCapabilities.c)
 * Callees:
 *     RtlEqualSid @ 0x1403459F0 (RtlEqualSid.c)
 */

BOOLEAN __fastcall SepIsLpacCapabilitySid(PSID Sid1)
{
  PSID **v2; // rdi
  unsigned int v3; // ebx
  BOOLEAN result; // al

  v2 = (PSID **)SeLpacCapabilitySids;
  v3 = 0;
  while ( 1 )
  {
    result = RtlEqualSid(Sid1, **v2);
    if ( result )
      break;
    ++v3;
    ++v2;
    if ( v3 >= 0x12 )
      return result;
  }
  return 1;
}
