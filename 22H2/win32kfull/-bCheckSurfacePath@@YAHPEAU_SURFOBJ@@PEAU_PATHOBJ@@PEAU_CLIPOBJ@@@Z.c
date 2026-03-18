/*
 * XREFs of ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02C791C
 * Callers:
 *     NtGdiEngFillPath @ 0x1C02C9A40 (NtGdiEngFillPath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CB750 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CBBC0 (NtGdiEngStrokePath.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x1C013E398 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 *     Feature_2020657467__private_IsEnabledDeviceUsage @ 0x1C014054C (Feature_2020657467__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall bCheckSurfacePath(struct _SURFOBJ *a1, struct _PATHOBJ *a2, struct _CLIPOBJ *a3)
{
  unsigned int v4; // ebx
  BYTE iDComplexity; // al
  BOOL v6; // r14d
  RECTL *p_rclBounds; // rdi
  __int64 v8; // rax
  LONG *p_bottom; // rsi
  LONG right; // edx
  int *p_top; // r9
  LONG *v12; // rcx
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF

  v4 = 1;
  v16 = 0LL;
  if ( !a1 || !a2 )
    return 0;
  if ( !a3 )
  {
    v6 = 1;
LABEL_8:
    p_rclBounds = (RECTL *)&v16;
    v8 = 0LL;
    v16 = *(_OWORD *)(*(_QWORD *)&a2[1] + 48LL);
    do
      *((int *)&v16 + v8++) >>= 4;
    while ( v8 < 4 );
    goto LABEL_10;
  }
  iDComplexity = a3->iDComplexity;
  v6 = iDComplexity == 0;
  if ( !iDComplexity )
    goto LABEL_8;
  p_rclBounds = &a3->rclBounds;
  if ( a3 == (struct _CLIPOBJ *)-4LL )
    return v4;
LABEL_10:
  p_bottom = &p_rclBounds->bottom;
  right = p_rclBounds->right;
  if ( p_rclBounds->left > right || (p_top = &p_rclBounds->top, p_rclBounds->top > *p_bottom) )
  {
    v12 = &p_rclBounds->bottom;
    p_top = &p_rclBounds->top;
    v4 = 0;
  }
  else
  {
    v12 = &p_rclBounds->bottom;
    if ( right > a1->sizlBitmap.cx )
    {
LABEL_18:
      v4 = 0;
      goto LABEL_19;
    }
  }
  if ( p_rclBounds->left < 0 || *v12 > a1->sizlBitmap.cy || *p_top < 0 )
    goto LABEL_18;
LABEL_19:
  if ( (unsigned int)Feature_2020657467__private_IsEnabledDeviceUsage()
    && v4
    && v6
    && (p_rclBounds->right == a1->sizlBitmap.cx || *p_bottom == a1->sizlBitmap.cy) )
  {
    v14 = Gre::Base::Globals(v13);
    TraceLoggingWriteUnsupportedGdiUsage((_DWORD *)v14 + 2008, 0x1Cu, p_rclBounds->right, *p_bottom);
  }
  return v4;
}
