/*
 * XREFs of SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140742BAC
 * Callers:
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 * Callees:
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x14074339C (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepReleaseTokenSecurityAttributesAndOperationsInformation(PVOID *P, char a2)
{
  if ( a2 )
  {
    ExFreePoolWithTag(P[1], 0);
    if ( *P )
      SepFreeCapturedTokenSecurityAttributesInformation(*P);
    ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
