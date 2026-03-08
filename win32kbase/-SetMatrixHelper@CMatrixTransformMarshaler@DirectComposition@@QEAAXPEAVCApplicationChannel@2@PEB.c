/*
 * XREFs of ?SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEBUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x1C000B61C
 * Callers:
 *     ?SetBufferProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C000B5E0 (-SetBufferProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 * Callees:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C005B1EC (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CMatrixTransformMarshaler::SetMatrixHelper(
        DirectComposition::CMatrixTransformMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        bool *a4)
{
  bool v5; // r11
  __int64 v6; // r10

  v5 = *a4;
  v6 = *((_QWORD *)this + 9) - *(_QWORD *)a3;
  if ( !v6 )
  {
    v6 = *((_QWORD *)this + 10) - *((_QWORD *)a3 + 1);
    if ( !v6 )
      v6 = *((_QWORD *)this + 11) - *((_QWORD *)a3 + 2);
  }
  if ( v6 )
  {
    v5 = 1;
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)a3;
    *((_QWORD *)this + 11) = *((_QWORD *)a3 + 2);
  }
  if ( *((_QWORD *)this + 5) )
  {
    DirectComposition::CApplicationChannel::UnbindAllAnimations(a2, this);
    v5 = 1;
  }
  *a4 = v5;
}
