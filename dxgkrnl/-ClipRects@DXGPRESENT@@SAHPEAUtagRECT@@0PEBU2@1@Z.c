/*
 * XREFs of ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C0338B70
 * Callers:
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C03395D4 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 * Callees:
 *     ?ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z @ 0x1C033898C (-ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C033A200 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 */

__int64 __fastcall DXGPRESENT::ClipRects(
        struct tagRECT *a1,
        struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  LONG *p_bottom; // rdx
  LONG top; // eax
  LONG bottom; // r8d
  int *p_top; // r11
  int *p_right; // r15
  LONG right; // r10d
  __int64 v15; // r12
  __int64 v16; // r15
  __int64 left; // r10
  __int64 v18; // r13
  LONG v19; // ecx
  LONG v20; // edx
  int v21; // r14d
  int v22; // r13d
  int v23; // r12d
  int v24; // [rsp+30h] [rbp-40h]
  int v25; // [rsp+34h] [rbp-3Ch]
  LONG v26; // [rsp+38h] [rbp-38h]
  int v27; // [rsp+38h] [rbp-38h]
  LONG v28; // [rsp+3Ch] [rbp-34h]
  LONG v29; // [rsp+40h] [rbp-30h]
  struct tagRECT v30; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v31; // [rsp+58h] [rbp-18h] BYREF
  LONG v32; // [rsp+B0h] [rbp+40h]
  int v33; // [rsp+B0h] [rbp+40h]

  p_bottom = &a1->bottom;
  if ( a3 )
  {
    top = a3->top;
    if ( top >= *p_bottom )
      return 0LL;
    bottom = a3->bottom;
    p_top = &a1->top;
    if ( bottom <= a1->top )
      return 0LL;
    p_right = &a1->right;
    if ( a3->left >= a1->right )
      return 0LL;
    right = a3->right;
    if ( right <= a1->left || top >= bottom || a3->left >= right )
      return 0LL;
  }
  else
  {
    p_top = &a1->top;
    p_right = &a1->right;
  }
  if ( !a4 )
  {
    if ( a3 )
    {
      DXGPRESENT::ClipIntervals(p_top, p_bottom, &a2->top, &a2->bottom, a3->top, a3->bottom);
      DXGPRESENT::ClipIntervals(&a1->left, p_right, &a2->left, &a2->right, a3->left, a3->right);
    }
    return 1LL;
  }
  v15 = a4->top;
  if ( (int)v15 >= a2->bottom - a2->top )
    return 0LL;
  v16 = a4->bottom;
  if ( (int)v16 <= 0 )
    return 0LL;
  left = a4->left;
  v25 = left;
  if ( (int)left >= a2->right - a2->left )
    return 0LL;
  v18 = a4->right;
  if ( (int)v18 <= 0 || (int)v15 >= (int)v16 || (int)left >= (int)v18 )
    return 0LL;
  if ( a3 )
  {
    v32 = a3->left;
    v26 = a3->right;
    v19 = a3->bottom;
    v20 = a3->top;
    v24 = (((int)v18 - (int)left) << 16) / (v26 - a3->left);
    v29 = v19;
    v28 = v20;
    v30 = 0LL;
    if ( v24 && (v21 = (((int)v16 - (int)v15) << 16) / (v19 - v20)) != 0 )
    {
      if ( DXGPRESENT::IntersectRect(&v30, a3, a1) )
      {
        v33 = (v25 << 16) + v24 * (v30.left - v32);
        v27 = ((_DWORD)v18 << 16) + v24 * (v30.right - v26);
        v31.left = (v33 + 0xFFFF) >> 16;
        v22 = ((_DWORD)v15 << 16) + v21 * (v30.top - v28);
        v31.right = v27 >> 16;
        v31.top = (v22 + 0xFFFF) >> 16;
        v23 = ((_DWORD)v16 << 16) + v21 * (v30.bottom - v29);
        v31.bottom = v23 >> 16;
        if ( DXGPRESENT::IntersectRect(a2, &v31, a2) )
        {
          v30.left += (v24 + (a2->left << 16) - v33 - 1) / v24;
          v30.right += ((a2->right << 16) - v27) / v24;
          v30.top += (v21 + (a2->top << 16) - v22 - 1) / v21;
          v30.bottom += ((a2->bottom << 16) - v23) / v21;
          if ( DXGPRESENT::IntersectRect(a1, &v30, a1) )
            return 1LL;
        }
      }
    }
    else
    {
      WdLogSingleEntry4(3LL, left, v15, v18, v16);
    }
    return 0LL;
  }
  DXGPRESENT::ClipIntervals(&a2->top, &a2->bottom, p_top, p_bottom, v15, v16);
  DXGPRESENT::ClipIntervals(&a2->left, &a2->right, &a1->left, &a1->right, a4->left, a4->right);
  return 1LL;
}
