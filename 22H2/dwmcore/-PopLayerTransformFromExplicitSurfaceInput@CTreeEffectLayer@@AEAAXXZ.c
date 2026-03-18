/*
 * XREFs of ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x1801F403C
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000ED10 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800C3D60 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_30193979@@@details@wil@@QEAA_NXZ @ 0x180119D94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_30193979@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801986D8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(CTreeEffectLayer *this)
{
  CLayerVisual *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rsi
  const char *v8; // r9
  __int64 v9; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (CLayerVisual *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v2) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 96LL) + 80LL) + 48LL);
      v4 = 0;
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( v5 )
      {
        v6 = 0LL;
        do
        {
          v7 = *((_QWORD *)this + 31);
          if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_30193979>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_30193979>::GetImpl'::`2'::impl)
            && v4 >= *(_DWORD *)(v7 + 144) )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              534LL,
              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
              v8);
          }
          v9 = *(_QWORD *)(v6 + *(_QWORD *)(v7 + 120));
          if ( v9 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 56LL))(v9, 181LL) )
            {
              *(_OWORD *)(v9 + 128) = *(_OWORD *)&_xmm;
              *(_QWORD *)(v9 + 144) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
            }
          }
          ++v4;
          v6 += 8LL;
        }
        while ( v4 < v5 );
      }
    }
  }
}
