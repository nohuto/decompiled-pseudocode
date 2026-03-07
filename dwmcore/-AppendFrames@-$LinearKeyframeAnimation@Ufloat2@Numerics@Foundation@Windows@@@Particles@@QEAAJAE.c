__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float2>::AppendFrames(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  bool v5; // zf
  __int64 v6; // rdx
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+58h] [rbp+10h]

  v2 = a2[1];
  v4 = v2 + 24LL * *a2;
  while ( v2 != v4 )
  {
    v5 = *(_DWORD *)(v2 + 20) == 1;
    v11 = *(_QWORD *)(v2 + 4);
    LODWORD(v9) = *(_DWORD *)v2;
    *(_QWORD *)((char *)&v9 + 4) = v11;
    if ( v5 )
    {
      HIDWORD(v9) = 1065353216;
LABEL_4:
      v10 = 0;
      goto LABEL_5;
    }
    HIDWORD(v9) = 0;
    if ( *(_DWORD *)(v2 + 20) != 2 )
      goto LABEL_4;
    v10 = 1065353216;
LABEL_5:
    v6 = a1[2];
    if ( v6 == a1[3] )
    {
      std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float2>>(
        a1 + 1,
        v6,
        (__int64)&v9);
    }
    else
    {
      v7 = v10;
      *(_OWORD *)v6 = v9;
      *(_DWORD *)(v6 + 16) = v7;
      a1[2] += 20LL;
    }
    v2 += 24LL;
  }
  return 0LL;
}
