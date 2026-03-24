/*
 * XREFs of ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C013D78C
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C013AC00 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C013AF80 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C013B6A0 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C013CDD0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngPlgBlt @ 0x1C02B30F0 (NtGdiEngPlgBlt.c)
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
  unsigned int v5; // edi
  int left; // esi
  LONG top; // edx
  LONG right; // r11d
  LONG bottom; // r9d
  RECTL *p_rclBounds; // rbx
  BOOL v14; // eax
  RECTL *v15; // rax
  LONG v16; // edx
  LONG v17; // r8d
  LONG v18; // r11d
  LONG v19; // ebx
  LONG v20; // ecx
  LONG v21; // r9d
  LONG v22; // r10d
  int v23; // r8d
  int v24; // ebx
  int v26; // ecx
  int v27; // ecx
  HDEV hdev; // rax
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx

  v5 = 0;
  left = 0;
  top = 0;
  right = 0;
  bottom = 0;
  p_rclBounds = 0LL;
  if ( !a1 )
    return 1;
  if ( a3 )
    v14 = a3->iDComplexity == 0;
  else
    v14 = 1;
  if ( !v14 )
  {
    p_rclBounds = &a3->rclBounds;
    top = a3->rclBounds.top;
    v15 = &a3->rclBounds;
    right = a3->rclBounds.right;
    bottom = a3->rclBounds.bottom;
LABEL_6:
    left = v15->left;
    if ( v15->left > right || top > bottom )
      return v5;
    goto LABEL_8;
  }
  if ( a2 )
  {
    top = a2->top;
    v15 = a2;
    right = a2->right;
    bottom = a2->bottom;
    goto LABEL_6;
  }
LABEL_8:
  if ( SLODWORD(a1[1].hsurf) < 0 )
  {
    hdev = a1->hdev;
    if ( hdev )
    {
      if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
      {
        v29 = *((_DWORD *)hdev + 646);
        left -= v29;
        right -= v29;
        v30 = *((_DWORD *)hdev + 647);
        top -= v30;
        bottom -= v30;
      }
    }
  }
  if ( right <= a1->sizlBitmap.cx && left >= 0 && bottom <= a1->sizlBitmap.cy && top >= 0 )
  {
    if ( p_rclBounds )
    {
      if ( a2 )
      {
        v16 = p_rclBounds->left;
        v17 = p_rclBounds->right;
        v18 = p_rclBounds->top;
        v19 = p_rclBounds->bottom;
        v20 = a2->right;
        v21 = a2->top;
        if ( v16 <= a2->left )
          v16 = a2->left;
        v22 = a2->bottom;
        if ( v17 >= v20 )
          v17 = v20;
        v23 = v17 - v16;
        if ( v23 <= 0 )
          v23 = 0;
        *a4 = v23;
        if ( v18 <= v21 )
          v18 = v21;
        if ( v19 >= v22 )
          v19 = v22;
        v24 = v19 - v18;
        if ( v24 <= 0 )
          v24 = 0;
        *a5 = v24;
        return 1;
      }
      v31 = p_rclBounds->right - p_rclBounds->left;
      if ( v31 <= 0 )
        v31 = 0;
      *a4 = v31;
      v27 = p_rclBounds->bottom - p_rclBounds->top;
LABEL_36:
      if ( v27 <= 0 )
        v27 = 0;
      *a5 = v27;
      return 1;
    }
    if ( a2 )
    {
      v26 = a2->right - a2->left;
      if ( v26 <= 0 )
        v26 = 0;
      *a4 = v26;
      v27 = a2->bottom - a2->top;
      goto LABEL_36;
    }
    return 1;
  }
  return v5;
}
