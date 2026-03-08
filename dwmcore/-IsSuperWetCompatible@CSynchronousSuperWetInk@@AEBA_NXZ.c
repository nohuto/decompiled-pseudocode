/*
 * XREFs of ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x180250444
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x18024FC68 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802501B4 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180250258 (-GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z @ 0x180250480 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRender.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1802507C8 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CSynchronousSuperWetInk::IsSuperWetCompatible(CSynchronousSuperWetInk *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 43) == 2 || *((_QWORD *)this + 23) )
  {
    if ( *((_QWORD *)this + 11) )
    {
      if ( *((_QWORD *)this + 26) )
        return 1;
    }
  }
  return result;
}
