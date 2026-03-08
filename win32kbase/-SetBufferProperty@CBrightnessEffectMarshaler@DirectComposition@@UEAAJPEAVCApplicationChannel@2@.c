/*
 * XREFs of ?SetBufferProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C024DB10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C024D490 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 */

__int64 __fastcall DirectComposition::CBrightnessEffectMarshaler::SetBufferProperty(
        DirectComposition::CBrightnessEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  __int64 v7; // rdx

  v6 = 0;
  *a6 = 0;
  if ( a3 < 2 )
  {
    if ( a4 && a5 == 8 )
    {
      v7 = a3 != 0 ? 8 : 0;
      if ( *(_QWORD *)((char *)this + v7 + 112) != *a4 )
      {
        *(_QWORD *)((char *)this + v7 + 112) = *a4;
        *a6 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  }
  return v6;
}
