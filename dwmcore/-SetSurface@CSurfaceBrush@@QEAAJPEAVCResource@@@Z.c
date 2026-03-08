/*
 * XREFs of ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x180049388
 * Callers:
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x1800492C8 (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x1802473C0 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-$.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindCommonRenderStrategy@CSurfaceBrush@@KAPEAVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x1800E9708 (-FindCommonRenderStrategy@CSurfaceBrush@@KAPEAVCSurfaceRenderStrategy@1@PEBVCResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::SetSurface(struct CResource **this, struct CResource *a2)
{
  unsigned int v2; // ebx
  unsigned int v6; // ecx
  struct CSurfaceBrush::CSurfaceRenderStrategy *CommonRenderStrategy; // rbp
  int v8; // eax
  unsigned int v9; // ecx
  struct CResource *v10; // rax

  v2 = 0;
  if ( a2 != this[13] )
  {
    CommonRenderStrategy = CSurfaceBrush::FindCommonRenderStrategy(a2);
    if ( CommonRenderStrategy )
    {
      if ( a2 && (v8 = CResource::RegisterNotifier((CResource *)this, a2), v2 = v8, v8 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x255u, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
        v10 = *this;
        this[13] = a2;
        this[14] = CommonRenderStrategy;
        (*((void (__fastcall **)(struct CResource **, _QWORD, struct CResource **))v10 + 9))(this, 0LL, this);
      }
    }
    else
    {
      v2 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x250u, 0LL);
    }
  }
  return v2;
}
