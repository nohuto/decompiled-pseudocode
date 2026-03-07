__int64 __fastcall CInteractionTracker::GetProperty(
        CInteractionTracker *this,
        unsigned int a2,
        struct CExpressionValue *a3)
{
  __m128 v3; // xmm0
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  int v13; // xmm0_4
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // ebx
  bool HasDefaultAnimations; // al
  char v24; // al
  float NaturalEndpoint; // xmm0_4
  __m128 v26; // xmm6
  int v27; // eax
  __int64 v28; // rcx
  CScrollScaleKeyframeAnimation *v29; // rcx
  __int64 v30; // rcx
  float v31; // xmm0_4
  CScrollAnimation *v32; // rcx
  float v33; // xmm0_4
  __int64 v34; // xmm0_8
  __int64 v35; // rcx
  char *v36; // r8
  __int64 ScaleAdjustedPositionIfNeeded; // rax
  __int64 v39; // [rsp+30h] [rbp-38h] BYREF
  int v40; // [rsp+38h] [rbp-30h]
  char v41[16]; // [rsp+40h] [rbp-28h] BYREF

  if ( a2 > 0x36 )
  {
    v15 = a2 - 56;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
        {
          NaturalEndpoint = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(v28 + 328));
        }
        else
        {
          v29 = *(CScrollScaleKeyframeAnimation **)(v28 + 472);
          if ( v29 )
            NaturalEndpoint = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v29);
          else
            NaturalEndpoint = *((float *)this + 34);
        }
        goto LABEL_39;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
          {
            v24 = *((_BYTE *)this + 540) & 1;
            *((_DWORD *)a3 + 18) = 17;
            *(_BYTE *)a3 = v24;
            goto LABEL_21;
          }
          v20 = v19 - 1;
          if ( !v20 )
          {
            *((_DWORD *)a3 + 18) = 52;
            *(_QWORD *)a3 = *(_QWORD *)((char *)this + 116);
            v14 = *((_DWORD *)this + 31);
            goto LABEL_20;
          }
          v21 = v20 - 3;
          if ( !v21 )
          {
            v13 = *((_DWORD *)this + 43);
            goto LABEL_18;
          }
          if ( v21 != 5 )
            goto LABEL_30;
          if ( CInteractionTracker::HasImpulse(this)
            || (HasDefaultAnimations = CInteractionTracker::HasDefaultAnimations(this)) )
          {
            HasDefaultAnimations = 1;
          }
          *((_DWORD *)a3 + 18) = 17;
          *(_BYTE *)a3 = HasDefaultAnimations;
LABEL_54:
          *((_BYTE *)a3 + 76) = 1;
          return 0;
        }
        NaturalEndpoint = CInteractionTracker::GetCurrentVelocity(this, 2);
LABEL_39:
        *(float *)a3 = NaturalEndpoint;
        *((_DWORD *)a3 + 18) = 18;
        goto LABEL_54;
      }
      v3.m128_f32[0] = CInteractionTracker::GetCurrentVelocity(this, 1);
      v26 = v3;
      v3.m128_f32[0] = CInteractionTracker::GetCurrentVelocity(this, 0);
      v40 = 0;
      v27 = 0;
      *(_QWORD *)a3 = _mm_unpacklo_ps(v3, v26).m128_u64[0];
    }
    else
    {
      if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
      {
        v31 = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(v30 + 336));
        v32 = (CScrollAnimation *)*((_QWORD *)this + 43);
        *(float *)&v39 = v31;
        v33 = CScrollAnimation::GetNaturalEndpoint(v32);
        v27 = v40;
        *((float *)&v39 + 1) = v33;
        v34 = v39;
      }
      else
      {
        v35 = *(_QWORD *)(v30 + 464);
        if ( v35 )
          v36 = (char *)CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v35, &v39);
        else
          v36 = (char *)this + 80;
        ScaleAdjustedPositionIfNeeded = CInteractionTracker::GetScaleAdjustedPositionIfNeeded(this, v41, v36);
        v34 = *(_QWORD *)ScaleAdjustedPositionIfNeeded;
        v27 = *(_DWORD *)(ScaleAdjustedPositionIfNeeded + 8);
      }
      *(_QWORD *)a3 = v34;
    }
    *((_DWORD *)a3 + 2) = v27;
    *((_DWORD *)a3 + 18) = 52;
    goto LABEL_54;
  }
  if ( a2 == 54 )
    goto LABEL_17;
  v6 = a2 - 1;
  if ( !v6 )
  {
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *((_QWORD *)this + 10);
    v14 = *((_DWORD *)this + 22);
    goto LABEL_20;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_17:
    v13 = *((_DWORD *)this + 34);
    goto LABEL_18;
  }
  v8 = v7 - 21;
  if ( !v8 )
  {
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + 92);
    v14 = *((_DWORD *)this + 25);
    goto LABEL_20;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    *((_DWORD *)a3 + 18) = 52;
    *(_QWORD *)a3 = *((_QWORD *)this + 13);
    v14 = *((_DWORD *)this + 28);
LABEL_20:
    *((_DWORD *)a3 + 2) = v14;
    goto LABEL_21;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    v13 = *((_DWORD *)this + 35);
    goto LABEL_18;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v13 = *((_DWORD *)this + 36);
    goto LABEL_18;
  }
  v12 = v11 - 22;
  if ( !v12 )
  {
    v13 = *((_DWORD *)this + 20);
    goto LABEL_18;
  }
  if ( v12 == 1 )
  {
    v13 = *((_DWORD *)this + 21);
LABEL_18:
    *(_DWORD *)a3 = v13;
    *((_DWORD *)a3 + 18) = 18;
LABEL_21:
    *((_BYTE *)a3 + 76) = 1;
    return 0;
  }
LABEL_30:
  v22 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x4FDu, 0LL);
  return v22;
}
