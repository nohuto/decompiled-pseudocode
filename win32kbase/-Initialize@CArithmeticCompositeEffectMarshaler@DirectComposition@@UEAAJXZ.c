/*
 * XREFs of ?Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0250D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C024D3E0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::Initialize(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_OWORD *)this + 7) = xmmword_1C02A5EC8;
  }
  *((_DWORD *)this + 32) = 0;
  return result;
}
