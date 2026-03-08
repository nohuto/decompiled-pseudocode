/*
 * XREFs of ?CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x18000E02C
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000DF00 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180132026 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x18026D344 (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 */

char __fastcall CBitmapRealization::CalcRotationTransform(
        CBitmapRealization *this,
        const struct D2D_SIZE_U *a2,
        struct CMILMatrix *a3)
{
  char v5; // bl
  _BYTE *v6; // r9
  enum DXGI_MODE_ROTATION v7; // r9d

  v5 = 0;
  CMILMatrix::SetToIdentity(a3);
  if ( v6[313] )
  {
    v7 = (*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)v6 + 48LL))(v6);
    if ( v7 != DXGI_MODE_ROTATION_IDENTITY )
    {
      CMILMatrix::SetToRotation(a3, (float)(int)a2->width, (float)(int)a2->height, v7);
      return 1;
    }
  }
  return v5;
}
