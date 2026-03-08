/*
 * XREFs of ?Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z @ 0x1801C2EA0
 * Callers:
 *     ?InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ @ 0x1801C1C18 (-InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ.c)
 * Callees:
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x18001DF68 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     ?reserve@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C7F94 (-reserve@-$vector@Ufloat2@Numerics@Foundation@Windows@@V-$allocator@Ufloat2@Numerics@Foundation@.c)
 *     ?reserve@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C7FD0 (-reserve@-$vector@Ufloat3@Numerics@Foundation@Windows@@V-$allocator@Ufloat3@Numerics@Foundation@.c)
 *     ?reserve@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801C8028 (-reserve@-$vector@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics@Foundation@.c)
 */

void __fastcall CParticleEmitterVisual::ParticleCollection::Reserve(
        CParticleEmitterVisual::ParticleCollection *this,
        int a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  std::vector<Windows::Foundation::Numerics::float3>::reserve(this, a2);
  std::vector<Windows::Foundation::Numerics::float4>::reserve((char *)this + 24, v2);
  std::vector<Windows::Foundation::Numerics::float3>::reserve((char *)this + 48, v2);
  std::vector<float>::reserve((_QWORD *)this + 9, v2);
  std::vector<float>::reserve((_QWORD *)this + 12, v2);
  std::vector<Windows::Foundation::Numerics::float4>::reserve((char *)this + 120, v2);
  std::vector<Windows::Foundation::Numerics::float2>::reserve((char *)this + 144, v2);
  std::vector<Windows::Foundation::Numerics::float2>::reserve((char *)this + 168, v2);
  std::vector<float>::reserve((_QWORD *)this + 24, v2);
  std::vector<float>::reserve((_QWORD *)this + 27, v2);
  std::vector<Windows::Foundation::Numerics::float3>::reserve((char *)this + 240, v2);
  std::vector<Windows::Foundation::Numerics::float4>::reserve((char *)this + 264, v2);
  std::vector<float>::reserve((_QWORD *)this + 36, v2);
  std::vector<Windows::Foundation::Numerics::float3>::reserve((char *)this + 312, v2);
  std::vector<Windows::Foundation::Numerics::float3>::reserve((char *)this + 336, v2);
  std::vector<float>::reserve((_QWORD *)this + 45, v2);
  std::vector<Windows::Foundation::Numerics::float4>::reserve((char *)this + 384, v2);
  std::vector<Windows::Foundation::Numerics::float2>::reserve((char *)this + 408, v2);
  std::vector<Windows::Foundation::Numerics::float2>::reserve((char *)this + 432, v2);
}
