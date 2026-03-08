/*
 * XREFs of ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x18023CE70
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$span@M$0?0@gsl@@QEBAAEAM_K@Z @ 0x18023CD1C (--A-$span@M$0-0@gsl@@QEBAAEAM_K@Z.c)
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat4@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@AEAV78@@Z @ 0x18023D844 (-GetValueAt@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 */

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
