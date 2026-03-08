/*
 * XREFs of VerifierEngCreatePalette @ 0x1C02A96D0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A923C (-VerifierRandomFailure@@YAHK@Z.c)
 */

HPALETTE __fastcall VerifierEngCreatePalette(
        __int64 iMode,
        ULONG cColors,
        ULONG *pulColors,
        FLONG flRed,
        FLONG flGreen,
        FLONG flBlue)
{
  ULONG v9; // ebp

  v9 = iMode;
  if ( (unsigned int)VerifierRandomFailure(iMode) )
    return 0LL;
  else
    return EngCreatePalette(v9, cColors, pulColors, flRed, flGreen, flBlue);
}
