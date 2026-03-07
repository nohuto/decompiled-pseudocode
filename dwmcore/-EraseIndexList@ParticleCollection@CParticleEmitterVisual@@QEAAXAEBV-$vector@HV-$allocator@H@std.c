__int64 __fastcall CParticleEmitterVisual::ParticleCollection::EraseIndexList(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int **v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int **v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int **v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int **v24; // r8
  __int64 v25; // rcx
  __int64 result; // rax

  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float3,std::allocator<Windows::Foundation::Numerics::float3>>(
    a1,
    (__int64 *)a1,
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
    v4,
    (_QWORD *)(a1 + 24),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float3,std::allocator<Windows::Foundation::Numerics::float3>>(
    v5,
    (__int64 *)(a1 + 48),
    v6);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
    v7,
    (__int64 *)(a1 + 72),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
    v8,
    (__int64 *)(a1 + 96),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
    v9,
    (_QWORD *)(a1 + 120),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>>(
    v10,
    (__int64 *)(a1 + 144),
    v11);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>>(
    v12,
    (__int64 *)(a1 + 168),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
    v13,
    (__int64 *)(a1 + 192),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
    v14,
    (__int64 *)(a1 + 216),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float3,std::allocator<Windows::Foundation::Numerics::float3>>(
    v15,
    (__int64 *)(a1 + 240),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
    v16,
    (_QWORD *)(a1 + 264),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
    v17,
    (__int64 *)(a1 + 288),
    v18);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float3,std::allocator<Windows::Foundation::Numerics::float3>>(
    v19,
    (__int64 *)(a1 + 312),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float3,std::allocator<Windows::Foundation::Numerics::float3>>(
    v20,
    (__int64 *)(a1 + 336),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
    v21,
    (__int64 *)(a1 + 360),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
    v22,
    (_QWORD *)(a1 + 384),
    (int **)a2);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>>(
    v23,
    (__int64 *)(a1 + 408),
    v24);
  CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float2,std::allocator<Windows::Foundation::Numerics::float2>>(
    v25,
    (__int64 *)(a1 + 432),
    (int **)a2);
  result = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
  *(_DWORD *)(a1 + 456) -= result;
  return result;
}
