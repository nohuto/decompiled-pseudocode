/*
 * XREFs of ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x18026D344
 * Callers:
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x18000E02C (-CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180289168 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180090CB0 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DAF28 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18026CFE4 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18026D01C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMILMatrix::SetToRotation(CMILMatrix *this, float a2, float a3, enum DXGI_MODE_ROTATION a4)
{
  CMILMatrix *v4; // rcx
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  CMILMatrix *v8; // rcx

  CMILMatrix::SetToIdentity(this);
  v6 = v5 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return;
      CMILMatrix::Rotate90(v4);
      a2 = a3;
      a3 = 0.0;
    }
    else
    {
      CMILMatrix::Scale(v4, -1.0, -1.0, 1.0);
    }
  }
  else
  {
    CMILMatrix::Rotate270(v4);
    a3 = a2;
    a2 = 0.0;
  }
  CMILMatrix::Translate(v8, a2, a3);
}
