/*
 * XREFs of TouchTargetingRankForRect @ 0x1C0251150
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01E4C7C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C01E5920 (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E6544 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     TouchTargetingRankForRegion @ 0x1C0251870 (TouchTargetingRankForRegion.c)
 * Callees:
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     _TTPixelsToHm @ 0x1C014AE60 (_TTPixelsToHm.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C02507C8 (-_TTUpdateRankWithSegment@@YAXJJJJ_NPEAUtagPOINT@@PEAGUtagRECT@@3PEBUtagTOUCHTARGETINGCONTACT@@@.c)
 */

__int64 __fastcall TouchTargetingRankForRect(
        struct tagRECT *a1,
        struct tagRECT *a2,
        int *a3,
        int *a4,
        int *a5,
        unsigned int a6)
{
  LONG right; // r10d
  int left; // r12d
  int top; // eax
  LONG bottom; // r11d
  int v14; // r13d
  struct tagRECT v16; // xmm1
  int v17; // r13d
  int v18; // r9d
  int v19; // edx
  int v20; // ecx
  struct tagRECT v21; // xmm1
  struct tagRECT v22; // xmm1
  struct tagRECT v23; // xmm1
  LONG x; // r10d
  LONG y; // r12d
  int v26; // eax
  LONG v27; // r11d
  int v28; // r11d
  int v29; // eax
  int v30; // r10d
  int v31; // eax
  int v32; // r10d
  int v33; // esi
  LONG v34; // r8d
  BOOL v35; // edx
  LONG v36; // esi
  int v37; // eax
  LONG v38; // ecx
  int v39; // eax
  LONG v40; // ecx
  LONG *p_right; // r9
  LONG v42; // eax
  int v43; // r11d
  LONG v44; // r14d
  int v45; // r8d
  int v46; // edx
  int v47; // ecx
  int v48; // eax
  LONG v49; // r14d
  int v50; // r8d
  int v51; // eax
  int v52; // edx
  bool v53; // [rsp+28h] [rbp-49h]
  struct tagRECT *v54; // [rsp+40h] [rbp-31h]
  struct tagRECT *v55; // [rsp+48h] [rbp-29h]
  struct tagTOUCHTARGETINGCONTACT *v56; // [rsp+50h] [rbp-21h]
  unsigned __int16 v57[2]; // [rsp+58h] [rbp-19h] BYREF
  int v58; // [rsp+5Ch] [rbp-15h]
  LONG v59; // [rsp+60h] [rbp-11h]
  LONG v60; // [rsp+64h] [rbp-Dh]
  struct tagPOINT v61; // [rsp+68h] [rbp-9h] BYREF
  struct tagRECT v62; // [rsp+78h] [rbp+7h] BYREF
  struct tagRECT v63; // [rsp+88h] [rbp+17h] BYREF
  bool v64; // [rsp+D8h] [rbp+67h]

  v61 = 0LL;
  v57[0] = 4094;
  v62 = 0LL;
  if ( !a3[45] )
    return 4094LL;
  if ( a6 == 4 )
  {
    v64 = 1;
  }
  else
  {
    v64 = 0;
    if ( !(unsigned int)IntersectRect(&v62, &a1->left, a3) )
      return 4094LL;
  }
  if ( a4 && !(unsigned int)IntersectRect(a1, &a1->left, a4) )
    return 4094LL;
  if ( !(unsigned int)IntersectRect(a1, &a2->left, &a1->left) )
    return 4094LL;
  right = a1->right;
  left = a1->left;
  v59 = right;
  if ( left == right )
    return 4094LL;
  top = a1->top;
  bottom = a1->bottom;
  v58 = top;
  v60 = bottom;
  if ( top == bottom )
    return 4094LL;
  if ( a5 )
  {
    *a5 = 0;
    a5[1] = 0;
  }
  if ( !a6 )
  {
    v62 = *a2;
    if ( a4 && !(unsigned int)IntersectRect(&v62, &v62.left, a4) )
      return 4094LL;
    v14 = TTPixelsToHm(v62.bottom - v62.top, a3[47]);
    if ( (int)TTPixelsToHm(v62.right - v62.left, a3[46]) > 1400 && v14 > 1400 )
      return 4093LL;
    top = v58;
  }
  v16 = *a2;
  v17 = bottom - 1;
  v56 = (struct tagTOUCHTARGETINGCONTACT *)a3;
  v18 = bottom - 1;
  if ( left == right - 1 )
  {
    v62 = *a1;
    v55 = &v62;
    v19 = top;
    v63 = v16;
    v54 = &v63;
    v53 = v64;
    v20 = left;
LABEL_24:
    _TTUpdateRankWithSegment(v20, v19, left, v18, v53, &v61, v57, v54, v55, v56);
    goto LABEL_25;
  }
  v63 = *a1;
  v62 = v16;
  if ( top != v17 )
  {
    _TTUpdateRankWithSegment(
      left,
      top,
      left,
      v18,
      v64,
      &v61,
      v57,
      &v62,
      &v63,
      (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v21 = *a2;
    v63 = *a1;
    v62 = v21;
    _TTUpdateRankWithSegment(
      v59 - 1,
      v17,
      v59 - 1,
      v58,
      v64,
      &v61,
      v57,
      &v62,
      &v63,
      (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v22 = *a2;
    v63 = *a1;
    v62 = v22;
    _TTUpdateRankWithSegment(
      left,
      v17,
      v59 - 1,
      v17,
      v64,
      &v61,
      v57,
      &v62,
      &v63,
      (const struct tagTOUCHTARGETINGCONTACT *)a3);
    v23 = *a2;
    v18 = v58;
    v20 = v59 - 1;
    v56 = (struct tagTOUCHTARGETINGCONTACT *)a3;
    v19 = v58;
    v55 = &v63;
    v54 = &v62;
    v53 = v64;
    v63 = *a1;
    v62 = v23;
    goto LABEL_24;
  }
  _TTUpdateRankWithSegment(
    left,
    v17,
    right - 1,
    v18,
    v64,
    &v61,
    v57,
    &v62,
    &v63,
    (const struct tagTOUCHTARGETINGCONTACT *)a3);
LABEL_25:
  if ( v57[0] == 4094 || !a5 )
    return v57[0];
  x = v61.x;
  y = v61.y;
  v26 = v61.x - a3[8];
  v27 = v61.y;
  *a5 = v26;
  v28 = v27 - a3[9];
  a5[1] = v28;
  if ( a6 && (_WORD)a6 != 3 )
  {
    if ( a6 == 4 )
    {
      if ( v26 )
      {
        v29 = TTPixelsToHm(abs32(v26), a3[46]);
        if ( v29 > v30 )
          return 4094LL;
      }
      if ( v28 )
      {
        v31 = TTPixelsToHm(abs32(v28), a3[47]);
        goto LABEL_59;
      }
    }
    return v57[0];
  }
  v33 = 200;
  if ( (_WORD)a6 == 3 )
    v33 = HIWORD(a6);
  if ( v26 && (int)TTPixelsToHm(abs32(v26), a3[46]) > v33 || v28 && (int)TTPixelsToHm(abs32(v28), a3[47]) > v33 )
    return 4094LL;
  if ( a6 )
    return v57[0];
  v34 = a3[8];
  v35 = 0;
  v36 = a2->left;
  if ( v34 < a2->left )
  {
    v37 = a3[9];
    v38 = a2->top;
    if ( v37 >= v38 )
    {
      v40 = a2->bottom;
      if ( v37 < v40 )
      {
        v35 = 1;
        goto LABEL_48;
      }
      v39 = v37 - v40 + 1;
    }
    else
    {
      v39 = v37 - v38;
    }
    v35 = (int)abs32(v34 - v36) > (int)abs32(v39);
LABEL_48:
    p_right = &a2->right;
    goto LABEL_55;
  }
  p_right = &a2->right;
  v42 = a2->right;
  if ( v34 >= v42 )
  {
    v43 = a3[9];
    v44 = a2->top;
    if ( v43 >= v44 )
    {
      v49 = a2->bottom;
      if ( v43 < v49 )
        goto LABEL_56;
      v50 = v34 - v42;
      v46 = (v50 + 1) >> 31;
      v47 = v50 + 1;
      v48 = v43 - v49 + 1;
    }
    else
    {
      v45 = v34 - v42;
      v46 = (v45 + 1) >> 31;
      v47 = v45 + 1;
      v48 = v43 - v44;
    }
    v35 = (v46 ^ v47) - v46 > (int)abs32(v48);
  }
LABEL_55:
  if ( !v35 )
  {
    v51 = abs32(y - (a2->top + a2->bottom) / 2);
    v52 = a3[47];
    goto LABEL_58;
  }
LABEL_56:
  v51 = abs32(x - (v36 + *p_right) / 2);
  v52 = a3[46];
LABEL_58:
  v31 = TTPixelsToHm(v51, v52);
  v32 = 700;
LABEL_59:
  if ( v31 <= v32 )
    return v57[0];
  return 4094LL;
}
