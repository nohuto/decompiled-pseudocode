/*
 * XREFs of ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x1801F0D3C
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000EC20 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800C3300 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(CTreeEffectLayer *this)
{
  CLayerVisual *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdi

  v2 = (CLayerVisual *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v2) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 96LL) + 80LL) + 48LL);
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( v4 )
      {
        v5 = 0LL;
        v6 = v4;
        do
        {
          v7 = *(_QWORD *)(*((_QWORD *)this + 31) + 120LL);
          v8 = *(_QWORD *)(v5 + v7);
          if ( v8 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v8 + 56LL))(
                   *(_QWORD *)(v5 + v7),
                   181LL) )
            {
              *(_OWORD *)(v8 + 128) = *(_OWORD *)&_xmm;
              *(_QWORD *)(v8 + 144) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
            }
          }
          v5 += 8LL;
          --v6;
        }
        while ( v6 );
      }
    }
  }
}
