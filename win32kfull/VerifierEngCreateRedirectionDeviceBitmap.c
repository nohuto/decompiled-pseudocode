/*
 * XREFs of VerifierEngCreateRedirectionDeviceBitmap @ 0x1C02A9770
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A923C (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateRedirectionDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (unsigned int)VerifierRandomFailure((__int64)dhsurf) )
    return 0LL;
  else
    return EngCreateRedirectionDeviceBitmap(dhsurf, sizl, iFormatCompat);
}
