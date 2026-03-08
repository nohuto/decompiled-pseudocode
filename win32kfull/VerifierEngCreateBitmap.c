/*
 * XREFs of VerifierEngCreateBitmap @ 0x1C02A9520
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A923C (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateBitmap(SIZEL sizl, LONG lWidth, ULONG iFormat, FLONG fl, PVOID pvBits)
{
  if ( (unsigned int)VerifierRandomFailure(*(_QWORD *)&sizl) )
    return 0LL;
  else
    return EngCreateBitmap(sizl, lWidth, iFormat, fl, pvBits);
}
