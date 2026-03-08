/*
 * XREFs of ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800C4EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180008350 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800C4FC0 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800C515C (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800C5170 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithEffects(CDropShadow **this, __int64 a2, float *a3)
{
  int BoundsWithEffects; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  CDropShadow *v8; // rcx
  CDropShadow *v10; // rcx
  float Radius; // xmm6_4
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, float *, __int128 *); // rcx
  int v15; // eax
  __int64 v16; // rcx
  float v17[2]; // [rsp+30h] [rbp-50h] BYREF
  float v18; // [rsp+38h] [rbp-48h] BYREF
  float v19[4]; // [rsp+40h] [rbp-40h]
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF

  BoundsWithEffects = CVisual::GetBoundsWithEffects((CVisual *)this);
  v7 = BoundsWithEffects;
  if ( BoundsWithEffects < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, BoundsWithEffects, 0xD3u, 0LL);
    return v7;
  }
  v8 = this[88];
  if ( v8 )
  {
    v20 = 0LL;
    Radius = CDropShadow::GetRadius(v8);
    *(_QWORD *)v19 = *((_QWORD *)v10 + 12);
    if ( CDropShadow::GetMaskForLayerVisualNoRef(v10) )
    {
      if ( CVisual::GetEffectiveSize((CVisual *)this, v17, &v18) )
      {
        v13 = *(_QWORD *)(v12 + 64);
        v17[1] = v18;
        v14 = (__int64 (__fastcall ***)(_QWORD, float *, __int128 *))(v12 + 64 + *(int *)(v13 + 8));
        v15 = (**v14)(v14, v17, &v20);
        v7 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xE3u, 0LL);
          return v7;
        }
      }
    }
    else
    {
      v20 = *(_OWORD *)a3;
    }
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v20) )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v20, Radius, Radius);
      *((float *)&v20 + 1) = *((float *)&v20 + 1) + v19[1];
      *(float *)&v20 = *(float *)&v20 + v19[0];
      *((float *)&v20 + 2) = *((float *)&v20 + 2) + v19[0];
      *((float *)&v20 + 3) = *((float *)&v20 + 3) + v19[1];
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)&v20);
    }
  }
  return v7;
}
