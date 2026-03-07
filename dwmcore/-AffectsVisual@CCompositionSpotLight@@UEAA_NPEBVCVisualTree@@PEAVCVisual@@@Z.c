char __fastcall CCompositionSpotLight::AffectsVisual(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  char DoesIntersectUnsafe; // bl
  float v7; // xmm1_4
  float v8; // xmm7_4
  CVisual *v9; // rcx
  int WorldTransform; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  CVisual *v16; // rcx
  float v17; // xmm3_4
  char *v18; // rdi
  char v19; // al
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // r8d
  int v23; // edi
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // [rsp+28h] [rbp-E0h]
  struct CVisual *v28; // [rsp+38h] [rbp-D0h] BYREF
  float v29; // [rsp+40h] [rbp-C8h] BYREF
  float v30; // [rsp+44h] [rbp-C4h] BYREF
  float v31[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v32[64]; // [rsp+58h] [rbp-B0h] BYREF
  int v33; // [rsp+98h] [rbp-70h]
  float v34; // [rsp+A8h] [rbp-60h] BYREF
  float v35; // [rsp+ACh] [rbp-5Ch]
  float v36; // [rsp+B0h] [rbp-58h]
  float v37; // [rsp+B4h] [rbp-54h]
  __int128 v38; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v39; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v40; // [rsp+D8h] [rbp-30h] BYREF

  v28 = a3;
  DoesIntersectUnsafe = 1;
  if ( !*((_BYTE *)this + 170) )
    return 0;
  if ( *((float *)this + 92) != 0.0 )
    return DoesIntersectUnsafe;
  if ( *((float *)this + 93) != 0.0 )
    return DoesIntersectUnsafe;
  if ( *((float *)this + 94) != -1.0 )
    return DoesIntersectUnsafe;
  v7 = *((float *)this + 96);
  if ( *((float *)this + 95) > v7 || v7 > 1.5707952 )
    return DoesIntersectUnsafe;
  CVisual::GetEffectiveOffset(a3, v31, &v30, &v29);
  v8 = *((float *)this + 91) - v29;
  v33 = 0;
  v40 = 0LL;
  v39 = 0LL;
  WorldTransform = CVisual::GetWorldTransform(v9, a2, 1, (struct CMILMatrix *)v32, 0LL, 0LL);
  if ( WorldTransform < 0 )
  {
    v27 = 597;
    goto LABEL_30;
  }
  LOBYTE(v11) = 1;
  if ( !CMILMatrix::Is2DAffine<1>((__int64)v32, v11) )
    return DoesIntersectUnsafe;
  if ( v8 > 0.0 && *((float *)this + 96) > 0.0 )
  {
    v38 = 0LL;
    WorldTransform = (*(__int64 (__fastcall **)(struct CVisual *, __int128 *))(*(_QWORD *)v28 + 224LL))(v28, &v38);
    if ( WorldTransform < 0 )
    {
      v27 = 613;
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)v32, (struct MilRectF *)&v38, (float *)&v39);
      v13 = tanf_0(*((float *)this + 96));
      v14 = *((float *)this + 90);
      v15 = *((float *)this + 89);
      v16 = (CVisual *)*((_QWORD *)this + 32);
      v33 = 0;
      v17 = (float)(v13 * v8) + (float)(v13 * v8);
      v34 = v15 - (float)(v13 * v8);
      v35 = v14 - (float)(v13 * v8);
      v37 = v17 + v35;
      v36 = v17 + v34;
      WorldTransform = CVisual::GetWorldTransform(v16, a2, 1, (struct CMILMatrix *)v32, 0LL, 0LL);
      if ( WorldTransform >= 0 )
      {
        CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)v32, (struct MilRectF *)&v34, (float *)&v40);
        DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                (float *)&v40,
                                (float *)&v39);
        goto LABEL_18;
      }
      v27 = 632;
    }
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, WorldTransform, v27, 0LL);
    return DoesIntersectUnsafe;
  }
  DoesIntersectUnsafe = 0;
LABEL_18:
  v18 = (char *)this + 264;
  v19 = DynArray<CVisual *,0>::Contains((__int64)v18, &v28);
  if ( DoesIntersectUnsafe )
  {
    if ( v19 )
      DynArray<CVisual *,0>::Remove((__int64 *)v18, &v28);
    return DoesIntersectUnsafe;
  }
  DoesIntersectUnsafe = v19 ^ 1;
  if ( !v19 )
  {
    v21 = *((_DWORD *)v18 + 6);
    v22 = v21 + 1;
    if ( v21 + 1 < v21 )
    {
      v23 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_28:
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x298u, 0LL);
      return DoesIntersectUnsafe;
    }
    if ( v22 > *((_DWORD *)v18 + 5) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v18, 8, 1, &v28);
      v23 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xC0u, 0LL);
        goto LABEL_28;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v18 + 8LL * *((unsigned int *)v18 + 6)) = v28;
      *((_DWORD *)v18 + 6) = v22;
    }
  }
  return DoesIntersectUnsafe;
}
