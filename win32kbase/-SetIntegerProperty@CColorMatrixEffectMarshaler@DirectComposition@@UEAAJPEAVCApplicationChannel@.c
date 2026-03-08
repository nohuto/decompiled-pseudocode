/*
 * XREFs of ?SetIntegerProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C024DFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C024D500 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 */

__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::SetIntegerProperty(
        DirectComposition::CColorMatrixEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  if ( a3 == 1 )
  {
    *((_DWORD *)this + 48) = a4;
  }
  else
  {
    if ( a3 != 2 )
      return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    *((_DWORD *)this + 49) = a4;
  }
  *a5 = 1;
  return 0LL;
}
