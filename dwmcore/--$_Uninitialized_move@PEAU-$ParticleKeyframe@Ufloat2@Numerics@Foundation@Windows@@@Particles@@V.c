__int64 __fastcall std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rax
  int v4; // ecx

  for ( i = a1; i != a2; a3 += 20LL )
  {
    *(_OWORD *)a3 = *(_OWORD *)i;
    v4 = *(_DWORD *)(i + 16);
    i += 20LL;
    *(_DWORD *)(a3 + 16) = v4;
  }
  return a3;
}
