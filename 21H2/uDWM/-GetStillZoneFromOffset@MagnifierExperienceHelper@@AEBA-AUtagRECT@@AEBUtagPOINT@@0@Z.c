/*
 * XREFs of ?GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA?AUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1800BD0A4
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800BCD8C (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 *     ?ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z @ 0x1800BD4FC (-ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z.c)
 * Callees:
 *     ceilf_0 @ 0x180058132 (ceilf_0.c)
 *     ?IsEmptyRegionOnVirtualDesktop@MagnifierExperienceHelper@@AEBA_NUtagPOINT@@@Z @ 0x1800BD3F8 (-IsEmptyRegionOnVirtualDesktop@MagnifierExperienceHelper@@AEBA_NUtagPOINT@@@Z.c)
 */

struct tagRECT *__fastcall MagnifierExperienceHelper::GetStillZoneFromOffset(
        RECT *lprc,
        struct tagRECT *__return_ptr retstr,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  float v4; // xmm1_4
  LONG x; // eax
  double v10; // xmm6_8
  bool IsEmptyRegionOnVirtualDesktop; // r13
  bool v12; // bl
  bool v13; // r12
  bool v14; // al
  double v15; // xmm4_8
  double v16; // xmm8_8
  double v17; // xmm5_8
  double left; // xmm13_8
  double top; // xmm14_8
  double v20; // xmm11_8
  double v21; // xmm9_8
  double v22; // xmm12_8
  double v23; // xmm6_8
  double v24; // xmm10_8
  double v25; // xmm1_8
  LONG right; // ecx
  double v27; // xmm3_8
  double v28; // xmm2_8
  LONG bottom; // ebx
  POINT pt; // [rsp+E8h] [rbp+67h]

  v4 = *(float *)&lprc[7].right;
  x = a4->x;
  *retstr = 0LL;
  pt.x = x;
  pt.y = lprc[3].top - 1;
  v10 = 1.0 - *(float *)&lprc[7].bottom;
  IsEmptyRegionOnVirtualDesktop = MagnifierExperienceHelper::IsEmptyRegionOnVirtualDesktop(lprc, pt);
  pt.x = lprc[3].left - 1;
  pt.y = a4->y;
  v12 = MagnifierExperienceHelper::IsEmptyRegionOnVirtualDesktop(lprc, pt);
  pt.x = lprc[3].right + 1;
  pt.y = a4->y;
  v13 = MagnifierExperienceHelper::IsEmptyRegionOnVirtualDesktop(lprc, pt);
  pt.x = a4->x;
  pt.y = lprc[3].bottom + 1;
  v14 = MagnifierExperienceHelper::IsEmptyRegionOnVirtualDesktop(lprc, pt);
  v15 = *(double *)&lprc[7].left;
  v16 = *(double *)&lprc[5].right;
  v17 = *(double *)&lprc[5].left;
  left = (double)lprc->left;
  top = (double)lprc->top;
  v20 = v16 * v10;
  v21 = left / v15 + (double)a3->x;
  v22 = v17 * (1.0 - v4);
  v23 = 0.0;
  v24 = top / v15 + (double)a3->y;
  if ( v12 )
    *(_QWORD *)&v25 = COERCE_UNSIGNED_INT64((double)(lprc[3].left - lprc->left) / v15) & _xmm;
  else
    v25 = 0.0;
  right = lprc->right;
  if ( v13 )
    *(_QWORD *)&v27 = COERCE_UNSIGNED_INT64((double)(lprc[3].right - right) / v15) & _xmm;
  else
    v27 = 0.0;
  if ( IsEmptyRegionOnVirtualDesktop )
    *(_QWORD *)&v28 = COERCE_UNSIGNED_INT64((double)(lprc[3].top - lprc->top) / v15) & _xmm;
  else
    v28 = 0.0;
  bottom = lprc->bottom;
  if ( v14 )
    *(_QWORD *)&v23 = COERCE_UNSIGNED_INT64((double)(lprc[3].bottom - bottom) / v15) & _xmm;
  retstr->left = (int)((v21 - left) / *(double *)&lprc[1].left * v22 + v25 + v21 + 0.5);
  retstr->top = (int)((v24 - top) / *(double *)&lprc[1].right * v20 + v28 + v24 + 0.5);
  retstr->right = (int)ceilf_0(v17 + v21 - (((double)right - (v17 + v21)) / *(double *)&lprc[1].left * v22 - v27));
  retstr->bottom = (int)ceilf_0(v16 + v24 - (((double)bottom - (v16 + v24)) / *(double *)&lprc[1].right * v20 - v23));
  return retstr;
}
