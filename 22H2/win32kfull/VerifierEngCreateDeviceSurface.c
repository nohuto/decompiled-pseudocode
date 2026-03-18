/*
 * XREFs of VerifierEngCreateDeviceSurface @ 0x1C02A6F40
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A6B60 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HSURF __fastcall VerifierEngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (unsigned int)VerifierRandomFailure((__int64)dhsurf) )
    return 0LL;
  else
    return EngCreateDeviceSurface(dhsurf, sizl, iFormatCompat);
}
