/*
 * XREFs of ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C013CD1C
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C013AC00 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C013AF80 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C013B6A0 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C013BC80 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C013CDD0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B1E70 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02B2440 (NtGdiEngEraseSurface.c)
 *     NtGdiEngLineTo @ 0x1C02B2C70 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B2F40 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B30F0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B3D60 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall bCheckSurfaceRect(struct _SURFOBJ *a1, struct _RECTL *p_rclBounds, struct _CLIPOBJ *a3)
{
  unsigned int v4; // r9d
  BOOL v5; // eax
  HDEV hdev; // rax
  int v8; // ecx
  int v9; // ecx
  __int128 v10; // [rsp+0h] [rbp-28h] BYREF

  v4 = 1;
  if ( a1 )
  {
    if ( a3 )
      v5 = a3->iDComplexity == 0;
    else
      v5 = 1;
    if ( !v5 )
      p_rclBounds = &a3->rclBounds;
    if ( p_rclBounds )
    {
      if ( p_rclBounds->left > p_rclBounds->right || p_rclBounds->top > p_rclBounds->bottom )
        v4 = 0;
      v10 = (__int128)*p_rclBounds;
      if ( SLODWORD(a1[1].hsurf) < 0 )
      {
        hdev = a1->hdev;
        if ( hdev )
        {
          if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
          {
            v8 = *((_DWORD *)hdev + 646);
            p_rclBounds = (struct _RECTL *)&v10;
            LODWORD(v10) = v10 - v8;
            DWORD2(v10) -= v8;
            v9 = *((_DWORD *)hdev + 647);
            DWORD1(v10) -= v9;
            HIDWORD(v10) -= v9;
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
