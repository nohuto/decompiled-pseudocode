/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00837F0
 * Callers:
 *     GreDrawStream @ 0x1C0082A90 (GreDrawStream.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C000FFA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     bCvtPts1 @ 0x1C0086D84 (bCvtPts1.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0272EC0 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
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
  unsigned int v10; // ebx
  LONG left; // r11d
  __int64 right; // rdx
  LONG bottom; // r10d
  __int64 top; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  LONG v18; // r15d
  LONG v19; // r14d
  LONG v20; // edi
  LONG v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // r12
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _DWORD *v30; // rcx
  __int64 v31; // r9
  int v32; // r11d
  signed int v33; // edx
  signed int v34; // r8d
  int v35; // r10d
  char *v36; // r12
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r13
  int v40; // r15d
  int v41; // edi
  int v42; // r14d
  int v43; // esi
  char *v44; // r12
  char *v45; // rax
  struct ECLIPOBJ *v46; // rdx
  __m128i v47; // xmm1
  XDCOBJ *v48; // rsi
  __int64 (__fastcall *v49)(int, int, int, int, int, __int64, int, __int64, __int64); // rdi
  __int64 v50; // rax
  bool v51; // al
  __int64 v52; // r14
  bool v53; // zf
  struct _SURFOBJ *v54; // rdx
  __int64 v55; // rdx
  struct REGION *v57; // rax
  int v58; // r10d
  char *v59; // rcx
  int v60; // eax
  char *v61; // rcx
  LONG v62; // eax
  LONG v63; // eax
  __int64 v64; // [rsp+50h] [rbp-91h] BYREF
  int v65; // [rsp+58h] [rbp-89h]
  char *v66; // [rsp+60h] [rbp-81h]
  char *v67; // [rsp+68h] [rbp-79h]
  char *v68; // [rsp+70h] [rbp-71h]
  _QWORD v69[3]; // [rsp+78h] [rbp-69h] BYREF
  XDCOBJ *v70[2]; // [rsp+90h] [rbp-51h] BYREF
  struct _DRAWSTREAMINFO *v71; // [rsp+A0h] [rbp-41h]
  struct _XLATEOBJ *v72; // [rsp+A8h] [rbp-39h]
  __m128i v73; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-21h] BYREF
  LONG v75; // [rsp+C8h] [rbp-19h]
  LONG v76; // [rsp+CCh] [rbp-15h]

  v70[0] = a1;
  v10 = 0;
  v65 = a7;
  left = a5->left;
  right = (unsigned int)a5->right;
  bottom = a5->bottom;
  v68 = a8;
  v73.m128i_i32[0] = left;
  v73.m128i_i64[1] = __PAIR64__(bottom, right);
  v64 = 0LL;
  v69[0] = a3;
  top = (unsigned int)a5->top;
  v16 = *(_QWORD *)a1;
  v73.m128i_i32[1] = a5->top;
  v71 = a9;
  v72 = a4;
  v17 = *(_QWORD *)(v16 + 496);
  v18 = a6->left;
  LODWORD(v16) = *(_DWORD *)(v17 + 116);
  v19 = a6->top;
  v20 = a6->right;
  v21 = a6->bottom;
  LODWORD(v74) = a6->left;
  HIDWORD(v74) = v19;
  v75 = v20;
  v76 = v21;
  if ( ((v16 & 8) != 0 || *(_QWORD *)(v17 + 224)) && _bittest16((const signed __int16 *)(v17 + 102), 9u) )
    goto LABEL_73;
  v22 = *(_DWORD *)(v17 + 112);
  if ( (v22 & 0x800) != 0 )
  {
    v23 = UserSurfaceAccessCheck(*(_QWORD *)(v17 + 648), right, top);
  }
  else
  {
    if ( (v22 & 0x10000000) == 0 )
      goto LABEL_9;
    v23 = UserScreenAccessCheck(v17, right, top);
  }
  if ( !v23 )
  {
LABEL_73:
    EngSetLastError(5u);
    return v10;
  }
  bottom = v73.m128i_i32[3];
  LODWORD(right) = v73.m128i_i32[2];
  LODWORD(top) = v73.m128i_i32[1];
  left = v73.m128i_i32[0];
LABEL_9:
  v24 = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  if ( (v24 & 1) == 0 )
    return v10;
  if ( (v24 & 2) != 0 )
  {
    if ( (v24 & 0x43) != 0x43 )
    {
      bCvtPts1(*(_QWORD *)a2, &v64, 1LL);
LABEL_68:
      left = v73.m128i_i32[0];
      LODWORD(top) = v73.m128i_i32[1];
      LODWORD(right) = v73.m128i_i32[2];
      bottom = v73.m128i_i32[3];
    }
  }
  else
  {
    v67 = &v68[v65];
    if ( v68 < v67 )
    {
      v59 = v68 + 36;
      v66 = v68 + 36;
      while ( *((_DWORD *)v59 - 9) == 9 )
      {
        EXFORMOBJ::bXform(a2, (struct ERECTL *)(v59 - 32));
        v60 = DC::bDpiScaledSurface(*(DC **)a1);
        v61 = v66;
        if ( v60 )
          *(_DWORD *)v66 &= ~0x20u;
        v59 = v61 + 60;
        v66 = v59;
        if ( v59 - 36 >= v67 )
          goto LABEL_68;
      }
      return v10;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 32LL) & 0x43) != 0x43 )
  {
    bCvtPts1(*(_QWORD *)a2, &v74, 2LL);
    bottom = v73.m128i_i32[3];
    LODWORD(right) = v73.m128i_i32[2];
    LODWORD(top) = v73.m128i_i32[1];
    left = v73.m128i_i32[0];
    v21 = v76;
    v20 = v75;
    v19 = HIDWORD(v74);
    v18 = v74;
  }
  if ( *((_DWORD *)a2 + 3) )
  {
    ++v18;
    ++v20;
  }
  if ( v18 > v20 )
  {
    v62 = v18;
    v18 = v20;
    v20 = v62;
  }
  if ( v19 > v21 )
  {
    v63 = v19;
    v19 = v21;
    v21 = v63;
  }
  if ( left != (_DWORD)right && (_DWORD)top != bottom )
  {
    v25 = *(_QWORD *)a1;
    v26 = 1024LL;
    v67 = (char *)v25;
    v27 = 1024LL;
    if ( (*(_DWORD *)(v25 + 40) & 1) == 0 )
      v27 = 1016LL;
    v74 = *(_QWORD *)(v25 + 496);
    LODWORD(v64) = *(_DWORD *)(v27 + v25) + v64;
    v28 = *(_DWORD *)(v27 + v25 + 4);
    v29 = 1024LL;
    HIDWORD(v64) += v28;
    if ( (*(_DWORD *)(v25 + 40) & 1) == 0 )
      v29 = 1016LL;
    v30 = (_DWORD *)(v25 + v29);
    LODWORD(v66) = *v30;
    v10 = 0;
    if ( (unsigned __int64)((int)v66 + (__int64)left + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)((int)v66 + (__int64)(int)right + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v31 = (int)v30[1];
      if ( (unsigned __int64)(v31 + (int)top + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v31 + bottom + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v32 = (_DWORD)v66 + left;
        v73.m128i_i32[0] = v32;
        v33 = *v30 + right;
        v34 = v30[1] + top;
        *(__int64 *)((char *)v73.m128i_i64 + 4) = __PAIR64__(v33, v34);
        v35 = v30[1] + bottom;
        v73.m128i_i32[3] = v35;
        if ( (*((_DWORD *)v67 + 10) & 1) == 0 )
          v26 = 1016LL;
        v36 = &v67[v26];
        v37 = *(int *)v36;
        if ( (unsigned __int64)(v37 + v18 + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v37 + v20 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v38 = *((int *)v36 + 1);
          v39 = v74;
          if ( (unsigned __int64)(v38 + v19 + 0x80000000LL) <= 0xFFFFFFFF
            && (unsigned __int64)(v38 + v21 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v40 = v37 + v18;
            v41 = v37 + v20;
            v42 = v38 + v19;
            v43 = v38 + v21;
            v44 = 0LL;
            if ( v32 > v40 || v33 < v41 || v34 > v42 || v35 < v43 )
            {
              v45 = v67;
            }
            else
            {
              v45 = v67;
              if ( *((_DWORD *)v67 + 250) <= v40
                && *((_DWORD *)v67 + 252) >= v41
                && *((_DWORD *)v67 + 251) <= v42
                && *((_DWORD *)v67 + 253) >= v43 )
              {
                ERECTL::operator*=(&v73, v67 + 1000);
                v47 = v73;
                v48 = v70[0];
LABEL_45:
                if ( _mm_cvtsi128_si32(v47) == _mm_cvtsi128_si32(_mm_srli_si128(v47, 8))
                  || v47.m128i_i32[1] == _mm_srli_si128(v47, 8).m128i_i32[1] )
                {
                  return 1;
                }
                else
                {
                  if ( (*(_DWORD *)(*(_QWORD *)v48 + 36LL) & 0xE0) != 0 )
                  {
                    *(__m128i *)v70 = v47;
                    XDCOBJ::vAccumulateTight(v48, v46, (__m128i *)v70);
                  }
                  ++*(_DWORD *)(v39 + 92);
                  v49 = EngDrawStream;
                  v50 = *(_QWORD *)(v39 + 48);
                  if ( *(_QWORD *)(v50 + 3384) )
                    v49 = *(__int64 (__fastcall **)(int, int, int, int, int, __int64, int, __int64, __int64))(v50 + 3384);
                  v51 = (*(_DWORD *)(*(_QWORD *)v48 + 36LL) & 0x200) != 0
                     && v50
                     && (*(_DWORD *)(v50 + 40) & 0x20000) != 0;
                  if ( *(int *)(v39 + 112) >= 0 && (!v51 || *(_WORD *)(v39 + 100) != 3) )
                    v49 = EngDrawStream;
                  v52 = v69[0];
                  v53 = v69[0] == 0LL;
                  v69[0] = 0LL;
                  v54 = 0LL;
                  if ( !v53 )
                    v54 = (struct _SURFOBJ *)(v52 + 24);
                  SURFREFVIEW::bMap((SURFREFVIEW *)v69, v54);
                  if ( v69[0] )
                  {
                    v55 = 0LL;
                    if ( v52 )
                      v55 = v52 + 24;
                    if ( (unsigned int)v49(
                                         v39 + 24,
                                         v55,
                                         (int)v44,
                                         (int)v72,
                                         (int)&v73,
                                         (__int64)&v64,
                                         v65,
                                         (__int64)v68,
                                         (__int64)v71) )
                      v10 = 1;
                  }
                  SURFREFVIEW::bUnMap((SURFREFVIEW *)v69);
                }
                return v10;
              }
            }
            v48 = v70[0];
            v44 = v45 + 1768;
            v57 = XDCOBJ::prgnEffRao(v70[0]);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v44, v57, (struct ERECTL *)&v73, v58);
            v47 = *(__m128i *)(v44 + 4);
            v73 = v47;
            goto LABEL_45;
          }
        }
      }
    }
  }
  return v10;
}
