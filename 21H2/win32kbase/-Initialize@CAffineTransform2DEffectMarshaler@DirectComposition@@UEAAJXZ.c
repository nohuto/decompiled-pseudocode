/*
 * XREFs of ?Initialize@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0219B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0215C70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::Initialize(
        DirectComposition::CAffineTransform2DEffectMarshaler *this)
{
  __int64 result; // rax

  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *((_OWORD *)this + 8) = _xmm;
    *((_DWORD *)this + 38) = 1065353216;
    result = 0LL;
    *((_QWORD *)this + 18) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  return result;
}
