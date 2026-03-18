/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C022E08C
 * Callers:
 *     _ScrollDC @ 0x1C022EC60 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x1C022EE20 (xxxScrollWindowEx.c)
 * Callees:
 *     GreTransformPoints @ 0x1C0006CF4 (GreTransformPoints.c)
 *     GreGetLayout @ 0x1C0024844 (GreGetLayout.c)
 *     UnionRect @ 0x1C00CF9E4 (UnionRect.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     GetDCOrgOnScreen @ 0x1C01BDC24 (GetDCOrgOnScreen.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C022DF9C (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     SubtractRect @ 0x1C024B870 (SubtractRect.c)
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
  unsigned int v11; // edi
  unsigned int v12; // r12d
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int ClipBox; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i *v20; // rcx
  __m128i v21; // xmm6
  int v22; // ecx
  __int32 v23; // ecx
  int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // eax
  HRGN v34; // rdi
  int v35; // eax
  struct tagRECT v36; // xmm0
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  LONG v43; // edx
  int v44; // r9d
  LONG v45; // r8d
  int v46; // r10d
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // edi
  int v58; // eax
  __int64 v59; // rbx
  HRGN EmptyRgn; // [rsp+60h] [rbp-A0h]
  unsigned int v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h]
  HRGN v63; // [rsp+78h] [rbp-88h] BYREF
  int v64; // [rsp+80h] [rbp-80h]
  int v65; // [rsp+84h] [rbp-7Ch]
  unsigned int v66; // [rsp+88h] [rbp-78h]
  __int64 v67; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A0h] [rbp-60h]
  unsigned int v70; // [rsp+A8h] [rbp-58h]
  struct tagRECT *v71; // [rsp+B0h] [rbp-50h]
  struct _POINTL v72; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v73; // [rsp+C0h] [rbp-40h]
  unsigned int v74; // [rsp+C4h] [rbp-3Ch]
  __m128i v75; // [rsp+D0h] [rbp-30h] BYREF
  int v76[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v77[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v78; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v79; // [rsp+110h] [rbp+10h] BYREF
  __m128i v80; // [rsp+120h] [rbp+20h] BYREF
  __int128 v81; // [rsp+130h] [rbp+30h] BYREF

  v10 = a8;
  v71 = a5;
  v11 = a4;
  v12 = a3;
  v80.m128i_i64[0] = (__int64)a6;
  v14 = 0LL;
  v63 = a7;
  v78 = 0LL;
  v61 = a4;
  v75 = 0LL;
  v81 = 0LL;
  v66 = a3;
  *(_OWORD *)v77 = 0LL;
  v65 = 0;
  v79 = 0LL;
  EmptyRgn = 0LL;
  *(_OWORD *)v76 = 0LL;
  v15 = *(_QWORD *)(gpDispInfo + 40LL);
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v62 = 0LL;
  v64 = 0;
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(v15) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, &v78, 1LL);
  if ( !ClipBox )
    goto LABEL_107;
  v20 = (__m128i *)&v78;
  if ( v71 )
    v20 = (__m128i *)v71;
  v21 = *v20;
  v75 = *v20;
  if ( v80.m128i_i64[0] )
    v81 = *(_OWORD *)v80.m128i_i64[0];
  LODWORD(v71) = v12;
  v70 = v11;
  if ( a10 )
  {
    GreTransformPoints(a2, (struct _POINTL *)&v78, (struct _POINTFIX *)&v78, 2, 1);
    GreTransformPoints(a2, (struct _POINTL *)&v75, (struct _POINTFIX *)&v75, 2, 1);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      v22 = v78;
      LODWORD(v78) = DWORD2(v78);
      DWORD2(v78) = v22;
      v23 = v75.m128i_i32[0];
      v75.m128i_i32[0] = v75.m128i_i32[2];
      v75.m128i_i32[2] = v23;
      v65 = 1;
    }
    if ( v80.m128i_i64[0] )
    {
      GreTransformPoints(a2, (struct _POINTL *)&v81, (struct _POINTFIX *)&v81, 2, 1);
      if ( v65 )
      {
        v24 = v81;
        LODWORD(v81) = DWORD2(v81);
        DWORD2(v81) = v24;
      }
    }
    v72.y = 0;
    v72.x = 0;
    v73 = v12;
    v74 = v11;
    GreTransformPoints(a2, &v72, (struct _POINTFIX *)&v72, 2, 1);
    v12 = v73 - v72.x;
    v11 = v74 - v72.y;
    v21 = v75;
    v61 = v74 - v72.y;
    v66 = v73 - v72.x;
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
      GreDeleteObject(v67);
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
    EmptyRgn = (HRGN)CreateEmptyRgn(ClipBox - 1, v16, v18, v19);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn, v25, v26) )
      goto LABEL_107;
    v21 = v75;
    v27 = 1LL;
    v64 = 1;
  }
  else
  {
    v27 = 0LL;
  }
  v28 = v12 + _mm_cvtsi128_si32(v21);
  v77[0] = v28;
  v77[2] = v12 + _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
  v77[1] = v11 + _mm_cvtsi128_si32(_mm_srli_si128(v21, 4));
  v29 = v11 + _mm_cvtsi128_si32(_mm_srli_si128(v21, 12));
  v77[3] = v29;
  if ( !v80.m128i_i64[0] )
  {
LABEL_37:
    if ( ClipBox != 2 )
      goto LABEL_74;
    goto LABEL_38;
  }
  if ( ClipBox == 2 && (unsigned __int64)v63 <= 1 )
  {
    if ( !(unsigned int)IntersectRect(&v78, (int *)&v78, (int *)&v81) )
      goto LABEL_23;
LABEL_38:
    v34 = EmptyRgn;
    goto LABEL_39;
  }
  if ( !(_DWORD)v27 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v29, v28, v27, v19);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn, v31, v32) )
      goto LABEL_107;
    v64 = 1;
  }
  v67 = CreateEmptyRgn(v29, v28, v27, v19);
  SetRectRgnIndirect(v67, &v81);
  v33 = GreCombineRgn(EmptyRgn, v67, EmptyRgn, 1LL);
  ClipBox = v33;
  if ( !v33 )
    goto LABEL_107;
  v28 = v33 - 1;
  if ( v33 == 1 )
    goto LABEL_23;
  if ( v33 != 2 )
  {
    v21 = v75;
    goto LABEL_37;
  }
  v34 = EmptyRgn;
  if ( !(unsigned int)GreGetRgnBox(EmptyRgn, &v78) )
    goto LABEL_107;
  v21 = v75;
LABEL_39:
  if ( (unsigned __int64)v63 <= 1 )
  {
    v80 = v21;
    IntersectRect(v77, v77, (int *)&v78);
    v35 = IntersectRect(&v75, v75.m128i_i32, (int *)&v78);
    v65 = v35;
    if ( v63 != (HRGN)1 )
    {
      v76[0] = v12 + v75.m128i_i32[0];
      v76[2] = v12 + v75.m128i_i32[2];
      v76[1] = v61 + v75.m128i_i32[1];
      v76[3] = v61 + v75.m128i_i32[3];
      IntersectRect(v76, v76, v77);
      v35 = v65;
    }
    if ( !v35 )
    {
      v36 = *(struct tagRECT *)v77;
LABEL_52:
      v79 = v36;
LABEL_53:
      if ( a9 )
        *a9 = v36;
      if ( !a8 || (unsigned int)SetRectRgnIndirect(a8, &v79) )
      {
        ClipBox = 2;
        if ( v79.left >= v79.right || v79.top >= v79.bottom )
          ClipBox = 1;
LABEL_69:
        v43 = v76[0];
        v44 = v76[2];
        if ( v76[0] < v76[2] )
        {
          v45 = v76[1];
          v46 = v76[3];
          if ( v76[1] < v76[3] )
          {
            if ( a10 )
            {
              GreTransformPoints(a2, (struct _POINTL *)v76, (struct _POINTFIX *)v76, 2, 0);
              v46 = v76[3];
              v44 = v76[2];
              v45 = v76[1];
              v43 = v76[0];
            }
            NtGdiBitBltInternal(
              (__int64)a2,
              v43,
              v45,
              v44 - v43,
              v46 - v45,
              a2,
              v43 - (_DWORD)v71,
              v45 - v70,
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
      GreDeleteObject(v67);
      GreDeleteObject(v14);
      GreDeleteObject(v68);
      GreDeleteObject(v69);
      GreDeleteObject(v62);
      return 0LL;
    }
    if ( (unsigned int)IntersectRect(&v79, v75.m128i_i32, v77) )
    {
      if ( !v12 || !v61 )
      {
        UnionRect(&v79, v75.m128i_i32, v77);
        SubtractRect(&v79, &v79, v76);
        v36 = v79;
        goto LABEL_53;
      }
    }
    else
    {
      v41 = v75.m128i_i64[0] - v80.m128i_i64[0];
      if ( v75.m128i_i64[0] == v80.m128i_i64[0] )
        v41 = v75.m128i_i64[1] - v80.m128i_i64[1];
      if ( !v41 )
      {
        v36 = (struct tagRECT)v75;
        goto LABEL_52;
      }
    }
    if ( !a8 )
    {
      if ( !a9 )
        goto LABEL_69;
      v14 = CreateEmptyRgn(v38, v37, v39, v40);
      v10 = (HRGN)v14;
      if ( !v14 )
        goto LABEL_69;
    }
    v42 = v67;
    if ( !v67 )
    {
      v42 = CreateEmptyRgn(v38, v37, v39, v40);
      v67 = v42;
    }
    SetRectRgnIndirect(v42, &v75);
    SetRectRgnIndirect(v10, v77);
    if ( (unsigned int)GreCombineRgn(v10, v10, v67, 2LL) )
    {
      SetRectRgnIndirect(v67, v76);
      ClipBox = GreCombineRgn(v10, v10, v67, 4LL);
      if ( ClipBox )
      {
        if ( !a9 || (unsigned int)GreGetRgnBox(v10, a9) )
          goto LABEL_69;
      }
    }
    goto LABEL_107;
  }
LABEL_74:
  if ( !v64 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v29, v28, v27, v19);
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn, v47, v48) )
      goto LABEL_107;
  }
  v68 = CreateEmptyRgn(v29, v28, v27, v19);
  SetRectRgnIndirect(v68, &v75);
  if ( !(unsigned int)GreCombineRgn(v68, v68, EmptyRgn, 1LL) )
    goto LABEL_107;
  v69 = CreateEmptyRgn(v50, v49, v51, v52);
  SetRectRgnIndirect(v69, v77);
  if ( !(unsigned int)GreCombineRgn(v69, v69, EmptyRgn, 1LL) )
    goto LABEL_107;
  v57 = 1;
  if ( v63 == (HRGN)1 )
    goto LABEL_87;
  v62 = CreateEmptyRgn(v54, v53, v55, v56);
  if ( !(unsigned int)GreCombineRgn(v62, v68, 0LL, 5LL) )
    goto LABEL_107;
  GreOffsetRgn(v62, v66, v61);
  v57 = GreCombineRgn(v62, v62, v69, 1LL);
  if ( (unsigned __int64)v63 <= 1 )
    goto LABEL_86;
  v14 = CreateEmptyRgn(v54, v53, v55, v56);
  if ( !v57 )
    goto LABEL_107;
  if ( v57 != 1 )
  {
    v80.m128i_i64[0] = 0LL;
    GetDCOrgOnScreen((__int64)a2, &v80);
    GreCombineRgn(v14, v63, 0LL, 5LL);
    GreOffsetRgn(v14, (unsigned int)-v80.m128i_i32[0], (unsigned int)-v80.m128i_i32[1]);
    v58 = GreCombineRgn(v62, v62, v14, 4LL);
    v57 = v58;
    if ( !v58 )
      goto LABEL_107;
    if ( v58 != 1 )
    {
      GreOffsetRgn(v14, v66, v61);
      v57 = GreCombineRgn(v62, v62, v14, 4LL);
LABEL_86:
      if ( !v57 )
        goto LABEL_107;
    }
  }
LABEL_87:
  if ( a8 )
    goto LABEL_111;
  if ( a9 )
  {
    if ( !v14 )
      v14 = CreateEmptyRgn(v54, v53, v55, v56);
    v10 = (HRGN)v14;
    if ( v14 )
    {
LABEL_111:
      ClipBox = GreCombineRgn(v10, v69, v68, 2LL);
      if ( !ClipBox )
        goto LABEL_107;
      if ( v57 != 1 )
        ClipBox = GreCombineRgn(v10, v10, v62, 4LL);
      if ( a9 && !(unsigned int)GreGetRgnBox(v10, a9) )
        goto LABEL_107;
    }
  }
  if ( v57 != 1 )
  {
    v63 = 0LL;
    GreGetDCOrg(a2, &v63);
    v59 = v62;
    GreOffsetRgn(v62, (unsigned int)v63, HIDWORD(v63));
    GreSelectVisRgnShared(a2, v62, 4LL);
    if ( a10 )
      GreTransformPoints(a2, (struct _POINTL *)v77, (struct _POINTFIX *)v77, 2, 0);
    NtGdiBitBltInternal(
      (__int64)a2,
      v77[0],
      v77[1],
      v77[2] - v77[0],
      v77[3] - v77[1],
      a2,
      v77[0] - (_DWORD)v71,
      v77[1] - v70,
      13369376,
      0,
      0);
    GreSelectVisRgnShared(a2, v62, 4LL);
    v34 = EmptyRgn;
    goto LABEL_103;
  }
  v34 = EmptyRgn;
LABEL_102:
  v59 = v62;
LABEL_103:
  if ( a10 && a9 )
    GreTransformPoints(a2, (struct _POINTL *)a9, (struct _POINTFIX *)a9, 2, 0);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteObject(v34);
  GreDeleteObject(v67);
  GreDeleteObject(v14);
  GreDeleteObject(v68);
  GreDeleteObject(v69);
  GreDeleteObject(v59);
  return ClipBox;
}
