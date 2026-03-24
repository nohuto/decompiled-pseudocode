/*
 * XREFs of ?GetBounds@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C43CC
 * Callers:
 *     ?GetBounds@CHwndBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F5F60 (-GetBounds@CHwndBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1801C46F4 (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 */

__int64 __fastcall CHwndBitmap::GetBounds(__int64 a1, __int64 a2, __int64 a3)
{
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)(a1 - 136)) )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 - 40) + 208LL))(*(_QWORD *)(a1 - 40));
    *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)(a1 - 40) + 64LL);
  }
  else
  {
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)a3 = 0LL;
  }
  return 0LL;
}
