/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0088DC0
 * Callers:
 *     GreDrawStream @ 0x1C003C990 (GreDrawStream.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0088D44 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1C0089370 (bCvtPts1.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0113C58 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDrawStreamInternal(
        struct XDCOBJ *a1,
        struct EXFORMOBJ *a2,
        struct SURFACE *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int a7,
        char *a8,
        struct _DRAWSTREAMINFO *a9)
{
  unsigned int v9; // edi
  LONG left; // r10d
  LONG top; // ebx
  LONG bottom; // r11d
  __int64 right; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  char *v17; // rdx
  LONG v18; // r15d
  LONG v19; // r14d
  LONG v20; // r12d
  LONG v21; // r13d
  int v22; // eax
  int v23; // eax
  int v24; // esi
  DC *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  char *v28; // r9
  __int64 v29; // rdx
  __int32 v30; // r10d
  __int32 v31; // r8d
  int v32; // ebx
  int v33; // r11d
  char *v34; // r9
  __int64 v35; // rdx
  __int32 v36; // r14d
  int v37; // esi
  __int32 v38; // r9d
  struct ECLIPOBJ *v39; // rdx
  char *v40; // r12
  __int32 v41; // ecx
  XDCOBJ *v42; // rsi
  __m128i v43; // xmm1
  __int64 (__fastcall *v44)(int, int, int, int, int, __int64, int, __int64, __int64); // rbx
  __int64 v45; // rax
  bool v46; // al
  struct SURFACE *v47; // r14
  struct _SURFOBJ *v48; // rdx
  char *v49; // rsi
  char *v50; // rdx
  int v52; // eax
  struct REGION *v53; // rax
  int v54; // r10d
  struct _POINTL *v55; // rbx
  unsigned __int64 v56; // [rsp+50h] [rbp-81h]
  int v57; // [rsp+50h] [rbp-81h]
  __int64 v58; // [rsp+58h] [rbp-79h] BYREF
  int v59; // [rsp+60h] [rbp-71h]
  XDCOBJ *v60; // [rsp+68h] [rbp-69h]
  unsigned __int64 v61; // [rsp+70h] [rbp-61h]
  char *v62; // [rsp+78h] [rbp-59h]
  struct SURFACE *v63; // [rsp+80h] [rbp-51h]
  struct _DRAWSTREAMINFO *v64; // [rsp+88h] [rbp-49h]
  struct _XLATEOBJ *v65; // [rsp+90h] [rbp-41h]
  __m128i v66; // [rsp+A0h] [rbp-31h] BYREF
  __m128i v67; // [rsp+B0h] [rbp-21h] BYREF

  v9 = 0;
  v63 = a3;
  left = a5->left;
  top = a5->top;
  bottom = a5->bottom;
  v66.m128i_i32[0] = a5->left;
  v66.m128i_i32[1] = top;
  v66.m128i_i32[3] = bottom;
  v58 = 0LL;
  v64 = a9;
  right = (unsigned int)a5->right;
  v15 = *(_QWORD *)a1;
  v66.m128i_i32[2] = a5->right;
  v60 = a1;
  v65 = a4;
  v16 = *(_QWORD *)(v15 + 496);
  v59 = a7;
  v17 = a8;
  v18 = a6->left;
  v19 = a6->top;
  LODWORD(v15) = *(_DWORD *)(v16 + 116);
  v20 = a6->right;
  v21 = a6->bottom;
  v62 = a8;
  v56 = __PAIR64__(v19, v18);
  v67.m128i_i64[0] = __PAIR64__(v19, v18);
  v67.m128i_i64[1] = __PAIR64__(v21, v20);
  if ( ((v15 & 8) != 0 || *(_QWORD *)(v16 + 224)) && _bittest16((const signed __int16 *)(v16 + 102), 9u) )
    goto LABEL_78;
  v22 = *(_DWORD *)(v16 + 112);
  if ( (v22 & 0x800) != 0 )
  {
    v52 = UserSurfaceAccessCheck(*(_QWORD *)(v16 + 648));
  }
  else
  {
    if ( (v22 & 0x10000000) == 0 )
      goto LABEL_5;
    v52 = UserScreenAccessCheck(v16, a8, right, a6);
  }
  if ( !v52 )
  {
LABEL_78:
    EngSetLastError(5u);
    return v9;
  }
  bottom = v66.m128i_i32[3];
  LODWORD(right) = v66.m128i_i32[2];
  top = v66.m128i_i32[1];
  left = v66.m128i_i32[0];
  v17 = v62;
LABEL_5:
  v23 = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  if ( (v23 & 1) == 0 )
    return v9;
  if ( (v23 & 2) != 0 )
  {
    if ( (v23 & 0x43) != 0x43 )
    {
      bCvtPts1(*(_QWORD *)a2, &v58, 1LL);
LABEL_9:
      left = v66.m128i_i32[0];
      top = v66.m128i_i32[1];
      LODWORD(right) = v66.m128i_i32[2];
      bottom = v66.m128i_i32[3];
    }
  }
  else
  {
    v61 = (unsigned __int64)&v17[v59];
    if ( (unsigned __int64)v17 < v61 )
    {
      v55 = (struct _POINTL *)(v17 + 36);
      while ( v55[-5].y == 9 )
      {
        EXFORMOBJ::bXform(a2, v55 - 4);
        if ( (unsigned int)DC::bDpiScaledSurface(*(DC **)v60) )
          v55->x &= ~0x20u;
        v55 = (struct _POINTL *)((char *)v55 + 60);
        if ( (unsigned __int64)&v55[-5].y >= v61 )
          goto LABEL_9;
      }
      return v9;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 32LL) & 0x43) != 0x43 )
  {
    bCvtPts1(*(_QWORD *)a2, &v67, 2LL);
    v19 = v67.m128i_i32[1];
    v18 = v67.m128i_i32[0];
    bottom = v66.m128i_i32[3];
    LODWORD(right) = v66.m128i_i32[2];
    left = v66.m128i_i32[0];
    top = v66.m128i_i32[1];
    v21 = v67.m128i_i32[3];
    v20 = v67.m128i_i32[2];
    v56 = v67.m128i_i64[0];
  }
  if ( *((_DWORD *)a2 + 3) )
  {
    LODWORD(v56) = ++v18;
    ++v20;
  }
  if ( v18 > v20 )
  {
    v24 = v20;
    v20 = v18;
  }
  else
  {
    v24 = v56;
  }
  if ( v19 > v21 )
  {
    HIDWORD(v56) = v21;
    v21 = v19;
  }
  if ( top != bottom && left != (_DWORD)right )
  {
    v25 = *(DC **)v60;
    v26 = *(_QWORD *)(*(_QWORD *)v60 + 496LL);
    v27 = *(_QWORD *)v60 + 8LL * (*(_DWORD *)(*(_QWORD *)v60 + 40LL) & 1);
    LODWORD(v58) = *(_DWORD *)(v27 + 1016) + v58;
    HIDWORD(v58) += *(_DWORD *)(v27 + 1020);
    v28 = (char *)v25 + 8 * (*((_DWORD *)v25 + 10) & 1);
    v57 = *((_DWORD *)v28 + 254);
    v61 = 0xFFFFFFFFLL;
    if ( (unsigned __int64)(v57 + (__int64)left + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v57 + (__int64)(int)right + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v29 = *((int *)v28 + 255);
      if ( (unsigned __int64)(v29 + top + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v29 + bottom + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v30 = v57 + left;
        v66.m128i_i32[0] = v30;
        v31 = *((_DWORD *)v28 + 254) + right;
        v32 = *((_DWORD *)v28 + 255) + top;
        *(__int64 *)((char *)v66.m128i_i64 + 4) = __PAIR64__(v31, v32);
        v33 = *((_DWORD *)v28 + 255) + bottom;
        v66.m128i_i32[3] = v33;
        v34 = (char *)v25 + 8 * (*((_DWORD *)v25 + 10) & 1);
        LODWORD(v56) = *((_DWORD *)v34 + 254);
        if ( (unsigned __int64)((int)v56 + (__int64)v24 + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)((int)v56 + (__int64)v20 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v35 = *((int *)v34 + 255);
          if ( v35 + SHIDWORD(v56) + 0x80000000LL <= v61 && (unsigned __int64)(v35 + v21 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v36 = v24 + v56;
            v37 = v35 + HIDWORD(v56);
            v38 = v20 + v56;
            v39 = (struct ECLIPOBJ *)(unsigned int)(v21 + v35);
            v40 = 0LL;
            if ( v30 > v36
              || v31 < v38
              || v32 > v37
              || v33 < (int)v39
              || (v41 = *((_DWORD *)v25 + 250), v41 > v36)
              || *((_DWORD *)v25 + 252) < v38
              || *((_DWORD *)v25 + 251) > v37
              || *((_DWORD *)v25 + 253) < (int)v39 )
            {
              v42 = v60;
              v40 = (char *)v25 + 1768;
              v53 = XDCOBJ::prgnEffRao((DC **)v60);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v40, v53, (struct ERECTL *)&v66, v54);
              v43 = *(__m128i *)(v40 + 4);
              v66 = v43;
              v31 = v43.m128i_i32[2];
              v30 = v43.m128i_i32[0];
            }
            else
            {
              if ( v41 > v30 )
              {
                v30 = *((_DWORD *)v25 + 250);
                v66.m128i_i32[0] = v30;
              }
              if ( *((_DWORD *)v25 + 251) > v32 )
              {
                v32 = *((_DWORD *)v25 + 251);
                v66.m128i_i32[1] = v32;
              }
              if ( *((_DWORD *)v25 + 252) < v31 )
              {
                v31 = *((_DWORD *)v25 + 252);
                v66.m128i_i32[2] = v31;
              }
              if ( *((_DWORD *)v25 + 253) < v33 )
              {
                v33 = *((_DWORD *)v25 + 253);
                v66.m128i_i32[3] = v33;
              }
              if ( v31 < v30 )
                return 1;
              v42 = v60;
              if ( v33 < v32 )
                v66.m128i_i32[1] = v33;
              v43 = v66;
            }
            if ( v30 != v31 && v43.m128i_i32[1] != _mm_srli_si128(v43, 8).m128i_i32[1] )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v42 + 36LL) & 0xE0) != 0 )
              {
                v67 = v43;
                XDCOBJ::vAccumulateTight(v42, v39, &v67);
              }
              ++*(_DWORD *)(v26 + 92);
              v44 = EngDrawStream;
              v45 = *(_QWORD *)(v26 + 48);
              if ( *(_QWORD *)(v45 + 3384) )
                v44 = *(__int64 (__fastcall **)(int, int, int, int, int, __int64, int, __int64, __int64))(v45 + 3384);
              v46 = (*(_DWORD *)(*(_QWORD *)v42 + 36LL) & 0x200) != 0 && v45 && (*(_DWORD *)(v45 + 40) & 0x20000) != 0;
              if ( *(int *)(v26 + 112) >= 0 && (!v46 || *(_WORD *)(v26 + 100) != 3) )
                v44 = EngDrawStream;
              v47 = v63;
              v67.m128i_i64[0] = 0LL;
              v48 = 0LL;
              v49 = (char *)v63 + 24;
              if ( v63 )
                v48 = (struct _SURFOBJ *)((char *)v63 + 24);
              SURFREFVIEW::bMap((SURFREFVIEW *)&v67, v48);
              if ( v67.m128i_i64[0] )
              {
                v50 = 0LL;
                if ( v47 )
                  v50 = v49;
                if ( (unsigned int)v44(
                                     v26 + 24,
                                     (int)v50,
                                     (int)v40,
                                     (int)v65,
                                     (int)&v66,
                                     (__int64)&v58,
                                     v59,
                                     (__int64)v62,
                                     (__int64)v64) )
                  v9 = 1;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v67);
              return v9;
            }
            return 1;
          }
        }
      }
    }
  }
  return v9;
}
