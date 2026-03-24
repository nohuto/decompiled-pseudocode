/*
 * XREFs of ??$EraseIndexList@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@ParticleCollection@CParticleEmitterVisual@@AEAAXAEAV?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@@Z @ 0x1801DC614
 * Callers:
 *     ?EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801DFFCC (-EraseIndexList@ParticleCollection@CParticleEmitterVisual@@QEAAXAEBV-$vector@HV-$allocator@H@std.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>>(
        __int64 a1,
        __int64 *a2,
        char **a3)
{
  char *v3; // r11
  __int64 v4; // r10
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // xmm1_4
  int v11; // xmm2_4

  v3 = *a3;
  v4 = 0LL;
  v6 = (unsigned __int64)(a3[1] - *a3 + 3) >> 2;
  if ( *a3 > a3[1] )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      v7 = *(int *)v3;
      ++v4;
      result = *a2;
      v3 += 4;
      v9 = a2[1];
      v10 = *(_DWORD *)(*a2 + 8 * v7);
      v11 = *(_DWORD *)(*a2 + 8 * v7 + 4);
      *(_QWORD *)(*a2 + 8 * v7) = *(_QWORD *)(v9 - 8);
      *(_DWORD *)(v9 - 8) = v10;
      *(_DWORD *)(v9 - 4) = v11;
      a2[1] -= 8LL;
    }
    while ( v4 != v6 );
  }
  return result;
}
