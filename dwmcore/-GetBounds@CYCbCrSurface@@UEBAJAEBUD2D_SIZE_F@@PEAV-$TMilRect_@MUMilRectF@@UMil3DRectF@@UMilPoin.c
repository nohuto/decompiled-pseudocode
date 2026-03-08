/*
 * XREFs of ?GetBounds@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18021C1A8
 * Callers:
 *     ?GetBounds@CYCbCrSurface@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180118370 (-GetBounds@CYCbCrSurface@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CYCbCrSurface::GetBounds(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 - 56);
  result = 0LL;
  if ( v3 )
    return CCompositionSurfaceBitmap::GetBounds(v3 + 224, a2, (_DWORD *)a3);
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)a3 = 0LL;
  return result;
}
