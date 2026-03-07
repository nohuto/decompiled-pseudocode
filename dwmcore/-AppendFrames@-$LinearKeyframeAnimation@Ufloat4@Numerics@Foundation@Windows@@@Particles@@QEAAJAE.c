__int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::AppendFrames(
        __int64 *a1,
        _QWORD *a2)
{
  int *v2; // rbx
  int *v4; // rsi
  bool v5; // zf
  int v6; // xmm0_4
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // xmm1_8
  _BYTE v11[24]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-10h]

  v2 = (int *)a2[1];
  v4 = &v2[6 * *a2];
  while ( v2 != v4 )
  {
    v5 = v2[5] == 1;
    v6 = *v2;
    *(_OWORD *)&v11[4] = *(_OWORD *)(v2 + 1);
    *(_DWORD *)v11 = v6;
    if ( v5 )
    {
      *(_DWORD *)&v11[20] = 1065353216;
LABEL_4:
      v12 = 0;
      goto LABEL_5;
    }
    *(_DWORD *)&v11[20] = 0;
    if ( v2[5] != 2 )
      goto LABEL_4;
    v12 = 1065353216;
LABEL_5:
    v7 = a1[2];
    if ( v7 == a1[3] )
    {
      std::vector<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>::_Emplace_reallocate<Particles::ParticleKeyframe<Windows::Foundation::Numerics::float4>>(
        a1 + 1,
        v7,
        (__int64)v11);
    }
    else
    {
      v8 = v12;
      v9 = *(_QWORD *)&v11[16];
      *(_OWORD *)v7 = *(_OWORD *)v11;
      *(_QWORD *)(v7 + 16) = v9;
      *(_DWORD *)(v7 + 24) = v8;
      a1[2] += 28LL;
    }
    v2 += 6;
  }
  return 0LL;
}
