/*
 * XREFs of ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800082AC
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180007CCC (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180007F00 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800081B8 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 * Callees:
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008304 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180008350 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800C515C (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::GetMaskBounds(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  CDropShadow *v3; // rcx
  __int64 v4; // rdx
  CVisual *v5; // r10
  int BoundsWithLayerEffect; // eax
  unsigned int v7; // ecx
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 (__fastcall ***v12)(_QWORD, float *, __int64); // rcx
  int v13; // eax
  unsigned int v14; // ecx
  float v15[2]; // [rsp+30h] [rbp-18h] BYREF
  float v16[4]; // [rsp+38h] [rbp-10h] BYREF

  v2 = 0;
  *a2 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v3 = *(CDropShadow **)(a1 + 704);
  if ( v3 )
  {
    if ( CDropShadow::GetMaskForLayerVisualNoRef(v3) )
    {
      if ( CVisual::GetEffectiveSize(v5, v15, v16) )
      {
        v11 = *(_QWORD *)(v10 + 64);
        v15[1] = v16[0];
        v12 = (__int64 (__fastcall ***)(_QWORD, float *, __int64))(v10 + 64 + *(int *)(v11 + 8));
        v13 = (**v12)(v12, v15, v9);
        v2 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x202u, 0LL);
      }
    }
    else
    {
      BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect(v5, v4);
      v2 = BoundsWithLayerEffect;
      if ( BoundsWithLayerEffect < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, BoundsWithLayerEffect, 0x207u, 0LL);
    }
  }
  return v2;
}
