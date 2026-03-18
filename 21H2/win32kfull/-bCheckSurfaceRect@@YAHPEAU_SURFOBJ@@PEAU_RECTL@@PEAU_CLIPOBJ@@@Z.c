/*
 * XREFs of ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C012ADE8
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C0125BC0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C0127170 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C01281A0 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C0128770 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C0128AE0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B0FA0 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02B1540 (NtGdiEngEraseSurface.c)
 *     NtGdiEngLineTo @ 0x1C02B1CF0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B1F10 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B20C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B2B00 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall bCheckSurfaceRect(struct _SURFOBJ *a1, struct _RECTL *p_rclBounds, struct _CLIPOBJ *a3)
{
  unsigned int v4; // r9d
  HDEV hdev; // rax
  int v7; // ecx
  int v8; // ecx
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
            v7 = *((_DWORD *)hdev + 640);
            p_rclBounds = (struct _RECTL *)&v9;
            LODWORD(v9) = v9 - v7;
            DWORD2(v9) -= v7;
            v8 = *((_DWORD *)hdev + 641);
            DWORD1(v9) -= v8;
            HIDWORD(v9) -= v8;
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
