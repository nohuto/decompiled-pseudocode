/*
 * XREFs of ?Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0215AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0215C70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CGaussianBlurEffectMarshaler::Initialize(
        DirectComposition::CGaussianBlurEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_DWORD *)this + 30) = 1077936128;
  }
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 31) = 2;
  return result;
}
