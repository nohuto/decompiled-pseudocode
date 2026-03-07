__int64 __fastcall std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r10

  v4 = 0xCCCCCCCCCCCCCCCLL;
  v7 = (a2 - *a1) / 20;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 2);
  if ( v8 == 0xCCCCCCCCCCCCCCCLL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 2);
  v11 = v10 >> 1;
  if ( v10 <= 0xCCCCCCCCCCCCCCCLL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<20>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = v13 + 20 * v7;
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(a3 + 16);
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>>(
      v17,
      a2,
      v13);
    v16 = a1[1];
    v14 = v15 + 20;
    v17 = a2;
  }
  std::_Uninitialized_move<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2> *,std::allocator<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>>(
    v17,
    v16,
    v14);
  std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Change_array(a1, v18, v9, v4);
  return v15;
}
