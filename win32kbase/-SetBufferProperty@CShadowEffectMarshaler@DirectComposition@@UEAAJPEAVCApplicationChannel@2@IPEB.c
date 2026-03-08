/*
 * XREFs of ?SetBufferProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C024E370
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C024D490 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 */

__int64 __fastcall DirectComposition::CShadowEffectMarshaler::SetBufferProperty(
        DirectComposition::CShadowEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  __int64 v8; // rcx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 1 )
  {
    if ( a4 && a5 == 16 )
    {
      v8 = *(_QWORD *)((char *)this + 116) - *a4;
      if ( !v8 )
        v8 = *(_QWORD *)((char *)this + 124) - a4[1];
      if ( v8 )
      {
        *(_OWORD *)((char *)this + 116) = *(_OWORD *)a4;
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
