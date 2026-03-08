/*
 * XREFs of ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x180240B14
 * Callers:
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x18024372C (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?NormalizeFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAXXZ @ 0x18023D9D4 (-NormalizeFrames@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAA.c)
 *     ?Update@BulkAnimator@Particles@@SAXPEBVISingleInputAnimator@2@MUParticleStreamInfo@2@1I@Z @ 0x18023DAA0 (-Update@BulkAnimator@Particles@@SAXPEBVISingleInputAnimator@2@MUParticleStreamInfo@2@1I@Z.c)
 *     ?Update@BulkAnimator@Particles@@SAXPEBVIThreeInputAnimator@2@UParticleStreamInfo@2@111I@Z @ 0x18023DBFC (-Update@BulkAnimator@Particles@@SAXPEBVIThreeInputAnimator@2@UParticleStreamInfo@2@111I@Z.c)
 *     ?Update@BulkAnimator@Particles@@SAXPEBVITwoInputAnimator@2@UParticleStreamInfo@2@11I@Z @ 0x18023DDE8 (-Update@BulkAnimator@Particles@@SAXPEBVITwoInputAnimator@2@UParticleStreamInfo@2@11I@Z.c)
 *     ?InputToInfo@ParticleCollection@CParticleEmitterVisual@@QEAA?AUParticleStreamInfo@Particles@@W4ParticleInputSource@4Composition@UI@Windows@@@Z @ 0x1802427DC (-InputToInfo@ParticleCollection@CParticleEmitterVisual@@QEAA-AUParticleStreamInfo@Particles@@W4P.c)
 */

void __fastcall CParticleEmitterVisual::ApplyActiveBehaviors(CParticleEmitterVisual *this, float a2)
{
  __int64 v2; // rdx
  __int64 v4; // rcx
  char v5; // r14
  char v6; // si
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r11
  unsigned int i; // r8d
  __int64 v17; // rcx
  float v18; // xmm4_4
  __int64 v19; // rdx
  __int64 v20; // rax
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  __m128 v24; // xmm3
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 *v50; // rsi
  __int64 *v51; // rbx
  __int64 v52; // rcx
  unsigned int v53; // [rsp+30h] [rbp-21h]
  __int128 v54; // [rsp+38h] [rbp-19h] BYREF
  __int128 v55; // [rsp+48h] [rbp-9h] BYREF
  __int128 v56; // [rsp+58h] [rbp+7h] BYREF
  __int128 v57; // [rsp+68h] [rbp+17h] BYREF
  __int64 v58[4]; // [rsp+78h] [rbp+27h] BYREF

  v4 = *((_QWORD *)this + 105);
  v5 = 0;
  v6 = 0;
  if ( v4 )
  {
    v7 = *(_QWORD *)(v4 + 80);
    if ( v7 && *(_QWORD *)(v7 + 128) != *(_QWORD *)(v7 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 872, &v57, *(unsigned int *)(v7 + 80));
      *(_QWORD *)&v54 = *((_QWORD *)this + 109);
      *(_QWORD *)&v55 = *((_QWORD *)this + 139);
      v8 = *((_QWORD *)this + 105);
      *((_QWORD *)&v55 + 1) = 0x300000000LL;
      v9 = *(_QWORD *)(v8 + 80);
      *((_QWORD *)&v54 + 1) = 0x300000000LL;
      v56 = v54;
      Particles::BulkAnimator::Update(
        (v9 + 112) & -(__int64)(v9 != 0),
        (__int64)&v57,
        (__int64 *)&v55,
        (__int64 *)&v56,
        *((_DWORD *)this + 332));
    }
    v10 = *(_QWORD *)(*((_QWORD *)this + 105) + 96LL);
    if ( v10 && (__int64)(*(_QWORD *)(v10 + 128) - *(_QWORD *)(v10 + 120)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 872, &v57, *(unsigned int *)(v10 + 80));
      *(_QWORD *)&v55 = *((_QWORD *)this + 121);
      *(_QWORD *)&v54 = *((_QWORD *)this + 145);
      v11 = *((_QWORD *)this + 105);
      *((_QWORD *)&v55 + 1) = 0x100000000LL;
      v12 = *(_QWORD *)(v11 + 96);
      v56 = v55;
      *((_QWORD *)&v54 + 1) = 0x100000000LL;
      v55 = v54;
      Particles::BulkAnimator::Update(
        (v12 + 112) & -(__int64)(v12 != 0),
        (__int64)&v57,
        (__int64 *)&v55,
        (__int64 *)&v56,
        *((_DWORD *)this + 332));
      v6 = 1;
    }
    v13 = *(_QWORD *)(*((_QWORD *)this + 105) + 88LL);
    if ( v13 && *(_QWORD *)(v13 + 128) != *(_QWORD *)(v13 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 872, v58, *(unsigned int *)(v13 + 80));
      v14 = (*(_QWORD *)(*((_QWORD *)this + 105) + 88LL) + 112LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 105) + 88LL) != 0LL);
      *(_QWORD *)&v57 = &Particles::DirectionAnimator::`vftable';
      *((_QWORD *)&v57 + 1) = v14;
      Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::NormalizeFrames(v14);
      v15 = *((_QWORD *)this + 115);
      *(_QWORD *)&v54 = *((_QWORD *)this + 121);
      *(_QWORD *)&v56 = *((_QWORD *)this + 148);
      v53 = *((_DWORD *)this + 332);
      *(_QWORD *)&v55 = v15;
      *((_QWORD *)&v55 + 1) = 0x300000000LL;
      *((_QWORD *)&v54 + 1) = 0x100000000LL;
      *((_QWORD *)&v56 + 1) = 0x300000000LL;
      Particles::BulkAnimator::Update(
        (__int64)&v57,
        (__int64)v58,
        (__int64 *)&v56,
        (__int64 *)&v54,
        (__int64 *)&v55,
        v53);
      v5 = 1;
    }
    if ( v6 )
    {
      if ( !v5 )
      {
        for ( i = 0;
              i < *((_DWORD *)this + 332);
              *(float *)(v20 + 4 * v19 + 8) = _mm_shuffle_ps(v24, v24, 170).m128_f32[0] * v18 )
        {
          v17 = i++;
          v18 = *(float *)(*((_QWORD *)this + 121) + 4 * v17);
          v19 = 3 * v17;
          v20 = *((_QWORD *)this + 115);
          v21 = _mm_movelh_ps(
                  (__m128)*(unsigned __int64 *)(v20 + 12 * v17),
                  (__m128)*(unsigned int *)(v20 + 12 * v17 + 8));
          v22 = _mm_mul_ps(v21, v21);
          v23 = _mm_shuffle_ps(v22, v22, 102);
          v22.m128_f32[0] = (float)(v22.m128_f32[0] + v23.m128_f32[0]) + _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
          v24 = _mm_div_ps(v21, _mm_sqrt_ps(_mm_shuffle_ps(v22, v22, 0)));
          *(_QWORD *)&v54 = v24.m128_u64[0];
          *(float *)(v20 + 4 * v19) = v18 * v24.m128_f32[0];
          *(float *)(v20 + 4 * v19 + 4) = v18 * v24.m128_f32[1];
        }
      }
    }
    v25 = *(_QWORD *)(*((_QWORD *)this + 105) + 112LL);
    if ( v25 && *(_QWORD *)(v25 + 128) != *(_QWORD *)(v25 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 872, v58, *(unsigned int *)(v25 + 80));
      *(_QWORD *)&v56 = *((_QWORD *)this + 112);
      *(_QWORD *)&v55 = *((_QWORD *)this + 142);
      v26 = *((_QWORD *)this + 105);
      *((_QWORD *)&v56 + 1) = 0x400000000LL;
      v27 = *(_QWORD *)(v26 + 112);
      v57 = v56;
      *((_QWORD *)&v55 + 1) = 0x400000000LL;
      v56 = v55;
      Particles::BulkAnimator::Update(
        (v27 + 112) & -(__int64)(v27 != 0),
        (__int64)v58,
        (__int64 *)&v56,
        (__int64 *)&v57,
        *((_DWORD *)this + 332));
    }
    v28 = *(_QWORD *)(*((_QWORD *)this + 105) + 104LL);
    if ( v28 && (__int64)(*(_QWORD *)(v28 + 128) - *(_QWORD *)(v28 + 120)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 872, v58, *(unsigned int *)(v28 + 80));
      *(_QWORD *)&v56 = *((_QWORD *)this + 118);
      *(_QWORD *)&v55 = *((_QWORD *)this + 154);
      v29 = *((_QWORD *)this + 105);
      *((_QWORD *)&v56 + 1) = 0x100000000LL;
      v30 = *(_QWORD *)(v29 + 104);
      v57 = v56;
      *((_QWORD *)&v55 + 1) = 0x100000000LL;
      v56 = v55;
      Particles::BulkAnimator::Update(
        (v30 + 112) & -(__int64)(v30 != 0),
        (__int64)v58,
        (__int64 *)&v56,
        (__int64 *)&v57,
        *((_DWORD *)this + 332));
    }
    v31 = *(_QWORD *)(*((_QWORD *)this + 105) + 120LL);
    if ( v31 && *(_QWORD *)(v31 + 128) != *(_QWORD *)(v31 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 872, v58, *(unsigned int *)(v31 + 80));
      *(_QWORD *)&v56 = *((_QWORD *)this + 124);
      *(_QWORD *)&v55 = *((_QWORD *)this + 157);
      v32 = *((_QWORD *)this + 105);
      *((_QWORD *)&v56 + 1) = 0x400000000LL;
      v33 = *(_QWORD *)(v32 + 120);
      v57 = v56;
      *((_QWORD *)&v55 + 1) = 0x400000000LL;
      v56 = v55;
      Particles::BulkAnimator::Update(
        (v33 + 112) & -(__int64)(v33 != 0),
        (__int64)v58,
        (__int64 *)&v56,
        (__int64 *)&v57,
        *((_DWORD *)this + 332));
    }
    v34 = *(_QWORD *)(*((_QWORD *)this + 105) + 128LL);
    if ( v34 && (__int64)(*(_QWORD *)(v34 + 128) - *(_QWORD *)(v34 + 120)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 872, v58, *(unsigned int *)(v34 + 80));
      *(_QWORD *)&v56 = *((_QWORD *)this + 124);
      *(_QWORD *)&v55 = *((_QWORD *)this + 157);
      v35 = *((_QWORD *)this + 105);
      *((_QWORD *)&v56 + 1) = 0x400000003LL;
      v36 = *(_QWORD *)(v35 + 128);
      v57 = v56;
      *((_QWORD *)&v55 + 1) = 0x400000003LL;
      v56 = v55;
      Particles::BulkAnimator::Update(
        (v36 + 112) & -(__int64)(v36 != 0),
        (__int64)v58,
        (__int64 *)&v56,
        (__int64 *)&v57,
        *((_DWORD *)this + 332));
    }
    v37 = *(_QWORD *)(*((_QWORD *)this + 105) + 144LL);
    if ( v37 && *(_QWORD *)(v37 + 128) != *(_QWORD *)(v37 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 872, v58, *(unsigned int *)(v37 + 80));
      *(_QWORD *)&v56 = *((_QWORD *)this + 130);
      *(_QWORD *)&v55 = *((_QWORD *)this + 163);
      v38 = *((_QWORD *)this + 105);
      *((_QWORD *)&v56 + 1) = 0x200000000LL;
      v39 = *(_QWORD *)(v38 + 144);
      v57 = v56;
      *((_QWORD *)&v55 + 1) = 0x200000000LL;
      v56 = v55;
      Particles::BulkAnimator::Update(
        (v39 + 112) & -(__int64)(v39 != 0),
        (__int64)v58,
        (__int64 *)&v56,
        (__int64 *)&v57,
        *((_DWORD *)this + 332));
    }
    v40 = *(_QWORD *)(*((_QWORD *)this + 105) + 152LL);
    if ( v40 && *(_QWORD *)(v40 + 128) != *(_QWORD *)(v40 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 872, v58, *(unsigned int *)(v40 + 80));
      *(_QWORD *)&v56 = *((_QWORD *)this + 127);
      *(_QWORD *)&v55 = *((_QWORD *)this + 160);
      v41 = *((_QWORD *)this + 105);
      *((_QWORD *)&v56 + 1) = 0x200000000LL;
      v42 = *(_QWORD *)(v41 + 152);
      v57 = v56;
      *((_QWORD *)&v55 + 1) = 0x200000000LL;
      v56 = v55;
      Particles::BulkAnimator::Update(
        (v42 + 112) & -(__int64)(v42 != 0),
        (__int64)v58,
        (__int64 *)&v56,
        (__int64 *)&v57,
        *((_DWORD *)this + 332));
    }
    v43 = *(_QWORD *)(*((_QWORD *)this + 105) + 160LL);
    if ( v43 && (__int64)(*(_QWORD *)(v43 + 128) - *(_QWORD *)(v43 + 120)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 872, v58, *(unsigned int *)(v43 + 80));
      *(_QWORD *)&v56 = *((_QWORD *)this + 133);
      *(_QWORD *)&v55 = *((_QWORD *)this + 136);
      v44 = *((_QWORD *)this + 105);
      *((_QWORD *)&v56 + 1) = 0x100000000LL;
      v45 = *(_QWORD *)(v44 + 160);
      v57 = v56;
      *((_QWORD *)&v55 + 1) = 0x100000000LL;
      v56 = v55;
      Particles::BulkAnimator::Update(
        (v45 + 112) & -(__int64)(v45 != 0),
        (__int64)v58,
        (__int64 *)&v56,
        (__int64 *)&v57,
        *((_DWORD *)this + 332));
    }
    v2 = *(_QWORD *)(*((_QWORD *)this + 105) + 136LL);
    if ( v2 && *(_QWORD *)(v2 + 128) != *(_QWORD *)(v2 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 872, v58, *(unsigned int *)(v2 + 80));
      v46 = *((_QWORD *)this + 105);
      *((_QWORD *)&v56 + 1) = 0x300000000LL;
      v47 = *(_QWORD *)(v46 + 136);
      *(_QWORD *)&v57 = &Particles::ForceAnimator::`vftable';
      v48 = v47 + 112;
      v49 = -v47;
      *((_QWORD *)&v57 + 1) = v48 & -(__int64)(v49 != 0);
      *(_QWORD *)&v56 = *((_QWORD *)this + 115);
      Particles::BulkAnimator::Update((__int64)&v57, v49, (__int64)v58, (__int64 *)&v56, *((_DWORD *)this + 332));
    }
  }
  v50 = (__int64 *)*((_QWORD *)this + 107);
  v51 = (__int64 *)*((_QWORD *)this + 106);
  if ( v51 != v50 )
  {
    *((_QWORD *)&v56 + 1) = 0x300000000LL;
    *((_QWORD *)&v55 + 1) = 0x300000000LL;
    do
    {
      v52 = *v51;
      *(_QWORD *)&v56 = *((_QWORD *)this + 115);
      *(_QWORD *)&v55 = *((_QWORD *)this + 109);
      v57 = v55;
      *(_OWORD *)v58 = v56;
      Particles::BulkAnimator::Update(
        (v52 + 88) & -(__int64)(v52 != 0),
        v2,
        (__int64)&v57,
        v58,
        *((_DWORD *)this + 332));
      ++v51;
    }
    while ( v51 != v50 );
  }
}
