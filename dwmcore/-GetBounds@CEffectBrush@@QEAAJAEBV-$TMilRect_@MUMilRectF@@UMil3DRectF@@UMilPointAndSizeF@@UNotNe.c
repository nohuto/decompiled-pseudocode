/*
 * XREFs of ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18001BF44
 * Callers:
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008304 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800C4FC0 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 * Callees:
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18001BFDC (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::GetBounds(__int64 a1, _OWORD *a2, __int64 a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  int SourceInputBounds; // eax
  unsigned int v8; // ecx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+44h] [rbp-14h]
  unsigned int v13; // [rsp+48h] [rbp-10h]

  v4 = 0;
  *a4 = *a2;
  if ( *(_QWORD *)(a1 + 112) )
  {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v10 = 0LL;
    SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, a2, a3, &v10);
    v4 = SourceInputBounds;
    if ( SourceInputBounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, SourceInputBounds, 0x2C2u, 0LL);
    else
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _OWORD *))(**(_QWORD **)(a1 + 112) + 88LL))(
             *(_QWORD *)(a1 + 112),
             v10,
             v13,
             a4);
    DynArrayImpl<0>::~DynArrayImpl<0>(&v10);
  }
  return v4;
}
