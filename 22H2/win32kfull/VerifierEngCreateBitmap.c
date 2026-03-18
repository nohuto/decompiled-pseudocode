/*
 * XREFs of VerifierEngCreateBitmap @ 0x1C02A6E40
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A6B60 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateBitmap(SIZEL sizl, LONG lWidth, ULONG iFormat, FLONG fl, PVOID pvBits)
{
  if ( (unsigned int)VerifierRandomFailure(*(_QWORD *)&sizl) )
    return 0LL;
  else
    return EngCreateBitmap(sizl, lWidth, iFormat, fl, pvBits);
}
