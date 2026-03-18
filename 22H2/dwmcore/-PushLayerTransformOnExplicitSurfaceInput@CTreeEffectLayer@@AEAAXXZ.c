/*
 * XREFs of ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x1801F4178
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000ED10 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800C3D60 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_30193979@@@details@wil@@QEAA_NXZ @ 0x180119D94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_30193979@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801986D8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetTransformToLayerSpace@CTreeEffectLayer@@AEBA?AVMatrix3x2F@D2D1@@XZ @ 0x1801F3F48 (-GetTransformToLayerSpace@CTreeEffectLayer@@AEBA-AVMatrix3x2F@D2D1@@XZ.c)
 */

void __fastcall CTreeEffectLayer::PushLayerTransformOnExplicitSurfaceInput(CTreeEffectLayer *this)
{
  CLayerVisual *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // rdi
  const char *v8; // r9
  __int64 v9; // rdi
  __int64 v10; // xmm0_8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

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
              CTreeEffectLayer::GetTransformToLayerSpace((__int64)this, (D2D1::Matrix3x2F *)&v11);
              v10 = v12;
              *(_OWORD *)(v9 + 128) = v11;
              *(_QWORD *)(v9 + 144) = v10;
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
