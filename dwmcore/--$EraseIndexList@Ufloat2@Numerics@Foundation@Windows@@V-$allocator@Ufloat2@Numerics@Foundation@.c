/*
 * XREFs of ??$EraseIndexList@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@ParticleCollection@CParticleEmitterVisual@@AEAAXAEAV?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@@Z @ 0x18023E4B8
 * Callers:
 *     ?EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x180241F14 (-EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV-$vector@HV-$allocator@H@std.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>>(
        __int64 a1,
        __int64 *a2,
        int **a3)
{
  int *v3; // r10
  int *i; // r9
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // r8
  int v8; // xmm1_4
  int v9; // xmm2_4

  v3 = a3[1];
  for ( i = *a3; i != v3; ++i )
  {
    v5 = *i;
    result = *a2;
    v7 = a2[1];
    v8 = *(_DWORD *)(*a2 + 8 * v5);
    v9 = *(_DWORD *)(*a2 + 8 * v5 + 4);
    *(_QWORD *)(*a2 + 8 * v5) = *(_QWORD *)(v7 - 8);
    *(_DWORD *)(v7 - 8) = v8;
    *(_DWORD *)(v7 - 4) = v9;
    a2[1] -= 8LL;
  }
  return result;
}
