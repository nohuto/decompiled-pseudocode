/*
 * XREFs of ?SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0250FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C024D490 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 *     ?SetMatrixHelper@CAffineTransform2DEffectMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEBUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x1C02510E4 (-SetMatrixHelper@CAffineTransform2DEffectMarshaler@DirectComposition@@QEAAXPEAVCApplicationChann.c)
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::SetBufferProperty(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const struct D2D_MATRIX_3X2_F *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 2 )
  {
    if ( a5 == 24 )
      DirectComposition::CAffineTransform2DEffectMarshaler::SetMatrixHelper(this, a2, a4, a6);
    else
      return (unsigned int)-1073741811;
  }
  else
  {
    return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  }
  return v6;
}
