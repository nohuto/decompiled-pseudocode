/*
 * XREFs of ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7730
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006C310 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800B80DC (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisual::GetContentBounds(CSpriteVisual *this, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(_QWORD, char *, __int64); // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __m128 v11; // xmm0
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  struct CDropShadow *DropShadow; // rax
  struct CDropShadow *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  int v21; // edx
  __int128 v22; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 0LL;
  v4 = 0;
  v5 = *((_QWORD *)this + 31);
  if ( v5 )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD, char *, __int64))(v5 + 56 + *(int *)(*(_QWORD *)(v5 + 56) + 8LL));
    v7 = (**v6)(v6, (char *)this + 132, a2);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xEACu, 0LL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(CSpriteVisual *))(*(_QWORD *)this + 296LL))(this) )
  {
    v10 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v10 + 4) & 0x100000) != 0 )
    {
      v21 = *(_DWORD *)(v10 + 12);
      v9 = v10 + 12;
      if ( (v21 & 0x7F000000) != 0xC000000 )
      {
        do
        {
          v9 += (v21 & 0xFFFFFF) + 4LL;
          v21 = *(_DWORD *)v9;
        }
        while ( (*(_DWORD *)v9 & 0x7F000000) != 0xC000000 );
      }
      v11 = *(__m128 *)(v9 + 4);
      LODWORD(v12) = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
      LODWORD(v13) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
      LODWORD(v14) = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
    }
    else
    {
      v11.m128_i32[0] = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v12 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      v13 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
      v14 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
    }
    *((_QWORD *)&v22 + 1) = __PAIR64__(LODWORD(v14), LODWORD(v13));
    *(_QWORD *)&v22 = __PAIR64__(LODWORD(v12), v11.m128_u32[0]);
    if ( v13 > v11.m128_f32[0] && v14 > v12 )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a2, (float *)&v22);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v4, 0xC8u, 0LL);
    return (unsigned int)v4;
  }
  if ( (**((_DWORD **)this + 28) & 0x10000) == 0 )
    return (unsigned int)v4;
  v22 = 0LL;
  DropShadow = CSpriteVisual::GetDropShadow(this);
  v17 = (struct CDropShadow *)((char *)DropShadow + *(int *)(*((_QWORD *)DropShadow + 7) + 8LL) + 56);
  v18 = (**(__int64 (__fastcall ***)(struct CDropShadow *, char *, __int128 *))v17)(v17, (char *)this + 132, &v22);
  v20 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xCEu, 0LL);
  else
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a2, (float *)&v22);
  return v20;
}
