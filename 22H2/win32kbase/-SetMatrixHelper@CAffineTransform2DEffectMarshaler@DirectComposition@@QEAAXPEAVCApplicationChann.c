/*
 * XREFs of ?SetMatrixHelper@CAffineTransform2DEffectMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEBUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x1C0212794
 * Callers:
 *     ?SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0212670 (-SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 * Callees:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00656B0 (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::SetMatrixHelper(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        bool *a4)
{
  bool v5; // r11
  __int64 v6; // r10

  v5 = *a4;
  v6 = *((_QWORD *)this + 15) - *(_QWORD *)a3;
  if ( !v6 )
  {
    v6 = *((_QWORD *)this + 16) - *((_QWORD *)a3 + 1);
    if ( !v6 )
      v6 = *((_QWORD *)this + 17) - *((_QWORD *)a3 + 2);
  }
  if ( v6 )
  {
    v5 = 1;
    *(_OWORD *)((char *)this + 120) = *(_OWORD *)a3;
    *((_QWORD *)this + 17) = *((_QWORD *)a3 + 2);
  }
  if ( *((_QWORD *)this + 5) )
  {
    DirectComposition::CApplicationChannel::UnbindAllAnimations(a2, this);
    v5 = 1;
  }
  *a4 = v5;
}
