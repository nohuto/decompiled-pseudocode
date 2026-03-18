/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00C09C8
 * Callers:
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     _ScrollDC @ 0x1C00C08AC (_ScrollDC.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     GreGetLayout @ 0x1C00C1400 (GreGetLayout.c)
 *     SubtractRect @ 0x1C00C1550 (SubtractRect.c)
 *     UnionRect @ 0x1C00C1640 (UnionRect.c)
 *     GreTransformPoints @ 0x1C00E2F9C (GreTransformPoints.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C014B2A4 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     GetDCOrgOnScreen @ 0x1C014C0D4 (GetDCOrgOnScreen.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalScrollDC(
        struct tagWND *a1,
        HDC a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        HRGN a7,
        HRGN a8,
        struct tagRECT *a9,
        int a10)
{
  HRGN v10; // rbx
  __int64 v14; // r13
  __int64 v15; // rcx
  unsigned int ClipBox; // esi
  __m128i *v17; // rcx
  __m128i v18; // xmm6
  int v19; // r8d
  __int64 v20; // rcx
  HRGN v22; // rdi
  int v23; // eax
  __int64 v24; // rcx
  struct tagRECT v25; // xmm0
  LONG v26; // edx
  int v27; // r9d
  int v28; // r8d
  int v29; // r10d
  __int64 v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // edi
  int v35; // eax
  int v36; // ecx
  __int32 v37; // ecx
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rax
  HRGN EmptyRgn; // [rsp+60h] [rbp-A0h]
  unsigned int v42; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h]
  HRGN v44; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+80h] [rbp-80h]
  int v46; // [rsp+84h] [rbp-7Ch]
  unsigned int v47; // [rsp+88h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  __int64 v51; // [rsp+A8h] [rbp-58h]
  struct tagRECT *v52; // [rsp+B0h] [rbp-50h]
  int v53; // [rsp+B8h] [rbp-48h]
  int v54; // [rsp+BCh] [rbp-44h]
  unsigned int v55; // [rsp+C0h] [rbp-40h]
  unsigned int v56; // [rsp+C4h] [rbp-3Ch]
  __m128i v57; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v58; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v59; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v60; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v61; // [rsp+110h] [rbp+10h] BYREF
  __m128i v62; // [rsp+120h] [rbp+20h] BYREF
  __int128 v63; // [rsp+130h] [rbp+30h] BYREF

  v10 = a8;
  v52 = a5;
  v62.m128i_i64[0] = (__int64)a6;
  v14 = 0LL;
  v44 = a7;
  v60 = 0LL;
  v42 = a4;
  v57 = 0LL;
  v63 = 0LL;
  v47 = a3;
  v59 = 0LL;
  v46 = 0;
  v61 = 0LL;
  EmptyRgn = 0LL;
  v58 = 0LL;
  v15 = *(_QWORD *)(gpDispInfo + 40LL);
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v43 = 0LL;
  v45 = 0;
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(v15, a2) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, &v60, 1LL);
  if ( !ClipBox )
    goto LABEL_109;
  v17 = (__m128i *)&v60;
  if ( v52 )
    v17 = (__m128i *)v52;
  v18 = *v17;
  v57 = *v17;
  if ( v62.m128i_i64[0] )
    v63 = *(_OWORD *)v62.m128i_i64[0];
  LODWORD(v52) = a3;
  LODWORD(v51) = a4;
  if ( a10 )
  {
    GreTransformPoints(a2, 1);
    GreTransformPoints(a2, 1);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      v36 = v60;
      LODWORD(v60) = DWORD2(v60);
      DWORD2(v60) = v36;
      v37 = v57.m128i_i32[0];
      v57.m128i_i32[0] = v57.m128i_i32[2];
      v57.m128i_i32[2] = v37;
      v46 = 1;
    }
    if ( v62.m128i_i64[0] )
    {
      GreTransformPoints(a2, 1);
      if ( v46 )
      {
        v38 = v63;
        LODWORD(v63) = DWORD2(v63);
        DWORD2(v63) = v38;
      }
    }
    v54 = 0;
    v53 = 0;
    v55 = a3;
    v56 = a4;
    GreTransformPoints(a2, 1);
    v18 = v57;
    v42 = a4;
    v47 = a3;
  }
  if ( ClipBox == 1 )
    goto LABEL_21;
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(ClipBox - 1);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_109;
    v18 = v57;
    v19 = 1;
    v45 = 1;
  }
  else
  {
    v19 = 0;
  }
  LODWORD(v59) = a3 + _mm_cvtsi128_si32(v18);
  DWORD2(v59) = a3 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
  DWORD1(v59) = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
  v20 = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v18, 12));
  HIDWORD(v59) = v20;
  if ( !v62.m128i_i64[0] )
  {
LABEL_26:
    if ( ClipBox != 2 )
      goto LABEL_60;
    goto LABEL_27;
  }
  if ( (unsigned __int64)v44 <= 1 && ClipBox == 2 )
  {
    if ( !(unsigned int)IntersectRect(&v60, (int *)&v60, (int *)&v63) )
      goto LABEL_21;
LABEL_27:
    v22 = EmptyRgn;
LABEL_28:
    if ( (unsigned __int64)v44 <= 1 )
    {
      v62 = v18;
      IntersectRect(&v59, (int *)&v59, (int *)&v60);
      v23 = IntersectRect(&v57, v57.m128i_i32, (int *)&v60);
      v46 = v23;
      if ( v44 != (HRGN)1 )
      {
        LODWORD(v58) = a3 + v57.m128i_i32[0];
        DWORD2(v58) = a3 + v57.m128i_i32[2];
        DWORD1(v58) = v42 + v57.m128i_i32[1];
        HIDWORD(v58) = v42 + v57.m128i_i32[3];
        IntersectRect(&v58, (int *)&v58, (int *)&v59);
        v23 = v46;
      }
      if ( v23 )
      {
        if ( (unsigned int)IntersectRect(&v61, v57.m128i_i32, (int *)&v59) )
        {
          if ( a3 && v42 )
            goto LABEL_100;
          UnionRect(&v61, &v57, &v59);
          SubtractRect(&v61, &v61, &v58);
          v25 = v61;
LABEL_35:
          if ( a9 )
            *a9 = v25;
          if ( a8 && !(unsigned int)SetRectRgnIndirect(a8, &v61) )
            goto LABEL_109;
          ClipBox = 2;
          if ( v61.left >= v61.right || v61.top >= v61.bottom )
            ClipBox = 1;
LABEL_40:
          v26 = v58;
          v27 = DWORD2(v58);
          if ( (int)v58 < SDWORD2(v58) )
          {
            v28 = DWORD1(v58);
            v29 = HIDWORD(v58);
            if ( SDWORD1(v58) < SHIDWORD(v58) )
            {
              if ( a10 )
              {
                GreTransformPoints(a2, 0);
                v29 = HIDWORD(v58);
                v27 = DWORD2(v58);
                v28 = DWORD1(v58);
                v26 = v58;
              }
              NtGdiBitBltInternal(a2, v26, v28, v27 - v26, v29 - v28, a2, v26 - (_DWORD)v52, v28 - v51, 13369376, 0, 0);
            }
          }
          goto LABEL_45;
        }
        v39 = v57.m128i_i64[0] - v62.m128i_i64[0];
        if ( v57.m128i_i64[0] == v62.m128i_i64[0] )
          v39 = v57.m128i_i64[1] - v62.m128i_i64[1];
        if ( v39 )
        {
LABEL_100:
          if ( a8 || a9 && (v14 = CreateEmptyRgn(v24), (v10 = (HRGN)v14) != 0LL) )
          {
            v40 = v48;
            if ( !v48 )
            {
              v40 = CreateEmptyRgn(v24);
              v48 = v40;
            }
            SetRectRgnIndirect(v40, &v57);
            SetRectRgnIndirect(v10, &v59);
            if ( !(unsigned int)GreCombineRgn(v10, v10, v48, 2LL) )
              goto LABEL_109;
            SetRectRgnIndirect(v48, &v58);
            ClipBox = GreCombineRgn(v10, v10, v48, 4LL);
            if ( !ClipBox || a9 && !(unsigned int)GreGetRgnBox(v10, a9) )
              goto LABEL_109;
          }
          goto LABEL_40;
        }
        v25 = (struct tagRECT)v57;
      }
      else
      {
        v25 = (struct tagRECT)v59;
      }
      v61 = v25;
      goto LABEL_35;
    }
LABEL_60:
    if ( !v45 )
    {
      EmptyRgn = (HRGN)CreateEmptyRgn(v20);
      if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
        goto LABEL_109;
    }
    v49 = CreateEmptyRgn(v20);
    SetRectRgnIndirect(v49, &v57);
    if ( !(unsigned int)GreCombineRgn(v49, v49, EmptyRgn, 1LL) )
      goto LABEL_109;
    v50 = CreateEmptyRgn(v32);
    SetRectRgnIndirect(v50, &v59);
    if ( !(unsigned int)GreCombineRgn(v50, v50, EmptyRgn, 1LL) )
      goto LABEL_109;
    v34 = 1;
    if ( v44 == (HRGN)1 )
      goto LABEL_72;
    v43 = CreateEmptyRgn(v33);
    if ( (unsigned int)GreCombineRgn(v43, v49, 0LL, 5LL) )
    {
      GreOffsetRgn(v43, v47, v42);
      v34 = GreCombineRgn(v43, v43, v50, 1LL);
      if ( (unsigned __int64)v44 > 1 )
      {
        v14 = CreateEmptyRgn(v33);
        if ( !v34 )
          goto LABEL_109;
        if ( v34 == 1 )
          goto LABEL_72;
        v62.m128i_i64[0] = 0LL;
        GetDCOrgOnScreen(a2, &v62);
        GreCombineRgn(v14, v44, 0LL, 5LL);
        GreOffsetRgn(v14, (unsigned int)-v62.m128i_i32[0], (unsigned int)-v62.m128i_i32[1]);
        v35 = GreCombineRgn(v43, v43, v14, 4LL);
        v34 = v35;
        if ( !v35 )
          goto LABEL_109;
        if ( v35 == 1 )
        {
LABEL_72:
          if ( a8 )
            goto LABEL_116;
          if ( a9 )
          {
            if ( !v14 )
              v14 = CreateEmptyRgn(v33);
            v10 = (HRGN)v14;
            if ( v14 )
            {
LABEL_116:
              ClipBox = GreCombineRgn(v10, v50, v49, 2LL);
              if ( !ClipBox )
                goto LABEL_109;
              if ( v34 != 1 )
                ClipBox = GreCombineRgn(v10, v10, v43, 4LL);
              if ( a9 && !(unsigned int)GreGetRgnBox(v10, a9) )
                goto LABEL_109;
            }
          }
          if ( v34 != 1 )
          {
            v44 = 0LL;
            GreGetDCOrg(a2, &v44);
            v30 = v43;
            GreOffsetRgn(v43, (unsigned int)v44, HIDWORD(v44));
            GreSelectVisRgnShared(a2, v43, 4LL);
            if ( a10 )
              GreTransformPoints(a2, 0);
            NtGdiBitBltInternal(
              a2,
              v59,
              SDWORD1(v59),
              DWORD2(v59) - v59,
              HIDWORD(v59) - DWORD1(v59),
              a2,
              v59 - (_DWORD)v52,
              DWORD1(v59) - v51,
              13369376,
              0,
              0);
            GreSelectVisRgnShared(a2, v43, 4LL);
            v22 = EmptyRgn;
            goto LABEL_46;
          }
          v22 = EmptyRgn;
LABEL_45:
          v30 = v43;
LABEL_46:
          if ( a10 && a9 )
            GreTransformPoints(a2, 0);
          GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
          GreDeleteObject(v22);
          GreDeleteObject(v48);
          GreDeleteObject(v14);
          GreDeleteObject(v49);
          GreDeleteObject(v50);
          GreDeleteObject(v30);
          return ClipBox;
        }
        GreOffsetRgn(v14, v47, v42);
        v34 = GreCombineRgn(v43, v43, v14, 4LL);
      }
      if ( v34 )
        goto LABEL_72;
    }
LABEL_109:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreDeleteObject(EmptyRgn);
    GreDeleteObject(v48);
    GreDeleteObject(v14);
    GreDeleteObject(v49);
    GreDeleteObject(v50);
    GreDeleteObject(v43);
    return 0LL;
  }
  if ( !v19 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v20);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_109;
    v45 = 1;
  }
  v48 = CreateEmptyRgn(v20);
  SetRectRgnIndirect(v48, &v63);
  v31 = GreCombineRgn(EmptyRgn, v48, EmptyRgn, 1LL);
  ClipBox = v31;
  if ( !v31 )
    goto LABEL_109;
  if ( v31 != 1 )
  {
    if ( v31 == 2 )
    {
      v22 = EmptyRgn;
      if ( !(unsigned int)GreGetRgnBox(EmptyRgn, &v60) )
        goto LABEL_109;
      v18 = v57;
      goto LABEL_28;
    }
    v18 = v57;
    goto LABEL_26;
  }
LABEL_21:
  if ( a8 && !(unsigned int)SetEmptyRgn(a8) )
    goto LABEL_109;
  if ( a9 )
    *a9 = 0LL;
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteObject(EmptyRgn);
  GreDeleteObject(v48);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  return 1LL;
}
