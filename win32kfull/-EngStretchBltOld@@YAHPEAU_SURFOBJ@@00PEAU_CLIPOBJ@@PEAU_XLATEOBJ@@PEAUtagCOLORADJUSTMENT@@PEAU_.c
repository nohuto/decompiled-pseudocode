/*
 * XREFs of ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C0294170
 * Callers:
 *     EngStretchBlt @ 0x1C004DC80 (EngStretchBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00032F8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C0082380 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C00CC6E4 (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ?vInitBuffer@@YAXPEAU_XRUNLEN@@PEAU_RECTL@@K@Z @ 0x1C00E6014 (-vInitBuffer@@YAXPEAU_XRUNLEN@@PEAU_RECTL@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C012F6AC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C012F6D8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C012FB90 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02B121C (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     EngHTBlt @ 0x1C02E0A38 (EngHTBlt.c)
 */

__int64 __fastcall EngStretchBltOld(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        int *a12)
{
  struct _SURFOBJ *v12; // r10
  struct _SURFOBJ *v13; // r11
  struct _RECTL *v14; // r12
  unsigned int v15; // r9d
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // eax
  struct _XRUNLEN *(**v19)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // rdi
  __int64 v20; // rbx
  __int64 v21; // r15
  unsigned int v22; // r14d
  int v23; // eax
  struct _SURFOBJ *v24; // rdx
  int v25; // eax
  int v26; // ecx
  LONG bottom; // eax
  LONG top; // r10d
  LONG v29; // r8d
  LONG right; // eax
  LONG left; // r9d
  LONG v32; // edx
  int v33; // eax
  int v34; // r11d
  int v35; // ecx
  struct _SURFOBJ *v36; // rax
  LONG v37; // ecx
  LONG v38; // eax
  unsigned __int64 v39; // r13
  LONG v40; // r9d
  int v41; // ecx
  LONG v42; // r8d
  LONG v43; // edx
  LONG v44; // edx
  SURFOBJ *v45; // rax
  int v46; // eax
  struct _XRUNLEN *(*v47)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // rax
  int v48; // r13d
  LONG v49; // ecx
  LONG v50; // eax
  unsigned __int64 v51; // r13
  int v52; // eax
  Gre::Base *v53; // rcx
  struct Gre::Base::SESSION_GLOBALS *v54; // r9
  BOOL (__stdcall *v55)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r13
  struct _XLATEOBJ *v56; // rbx
  int v57; // eax
  BOOL (__stdcall *v58)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  unsigned __int64 v59; // r9
  __int64 v60; // r8
  int v61; // eax
  int v62; // ecx
  __int64 v63; // rcx
  int v64; // ecx
  __int64 v65; // r9
  LONG v66; // r11d
  int v67; // r10d
  struct _RECTL *v68; // rcx
  __int64 v69; // r8
  int v70; // edx
  int v71; // edx
  XCLIPOBJ *v72; // rdi
  struct _RECTL *v73; // rbx
  int v74; // eax
  LONG v75; // ecx
  LONG v76; // edx
  LONG v77; // eax
  struct _RECTL *v78; // rdx
  LONG v79; // eax
  LONG v80; // ecx
  LONG v81; // edx
  LONG v82; // r8d
  unsigned int v83; // eax
  unsigned int v84; // eax
  __int64 v85; // rbx
  struct _SURFOBJ *v86; // rcx
  unsigned int v87; // r8d
  unsigned int v88; // eax
  __int64 v89; // rcx
  HSURF v90; // rbx
  HSURF v91; // r8
  struct _POINTL *v92; // rdx
  struct _RECTL *v93; // r11
  SIZEL v94; // r12
  unsigned int v95; // r8d
  _QWORD *v96; // r15
  LONG v97; // r9d
  int i; // r10d
  __int64 v99; // rax
  unsigned __int64 v100; // rbx
  XCLIPOBJ *v102; // r15
  unsigned int v103; // [rsp+70h] [rbp-3B8h]
  LONG v104; // [rsp+70h] [rbp-3B8h]
  int v105; // [rsp+74h] [rbp-3B4h]
  int v106; // [rsp+74h] [rbp-3B4h]
  int v107; // [rsp+74h] [rbp-3B4h]
  int v108; // [rsp+74h] [rbp-3B4h]
  unsigned int v109; // [rsp+78h] [rbp-3B0h]
  signed int v110; // [rsp+78h] [rbp-3B0h]
  unsigned int v111; // [rsp+78h] [rbp-3B0h]
  unsigned int v112; // [rsp+7Ch] [rbp-3ACh]
  struct REGION *v113; // [rsp+80h] [rbp-3A8h] BYREF
  struct _RECTL *v114; // [rsp+88h] [rbp-3A0h]
  struct _SURFOBJ *v115; // [rsp+90h] [rbp-398h]
  unsigned __int64 v116; // [rsp+98h] [rbp-390h]
  __int64 v117; // [rsp+A0h] [rbp-388h] BYREF
  SIZEL sizl; // [rsp+A8h] [rbp-380h]
  __int64 v119; // [rsp+B0h] [rbp-378h]
  BOOL (__stdcall *v120)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+B8h] [rbp-370h]
  struct _SURFOBJ *v121; // [rsp+C0h] [rbp-368h] BYREF
  unsigned __int64 v122; // [rsp+C8h] [rbp-360h]
  struct REGION *v123; // [rsp+D0h] [rbp-358h] BYREF
  struct _POINTL *v124; // [rsp+D8h] [rbp-350h] BYREF
  char v125; // [rsp+E0h] [rbp-348h]
  int v126; // [rsp+E4h] [rbp-344h]
  XCLIPOBJ *v127; // [rsp+E8h] [rbp-340h]
  unsigned __int64 v128; // [rsp+F0h] [rbp-338h]
  struct _XRUNLEN *(**v129)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+F8h] [rbp-330h]
  struct _POINTL *v130; // [rsp+100h] [rbp-328h]
  __int64 v131; // [rsp+108h] [rbp-320h] BYREF
  char v132; // [rsp+110h] [rbp-318h]
  int v133; // [rsp+114h] [rbp-314h]
  int v134; // [rsp+118h] [rbp-310h]
  _DWORD *v135; // [rsp+120h] [rbp-308h]
  unsigned __int64 v136; // [rsp+128h] [rbp-300h]
  HSURF hsurf; // [rsp+130h] [rbp-2F8h]
  int *v138; // [rsp+138h] [rbp-2F0h]
  struct _XRUNLEN *(**v139)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+140h] [rbp-2E8h]
  int v140; // [rsp+148h] [rbp-2E0h]
  struct _POINTL *v141; // [rsp+150h] [rbp-2D8h]
  __int64 v142; // [rsp+158h] [rbp-2D0h] BYREF
  char v143; // [rsp+160h] [rbp-2C8h]
  int v144; // [rsp+164h] [rbp-2C4h]
  unsigned __int64 v145; // [rsp+168h] [rbp-2C0h]
  unsigned __int64 v146; // [rsp+170h] [rbp-2B8h]
  struct _CLIPOBJ *v147; // [rsp+178h] [rbp-2B0h]
  struct _XRUNLEN *(**v148)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+180h] [rbp-2A8h]
  _DWORD v149[4]; // [rsp+188h] [rbp-2A0h] BYREF
  __int64 v150; // [rsp+198h] [rbp-290h]
  int v151; // [rsp+1A0h] [rbp-288h]
  int v152; // [rsp+1A4h] [rbp-284h]
  _DWORD v153[4]; // [rsp+1A8h] [rbp-280h] BYREF
  __int64 v154; // [rsp+1B8h] [rbp-270h]
  int v155; // [rsp+1C0h] [rbp-268h]
  int v156; // [rsp+1C4h] [rbp-264h]
  __int64 v157; // [rsp+1C8h] [rbp-260h] BYREF
  __int64 v158; // [rsp+1D0h] [rbp-258h] BYREF
  __int64 v159; // [rsp+1D8h] [rbp-250h] BYREF
  void (*const near *v160)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+1E0h] [rbp-248h]
  int *v161; // [rsp+1E8h] [rbp-240h]
  struct _RECTL si128; // [rsp+1F0h] [rbp-238h] BYREF
  struct _RECTL v163; // [rsp+200h] [rbp-228h] BYREF
  struct _RECTL v164; // [rsp+210h] [rbp-218h] BYREF
  struct _RECTL v165; // [rsp+220h] [rbp-208h] BYREF
  __m128i v166; // [rsp+230h] [rbp-1F8h] BYREF
  __int128 v167; // [rsp+240h] [rbp-1E8h] BYREF
  struct _RECTL v168; // [rsp+250h] [rbp-1D8h] BYREF
  int v169; // [rsp+260h] [rbp-1C8h]
  __int128 v170; // [rsp+268h] [rbp-1C0h] BYREF
  struct _RECTL v171; // [rsp+278h] [rbp-1B0h] BYREF
  struct _RECTL v172; // [rsp+288h] [rbp-1A0h] BYREF
  _BYTE v173[160]; // [rsp+2A0h] [rbp-188h] BYREF
  _BYTE v174[4]; // [rsp+340h] [rbp-E8h] BYREF
  char v175[156]; // [rsp+344h] [rbp-E4h] BYREF

  v127 = (XCLIPOBJ *)a4;
  v121 = a3;
  v12 = a2;
  v115 = a2;
  v13 = a1;
  v129 = (struct _XRUNLEN *(**)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int))a1;
  v128 = (unsigned __int64)a5;
  v147 = a4;
  v120 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))a6;
  v130 = a7;
  v114 = a8;
  v14 = a9;
  v141 = a10;
  v15 = a11;
  v103 = a11;
  v138 = a12;
  if ( a11 - 1 > 3 )
    return 0LL;
  v122 = (unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL);
  v146 = v122;
  v16 = (unsigned __int64)&a2[-1].pvScan0 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64);
  v136 = (unsigned __int64)&a3[-1].pvScan0 & -(__int64)(a3 != 0LL);
  *(_QWORD *)&v165.left = v136;
  if ( !v122 )
    return 0LL;
  if ( !v16 )
    return 0LL;
  v17 = *(_DWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x60);
  if ( (unsigned int)(v17 - 7) <= 2 )
    return 0LL;
  v18 = *(_DWORD *)(v16 + 96);
  if ( v18 == 9 || v17 == 10 || v18 == 10 )
    return 0LL;
  if ( a9->left != a9->right && a9->top != a9->bottom && a8->left != a8->right && a8->top != a8->bottom )
  {
    v19 = *(struct _XRUNLEN *(***)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int))(((unsigned __int64)&v13[-1].pvScan0 & -(__int64)(v13 != 0LL)) + 0x30);
    v139 = v19;
    v148 = v19;
    v20 = *(_QWORD *)(v16 + 48);
    v142 = 0LL;
    v143 = 0;
    v144 = 0;
    v172 = *a9;
    v21 = v16;
    v22 = 1;
    if ( v12->iType == 1 && v20 && (*(_DWORD *)(v20 + 40) & 0x20000) != 0 )
    {
      if ( !(unsigned int)MulCopyDeviceToDIB(v12, (struct SURFMEM *)&v142, &v172) )
      {
LABEL_223:
        v22 = 0;
        goto LABEL_203;
      }
      if ( !v142 )
      {
LABEL_203:
        SURFMEM::~SURFMEM((SURFMEM *)&v142);
        return v22;
      }
      v14 = &v172;
      v12 = (struct _SURFOBJ *)((v142 + 24) & -(__int64)(v142 != 0));
      v115 = v12;
      v21 = (unsigned __int64)&v12[-1].pvScan0 & -(__int64)(v12 != 0LL);
      v20 = *(_QWORD *)(v21 + 0x30);
      v13 = (struct _SURFOBJ *)v129;
      v15 = a11;
    }
    if ( !v128 || (v23 = 1, (*(_DWORD *)(v128 + 4) & 8) == 0) )
      v23 = 0;
    v109 = v23;
    v140 = v23;
    if ( v23 )
    {
      if ( v12->iType )
        goto LABEL_223;
      if ( v13->iType != 1 )
        goto LABEL_223;
      v24 = v121;
      if ( v121 )
        goto LABEL_223;
    }
    else
    {
      v24 = v121;
    }
    if ( v15 == 4 )
    {
      if ( v23 )
        goto LABEL_223;
      v25 = EngHTBlt(v13, v12, v24, v127, v128, v120, v130, a8, v14, v141, 0, 0LL);
      if ( v25 == -1 )
        goto LABEL_223;
      if ( v25 )
      {
        if ( v25 == 1 )
          goto LABEL_203;
      }
      else
      {
        v103 = 3;
      }
    }
    v26 = 0;
    v105 = 0;
    bottom = a8->bottom;
    top = a8->top;
    v29 = bottom;
    if ( bottom < top )
    {
      v29 = a8->top;
      a8->top = bottom;
      a8->bottom = top;
      v26 = 2;
      v105 = 2;
      top = bottom;
    }
    right = a8->right;
    left = a8->left;
    v32 = right;
    if ( right < a8->left )
    {
      v32 = a8->left;
      a8->left = right;
      a8->right = left;
      v105 = v26 | 1;
      left = right;
    }
    v33 = v103;
    if ( v103 >= 3 || (v34 = 1, v136) )
      v34 = 0;
    v112 = v34;
    if ( v34 && v32 - left >= v14->right - v14->left )
    {
      if ( v29 - top >= v14->bottom - v14->top )
        v34 = 0;
      v112 = v34;
    }
    v134 = v34;
    if ( !v34 )
    {
      if ( v103 < 3 )
        v33 = 3;
      v103 = v33;
    }
    v135 = (_DWORD *)(v122 + 112);
    v145 = v122 + 112;
    v35 = *(_DWORD *)(v122 + 112);
    if ( (v35 & 0x40000) == 0 )
    {
      if ( v128 && (*(_DWORD *)(v128 + 4) & 1) == 0 )
      {
        v36 = v115;
      }
      else
      {
        v36 = v115;
        if ( !v115->iType )
          goto LABEL_54;
      }
      if ( *(_WORD *)(v122 + 100) )
      {
        if ( (v35 & 2) != 0 && !v105 && !v121 )
        {
          v40 = v14->left;
          if ( v14->left >= 0 )
          {
            v41 = v14->top;
            if ( v41 >= 0 )
            {
              v42 = v14->right;
              if ( v42 <= v36->sizlBitmap.cx )
              {
                v43 = v14->bottom;
                if ( v43 <= v36->sizlBitmap.cy )
                {
                  v170 = 0LL;
                  LODWORD(v116) = v42 - v40;
                  sizl.cx = v42 - v40;
                  v44 = v43 - v41;
                  LODWORD(v119) = v44;
                  sizl.cy = v44;
                  if ( v42 - v40 <= a8->right - a8->left && v44 <= a8->bottom - a8->top )
                  {
                    hsurf = (HSURF)EngCreateBitmap(sizl, 0, *((_DWORD *)v129 + 18), 0, 0LL);
                    v45 = EngLockSurface(hsurf);
                    sizl = (SIZEL)v45;
                    if ( v45 )
                    {
                      v45->iUniq = 0;
                      *((_QWORD *)&v170 + 1) = __PAIR64__(v119, v116);
                      if ( (*(_DWORD *)(v21 + 112) & 0x400) != 0 )
                        v46 = (*(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))(v20 + 2816))(
                                v45,
                                v115,
                                0LL,
                                v128,
                                &v170,
                                v14);
                      else
                        v46 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))EngCopyBits)(
                                v45,
                                v115,
                                0LL,
                                v128,
                                &v170,
                                v14);
                      if ( !v46
                        || (v47 = v19[353]) == 0LL
                        || !((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v47)(
                              v129,
                              sizl,
                              0LL,
                              v127,
                              0LL,
                              v120,
                              v130,
                              a8,
                              &v170,
                              v141,
                              v103) )
                      {
                        v22 = 0;
                      }
                      EngUnlockSurface(*(SURFOBJ **)&sizl);
                      EngDeleteSurface(hsurf);
                      goto LABEL_203;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_54:
    v124 = 0LL;
    v125 = 0;
    v126 = 0;
    v166 = 0LL;
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v173);
    v37 = *(_DWORD *)(v21 + 60);
    v38 = *(_DWORD *)(v21 + 56);
    *(_QWORD *)&si128.left = 0LL;
    si128.right = v38;
    si128.bottom = v37;
    v164 = 0LL;
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v113);
    LOWORD(v116) = *(_WORD *)(v122 + 100);
    if ( (_WORD)v116 || *(_QWORD *)(v122 + 32) == *(_QWORD *)(v21 + 32) )
    {
      v166 = *(__m128i *)a8;
      v48 = _mm_cvtsi128_si32(v166);
      v163.left = v48 - 1;
      v163.top = v166.m128i_i32[1] - 1;
      LODWORD(v119) = _mm_cvtsi128_si32(_mm_srli_si128(v166, 8));
      v163.right = v119 + 1;
      v163.bottom = _mm_srli_si128(v166, 8).m128i_i32[1] + 1;
      v49 = *(_DWORD *)(v122 + 60);
      v50 = *(_DWORD *)(v122 + 56);
      *(_QWORD *)&v168.left = 0LL;
      v168.right = v50;
      v168.bottom = v49;
      ERECTL::operator*=(&v163.left, &v168.left);
      if ( ERECTL::bEmpty((ERECTL *)&v163) )
        goto LABEL_202;
      if ( (_WORD)v116
        || v163.left <= v14->right && v163.right >= v14->left && v163.top <= v14->bottom && v163.bottom >= v14->top )
      {
        v166.m128i_i32[0] = v48 - v163.left;
        v166.m128i_i32[1] -= v163.top;
        v166.m128i_i32[2] = v119 - v163.left;
        v166.m128i_i32[3] -= v163.top;
        v149[3] = 0;
        v152 = 0;
        v149[1] = v163.right - v163.left + 1;
        v149[2] = v163.bottom - v163.top + 1;
        v150 = 0LL;
        v51 = v122;
        if ( v109 )
          v52 = *(_DWORD *)(v21 + 96);
        else
          v52 = *(_DWORD *)(v122 + 96);
        v149[0] = v52;
        v151 = *v135 & 0x40000;
        SURFMEM::bCreateDIB((SURFMEM *)&v124, (struct _DEVBITMAPINFO *)v149, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v124 )
          goto LABEL_222;
        v117 = *(_QWORD *)&v163.left;
        if ( !v113 )
          goto LABEL_222;
        *(_QWORD *)&v163.left = 0LL;
        v163.right -= v117;
        v163.bottom -= HIDWORD(v117);
        RGNOBJ::vSet((RGNOBJ *)&v113, &v163);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v173, v113, (struct ERECTL *)&v163, 1);
        v157 = *(_QWORD *)(v51 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)&v157, (struct _SURFOBJ *)(v51 + 24), 0LL, 0);
        if ( v136 )
        {
          v54 = Gre::Base::Globals(v53);
          if ( (*v135 & 0x400) != 0 )
            v55 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v19[352];
          else
            v55 = EngCopyBits;
          v120 = EngCopyBits;
          ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, char *, struct _RECTL *, __int64 *))v55)(
            (unsigned __int64)&v124[3] & -(__int64)(v124 != 0LL),
            v122 + 24,
            0LL,
            (char *)v54 + 6896,
            &v163,
            &v117);
        }
        else
        {
          v120 = EngCopyBits;
        }
        v39 = (unsigned __int64)v124;
        v130 = v124;
        v114 = (struct _RECTL *)&v166;
        v116 = (unsigned __int64)v173;
LABEL_97:
        v158 = *(_QWORD *)(v21 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)&v158, v115, 0LL, 0);
        ERECTL::operator*=(&si128.left, &v14->left);
        if ( !ERECTL::bEmpty((ERECTL *)&si128) )
        {
          v131 = 0LL;
          v132 = 0;
          v133 = 0;
          v167 = 0LL;
          if ( v105 || *(_WORD *)(v21 + 100) || (unsigned int)(*(_DWORD *)(v21 + 96) - 7) <= 1 )
          {
            v153[3] = 0;
            v156 = 0;
            v153[1] = si128.right - si128.left;
            v153[2] = si128.bottom - si128.top;
            v154 = 0LL;
            if ( v109 )
              v57 = *(_DWORD *)(v21 + 96);
            else
              v57 = *(_DWORD *)(v39 + 96);
            v153[0] = v57;
            v155 = *(_DWORD *)(v21 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v131, (struct _DEVBITMAPINFO *)v153, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( !v131 )
              goto LABEL_221;
            DWORD2(v167) = si128.right - si128.left;
            HIDWORD(v167) = si128.bottom - si128.top;
            if ( (*(_DWORD *)(v21 + 112) & 0x400) != 0 )
              v58 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v20 + 2816);
            else
              v58 = EngCopyBits;
            v59 = 0LL;
            if ( !v109 )
              v59 = v128;
            ((void (__fastcall *)(__int64, __int64, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))v58)(
              (v131 + 24) & -(__int64)(v131 != 0),
              v21 + 24,
              0LL,
              v59,
              &v167,
              &si128);
            LODWORD(v167) = v14->left - si128.left;
            DWORD1(v167) = v14->top - si128.top;
            DWORD2(v167) = v14->right - si128.left;
            HIDWORD(v167) = v14->bottom - si128.top;
            v60 = v131;
            v21 = v131;
            v14 = (struct _RECTL *)&v167;
            v56 = 0LL;
            v115 = 0LL;
            si128.right -= si128.left;
            v61 = si128.bottom - si128.top;
            si128.bottom -= si128.top;
            *(_QWORD *)&si128.left = 0LL;
            if ( (v105 & 2) != 0 )
            {
              v62 = *(_DWORD *)(v131 + 88);
              if ( v62 <= 0 )
                v63 = *(_QWORD *)(v131 + 72);
              else
                v63 = *(_QWORD *)(v131 + 72) + v62 * (v61 - 1);
              *(_QWORD *)(v131 + 80) = v63;
              *(_DWORD *)(v131 + 88) = -*(_DWORD *)(v131 + 88);
              v60 = v131;
            }
            if ( (v105 & 1) != 0 )
            {
              v64 = *(_DWORD *)(v60 + 96);
              if ( (unsigned int)(v64 - 1) > 5 )
              {
LABEL_221:
                SURFMEM::~SURFMEM((SURFMEM *)&v131);
LABEL_222:
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v113);
                SURFMEM::~SURFMEM((SURFMEM *)&v124);
                goto LABEL_223;
              }
              ((void (__fastcall *)(__int64))(&apfnMirror)[v64])(v60);
            }
          }
          else
          {
            v56 = 0LL;
            if ( !v109 )
              v56 = (struct _XLATEOBJ *)v128;
            v115 = (struct _SURFOBJ *)v56;
          }
          v159 = *(_QWORD *)(v39 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v159, (struct _SURFOBJ *)(v39 + 24), 0LL, 0);
          v106 = v14->right;
          LODWORD(v119) = v14->left;
          v65 = (unsigned int)(v106 - v119);
          if ( (int)v65 >= 128000000 )
            goto LABEL_221;
          v66 = v14->bottom;
          v110 = v14->top;
          v67 = v66 - v110;
          if ( v66 - v110 >= 128000000 )
            goto LABEL_221;
          v68 = v114;
          v69 = (unsigned int)(v114->right - v114->left);
          if ( (int)v69 >= 128000000 )
            goto LABEL_221;
          v70 = v114->bottom - v114->top;
          if ( v70 >= 128000000 || (int)v69 <= -128000000 || v70 <= -128000000 )
            goto LABEL_221;
          if ( v103 == 3 && !v121 && (!v56 || (v56->flXlate & 1) != 0) )
          {
            v69 = *(unsigned int *)(v39 + 96);
            v71 = *(_DWORD *)(v21 + 96);
            if ( (_DWORD)v69 == v71 && ((v71 - 3) & 0xFFFFFFFC) == 0 && v71 != 5 )
            {
              if ( v116 && *(_BYTE *)(v116 + 20) == 3 )
              {
                v165 = 0LL;
                *(_QWORD *)&si128.right = 0LL;
                *(_QWORD *)&si128.left = 0LL;
                v168 = 0LL;
                v169 = 0;
                v72 = v127;
                XCLIPOBJ::cEnumStart(v127, 0, 0, 4u, 0);
                v73 = v114;
                do
                {
                  v74 = XCLIPOBJ::bEnum(v72, 0x14u, (char *)&v168, 0LL);
                  v107 = v74;
                  if ( v168.left )
                  {
                    StretchDIBDirect(
                      *(char **)(v39 + 80),
                      *(_DWORD *)(v39 + 88),
                      *(_DWORD *)(v39 + 56),
                      *(_DWORD *)(v39 + 60),
                      v73,
                      *(char **)(v21 + 80),
                      *(_DWORD *)(v21 + 88),
                      *(_DWORD *)(v21 + 56),
                      *(_DWORD *)(v21 + 60),
                      v14,
                      &v165,
                      (struct _RECTL *)&v168.top,
                      *(_DWORD *)(v39 + 96));
                    v75 = si128.left;
                    v76 = si128.right;
                    if ( si128.left == si128.right || (v77 = si128.top, si128.top == si128.bottom) )
                    {
                      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&v165);
                    }
                    else
                    {
                      if ( v165.left < si128.left )
                        v75 = v165.left;
                      si128.left = v75;
                      if ( v165.top < si128.top )
                        v77 = v165.top;
                      si128.top = v77;
                      if ( v165.right > si128.right )
                        v76 = v165.right;
                      si128.right = v76;
                      if ( v165.bottom > si128.bottom )
                        si128.bottom = v165.bottom;
                    }
                    v74 = v107;
                  }
                }
                while ( v74 );
                v19 = v139;
              }
              else
              {
                v78 = v114;
                if ( v116 && *(_BYTE *)(v116 + 20) == 1 )
                  v78 = (struct _RECTL *)(v116 + 4);
                StretchDIBDirect(
                  *(char **)(v39 + 80),
                  *(_DWORD *)(v39 + 88),
                  *(_DWORD *)(v39 + 56),
                  *(_DWORD *)(v39 + 60),
                  v114,
                  *(char **)(v21 + 80),
                  *(_DWORD *)(v21 + 88),
                  *(_DWORD *)(v21 + 56),
                  *(_DWORD *)(v21 + 60),
                  v14,
                  &si128,
                  v78,
                  v69);
              }
              v79 = si128.left;
              v164 = si128;
              v80 = si128.right;
              v81 = si128.top;
              v82 = si128.bottom;
              goto LABEL_200;
            }
          }
          if ( v106 < (int)v119 )
            goto LABEL_221;
          if ( v66 < v110 )
            goto LABEL_221;
          v83 = v67 + v65;
          if ( v67 + (int)v65 < (unsigned int)v65 || v83 >= 0x3FFFFFF5 )
            goto LABEL_221;
          v84 = 4 * v83 + 40;
          if ( v84 )
          {
            v85 = Win32AllocPool(v84, 1752462151LL, v69, v65);
            v68 = v114;
          }
          else
          {
            v85 = 0LL;
          }
          v119 = v85;
          if ( !v85 )
            goto LABEL_221;
          *v138 = 1;
          vInitStrDDA((struct _STRDDA *)v85, &si128, v14, v68);
          v164 = *(struct _RECTL *)v85;
          v86 = v115;
          if ( v115 )
          {
            if ( (BYTE4(v115->dhsurf) & 1) != 0 )
              v86 = 0LL;
            v115 = v86;
          }
          if ( v116 )
            v116 &= -(__int64)(*(_BYTE *)(v116 + 20) != 0);
          v160 = (&apfnWrite)[*(unsigned int *)(v39 + 96)];
          if ( v112 )
            *(_DWORD *)(v85 + 20) = (v103 != 1) - 1;
          v129 = (struct _XRUNLEN *(**)(struct _STRDDA *, struct _STRRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int))*(&apfnRead + 3 * *(unsigned int *)(v21 + 96) + v103 - 1);
          v139 = v129;
          v87 = v164.right - v164.left;
          if ( v14->right - v14->left <= v114->right - v114->left )
          {
            if ( v87 + 3 < v87 )
              goto LABEL_220;
            v88 = (v87 + 3) >> 1;
            if ( v88 >= 0x15555553 )
              goto LABEL_220;
          }
          else
          {
            if ( v87 >= 0x15555553 )
              goto LABEL_220;
            v88 = v164.right - v164.left;
          }
          v89 = 12 * (v88 + 2);
          if ( v87 <= 0x5F5E100 && (unsigned int)v89 <= 0x2710000 )
          {
            v90 = (HSURF)AllocFreeTmpBuffer(v89);
            hsurf = v90;
            if ( v90 )
            {
              v92 = (struct _POINTL *)(v21 + 88);
              v161 = (int *)(v21 + 88);
              v93 = (struct _RECTL *)(*(_QWORD *)(v21 + 80) + *(_DWORD *)(v21 + 88) * si128.top);
              v114 = v93;
              v138 = 0LL;
              if ( v121 )
              {
                v92 = v141;
                LODWORD(v138) = si128.left + v141->x - v14->left;
                v94 = (SIZEL)(*(_QWORD *)(v136 + 80) + *(_DWORD *)(v136 + 88) * (si128.top + v141->y - v14->top));
              }
              else
              {
                v94 = 0LL;
              }
              sizl = v94;
              v111 = 0;
              if ( v112 )
              {
                v95 = -1;
                if ( v103 != 1 )
                  v95 = 0;
                vInitBuffer((struct _XRUNLEN *)(v90 + 2), &v164, v95);
                v111 = (unsigned int)v91;
              }
              v96 = (_QWORD *)v119;
              *(_DWORD *)v90 = *(_DWORD *)(HSURF)(v119 + 4);
              v97 = si128.top;
              for ( i = 0; ; ++i )
              {
                v108 = i;
                v104 = v97;
                if ( v97 >= si128.bottom )
                  break;
                v91 = v90 + 1;
                v136 = (unsigned __int64)(v90 + 1);
                v92 = (struct _POINTL *)*(unsigned int *)(v96[3] + 4LL * i);
                *((_DWORD *)v90 + 1) = (_DWORD)v92;
                if ( (_DWORD)v92 )
                {
                  v99 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD))v129)(
                          v96,
                          v90,
                          v93,
                          v94,
                          v115,
                          si128.left,
                          si128.right,
                          (_DWORD)v138);
                  ((void (__fastcall *)(HSURF, __int64, unsigned __int64, unsigned __int64))v160)(v90, v99, v39, v116);
                  v93 = v114;
                  v97 = v104;
                  v92 = (struct _POINTL *)v112;
                  if ( v112 )
                  {
                    vInitBuffer((struct _XRUNLEN *)(v90 + 2), &v164, v111);
                    v97 = v104;
                  }
                  i = v108;
                }
                else if ( v112 )
                {
                  ((void (__fastcall *)(_QWORD *, HSURF, struct _RECTL *, _QWORD, struct _SURFOBJ *, LONG, LONG, _DWORD))v129)(
                    v96,
                    v90,
                    v93,
                    0LL,
                    v115,
                    si128.left,
                    si128.right,
                    0);
                  v93 = v114;
                  v97 = v104;
                  i = v108;
                }
                v93 = (struct _RECTL *)((char *)v93 + *v161);
                v114 = v93;
                *(_DWORD *)v90 += *(_DWORD *)v136;
                if ( v94 )
                {
                  *(_QWORD *)&v94 += *(int *)(*(_QWORD *)&v165.left + 88LL);
                  sizl = v94;
                }
                ++v97;
              }
              FreeTmpBuffer(v90, v92, v91);
              Win32FreePool(v96);
              v82 = v164.bottom;
              v80 = v164.right;
              v81 = v164.top;
              v79 = v164.left;
LABEL_200:
              v100 = v122;
              if ( v39 == v122 )
              {
LABEL_201:
                SURFMEM::~SURFMEM((SURFMEM *)&v131);
                goto LABEL_202;
              }
              v164.left = v117 + v79;
              v164.top = HIDWORD(v117) + v81;
              v164.right = v117 + v80;
              v164.bottom = HIDWORD(v117) + v82;
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v123);
              if ( !v123 )
                goto LABEL_205;
              v102 = v127;
              if ( v127 )
              {
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v121);
                if ( !v121
                  || (RGNOBJ::vSet((RGNOBJ *)&v121, &v164),
                      !RGNOBJ::bMerge((RGNOBJ *)&v123, (struct RGNOBJ *)&v121, (XCLIPOBJ *)((char *)v102 + 56), 8u)) )
                {
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v121);
LABEL_205:
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v123);
                  goto LABEL_221;
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v121);
              }
              else
              {
                RGNOBJ::vSet((RGNOBJ *)&v123, &v164);
              }
              v171 = *(struct _RECTL *)((char *)v123 + 56);
              if ( !v102 || bIntersect(&v171, (const struct _RECTL *)((char *)v102 + 4), &v171) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v174, v123, (struct ERECTL *)&v171, 1);
                if ( !ERECTL::bEmpty((ERECTL *)v175) )
                {
                  v163.left += v117;
                  v163.top += HIDWORD(v117);
                  v163.right += v117;
                  v163.bottom += HIDWORD(v117);
                  v117 = 0LL;
                  if ( (*v135 & 0x400) != 0 )
                    v120 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v19[352];
                  ((void (__fastcall *)(unsigned __int64, unsigned __int64, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))v120)(
                    v100 + 24,
                    (unsigned __int64)&v124[3] & -(__int64)(v124 != 0LL),
                    v174,
                    v128 & -(__int64)(v140 != 0),
                    &v163,
                    &v117);
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v123);
              goto LABEL_201;
            }
            v85 = v119;
          }
LABEL_220:
          Win32FreePool((void *)v85);
          goto LABEL_221;
        }
LABEL_202:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v113);
        SURFMEM::~SURFMEM((SURFMEM *)&v124);
        goto LABEL_203;
      }
      v39 = v122;
      v130 = (struct _POINTL *)v122;
    }
    else
    {
      v39 = v122;
      v130 = (struct _POINTL *)v122;
    }
    v116 = (unsigned __int64)v127;
    v120 = EngCopyBits;
    goto LABEL_97;
  }
  return 1LL;
}
