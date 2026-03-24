/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00715B4
 * Callers:
 *     xxxScrollWindowEx @ 0x1C00677EC (xxxScrollWindowEx.c)
 *     _ScrollDC @ 0x1C00FCB24 (_ScrollDC.c)
 * Callees:
 *     GetDCOrgOnScreen @ 0x1C0042AB0 (GetDCOrgOnScreen.c)
 *     GreGetLayout @ 0x1C0045F14 (GreGetLayout.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     GreTransformPoints @ 0x1C00FA30C (GreTransformPoints.c)
 *     UnionRect @ 0x1C0104BAC (UnionRect.c)
 *     SubtractRect @ 0x1C010AD68 (SubtractRect.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C015D124 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalScrollDC(
        struct tagWND *a1,
        HDC a2,
        int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        HRGN a7,
        HRGN a8,
        struct tagRECT *a9,
        int a10)
{
  HRGN v10; // rbx
  __int64 v13; // r13
  __int64 v14; // rcx
  unsigned int ClipBox; // esi
  __m128i *v16; // rcx
  __m128i v17; // xmm6
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  HRGN v21; // rdi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct tagRECT v27; // xmm0
  __int64 v28; // rdi
  int v29; // edx
  int v30; // r9d
  int v31; // r8d
  int v32; // r10d
  __int64 v33; // rbx
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // edi
  int v42; // ecx
  __int32 v43; // ecx
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  HRGN v50; // [rsp+78h] [rbp-88h] BYREF
  int v51; // [rsp+80h] [rbp-80h]
  HRGN v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 EmptyRgn; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h]
  struct tagRECT *v58; // [rsp+B8h] [rbp-48h]
  int v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+C4h] [rbp-3Ch]
  int v61; // [rsp+C8h] [rbp-38h]
  unsigned int v62; // [rsp+CCh] [rbp-34h]
  __m128i v63; // [rsp+D0h] [rbp-30h] BYREF
  int v64[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v65[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v66; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v67; // [rsp+110h] [rbp+10h] BYREF
  __int128 v68; // [rsp+120h] [rbp+20h] BYREF
  __m128i v69; // [rsp+130h] [rbp+30h]

  v10 = a8;
  v58 = a5;
  v13 = 0LL;
  v50 = a7;
  v66 = 0LL;
  v63 = 0LL;
  v68 = 0LL;
  LODWORD(v54) = a3;
  *(_OWORD *)v65 = 0LL;
  LODWORD(v53) = 0;
  v67 = 0LL;
  v52 = 0LL;
  *(_OWORD *)v64 = 0LL;
  v14 = *(_QWORD *)(gpDispInfo + 40LL);
  v47 = 0LL;
  EmptyRgn = 0LL;
  v56 = 0LL;
  v49 = 0LL;
  v51 = 0;
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(v14) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, &v66, 1LL);
  if ( !ClipBox )
    goto LABEL_97;
  v16 = (__m128i *)&v66;
  if ( v58 )
    v16 = (__m128i *)v58;
  v17 = *v16;
  v63 = *v16;
  if ( a6 )
    v68 = (__int128)*a6;
  LODWORD(v57) = a4;
  LODWORD(v58) = a3;
  if ( a10 )
  {
    GreTransformPoints(a2, 1);
    GreTransformPoints(a2, 1);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      v42 = v66;
      LODWORD(v66) = DWORD2(v66);
      DWORD2(v66) = v42;
      v43 = v63.m128i_i32[0];
      v63.m128i_i32[0] = v63.m128i_i32[2];
      v63.m128i_i32[2] = v43;
      LODWORD(v53) = 1;
    }
    if ( a6 )
    {
      GreTransformPoints(a2, 1);
      if ( (_DWORD)v53 )
      {
        v44 = v68;
        LODWORD(v68) = DWORD2(v68);
        DWORD2(v68) = v44;
      }
    }
    v60 = 0;
    v59 = 0;
    v62 = a4;
    v61 = a3;
    GreTransformPoints(a2, 1);
    v17 = v63;
    LODWORD(v54) = a3;
  }
  if ( ClipBox == 1 )
  {
    v21 = 0LL;
    goto LABEL_23;
  }
  if ( ClipBox == 3 )
  {
    v52 = (HRGN)((__int64 (*)(void))CreateEmptyRgn)();
    if ( !(unsigned int)GetTrueClipRgn(a2, v52) )
      goto LABEL_97;
    v17 = v63;
    v18 = 1LL;
    v51 = 1;
  }
  else
  {
    v18 = 0LL;
  }
  v19 = (unsigned int)(a3 + _mm_cvtsi128_si32(v17));
  v65[0] = v19;
  v65[2] = a3 + _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
  v65[1] = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
  v20 = a4 + _mm_cvtsi128_si32(_mm_srli_si128(v17, 12));
  v65[3] = v20;
  if ( !a6 )
  {
LABEL_28:
    if ( ClipBox != 2 )
    {
LABEL_62:
      if ( v51 || (v52 = (HRGN)CreateEmptyRgn(v20, v19, v18), (unsigned int)GetTrueClipRgn(a2, v52)) )
      {
        EmptyRgn = CreateEmptyRgn(v20, v19, v18);
        SetRectRgnIndirect(EmptyRgn, &v63);
        if ( (unsigned int)GreCombineRgn(EmptyRgn, EmptyRgn, v52, 1LL) )
        {
          v56 = CreateEmptyRgn(v36, v35, v37);
          SetRectRgnIndirect(v56, v65);
          if ( (unsigned int)GreCombineRgn(v56, v56, v52, 1LL) )
          {
            v41 = 1;
            if ( v50 == (HRGN)1 )
              goto LABEL_122;
            v49 = CreateEmptyRgn(v39, v38, v40);
            if ( (unsigned int)GreCombineRgn(v49, EmptyRgn, 0LL, 5LL) )
            {
              GreOffsetRgn(v49, (unsigned int)v54, a4);
              v41 = GreCombineRgn(v49, v49, v56, 1LL);
              if ( (unsigned __int64)v50 > 1 )
              {
                v13 = CreateEmptyRgn(v39, v38, v40);
                if ( !v41 )
                  goto LABEL_116;
                if ( v41 != 1 )
                {
                  v53 = 0LL;
                  GetDCOrgOnScreen((__int64)a2, &v53);
                  GreCombineRgn(v13, v50, 0LL, 5LL);
                  GreOffsetRgn(v13, (unsigned int)-(int)v53, (unsigned int)-HIDWORD(v53));
                  v41 = GreCombineRgn(v49, v49, v13, 4LL);
                }
                if ( !v41 )
                  goto LABEL_116;
                if ( v41 != 1 )
                {
                  GreOffsetRgn(v13, (unsigned int)v54, a4);
                  v41 = GreCombineRgn(v49, v49, v13, 4LL);
                }
              }
              if ( v41 )
              {
LABEL_122:
                if ( !a8 )
                {
                  if ( !a9 )
                    goto LABEL_81;
                  if ( !v13 )
                    v13 = CreateEmptyRgn(v39, v38, v40);
                  v10 = (HRGN)v13;
                  if ( !v13 )
                    goto LABEL_81;
                }
                ClipBox = GreCombineRgn(v10, v56, EmptyRgn, 2LL);
                if ( ClipBox )
                {
                  if ( v41 != 1 )
                    ClipBox = GreCombineRgn(v10, v10, v49, 4LL);
                  if ( !a9 || (unsigned int)GreGetRgnBox(v10, a9) )
                  {
LABEL_81:
                    if ( v41 != 1 )
                    {
                      v50 = 0LL;
                      GreGetDCOrg(a2, &v50);
                      v33 = v49;
                      GreOffsetRgn(v49, (unsigned int)v50, HIDWORD(v50));
                      GreSelectVisRgnShared(a2, v49, 4LL);
                      if ( a10 )
                        GreTransformPoints(a2, 0);
                      NtGdiBitBltInternal(
                        a2,
                        v65[0],
                        v65[1],
                        v65[2] - v65[0],
                        v65[3] - v65[1],
                        (__int64)a2,
                        v65[0] - (_DWORD)v58,
                        v65[1] - v57,
                        13369376,
                        0,
                        0);
                      GreSelectVisRgnShared(a2, v49, 4LL);
                      v28 = v47;
                      goto LABEL_48;
                    }
                    v28 = v47;
LABEL_47:
                    v33 = v49;
LABEL_48:
                    if ( a10 && a9 )
                      GreTransformPoints(a2, 0);
                    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                    GreDeleteObject(v52);
                    GreDeleteObject(v28);
                    GreDeleteObject(v13);
                    GreDeleteObject(EmptyRgn);
                    GreDeleteObject(v56);
                    GreDeleteObject(v33);
                    return ClipBox;
                  }
                }
              }
            }
          }
        }
      }
LABEL_116:
      v28 = v47;
      goto LABEL_117;
    }
LABEL_29:
    if ( (unsigned __int64)v50 <= 1 )
    {
      v69 = v17;
      IntersectRect(v65, v65, &v66);
      v23 = IntersectRect(&v63, &v63, &v66);
      LODWORD(v53) = v23;
      if ( v50 != (HRGN)1 )
      {
        v64[0] = a3 + v63.m128i_i32[0];
        v64[2] = a3 + v63.m128i_i32[2];
        v64[1] = a4 + v63.m128i_i32[1];
        v64[3] = a4 + v63.m128i_i32[3];
        IntersectRect(v64, v64, v65);
        v23 = v53;
      }
      if ( v23 )
      {
        if ( (unsigned int)IntersectRect(&v67, &v63, v65) )
        {
          if ( a3 && a4 )
            goto LABEL_105;
          UnionRect(&v67, &v63, v65);
          SubtractRect(&v67, &v67, v64);
          v27 = v67;
LABEL_36:
          if ( a9 )
            *a9 = v27;
          if ( a8 && !(unsigned int)SetRectRgnIndirect(a8, &v67) )
            goto LABEL_116;
          ClipBox = 2;
          if ( v67.left >= v67.right || v67.top >= v67.bottom )
            ClipBox = 1;
          goto LABEL_41;
        }
        v45 = v63.m128i_i64[0] - v69.m128i_i64[0];
        if ( v63.m128i_i64[0] == v69.m128i_i64[0] )
          v45 = v63.m128i_i64[1] - v69.m128i_i64[1];
        if ( v45 )
        {
LABEL_105:
          if ( a8 || a9 && (v13 = CreateEmptyRgn(v25, v24, v26), (v10 = (HRGN)v13) != 0LL) )
          {
            v46 = v47;
            if ( !v47 )
            {
              v46 = CreateEmptyRgn(v25, v24, v26);
              v47 = v46;
            }
            SetRectRgnIndirect(v46, &v63);
            SetRectRgnIndirect(v10, v65);
            v28 = v47;
            if ( !(unsigned int)GreCombineRgn(v10, v10, v47, 2LL) )
              goto LABEL_117;
            SetRectRgnIndirect(v47, v64);
            ClipBox = GreCombineRgn(v10, v10, v47, 4LL);
            if ( !ClipBox || a9 && !(unsigned int)GreGetRgnBox(v10, a9) )
              goto LABEL_117;
            goto LABEL_42;
          }
LABEL_41:
          v28 = v47;
LABEL_42:
          v29 = v64[0];
          v30 = v64[2];
          if ( v64[0] < v64[2] )
          {
            v31 = v64[1];
            v32 = v64[3];
            if ( v64[1] < v64[3] )
            {
              if ( a10 )
              {
                GreTransformPoints(a2, 0);
                v32 = v64[3];
                v30 = v64[2];
                v31 = v64[1];
                v29 = v64[0];
              }
              NtGdiBitBltInternal(
                a2,
                v29,
                v31,
                v30 - v29,
                v32 - v31,
                (__int64)a2,
                v29 - (_DWORD)v58,
                v31 - v57,
                13369376,
                0,
                0);
            }
          }
          goto LABEL_47;
        }
        v27 = (struct tagRECT)v63;
      }
      else
      {
        v27 = *(struct tagRECT *)v65;
      }
      v67 = v27;
      goto LABEL_36;
    }
    goto LABEL_62;
  }
  if ( (unsigned __int64)v50 <= 1 && ClipBox == 2 )
  {
    if ( !(unsigned int)IntersectRect(&v66, &v66, &v68) )
    {
      v21 = v52;
      goto LABEL_23;
    }
    goto LABEL_29;
  }
  if ( !(_DWORD)v18 )
  {
    v52 = (HRGN)((__int64 (*)(void))CreateEmptyRgn)();
    v21 = v52;
    if ( (unsigned int)GetTrueClipRgn(a2, v52) )
    {
      v51 = 1;
      goto LABEL_57;
    }
LABEL_97:
    v28 = 0LL;
LABEL_117:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreDeleteObject(v52);
    GreDeleteObject(v28);
    GreDeleteObject(v13);
    GreDeleteObject(EmptyRgn);
    GreDeleteObject(v56);
    GreDeleteObject(v49);
    return 0LL;
  }
  v21 = v52;
LABEL_57:
  v47 = ((__int64 (*)(void))CreateEmptyRgn)();
  SetRectRgnIndirect(v47, &v68);
  v34 = GreCombineRgn(v21, v47, v21, 1LL);
  ClipBox = v34;
  if ( !v34 )
    goto LABEL_116;
  v19 = v34 - 1;
  if ( v34 != 1 )
  {
    if ( v34 == 2 )
    {
      if ( !(unsigned int)GreGetRgnBox(v21, &v66) )
        goto LABEL_116;
      v17 = v63;
      goto LABEL_29;
    }
    v17 = v63;
    goto LABEL_28;
  }
LABEL_23:
  if ( a8 && !(unsigned int)SetEmptyRgn(a8) )
    goto LABEL_116;
  if ( a9 )
    *a9 = 0LL;
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteObject(v21);
  GreDeleteObject(v47);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  return 1LL;
}
