/*
 * XREFs of ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180005E18
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180005C60 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D2138 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 * Callees:
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x180005AAC (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x180005F44 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800BF5F8 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C5554 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithLayerEffect(CVisual *a1, _OWORD *a2)
{
  _OWORD *v2; // r14
  int v5; // ebx
  CLayerVisual *v6; // rcx
  __int64 (__fastcall *v8)(CVisual *); // rax
  unsigned int v9; // ecx
  __int64 v10; // rdi
  int SourceInputBounds; // eax
  unsigned int v12; // ecx
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+44h] [rbp-Ch]
  unsigned int v16; // [rsp+48h] [rbp-8h]
  float v17; // [rsp+70h] [rbp+20h] BYREF
  float v18; // [rsp+74h] [rbp+24h]
  float v19; // [rsp+78h] [rbp+28h] BYREF

  v2 = (_OWORD *)((char *)a1 + 164);
  v5 = 0;
  *a2 = *(_OWORD *)((char *)a1 + 164);
  if ( (CVisual::GetEffectiveSize(a1, &v17, &v19) || CLayerVisual::GetAutomaticBoundsExpansion(v6))
    && (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)a1 + 232LL))(a1) )
  {
    v8 = *(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)a1 + 240LL);
    v18 = v19;
    v10 = *(_QWORD *)v8(a1);
    if ( v10 )
    {
      *a2 = *v2;
      if ( *(_QWORD *)(v10 + 104) )
      {
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v13 = 0LL;
        SourceInputBounds = CEffectBrush::GetSourceInputBounds(v10, v2, (__int64)&v17, (__int64)&v13);
        v5 = SourceInputBounds;
        if ( SourceInputBounds < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, SourceInputBounds, 0x27Fu, 0LL);
        else
          v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _OWORD *))(**(_QWORD **)(v10 + 104) + 88LL))(
                 *(_QWORD *)(v10 + 104),
                 v13,
                 v16,
                 a2);
        DynArrayImpl<0>::~DynArrayImpl<0>(&v13);
      }
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v5, 0x195u, 0LL);
    }
    else if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a2) )
    {
      *a2 = *v2;
    }
  }
  return (unsigned int)v5;
}
