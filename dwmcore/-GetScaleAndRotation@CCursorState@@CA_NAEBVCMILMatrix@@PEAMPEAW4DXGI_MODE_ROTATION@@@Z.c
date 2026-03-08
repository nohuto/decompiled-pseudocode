/*
 * XREFs of ?GetScaleAndRotation@CCursorState@@CA_NAEBVCMILMatrix@@PEAMPEAW4DXGI_MODE_ROTATION@@@Z @ 0x180276D74
 * Callers:
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@@Z @ 0x180277F98 (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 * Callees:
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180012A10 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800B4BA4 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 */

char __fastcall CCursorState::GetScaleAndRotation(
        const struct CMILMatrix *this,
        float *a2,
        enum DXGI_MODE_ROTATION *a3)
{
  char v6; // di
  enum DXGI_MODE_ROTATION Rotation; // eax
  float v9; // [rsp+50h] [rbp+18h] BYREF
  float v10; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  Rotation = (unsigned int)CMILMatrix::GetRotation(this);
  *a3 = Rotation;
  if ( Rotation )
  {
    CMILMatrix::Get2DScaleDimensions(this, &v9, &v10);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - v10) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.0000011920929 )
    {
      *a2 = v9;
      return 1;
    }
  }
  return v6;
}
