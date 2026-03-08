/*
 * XREFs of ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02CA19C
 * Callers:
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02CA0B0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x1C02CAC30 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02CAFD0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02CB640 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C02CBF90 (NtGdiEngEraseSurface.c)
 *     NtGdiEngLineTo @ 0x1C02CC710 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02CCA50 (NtGdiEngPaint.c)
 *     NtGdiEngTextOut @ 0x1C02CE030 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02CE3E0 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall bCheckSurfaceRect(struct _SURFOBJ *a1, struct _RECTL *p_rclBounds, struct _CLIPOBJ *a3)
{
  unsigned int v4; // r9d
  HDEV hdev; // rax
  int v6; // ecx
  int v7; // ecx
  __int128 v9; // [rsp+0h] [rbp-28h] BYREF

  v4 = 1;
  if ( a1 )
  {
    if ( a3 && a3->iDComplexity )
      p_rclBounds = &a3->rclBounds;
    if ( p_rclBounds )
    {
      if ( p_rclBounds->left > p_rclBounds->right || p_rclBounds->top > p_rclBounds->bottom )
        v4 = 0;
      v9 = (__int128)*p_rclBounds;
      if ( SLODWORD(a1[1].hsurf) < 0 )
      {
        hdev = a1->hdev;
        if ( hdev )
        {
          if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
          {
            v6 = *((_DWORD *)hdev + 640);
            p_rclBounds = (struct _RECTL *)&v9;
            LODWORD(v9) = v9 - v6;
            DWORD2(v9) -= v6;
            v7 = *((_DWORD *)hdev + 641);
            DWORD1(v9) -= v7;
            HIDWORD(v9) -= v7;
          }
        }
      }
      if ( v4
        && (p_rclBounds->right > a1->sizlBitmap.cx
         || p_rclBounds->left < 0
         || p_rclBounds->bottom > a1->sizlBitmap.cy
         || p_rclBounds->top < 0) )
      {
        return 0;
      }
    }
  }
  return v4;
}
