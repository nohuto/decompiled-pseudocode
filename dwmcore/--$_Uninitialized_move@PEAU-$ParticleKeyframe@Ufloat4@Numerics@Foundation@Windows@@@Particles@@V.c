__int64 __fastcall std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rax
  int v4; // ecx

  for ( i = a1; i != a2; a3 += 28LL )
  {
    *(_OWORD *)a3 = *(_OWORD *)i;
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(i + 16);
    v4 = *(_DWORD *)(i + 24);
    i += 28LL;
    *(_DWORD *)(a3 + 24) = v4;
  }
  return a3;
}
