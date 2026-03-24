/*
 * XREFs of ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02B1D30
 * Callers:
 *     NtGdiEngFillPath @ 0x1C02B2E40 (NtGdiEngFillPath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B3E30 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B4290 (NtGdiEngStrokePath.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x1C016A468 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 *     Feature_2356201784__private_IsEnabledDeviceUsage @ 0x1C016D90C (Feature_2356201784__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall bCheckSurfacePath(struct _SURFOBJ *a1, struct _PATHOBJ *a2, struct _CLIPOBJ *a3)
{
  unsigned int v4; // edi
  BOOL v5; // ebp
  RECTL *p_rclBounds; // rbx
  __int64 v7; // rax
  LONG right; // ecx
  __int64 cx; // rcx
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  v4 = 1;
  v11 = 0LL;
  if ( !a1 || !a2 )
    return 0;
  if ( a3 )
    v5 = a3->iDComplexity == 0;
  else
    v5 = 1;
  if ( v5 )
  {
    p_rclBounds = (RECTL *)&v11;
    v7 = 0LL;
    v11 = *(_OWORD *)(*(_QWORD *)&a2[1] + 48LL);
    do
      *((int *)&v11 + v7++) >>= 4;
    while ( v7 < 4 );
  }
  else
  {
    p_rclBounds = &a3->rclBounds;
    if ( a3 == (struct _CLIPOBJ *)-4LL )
      return v4;
  }
  right = p_rclBounds->right;
  if ( p_rclBounds->left > right || p_rclBounds->top > p_rclBounds->bottom )
  {
    v4 = 0;
  }
  else if ( right > a1->sizlBitmap.cx )
  {
LABEL_19:
    v4 = 0;
    goto LABEL_20;
  }
  if ( p_rclBounds->left < 0 || p_rclBounds->bottom > a1->sizlBitmap.cy || p_rclBounds->top < 0 )
    goto LABEL_19;
LABEL_20:
  if ( (unsigned int)Feature_2356201784__private_IsEnabledDeviceUsage() )
  {
    if ( v4 )
    {
      if ( v5 )
      {
        cx = a1->sizlBitmap.cx;
        if ( p_rclBounds->right == (_DWORD)cx || p_rclBounds->bottom == a1->sizlBitmap.cy )
          TraceLoggingWriteUnsupportedGdiUsage(
            &PathFullBoundsCount,
            0x1Cu,
            p_rclBounds->right,
            p_rclBounds->bottom,
            cx,
            a1->sizlBitmap.cy);
      }
    }
  }
  return v4;
}
