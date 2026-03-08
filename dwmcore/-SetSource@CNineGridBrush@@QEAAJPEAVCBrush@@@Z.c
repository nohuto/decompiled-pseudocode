/*
 * XREFs of ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x1800EA04C
 * Callers:
 *     ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x1800E9FEC (-ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x180247240 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::SetSource(struct CResource **this, struct CBrush *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct CResource *v7; // rax

  if ( a2 != this[11] )
  {
    if ( a2 )
    {
      v4 = CResource::RegisterNotifier((CResource *)this, a2);
      v6 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x178u, 0LL);
        return v6;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
    v7 = *this;
    this[11] = a2;
    (*((void (__fastcall **)(struct CResource **, __int64))v7 + 9))(this, 14LL);
  }
  return 0;
}
