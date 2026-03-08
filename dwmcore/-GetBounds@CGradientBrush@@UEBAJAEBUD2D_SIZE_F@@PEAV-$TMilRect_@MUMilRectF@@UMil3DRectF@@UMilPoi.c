/*
 * XREFs of ?GetBounds@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F79F4
 * Callers:
 *     ?GetBounds@CGradientBrush@@$4PPPPPPPM@CA@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180118290 (-GetBounds@CGradientBrush@@$4PPPPPPPM@CA@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?GetBounds@CGradientBrush@@$4PPPPPPPM@BA@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119E90 (-GetBounds@CGradientBrush@@$4PPPPPPPM@BA@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::GetBounds(__int64 a1, _DWORD *a2, __int64 a3)
{
  char v5; // al
  int v6; // xmm0_4

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 256) + 192LL))(a1 - 256);
  *(_QWORD *)a3 = 0LL;
  if ( v5 )
  {
    *(_DWORD *)(a3 + 8) = 0;
    v6 = 0;
  }
  else
  {
    *(_DWORD *)(a3 + 8) = *a2;
    v6 = a2[1];
  }
  *(_DWORD *)(a3 + 12) = v6;
  return 0LL;
}
