/*
 * XREFs of ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C00B50F8
 * Callers:
 *     EngAlphaBlend @ 0x1C00B4820 (EngAlphaBlend.c)
 *     EngTransparentBlt @ 0x1C00F1E60 (EngTransparentBlt.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00066DC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngStretchBlt @ 0x1C004DC80 (EngStretchBlt.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C012F6AC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C012F6D8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

struct SURFACE *__fastcall psSetupTransparentSrcSurface(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct _RECTL *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        SURFACE **a6,
        unsigned int a7,
        unsigned int a8)
{
  struct SURFACE *v10; // rsi
  LONG right; // ecx
  LONG left; // edx
  LONG v13; // r9d
  int v14; // eax
  LONG *p_top; // r8
  bool v16; // al
  LONG *v17; // r9
  LONG v18; // edx
  LONG *v19; // rdx
  LONG v20; // eax
  LONG v21; // ecx
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // r12d
  LONG v25; // eax
  LONG v26; // r8d
  LONG v27; // ecx
  LONG v28; // edx
  __int64 *v30; // rax
  LONG v31; // r8d
  LONG v32; // edi
  LONG v33; // r12d
  LONG v34; // r10d
  int v35; // r8d
  int v36; // r10d
  int DIB; // r12d
  RECTL *prclSrc; // r13
  LONG v39; // edi
  CLIPOBJ *p_pco; // r12
  int v41; // ecx
  int v42; // edx
  int v43; // edi
  LONG v44; // edx
  LONG v45; // ecx
  __int64 v46; // rdi
  __int64 *v47; // rax
  int v48; // r12d
  struct _RECTL *v49; // r13
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  unsigned __int64 v51; // rdx
  _DWORD *v52; // r8
  unsigned __int64 v53; // rdx
  SURFACE *v54; // rdi
  size_t v55; // r8
  _DWORD *v56; // rdx
  unsigned int j; // ecx
  _BYTE *v58; // r8
  _BYTE *v59; // r9
  _BYTE *v60; // rdx
  __int64 v61; // rcx
  _BYTE *v62; // rdx
  _WORD *v63; // rdx
  unsigned int i; // ecx
  unsigned int v65; // edx
  void *v66; // rcx
  SURFACE *v67; // rdi
  struct SURFACE *v68; // rcx
  XLATEOBJ *v69; // r8
  struct _RECTL *v70; // rdx
  struct Gre::Base::SESSION_GLOBALS *v71; // rax
  LONG v72; // [rsp+60h] [rbp-228h]
  LONG top; // [rsp+64h] [rbp-224h]
  struct REGION *v74; // [rsp+70h] [rbp-218h] BYREF
  int v75; // [rsp+78h] [rbp-210h]
  LONG v76; // [rsp+7Ch] [rbp-20Ch]
  int IsSourceBGRA; // [rsp+80h] [rbp-208h]
  LONG *p_bottom; // [rsp+88h] [rbp-200h] BYREF
  struct SURFACE *v79; // [rsp+90h] [rbp-1F8h]
  struct _RECTL *v80; // [rsp+98h] [rbp-1F0h]
  POINTL pptlHTOrg; // [rsp+A0h] [rbp-1E8h] BYREF
  struct SURFACE *v82; // [rsp+A8h] [rbp-1E0h]
  int v83; // [rsp+B0h] [rbp-1D8h] BYREF
  LONG v84; // [rsp+B4h] [rbp-1D4h]
  LONG v85; // [rsp+B8h] [rbp-1D0h]
  int v86; // [rsp+BCh] [rbp-1CCh]
  __int64 v87; // [rsp+C0h] [rbp-1C8h]
  int v88; // [rsp+C8h] [rbp-1C0h]
  int v89; // [rsp+CCh] [rbp-1BCh]
  LONG bottom; // [rsp+D0h] [rbp-1B8h]
  LONG v91; // [rsp+D4h] [rbp-1B4h]
  LONG v92; // [rsp+D8h] [rbp-1B0h]
  _BYTE *v93; // [rsp+E0h] [rbp-1A8h]
  SURFACE **v94; // [rsp+E8h] [rbp-1A0h]
  struct Gre::Base::SESSION_GLOBALS *v95; // [rsp+F0h] [rbp-198h]
  XLATEOBJ *pxlo; // [rsp+F8h] [rbp-190h]
  _DWORD *v97; // [rsp+100h] [rbp-188h]
  __int64 v98; // [rsp+108h] [rbp-180h]
  LONG *p_right; // [rsp+110h] [rbp-178h]
  LONG *v100; // [rsp+118h] [rbp-170h]
  _DWORD v101[4]; // [rsp+120h] [rbp-168h] BYREF
  __int64 v102; // [rsp+130h] [rbp-158h]
  int v103; // [rsp+138h] [rbp-150h]
  int v104; // [rsp+13Ch] [rbp-14Ch]
  _DWORD *v105; // [rsp+140h] [rbp-148h]
  _DWORD *v106; // [rsp+148h] [rbp-140h]
  _BYTE *v107; // [rsp+150h] [rbp-138h]
  _WORD *v108; // [rsp+158h] [rbp-130h]
  RECTL prclDest; // [rsp+160h] [rbp-128h] BYREF
  struct _RECTL v110; // [rsp+170h] [rbp-118h] BYREF
  struct _RECTL v111; // [rsp+180h] [rbp-108h] BYREF
  RECTL v112; // [rsp+190h] [rbp-F8h] BYREF
  CLIPOBJ pco; // [rsp+1A0h] [rbp-E8h] BYREF

  v10 = a1;
  v79 = a1;
  v82 = a1;
  v80 = a3;
  pxlo = a4;
  *(_QWORD *)&prclDest.left = a5;
  pptlHTOrg = (POINTL)a5;
  v94 = a6;
  v95 = Gre::Base::Globals(a1);
  right = a3->right;
  left = a3->left;
  LODWORD(v74) = right - a3->left;
  bottom = a3->bottom;
  top = a3->top;
  p_right = &a5->right;
  v91 = a5->right;
  v13 = a5->left;
  v14 = v91 - a5->left;
  p_bottom = &a5->bottom;
  p_top = &a5->top;
  v100 = &a5->top;
  LODWORD(v97) = a5->bottom;
  v92 = a5->top;
  v16 = (_DWORD)v74 != v14 || bottom - top != (_DWORD)v97 - v92;
  IsSourceBGRA = 0;
  v75 = 0;
  if ( v10 && a2 )
  {
    if ( !v16 )
    {
      if ( v13 < 0 )
      {
        a3->left = left - v13;
        a5->left = 0;
        right = a3->right;
      }
      v17 = p_right;
      v18 = *((_DWORD *)v10 + 14);
      if ( *p_right > v18 )
      {
        a3->right = v18 + right - *p_right;
        *v17 = *((_DWORD *)v10 + 14);
      }
      if ( *p_top < 0 )
      {
        a3->top -= *p_top;
        *p_top = 0;
      }
      v19 = p_bottom;
      v20 = *((_DWORD *)v10 + 15);
      if ( *p_bottom > v20 )
      {
        a3->bottom += v20 - *p_bottom;
        *v19 = *((_DWORD *)v10 + 15);
      }
      if ( a3->left < 0 )
      {
        a5->left -= a3->left;
        a3->left = 0;
      }
      v21 = a3->right;
      v22 = *((_DWORD *)a2 + 14);
      if ( v21 > v22 )
      {
        *v17 += v22 - v21;
        a3->right = *((_DWORD *)a2 + 14);
      }
      v23 = a3->top;
      if ( v23 < 0 )
      {
        *p_top -= v23;
        a3->top = 0;
      }
      v24 = a3->bottom;
      v25 = *((_DWORD *)a2 + 15);
      if ( v24 > v25 )
      {
        *v19 += v25 - v24;
        v24 = *((_DWORD *)a2 + 15);
        a3->bottom = v24;
      }
      v26 = a3->left;
      v27 = a3->right;
      if ( a3->left >= v27 || (v28 = a3->top, v28 >= v24) )
      {
        a3->left = v27;
        return v10;
      }
      if ( !*((_WORD *)v10 + 50) )
        return v10;
      v101[3] = 0;
      v104 = 0;
      v46 = *((_QWORD *)v10 + 6);
      v47 = (__int64 *)*((_QWORD *)v10 + 16);
      LODWORD(v74) = v27 - v26;
      v48 = v24 - v28;
      v101[1] = v27 - v26;
      v101[2] = v48;
      v101[0] = *((_DWORD *)v10 + 24);
      v103 = *((_DWORD *)v10 + 28) & 0x40000;
      v102 = 0LL;
      if ( v47 )
        v102 = *v47;
      if ( SURFMEM::bCreateDIB((SURFMEM *)a6, (struct _DEVBITMAPINFO *)v101, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        *(_QWORD *)&v110.left = 0LL;
        *(_QWORD *)&v110.right = __PAIR64__(v48, (unsigned int)v74);
        SURFACE::hdev(*a6, *((HDEV *)v10 + 6));
        v49 = *(struct _RECTL **)&prclDest.left;
        LODWORD(p_bottom) = **(_DWORD **)&prclDest.left;
        HIDWORD(p_bottom) = *v100;
        if ( (*((_DWORD *)v10 + 28) & 0x400) != 0 )
          v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v46 + 2816);
        else
          v50 = EngCopyBits;
        ((void (__fastcall *)(unsigned __int64, char *, _QWORD, _QWORD, struct _RECTL *, LONG **))v50)(
          ((unsigned __int64)*a6 + 24) & -(__int64)(*a6 != 0LL),
          (char *)v10 + 24,
          0LL,
          0LL,
          &v110,
          &p_bottom);
        *v49 = v110;
        return *a6;
      }
      return 0LL;
    }
    v86 = 0;
    v89 = 0;
    v30 = (__int64 *)*((_QWORD *)v10 + 16);
    v31 = *((_DWORD *)a2 + 14);
    v32 = *((_DWORD *)a2 + 15);
    v33 = 0;
    if ( left > 0 )
      v33 = left;
    v76 = v33;
    v110.left = v33;
    v34 = 0;
    if ( top > 0 )
      v34 = top;
    v72 = v34;
    v110.top = v34;
    if ( v31 > right )
      v31 = right;
    v110.right = v31;
    if ( v32 > bottom )
      v32 = bottom;
    v110.bottom = v32;
    if ( v33 >= v31 || v34 >= v32 )
      return 0LL;
    if ( v13 < 0 || v91 > *((_DWORD *)v10 + 14) || v92 < 0 || (int)v97 > *((_DWORD *)v10 + 15) )
      v75 = 1;
    if ( !a7 )
    {
      IsSourceBGRA = bIsSourceBGRA(v10);
      v84 = v35 - v33;
      v85 = v32 - v36;
      v83 = 6;
      v88 = *((_DWORD *)v10 + 28) & 0x40000;
      v87 = **((_QWORD **)v95 + 751);
      DIB = SURFMEM::bCreateDIB((SURFMEM *)a6, (struct _DEVBITMAPINFO *)&v83, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !DIB || !v75 || IsSourceBGRA )
      {
        prclSrc = *(RECTL **)&prclDest.left;
        v39 = v72;
        goto LABEL_46;
      }
      v51 = *((unsigned int *)*a6 + 16);
      v52 = (_DWORD *)*((_QWORD *)*a6 + 9);
      v97 = v52;
      v105 = v52;
      v53 = v51 >> 2;
      v98 = v53;
      if ( !v53 )
        goto LABEL_73;
      if ( ((unsigned __int8)v52 & 4) != 0 )
      {
        *v52 = -16777216;
        v98 = --v53;
        if ( !v53 )
        {
LABEL_73:
          prclSrc = *(RECTL **)&prclDest.left;
          v39 = v72;
          goto LABEL_46;
        }
        v105 = ++v52;
      }
      memset64(v52, 0xFF000000FF000000uLL, v53 >> 1);
      if ( (v53 & 1) != 0 )
        v52[v53 - 1] = -16777216;
      goto LABEL_73;
    }
    v84 = (int)v74;
    v85 = bottom - top;
    v83 = *((_DWORD *)v10 + 24);
    v88 = *((_DWORD *)v10 + 28) & 0x40000;
    v87 = 0LL;
    if ( v30 )
      v87 = *v30;
    DIB = SURFMEM::bCreateDIB((SURFMEM *)a6, (struct _DEVBITMAPINFO *)&v83, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( DIB && v75 )
    {
      v54 = *a6;
      v55 = *((unsigned int *)*a6 + 16);
      if ( *((_DWORD *)v10 + 24) == 1 )
      {
        v66 = (void *)*((_QWORD *)v54 + 9);
        if ( a8 )
          v65 = 255;
        else
          v65 = 0;
      }
      else
      {
        if ( *((_DWORD *)v10 + 24) == 2 )
        {
          v65 = a8 | (16 * a8);
        }
        else
        {
          if ( *((_DWORD *)v10 + 24) != 3 )
          {
            switch ( *((_DWORD *)v10 + 24) )
            {
              case 4:
                v63 = (_WORD *)*((_QWORD *)v54 + 9);
                v108 = v63;
                for ( i = 0; i < (unsigned int)v55 >> 1; ++i )
                {
                  *v63++ = a8;
                  v108 = v63;
                }
                break;
              case 5:
                v58 = (_BYTE *)*((_QWORD *)v54 + 10);
                v107 = v58;
                v59 = &v58[*((_DWORD *)v54 + 15) * *((_DWORD *)v54 + 22)];
                while ( v58 != v59 )
                {
                  v60 = v58;
                  v93 = v58;
                  v61 = 3 * *((_DWORD *)v54 + 14) - 2LL;
                  while ( v60 < &v58[v61] )
                  {
                    *v60 = a8;
                    v62 = v60 + 1;
                    *v62++ = BYTE1(a8);
                    *v62 = BYTE2(a8);
                    v60 = v62 + 1;
                    v93 = v60;
                  }
                  v54 = *a6;
                  v58 += *((int *)*a6 + 22);
                  v107 = v58;
                }
                break;
              case 6:
                v56 = (_DWORD *)*((_QWORD *)v54 + 9);
                v106 = v56;
                for ( j = 0; j < (unsigned int)v55 >> 2; ++j )
                {
                  *v56++ = a8;
                  v106 = v56;
                }
                break;
            }
            goto LABEL_103;
          }
          v65 = a8;
        }
        v66 = (void *)*((_QWORD *)v54 + 9);
      }
      memset_0(v66, v65, v55);
    }
LABEL_103:
    prclSrc = *(RECTL **)&prclDest.left;
    v39 = v72;
LABEL_46:
    if ( DIB )
    {
      pptlHTOrg = 0LL;
      prclDest = *a3;
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco);
      p_pco = 0LL;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v74);
      if ( !v74 )
        goto LABEL_111;
      prclDest.left -= v76;
      v41 = prclDest.right - v76;
      prclDest.right -= v76;
      v42 = prclDest.top - v39;
      prclDest.top -= v39;
      v43 = prclDest.bottom - v72;
      prclDest.bottom -= v72;
      if ( prclDest.left < 0 || v41 > *((_DWORD *)*a6 + 14) || v42 < 0 || v43 > *((_DWORD *)*a6 + 15) )
      {
        v44 = *((_DWORD *)*a6 + 15);
        v45 = *((_DWORD *)*a6 + 14);
        *(_QWORD *)&v111.left = 0LL;
        v111.right = v45;
        v111.bottom = v44;
        RGNOBJ::vSet((RGNOBJ *)&v74, &v111);
        p_pco = &pco;
        v112 = prclDest;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v74, (struct ERECTL *)&v112, 0);
      }
      SURFACE::hdev(*a6, *((HDEV *)v10 + 6));
      if ( EngStretchBlt(
             (SURFOBJ *)(((unsigned __int64)*a6 + 24) & -(__int64)(*a6 != 0LL)),
             (SURFOBJ *)((char *)v82 + 24),
             0LL,
             p_pco,
             pxlo,
             0LL,
             &pptlHTOrg,
             &prclDest,
             prclSrc,
             0LL,
             3u) )
      {
        prclSrc->left = 0;
        *p_right = v84;
        *v100 = 0;
        *p_bottom = v85;
        *a3 = v110;
        if ( !IsSourceBGRA && !a7 )
        {
          v67 = *a6;
          v68 = (struct SURFACE *)*((_QWORD *)*a6 + 10);
          v69 = (XLATEOBJ *)((char *)v68 + *((_DWORD *)*a6 + 15) * *((_DWORD *)*a6 + 22));
          pxlo = v69;
          while ( 1 )
          {
            v79 = v68;
            if ( v68 == (struct SURFACE *)v69 )
              break;
            v70 = (struct _RECTL *)v68;
            v80 = (struct _RECTL *)v68;
            v71 = (struct SURFACE *)((char *)v68 + 4 * *((int *)v67 + 14));
            v95 = v71;
            while ( v70 != (struct _RECTL *)v71 )
            {
              v70->left ^= 0xFF000000;
              v70 = (struct _RECTL *)((char *)v70 + 4);
              v80 = v70;
            }
            v67 = *a6;
            v68 = (struct SURFACE *)((char *)v68 + *((int *)*a6 + 22));
          }
        }
        v10 = *a6;
      }
      else
      {
LABEL_111:
        v10 = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v74);
      return v10;
    }
    return 0LL;
  }
  return 0LL;
}
