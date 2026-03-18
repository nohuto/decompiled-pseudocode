/*
 * XREFs of ?Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0219940
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0215C70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::Initialize(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *(_OWORD *)((char *)this + 120) = xmmword_1C026B648;
  }
  *((_DWORD *)this + 34) = 0;
  return result;
}
