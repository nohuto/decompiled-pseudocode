/*
 * XREFs of VerifierEngCreateRedirectionDeviceBitmap @ 0x1C02A7090
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A6B60 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateRedirectionDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (unsigned int)VerifierRandomFailure((__int64)dhsurf) )
    return 0LL;
  else
    return EngCreateRedirectionDeviceBitmap(dhsurf, sizl, iFormatCompat);
}
