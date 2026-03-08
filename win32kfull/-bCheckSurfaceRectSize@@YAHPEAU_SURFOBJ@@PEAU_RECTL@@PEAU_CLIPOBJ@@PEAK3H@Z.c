/*
 * XREFs of ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02CA26C
 * Callers:
 *     NtGdiEngBitBlt @ 0x1C02CAFD0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02CB640 (NtGdiEngCopyBits.c)
 *     NtGdiEngPlgBlt @ 0x1C02CCC00 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CD010 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CD470 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckSurfaceRectSize(
        struct _SURFOBJ *a1,
        struct _RECTL *a2,
        struct _CLIPOBJ *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  int left; // ebx
  LONG top; // edx
  LONG right; // r11d
  LONG bottom; // r9d
  RECTL *p_rclBounds; // r10
  RECTL *v13; // rax
  HDEV hdev; // rax
  int v15; // ecx
  int v16; // ecx
  LONG v17; // edx
  LONG v18; // r8d
  LONG v19; // r11d
  LONG v20; // ebx
  LONG v21; // r9d
  LONG v22; // r10d
  int v23; // r8d
  int v24; // ebx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx

  left = 0;
  top = 0;
  right = 0;
  bottom = 0;
  p_rclBounds = 0LL;
  if ( !a1 )
    return 1LL;
  if ( a3 && a3->iDComplexity )
  {
    p_rclBounds = &a3->rclBounds;
    top = a3->rclBounds.top;
    v13 = &a3->rclBounds;
    right = a3->rclBounds.right;
    bottom = a3->rclBounds.bottom;
LABEL_7:
    left = v13->left;
    if ( v13->left > right || top > bottom )
      return 0LL;
    goto LABEL_9;
  }
  if ( a2 )
  {
    top = a2->top;
    v13 = a2;
    right = a2->right;
    bottom = a2->bottom;
    goto LABEL_7;
  }
LABEL_9:
  if ( SLODWORD(a1[1].hsurf) < 0 )
  {
    hdev = a1->hdev;
    if ( hdev )
    {
      if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
      {
        v15 = *((_DWORD *)hdev + 640);
        left -= v15;
        right -= v15;
        v16 = *((_DWORD *)hdev + 641);
        top -= v16;
        bottom -= v16;
      }
    }
  }
  if ( right <= a1->sizlBitmap.cx && left >= 0 && bottom <= a1->sizlBitmap.cy && top >= 0 )
  {
    if ( p_rclBounds )
    {
      if ( a2 )
      {
        v17 = p_rclBounds->left;
        v18 = p_rclBounds->right;
        v19 = p_rclBounds->top;
        v20 = p_rclBounds->bottom;
        if ( v18 >= a2->right )
          v18 = a2->right;
        v21 = a2->top;
        v22 = a2->bottom;
        if ( v17 <= a2->left )
          v17 = a2->left;
        v23 = v18 - v17;
        if ( v23 <= 0 )
          v23 = 0;
        *a4 = v23;
        if ( v19 <= v21 )
          v19 = v21;
        if ( v20 >= v22 )
          v20 = v22;
        v24 = v20 - v19;
        if ( v24 <= 0 )
          v24 = 0;
        *a5 = v24;
        return 1LL;
      }
      v26 = p_rclBounds->right - p_rclBounds->left;
      if ( v26 <= 0 )
        v26 = 0;
      *a4 = v26;
      v27 = p_rclBounds->bottom - p_rclBounds->top;
LABEL_40:
      if ( v27 <= 0 )
        v27 = 0;
      *a5 = v27;
      return 1LL;
    }
    if ( a2 )
    {
      v28 = a2->right - a2->left;
      if ( v28 <= 0 )
        v28 = 0;
      *a4 = v28;
      v27 = a2->bottom - a2->top;
      goto LABEL_40;
    }
    return 1LL;
  }
  return 0LL;
}
