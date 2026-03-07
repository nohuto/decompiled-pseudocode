__int64 __fastcall Particles::LinearKeyframeAnimation<float>::AnimateSingle(
        __int64 a1,
        gsl::details *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 result; // rax
  float ValueAt; // [rsp+48h] [rbp+20h]

  gsl::span<float,-1>::operator[](a2);
  ValueAt = Particles::LinearKeyframeAnimation<float>::GetValueAt(a1, v7, a3, a4);
  result = LODWORD(ValueAt);
  **(float **)(a4 + 8) = ValueAt;
  return result;
}
