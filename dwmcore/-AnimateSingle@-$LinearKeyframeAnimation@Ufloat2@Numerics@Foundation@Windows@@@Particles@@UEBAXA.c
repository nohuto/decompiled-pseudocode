/*
 * XREFs of ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x18023CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$span@M$0?0@gsl@@QEBAAEAM_K@Z @ 0x18023CD1C (--A-$span@M$0-0@gsl@@QEBAAEAM_K@Z.c)
 *     ?GetValueAt@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA?AUfloat2@Numerics@Foundation@Windows@@MAEBV?$span@M$0?0@gsl@@AEAV78@@Z @ 0x18023D5C8 (-GetValueAt@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@QEBA-AUfl.c)
 */

__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::AnimateSingle(
        int a1,
        gsl::details *a2,
        int a3,
        __int64 a4)
{
  int v7; // r8d
  __int64 result; // rax
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  gsl::span<float,-1>::operator[](a2);
  Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::GetValueAt(
    a1,
    (unsigned int)&v9,
    v7,
    a3,
    a4);
  result = v9;
  **(_QWORD **)(a4 + 8) = v9;
  return result;
}
