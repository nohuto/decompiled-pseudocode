/*
 * XREFs of ?SetIntegerProperty@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C024D300
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C024D500 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 */

__int64 __fastcall DirectComposition::CGaussianBlurEffectMarshaler::SetIntegerProperty(
        DirectComposition::CGaussianBlurEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  if ( a3 == 1 )
  {
    *((_DWORD *)this + 29) = a4;
  }
  else
  {
    if ( a3 != 2 )
      return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    *((_DWORD *)this + 30) = a4;
  }
  *a5 = 1;
  return 0LL;
}
