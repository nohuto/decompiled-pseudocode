__int64 __fastcall Particles::LinearKeyframeAnimation<float>::AppendFrames(char **a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  bool v5; // zf
  char *v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[1];
  v4 = v2 + 24LL * *a2;
  while ( v2 != v4 )
  {
    v5 = *(_DWORD *)(v2 + 20) == 1;
    *(_QWORD *)&v8 = *(_QWORD *)v2;
    if ( v5 )
    {
      DWORD2(v8) = 1065353216;
LABEL_4:
      HIDWORD(v8) = 0;
      goto LABEL_5;
    }
    DWORD2(v8) = 0;
    if ( *(_DWORD *)(v2 + 20) != 2 )
      goto LABEL_4;
    HIDWORD(v8) = 1065353216;
LABEL_5:
    v6 = a1[2];
    if ( v6 == a1[3] )
    {
      std::vector<Particles::ParticleKeyframe<float>>::_Emplace_reallocate<Particles::ParticleKeyframe<float>>(
        a1 + 1,
        v6,
        &v8);
    }
    else
    {
      *(_OWORD *)v6 = v8;
      a1[2] += 16;
    }
    v2 += 24LL;
  }
  return 0LL;
}
