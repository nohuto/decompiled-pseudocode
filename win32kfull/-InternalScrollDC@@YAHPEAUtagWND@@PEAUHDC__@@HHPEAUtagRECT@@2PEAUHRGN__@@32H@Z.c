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
  unsigned int v11; // edi
  unsigned int v12; // r12d
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int ClipBox; // esi
  __m128i *v18; // rcx
  __m128i v19; // xmm6
  int v20; // ecx
  __int32 v21; // ecx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v27; // eax
  HRGN v28; // rdi
  int v29; // eax
  struct tagRECT v30; // xmm0
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  LONG v35; // edx
  int v36; // r9d
  LONG v37; // r8d
  int v38; // r10d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // edi
  int v44; // eax
  __int64 v45; // rbx
  HRGN EmptyRgn; // [rsp+60h] [rbp-A0h]
  unsigned int v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  HRGN v49; // [rsp+78h] [rbp-88h] BYREF
  int v50; // [rsp+80h] [rbp-80h]
  int v51; // [rsp+84h] [rbp-7Ch]
  unsigned int v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  unsigned int v56; // [rsp+A8h] [rbp-58h]
  struct tagRECT *v57; // [rsp+B0h] [rbp-50h]
  struct _POINTL v58; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v59; // [rsp+C0h] [rbp-40h]
  unsigned int v60; // [rsp+C4h] [rbp-3Ch]
  __m128i v61; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v62; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v63; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v64; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v65; // [rsp+110h] [rbp+10h] BYREF
  __m128i v66; // [rsp+120h] [rbp+20h] BYREF
  __int128 v67; // [rsp+130h] [rbp+30h] BYREF

  v10 = a8;
  v57 = a5;
  v11 = a4;
  v12 = a3;
  v66.m128i_i64[0] = (__int64)a6;
  v14 = 0LL;
  v49 = a7;
  v64 = 0LL;
  v47 = a4;
  v61 = 0LL;
  v67 = 0LL;
  v52 = a3;
  v63 = 0LL;
  v51 = 0;
  v65 = 0LL;
  EmptyRgn = 0LL;
  v62 = 0LL;
  v15 = *(_QWORD *)(gpDispInfo + 40LL);
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v48 = 0LL;
  v50 = 0;
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(v15) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, &v64, 1LL);
  if ( !ClipBox )
    goto LABEL_107;
  v18 = (__m128i *)&v64;
  if ( v57 )
    v18 = (__m128i *)v57;
  v19 = *v18;
  v61 = *v18;
  if ( v66.m128i_i64[0] )
    v67 = *(_OWORD *)v66.m128i_i64[0];
  LODWORD(v57) = v12;
  v56 = v11;
  if ( a10 )
  {
    GreTransformPoints(a2, (struct _POINTL *)&v64, (struct _POINTL *)&v64, 2, 1);
    GreTransformPoints(a2, (struct _POINTL *)&v61, (struct _POINTL *)&v61, 2, 1);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      v20 = v64;
      LODWORD(v64) = DWORD2(v64);
      DWORD2(v64) = v20;
      v21 = v61.m128i_i32[0];
      v61.m128i_i32[0] = v61.m128i_i32[2];
      v61.m128i_i32[2] = v21;
      v51 = 1;
    }
    if ( v66.m128i_i64[0] )
    {
      GreTransformPoints(a2, (struct _POINTL *)&v67, (struct _POINTL *)&v67, 2, 1);
      if ( v51 )
      {
        v22 = v67;
        LODWORD(v67) = DWORD2(v67);
        DWORD2(v67) = v22;
      }
    }
    v58.y = 0;
    v58.x = 0;
    v59 = v12;
    v60 = v11;
    GreTransformPoints(a2, &v58, &v58, 2, 1);
    v12 = v59 - v58.x;
    v11 = v60 - v58.y;
    v19 = v61;
    v47 = v60 - v58.y;
    v52 = v59 - v58.x;
  }
  if ( ClipBox == 1 )
  {
LABEL_23:
    if ( !a8 || (unsigned int)SetEmptyRgn(a8) )
    {
      if ( a9 )
        *a9 = 0LL;
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteObject(EmptyRgn);
      GreDeleteObject(v53);
      GreDeleteObject(0LL);
      GreDeleteObject(0LL);
      GreDeleteObject(0LL);
      GreDeleteObject(0LL);
      return 1LL;
    }
    goto LABEL_107;
  }
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(ClipBox - 1, v16);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_107;
    v19 = v61;
    v23 = 1;
    v50 = 1;
  }
  else
  {
    v23 = 0;
  }
  v24 = v12 + _mm_cvtsi128_si32(v19);
  LODWORD(v63) = v24;
  DWORD2(v63) = v12 + _mm_cvtsi128_si32(_mm_srli_si128(v19, 8));
  DWORD1(v63) = v11 + _mm_cvtsi128_si32(_mm_srli_si128(v19, 4));
  v25 = v11 + _mm_cvtsi128_si32(_mm_srli_si128(v19, 12));
  HIDWORD(v63) = v25;
  if ( !v66.m128i_i64[0] )
  {
LABEL_37:
    if ( ClipBox != 2 )
      goto LABEL_74;
    goto LABEL_38;
  }
  if ( ClipBox == 2 && (unsigned __int64)v49 <= 1 )
  {
    if ( !(unsigned int)IntersectRect(&v64, (int *)&v64, (int *)&v67) )
      goto LABEL_23;
LABEL_38:
    v28 = EmptyRgn;
    goto LABEL_39;
  }
  if ( !v23 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v25, v24);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_107;
    v50 = 1;
  }
  v53 = CreateEmptyRgn(v25, v24);
  SetRectRgnIndirect(v53, &v67);
  v27 = GreCombineRgn(EmptyRgn, v53, EmptyRgn, 1LL);
  ClipBox = v27;
  if ( !v27 )
    goto LABEL_107;
  v24 = v27 - 1;
  if ( v27 == 1 )
    goto LABEL_23;
  if ( v27 != 2 )
  {
    v19 = v61;
    goto LABEL_37;
  }
  v28 = EmptyRgn;
  if ( !(unsigned int)GreGetRgnBox(EmptyRgn, &v64) )
    goto LABEL_107;
  v19 = v61;
LABEL_39:
  if ( (unsigned __int64)v49 <= 1 )
  {
    v66 = v19;
    IntersectRect(&v63, (int *)&v63, (int *)&v64);
    v29 = IntersectRect(&v61, v61.m128i_i32, (int *)&v64);
    v51 = v29;
    if ( v49 != (HRGN)1 )
    {
      LODWORD(v62) = v12 + v61.m128i_i32[0];
      DWORD2(v62) = v12 + v61.m128i_i32[2];
      DWORD1(v62) = v47 + v61.m128i_i32[1];
      HIDWORD(v62) = v47 + v61.m128i_i32[3];
      IntersectRect(&v62, (int *)&v62, (int *)&v63);
      v29 = v51;
    }
    if ( !v29 )
    {
      v30 = (struct tagRECT)v63;
LABEL_52:
      v65 = v30;
LABEL_53:
      if ( a9 )
        *a9 = v30;
      if ( !a8 || (unsigned int)SetRectRgnIndirect(a8, &v65) )
      {
        ClipBox = 2;
        if ( v65.left >= v65.right || v65.top >= v65.bottom )
          ClipBox = 1;
LABEL_69:
        v35 = v62;
        v36 = DWORD2(v62);
        if ( (int)v62 < SDWORD2(v62) )
        {
          v37 = DWORD1(v62);
          v38 = HIDWORD(v62);
          if ( SDWORD1(v62) < SHIDWORD(v62) )
          {
            if ( a10 )
            {
              GreTransformPoints(a2, (struct _POINTL *)&v62, (struct _POINTL *)&v62, 2, 0);
              v38 = HIDWORD(v62);
              v36 = DWORD2(v62);
              v37 = DWORD1(v62);
              v35 = v62;
            }
            NtGdiBitBltInternal(
              a2,
              v35,
              v37,
              v36 - v35,
              v38 - v37,
              (__int64)a2,
              v35 - (_DWORD)v57,
              v37 - v56,
              13369376,
              0,
              0);
          }
        }
        goto LABEL_102;
      }
LABEL_107:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteObject(EmptyRgn);
      GreDeleteObject(v53);
      GreDeleteObject(v14);
      GreDeleteObject(v54);
      GreDeleteObject(v55);
      GreDeleteObject(v48);
      return 0LL;
    }
    if ( (unsigned int)IntersectRect(&v65, v61.m128i_i32, (int *)&v63) )
    {
      if ( !v12 || !v47 )
      {
        UnionRect(&v65, v61.m128i_i32, (int *)&v63);
        SubtractRect(&v65, &v65, &v62);
        v30 = v65;
        goto LABEL_53;
      }
    }
    else
    {
      v33 = v61.m128i_i64[0] - v66.m128i_i64[0];
      if ( v61.m128i_i64[0] == v66.m128i_i64[0] )
        v33 = v61.m128i_i64[1] - v66.m128i_i64[1];
      if ( !v33 )
      {
        v30 = (struct tagRECT)v61;
        goto LABEL_52;
      }
    }
    if ( !a8 )
    {
      if ( !a9 )
        goto LABEL_69;
      v14 = CreateEmptyRgn(v32, v31);
      v10 = (HRGN)v14;
      if ( !v14 )
        goto LABEL_69;
    }
    v34 = v53;
    if ( !v53 )
    {
      v34 = CreateEmptyRgn(v32, v31);
      v53 = v34;
    }
    SetRectRgnIndirect(v34, &v61);
    SetRectRgnIndirect(v10, &v63);
    if ( (unsigned int)GreCombineRgn(v10, v10, v53, 2LL) )
    {
      SetRectRgnIndirect(v53, &v62);
      ClipBox = GreCombineRgn(v10, v10, v53, 4LL);
      if ( ClipBox )
      {
        if ( !a9 || (unsigned int)GreGetRgnBox(v10, a9) )
          goto LABEL_69;
      }
    }
    goto LABEL_107;
  }
LABEL_74:
  if ( !v50 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v25, v24);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn) )
      goto LABEL_107;
  }
  v54 = CreateEmptyRgn(v25, v24);
  SetRectRgnIndirect(v54, &v61);
  if ( !(unsigned int)GreCombineRgn(v54, v54, EmptyRgn, 1LL) )
    goto LABEL_107;
  v55 = CreateEmptyRgn(v40, v39);
  SetRectRgnIndirect(v55, &v63);
  if ( !(unsigned int)GreCombineRgn(v55, v55, EmptyRgn, 1LL) )
    goto LABEL_107;
  v43 = 1;
  if ( v49 == (HRGN)1 )
    goto LABEL_87;
  v48 = CreateEmptyRgn(v42, v41);
  if ( !(unsigned int)GreCombineRgn(v48, v54, 0LL, 5LL) )
    goto LABEL_107;
  GreOffsetRgn(v48, v52, v47);
  v43 = GreCombineRgn(v48, v48, v55, 1LL);
  if ( (unsigned __int64)v49 <= 1 )
    goto LABEL_86;
  v14 = CreateEmptyRgn(v42, v41);
  if ( !v43 )
    goto LABEL_107;
  if ( v43 != 1 )
  {
    v66.m128i_i64[0] = 0LL;
    GetDCOrgOnScreen((__int64)a2, &v66);
    GreCombineRgn(v14, v49, 0LL, 5LL);
    GreOffsetRgn(v14, (unsigned int)-v66.m128i_i32[0], (unsigned int)-v66.m128i_i32[1]);
    v44 = GreCombineRgn(v48, v48, v14, 4LL);
    v43 = v44;
    if ( !v44 )
      goto LABEL_107;
    if ( v44 != 1 )
    {
      GreOffsetRgn(v14, v52, v47);
      v43 = GreCombineRgn(v48, v48, v14, 4LL);
LABEL_86:
      if ( !v43 )
        goto LABEL_107;
    }
  }
LABEL_87:
  if ( a8 )
    goto LABEL_111;
  if ( a9 )
  {
    if ( !v14 )
      v14 = CreateEmptyRgn(v42, v41);
    v10 = (HRGN)v14;
    if ( v14 )
    {
LABEL_111:
      ClipBox = GreCombineRgn(v10, v55, v54, 2LL);
      if ( !ClipBox )
        goto LABEL_107;
      if ( v43 != 1 )
        ClipBox = GreCombineRgn(v10, v10, v48, 4LL);
      if ( a9 && !(unsigned int)GreGetRgnBox(v10, a9) )
        goto LABEL_107;
    }
  }
  if ( v43 != 1 )
  {
    v49 = 0LL;
    GreGetDCOrg(a2, &v49);
    v45 = v48;
    GreOffsetRgn(v48, (unsigned int)v49, HIDWORD(v49));
    GreSelectVisRgnShared(a2, v48, 4LL);
    if ( a10 )
      GreTransformPoints(a2, (struct _POINTL *)&v63, (struct _POINTL *)&v63, 2, 0);
    NtGdiBitBltInternal(
      a2,
      v63,
      SDWORD1(v63),
      DWORD2(v63) - v63,
      HIDWORD(v63) - DWORD1(v63),
      (__int64)a2,
      v63 - (_DWORD)v57,
      DWORD1(v63) - v56,
      13369376,
      0,
      0);
    GreSelectVisRgnShared(a2, v48, 4LL);
    v28 = EmptyRgn;
    goto LABEL_103;
  }
  v28 = EmptyRgn;
LABEL_102:
  v45 = v48;
LABEL_103:
  if ( a10 && a9 )
    GreTransformPoints(a2, (struct _POINTL *)a9, (struct _POINTL *)a9, 2, 0);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteObject(v28);
  GreDeleteObject(v53);
  GreDeleteObject(v14);
  GreDeleteObject(v54);
  GreDeleteObject(v55);
  GreDeleteObject(v45);
  return ClipBox;
}
