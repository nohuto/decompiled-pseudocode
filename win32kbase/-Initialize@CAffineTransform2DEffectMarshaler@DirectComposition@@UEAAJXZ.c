/*
 * XREFs of ?Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0250F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C024D3E0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::Initialize(
        DirectComposition::CAffineTransform2DEffectMarshaler *this)
{
  __int64 result; // rax

  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)((char *)this + 120) = _xmm;
    *((_DWORD *)this + 36) = 1065353216;
    result = 0LL;
    *((_QWORD *)this + 17) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  return result;
}
