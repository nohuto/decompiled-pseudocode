_OWORD *__fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::AnimateSingle(
        int a1,
        gsl::details *a2,
        int a3,
        __int64 a4)
{
  int v7; // r8d
  _OWORD *result; // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  gsl::span<float,-1>::operator[](a2);
  Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::GetValueAt(
    a1,
    (unsigned int)&v9,
    v7,
    a3,
    a4);
  result = *(_OWORD **)(a4 + 8);
  *result = v9;
  return result;
}
