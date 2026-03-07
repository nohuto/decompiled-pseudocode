__int64 __fastcall CParticleEmitterVisual::AnimateRemainingParticles(CParticleEmitterVisual *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  float v4; // xmm6_4
  float *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  float v8; // xmm1_4
  float v9; // xmm0_4
  CKeyframeAnimation *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  float v13; // xmm0_4
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-F8h]
  __int64 v19; // [rsp+28h] [rbp-F0h]
  __int64 v20; // [rsp+30h] [rbp-E8h]
  __int64 v21; // [rsp+38h] [rbp-E0h]
  __int64 v22; // [rsp+40h] [rbp-D8h]
  __int64 v23; // [rsp+50h] [rbp-C8h]
  __int64 v24; // [rsp+60h] [rbp-B8h]
  __int64 v25; // [rsp+68h] [rbp-B0h]
  _DWORD v26[24]; // [rsp+80h] [rbp-98h] BYREF

  v2 = 0;
  v3 = *((_DWORD *)this + 332);
  v4 = 0.0;
  if ( v3 )
  {
    v5 = (float *)*((_QWORD *)this + 136);
    v6 = v3;
    v7 = *((_QWORD *)this + 133) - (_QWORD)v5;
    do
    {
      v8 = *v5;
      v9 = *v5 * *(float *)((char *)v5 + v7);
      ++v5;
      v4 = fmaxf(v4, v8 - v9);
      --v6;
    }
    while ( v6 );
  }
  if ( v4 > 0.0 )
  {
    v10 = (CKeyframeAnimation *)CKeyframeAnimation::operator new();
    if ( v10 )
      v10 = CKeyframeAnimation::CKeyframeAnimation(v10, *((struct CComposition **)this + 2));
    v11 = CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetEmitterAnimation(
            (struct CResource **)this,
            v10);
    v2 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x3Bu, 0LL);
      goto LABEL_11;
    }
    v13 = *((float *)this + 1602);
    v14 = *((_QWORD *)this + 100);
    v26[1] = 0;
    v26[13] = 0;
    *(float *)v26 = v13;
    v26[6] = 3;
    v26[18] = 1;
    *(float *)&v26[12] = v13 + v4;
    *(float *)&v26[20] = v13 + v4;
    v15 = CKeyframeAnimation::Initialize(
            v14,
            this,
            53,
            0x12u,
            v18,
            v19,
            v20,
            v21,
            v22,
            1.0,
            v23,
            0.0,
            v24,
            v25,
            (__int64)v26);
    v2 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x55u, 0LL);
LABEL_11:
      CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetEmitterAnimation(
        (struct CResource **)this,
        0LL);
    }
  }
  return v2;
}
