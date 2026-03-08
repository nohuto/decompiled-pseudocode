/*
 * XREFs of ?GetBounds@CBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180104AF0
 * Callers:
 *     ?GetBounds@CBrush@@$4PPPPPPPM@BA@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180117950 (-GetBounds@CBrush@@$4PPPPPPPM@BA@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?GetBounds@CBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180117970 (-GetBounds@CBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?GetBounds@CBrush@@$4PPPPPPPM@CI@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119C70 (-GetBounds@CBrush@@$4PPPPPPPM@CI@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?GetBounds@CBrush@@$4PPPPPPPM@FI@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119D90 (-GetBounds@CBrush@@$4PPPPPPPM@FI@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrush::GetBounds(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  *a3 = 0;
  a3[1] = 0;
  a3[2] = *a2;
  a3[3] = a2[1];
  return 0LL;
}
