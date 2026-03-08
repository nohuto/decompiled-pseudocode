/*
 * XREFs of ?SetIntegerProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C02510A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C024D500 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::SetIntegerProperty(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
      *((_DWORD *)this + 29) = a4;
    else
      return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  else
  {
    *((_DWORD *)this + 28) = a4;
  }
  return v5;
}
