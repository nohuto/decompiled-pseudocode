/*
 * XREFs of ?SetFloatProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0251020
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0006C90 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::SetFloatProperty(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r10d
  bool v6; // cl
  unsigned __int64 v7; // rdx

  v4 = 0;
  if ( a2 == 3 )
  {
    if ( *((float *)this + 36) != a3 )
    {
      *((float *)this + 36) = a3;
      v6 = 1;
      goto LABEL_9;
    }
    goto LABEL_7;
  }
  if ( a2 - 4 <= 5 )
  {
    v6 = 1;
    v7 = (a2 & 1) + 2 * ((unsigned __int64)(a2 - 4) >> 1);
    if ( *((float *)this + v7 + 30) != a3 )
    {
      *((float *)this + v7 + 30) = a3;
LABEL_9:
      *a4 = v6;
      return v4;
    }
LABEL_7:
    v6 = 0;
    goto LABEL_9;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
}
