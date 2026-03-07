__int64 __fastcall CParticleEmitterVisual::ParticleCollection::EraseIndexList<Windows::Foundation::Numerics::float3,std::allocator<Windows::Foundation::Numerics::float3>>(
        __int64 a1,
        __int64 *a2,
        int **a3)
{
  int *v3; // r11
  int *i; // r10
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // xmm1_8
  int v10; // edx
  __int64 result; // rax

  v3 = a3[1];
  for ( i = *a3; i != v3; ++i )
  {
    v6 = a2[1];
    v7 = *a2;
    v8 = 3LL * *i;
    v9 = *(_QWORD *)(*a2 + 12LL * *i);
    v10 = *(_DWORD *)(*a2 + 12LL * *i + 8);
    *(_QWORD *)(v7 + 4 * v8) = *(_QWORD *)(v6 - 12);
    result = *(unsigned int *)(v6 - 4);
    *(_DWORD *)(v7 + 4 * v8 + 8) = result;
    *(_QWORD *)(v6 - 12) = v9;
    *(_DWORD *)(v6 - 4) = v10;
    a2[1] -= 12LL;
  }
  return result;
}
