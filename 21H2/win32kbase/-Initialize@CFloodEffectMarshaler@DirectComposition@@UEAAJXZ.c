/*
 * XREFs of ?Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0217630
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0215C70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CFloodEffectMarshaler::Initialize(DirectComposition::CFloodEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *(_OWORD *)((char *)this + 120) = xmmword_1C026B638;
  }
  return result;
}
