/*
 * XREFs of ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C0163330
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0162BA0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DB250 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C02DBCD4 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C02DBE40 (-DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z.c)
 */

__int64 __fastcall DxgkpBlitA8R8R8G8(
        unsigned __int8 *a1,
        int a2,
        int a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5,
        unsigned __int8 *a6,
        int a7,
        const struct tagRECT *a8,
        struct tagRECT *a9,
        struct tagRECT *a10)
{
  int v10; // r13d
  int v11; // ebx
  int v12; // edi
  LONG left; // r12d
  int right; // ebp
  LONG top; // r11d
  LONG bottom; // r10d
  LONG v17; // esi
  LONG v18; // r15d
  unsigned __int8 *v19; // rbx
  int v20; // r11d
  LONG v21; // r14d
  LONG v22; // r8d
  int v23; // esi
  int v24; // r10d
  int v25; // r8d
  int v26; // eax
  int v27; // r12d
  unsigned __int64 v28; // r8
  LONG v29; // r10d
  unsigned __int8 *v30; // r15
  int v31; // ecx
  unsigned __int8 *v32; // rdi
  size_t v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // r12
  __int64 v37; // rcx
  unsigned __int8 *v38; // rax
  unsigned __int8 *v39; // rdi
  __int64 v40; // rbp
  int v41; // r10d
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  int v44; // ebx
  int v45; // ecx
  unsigned __int8 *v46; // r9
  struct _UFIXPOINT_PIXEL *v47; // r12
  unsigned __int8 *v48; // rcx
  int v49; // r15d
  struct _UFIXPOINT_PIXEL *v50; // r9
  unsigned int v51; // r8d
  unsigned int *v52; // r11
  int v53; // r10d
  unsigned int v54; // edx
  signed __int64 v55; // r9
  _BYTE *v56; // r8
  unsigned int v57; // ecx
  unsigned int v58; // eax
  unsigned __int8 *v59; // r8
  unsigned __int8 *v60; // r8
  int v61; // eax
  bool v62; // cc
  struct _UFIXPOINT_PIXEL *v63; // rdx
  int *v64; // r11
  int v65; // r9d
  _BYTE *v66; // rdx
  int v67; // eax
  unsigned int v68; // r9d
  _BYTE *v69; // r11
  unsigned int *v70; // rdx
  unsigned int v71; // r10d
  unsigned int v72; // r9d
  __int64 v73; // r8
  unsigned int v74; // ecx
  unsigned int v75; // eax
  int v76; // r14d
  int v77; // ebp
  int v78; // r9d
  int v79; // r8d
  _DWORD *v80; // rdx
  unsigned int v81; // eax
  int v82; // r11d
  int v83; // r9d
  int v84; // edx
  int v85; // ecx
  int v86; // r8d
  struct _UFIXPOINT_PIXEL *v87; // r8
  _DWORD *v88; // rdx
  unsigned int v89; // r9d
  signed __int64 v90; // r10
  int v91; // r14d
  unsigned int v92; // eax
  unsigned int v93; // eax
  _BYTE *v94; // r11
  _DWORD *v95; // rdx
  unsigned int v96; // r9d
  unsigned int v97; // ebp
  signed __int64 v98; // r10
  int v99; // r14d
  unsigned int v100; // eax
  _DWORD *v101; // rdx
  int v102; // r9d
  _BYTE *v103; // r15
  signed __int64 v104; // r8
  int v105; // ecx
  LONG v106; // [rsp+50h] [rbp-88h]
  unsigned int v107; // [rsp+50h] [rbp-88h]
  int v108; // [rsp+50h] [rbp-88h]
  int v109; // [rsp+58h] [rbp-80h]
  int v110; // [rsp+5Ch] [rbp-7Ch]
  int v111; // [rsp+5Ch] [rbp-7Ch]
  LONG v112; // [rsp+60h] [rbp-78h]
  int v113; // [rsp+60h] [rbp-78h]
  int v114; // [rsp+64h] [rbp-74h]
  struct tagRECT v115; // [rsp+68h] [rbp-70h]
  unsigned __int8 *v116; // [rsp+68h] [rbp-70h]
  int v117; // [rsp+78h] [rbp-60h]
  int v118; // [rsp+7Ch] [rbp-5Ch]
  int v119; // [rsp+7Ch] [rbp-5Ch]
  unsigned int v120; // [rsp+80h] [rbp-58h]
  int v121; // [rsp+84h] [rbp-54h]
  unsigned __int8 *v122; // [rsp+88h] [rbp-50h]
  unsigned __int8 *v123; // [rsp+88h] [rbp-50h]
  int v124; // [rsp+88h] [rbp-50h]
  unsigned __int8 *v125; // [rsp+90h] [rbp-48h]
  struct _UFIXPOINT_PIXEL *v126; // [rsp+98h] [rbp-40h]
  struct _UFIXPOINT_PIXEL *v127; // [rsp+98h] [rbp-40h]
  __int64 v128; // [rsp+A0h] [rbp-38h]
  int v129; // [rsp+A8h] [rbp-30h]
  int v131; // [rsp+120h] [rbp+48h]

  v10 = a2;
  v11 = a4;
  v12 = a3;
  left = a9->left;
  right = a9->right;
  if ( a9->left == right
    || (top = a9->top, bottom = a9->bottom, top == bottom)
    || (v17 = a8->right, v112 = a8->left, a8->left == v17)
    || (v18 = a8->bottom, v106 = a8->top, v106 == v18) )
  {
    DxgkpConvertRects(a2, a3, a5, a8, 1u, a9, a10);
    return 0LL;
  }
  switch ( a5 )
  {
    case D3DKMDT_VPPR_IDENTITY:
      break;
    case D3DKMDT_VPPR_ROTATE90:
      v115.left = a9->top;
      v22 = v115.left;
      v21 = a2 - right;
      v20 = a4;
      a4 = -4;
      right = a2 - left;
      v10 = v12;
      v12 = a2;
      v37 = a2 - 1;
      v38 = a1;
      goto LABEL_20;
    case D3DKMDT_VPPR_ROTATE180:
      v22 = a2 - right;
      v115.left = a2 - right;
      v21 = v12 - bottom;
      right = v12 - top;
      bottom = a2 - left;
      a4 = -a4;
      v20 = -4;
      v37 = a2 - 1;
      v38 = &a1[v11 * (v12 - 1)];
LABEL_20:
      v117 = a4;
      v19 = &v38[4 * v37];
      v115.bottom = right;
      *(_QWORD *)&v115.top = __PAIR64__(bottom, v21);
      goto LABEL_7;
    case D3DKMDT_VPPR_ROTATE270:
      v115.top = a9->left;
      v10 = a3;
      v115.bottom = a9->right;
      a4 = 4;
      v22 = a3 - bottom;
      v117 = 4;
      v115.left = v12 - bottom;
      bottom = v12 - top;
      v12 = a2;
      v115.right = bottom;
      v20 = -v11;
      v21 = a9->left;
      v19 = &a1[v11 * (v10 - 1)];
      goto LABEL_7;
  }
  v117 = a4;
  v19 = a1;
  v20 = 4;
  v115 = *a9;
  right = HIDWORD(*(unsigned __int128 *)a9);
  bottom = *(_QWORD *)&a9->right;
  v21 = HIDWORD(*(_QWORD *)&a9->left);
  v22 = (LONG)*a9;
LABEL_7:
  v23 = v17 - v112;
  v24 = v23 * bottom;
  v121 = v18 - v106;
  v122 = v19;
  v131 = v20;
  v25 = v23 * v22 / v10;
  v109 = (v10 * v25 + v23 - 1) / v23;
  v26 = (v24 - 1 - (v24 - 1) % v10 + v10) / v23;
  v27 = v26;
  v114 = v26;
  v118 = v25 + v112;
  a10->left = v25 + v112;
  v28 = HIDWORD(*(_QWORD *)&v115.left);
  v110 = (v18 - v106) * v115.top / v12;
  a10->top = v106 + v110;
  v29 = (v10 + v24 - 1) / v10 + v112;
  *(_QWORD *)&v115.left = HIDWORD(*(_QWORD *)&v115.right);
  a10->right = v29;
  v129 = (v18 - v106) * v115.bottom;
  a10->bottom = v106 + (v12 + v129 - 1) / v12;
  v30 = &a6[4 * v118 + a7 * (v106 + v110)];
  v31 = v23;
  v125 = v30;
  if ( a5 == D3DKMDT_VPPR_IDENTITY && v23 == v10 )
  {
    if ( v121 == v12 )
    {
      v32 = &v19[a4 * (int)v28 + v109 * v20];
      if ( (int)v28 < v115.left )
      {
        v33 = (unsigned int)(4 * (v26 - v109));
        v34 = (unsigned int)(right - v28);
        v35 = a4;
        do
        {
          memmove(v30, v32, v33);
          v30 += a7;
          v32 += v35;
          --v34;
        }
        while ( v34 );
      }
      return 0LL;
    }
  }
  else if ( v121 == v12 )
  {
    v39 = &v19[a4 * v21];
    if ( v21 < right )
    {
      v40 = (unsigned int)(right - v21);
      v126 = (struct _UFIXPOINT_PIXEL *)a4;
      do
      {
        DxgkpGetBilinearLineFromSource(v39, v20, v10, (struct _PIXEL *)v30, 0LL, v31, v109, v27);
        v39 = &v39[(_QWORD)v126];
        v30 += a7;
        v20 = v131;
        v31 = v23;
        --v40;
      }
      while ( v40 );
    }
    return 0LL;
  }
  v41 = v29 - v118;
  v42 = 16LL * (2 * v41 + 2);
  if ( !is_mul_ok(2 * v41 + 2, 0x10uLL) )
    v42 = -1LL;
  v43 = operator new[](v42, 0x4B677844u, 256LL);
  v44 = 0;
  v127 = (struct _UFIXPOINT_PIXEL *)v43;
  if ( v43 )
  {
    v45 = a10->right - a10->left;
    v46 = v122;
    v128 = v43;
    v47 = (struct _UFIXPOINT_PIXEL *)(v43 + 16LL * (v45 + 1));
    *(_OWORD *)(v43 + 16LL * v45) = 0LL;
    *((_OWORD *)v47 + a10->right - a10->left) = 0LL;
    v48 = &v122[v117 * v21];
    v123 = v48;
    if ( v121 > v12 )
    {
      v49 = v21 * v121 % v12;
      if ( v49 )
      {
        DxgkpGetBilinearLineFromSource(&v48[-v117], v131, v10, 0LL, v47, v23, v109, v114);
        v48 = v123;
      }
      DxgkpGetBilinearLineFromSource(v48, v131, v10, 0LL, v127, v23, v109, v114);
      if ( v21 < right )
      {
        v50 = (struct _UFIXPOINT_PIXEL *)v128;
        while ( 1 )
        {
          if ( v49 && v49 < v12 )
          {
            v51 = (unsigned __int16)((v49 << 16) / (unsigned int)v12);
            if ( a10->right - a10->left > 0 )
            {
              v52 = (unsigned int *)((char *)v47 + 12);
              v53 = 0;
              v54 = (0x10000 - v51) >> 8;
              v107 = v51 >> 8;
              v55 = v50 - v47;
              v56 = v125 + 2;
              do
              {
                v57 = *(unsigned int *)((char *)v52 + v55);
                ++v53;
                v58 = *v52;
                v52 += 4;
                v56[1] = (v54 * (v57 >> 8) + 0x8000 + v107 * (v58 >> 8)) >> 16;
                *v56 = (v54 * (*(unsigned int *)((char *)v52 + v55 - 20) >> 8) + 0x8000 + v107 * (*(v52 - 5) >> 8)) >> 16;
                v56 += 4;
                *(v56 - 5) = (v54 * (*(unsigned int *)((char *)v52 + v55 - 24) >> 8) + 0x8000 + v107 * (*(v52 - 6) >> 8)) >> 16;
                *(v56 - 6) = (v54 * (*(unsigned int *)((char *)v52 + v55 - 28) >> 8) + 0x8000 + v107 * (*(v52 - 7) >> 8)) >> 16;
              }
              while ( v53 < a10->right - a10->left );
              v50 = (struct _UFIXPOINT_PIXEL *)v128;
            }
          }
          else if ( a10->right - a10->left > 0 )
          {
            v59 = v125;
            v64 = (int *)((char *)v50 + 8);
            v65 = 0;
            v66 = v125 + 2;
            do
            {
              ++v65;
              v66[1] = (unsigned int)(v64[1] + 0x8000) >> 16;
              v67 = *v64;
              v64 += 4;
              *v66 = (unsigned int)(v67 + 0x8000) >> 16;
              v66 += 4;
              *(v66 - 5) = (unsigned int)(*(v64 - 5) + 0x8000) >> 16;
              *(v66 - 6) = (unsigned int)(*(v64 - 6) + 0x8000) >> 16;
            }
            while ( v65 < a10->right - a10->left );
            v50 = (struct _UFIXPOINT_PIXEL *)v128;
            goto LABEL_42;
          }
          v59 = v125;
LABEL_42:
          v60 = &v59[a7];
          v61 = v49 - v12 + v121;
          v125 = v60;
          v62 = v49 < v12;
          v49 -= v12;
          if ( v62 )
            v49 = v61;
          if ( v49 < v12 )
          {
            v63 = v47;
            ++v21;
            v128 = (__int64)v47;
            v47 = v50;
            if ( v21 < right || v49 )
            {
              v123 += v117;
              DxgkpGetBilinearLineFromSource(v123, v131, v10, 0LL, v63, v23, v109, v114);
              v60 = v125;
              v50 = (struct _UFIXPOINT_PIXEL *)v128;
            }
            else
            {
              v50 = v63;
            }
          }
          if ( v21 >= right )
            goto LABEL_56;
        }
      }
      v60 = &a6[4 * v118 + a7 * (v106 + v110)];
LABEL_56:
      if ( v49 )
      {
        v68 = (unsigned __int16)((v49 << 16) / v12);
        if ( a10->right - a10->left > 0 )
        {
          v69 = v60 + 2;
          v70 = (unsigned int *)((char *)v47 + 12);
          v71 = (0x10000 - v68) >> 8;
          v72 = v68 >> 8;
          v73 = v128 - (_QWORD)v47;
          do
          {
            v74 = *(unsigned int *)((char *)v70 + v73);
            ++v44;
            v75 = *v70;
            v70 += 4;
            v69[1] = (v71 * (v74 >> 8) + 0x8000 + v72 * (v75 >> 8)) >> 16;
            *v69 = (v71 * (*(unsigned int *)((char *)v70 + v73 - 20) >> 8) + 0x8000 + v72 * (*(v70 - 5) >> 8)) >> 16;
            v69 += 4;
            *(v69 - 5) = (v71 * (*(unsigned int *)((char *)v70 + v73 - 24) >> 8) + 0x8000 + v72 * (*(v70 - 6) >> 8)) >> 16;
            *(v69 - 6) = (v71 * (*(unsigned int *)((char *)v70 + v73 - 28) >> 8) + 0x8000 + v72 * (*(v70 - 7) >> 8)) >> 16;
          }
          while ( v44 < a10->right - a10->left );
        }
      }
      goto LABEL_87;
    }
    v124 = v121 << 16;
    v120 = (unsigned __int16)((v121 << 16) / v12);
    v113 = (v121 + v12 * v110 - 1) / v121;
    v116 = &v46[v113 * v117];
    v119 = (v12 + v129 - 1 - (v129 - 1) % v12) / v121;
    v111 = v121 * v113 % v12;
    v108 = v111 << 16;
    if ( v111 <= 0 )
    {
      memset(v47, 0, 16LL * (a10->right - a10->left));
      v76 = v114;
      v108 = v111 << 16;
      v77 = v131;
    }
    else
    {
      v76 = v114;
      v77 = v131;
      DxgkpGetBilinearLineFromSource(&v46[v113 * v117 - v117], v131, v10, 0LL, v47, v23, v109, v114);
      v78 = 0;
      if ( a10->right - a10->left > 0 )
      {
        v79 = (unsigned __int16)(v108 / v12) >> 8;
        v80 = (_DWORD *)((char *)v47 + 8);
        do
        {
          ++v78;
          v80[1] = v79 * (v80[1] >> 8);
          *v80 = v79 * (*v80 >> 8);
          v81 = *(v80 - 1);
          v80 += 4;
          *(v80 - 5) = v79 * (v81 >> 8);
          *(v80 - 6) = v79 * (*(v80 - 6) >> 8);
        }
        while ( v78 < a10->right - a10->left );
      }
    }
    DxgkpGetBilinearLineFromSource(v116, v77, v10, 0LL, v127, v23, v109, v76);
    v82 = v113;
    if ( v113 >= v119 )
    {
LABEL_83:
      if ( v111 && a10->right - a10->left > 0 )
      {
        v101 = (_DWORD *)((char *)v47 + 12);
        v102 = (unsigned __int16)(((v12 - v111) << 16) / v12) >> 8;
        v103 = v30 + 2;
        v104 = v127 - v47;
        do
        {
          ++v44;
          v105 = *v101 + v102 * (*(_DWORD *)((char *)v101 + v104) >> 8) + 0x8000;
          v101 += 4;
          v103[1] = BYTE2(v105);
          *v103 = (unsigned int)(*(v101 - 5) + v102 * (*(_DWORD *)((char *)v101 + v104 - 20) >> 8) + 0x8000) >> 16;
          v103 += 4;
          *(v103 - 5) = (unsigned int)(*(v101 - 6) + v102 * (*(_DWORD *)((char *)v101 + v104 - 24) >> 8) + 0x8000) >> 16;
          *(v103 - 6) = (unsigned int)(*(v101 - 7) + v102 * (*(_DWORD *)((char *)v101 + v104 - 28) >> 8) + 0x8000) >> 16;
        }
        while ( v44 < a10->right - a10->left );
      }
LABEL_87:
      operator delete(v127);
      return 0LL;
    }
    v83 = v12 << 16;
    while ( 1 )
    {
      v84 = v121 + v111;
      v85 = v124 + v108;
      v86 = a10->right - a10->left;
      v111 = v84;
      v108 += v124;
      if ( v84 >= v12 )
        break;
      v62 = v86 <= 0;
      v87 = v127;
      if ( !v62 )
      {
        v88 = (_DWORD *)((char *)v47 + 12);
        v89 = v120 >> 8;
        v90 = v127 - v47;
        v91 = 0;
        do
        {
          ++v91;
          *v88 += v89 * (*(_DWORD *)((char *)v88 + v90) >> 8);
          v92 = *(_DWORD *)((char *)v88 + v90 - 4);
          v88 += 4;
          *(v88 - 5) += v89 * (v92 >> 8);
          *(v88 - 6) += v89 * (*(_DWORD *)((char *)v88 + v90 - 24) >> 8);
          *(v88 - 7) += v89 * (*(_DWORD *)((char *)v88 + v90 - 28) >> 8);
        }
        while ( v91 < a10->right - a10->left );
        v76 = v114;
LABEL_79:
        v84 = v111;
      }
      v113 = v82 + 1;
      if ( v82 + 1 < v119 || v84 )
      {
        v116 += v117;
        DxgkpGetBilinearLineFromSource(v116, v77, v10, 0LL, v87, v23, v109, v76);
        v82 = v113;
        v83 = v12 << 16;
        if ( v113 < v119 )
          continue;
      }
      goto LABEL_83;
    }
    v111 = v84 - v12;
    v108 = v85 - v83;
    v62 = v86 <= 0;
    v87 = v127;
    v93 = (unsigned __int16)((v85 - v83) / v12);
    if ( !v62 )
    {
      v94 = v30 + 2;
      v95 = (_DWORD *)((char *)v47 + 12);
      v96 = (v120 - v93) >> 8;
      v97 = v93 >> 8;
      v98 = v127 - v47;
      v99 = 0;
      do
      {
        ++v99;
        v94[1] = (*v95 + v96 * (*(_DWORD *)((char *)v95 + v98) >> 8) + 0x8000) >> 16;
        *v94 = (*(v95 - 1) + 0x8000 + v96 * (*(_DWORD *)((char *)v95 + v98 - 4) >> 8)) >> 16;
        v94 += 4;
        *(v94 - 5) = (*(v95 - 2) + 0x8000 + v96 * (*(_DWORD *)((char *)v95 + v98 - 8) >> 8)) >> 16;
        *(v94 - 6) = (*(v95 - 3) + 0x8000 + v96 * (*(_DWORD *)((char *)v95 + v98 - 12) >> 8)) >> 16;
        *v95 = v97 * (*(_DWORD *)((char *)v95 + v98) >> 8);
        v100 = *(_DWORD *)((char *)v95 + v98 - 4);
        v95 += 4;
        *(v95 - 5) = v97 * (v100 >> 8);
        *(v95 - 6) = v97 * (*(_DWORD *)((char *)v95 + v98 - 24) >> 8);
        *(v95 - 7) = v97 * (*(_DWORD *)((char *)v95 + v98 - 28) >> 8);
      }
      while ( v99 < a10->right - a10->left );
      v77 = v131;
      v76 = v114;
      v82 = v113;
    }
    v30 += a7;
    goto LABEL_79;
  }
  WdLogSingleEntry1(6LL, -1073741670LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate line buffer for DxgkpBlitA8R8R8G8, returning 0x%I64x!",
    -1073741670LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225626LL;
}
