/*
 * XREFs of ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0087124
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C001ACB0 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     EngBitBlt @ 0x1C0088BA0 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00032F8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C00877C0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1C008AE00 (EngCopyBits.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D4254 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0124ED4 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall BltLnk(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct SURFACE *a3,
        struct ECLIPOBJ *a4,
        struct XLATE *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _RECTL *v12; // r12
  struct SURFACE *v15; // r10
  struct _BRUSHOBJ *v16; // rbx
  unsigned __int64 v17; // rcx
  struct _RECTL v18; // xmm0
  int v19; // edx
  char v20; // r15
  char v21; // r14
  char v22; // di
  char v23; // si
  int v24; // r11d
  int v25; // edx
  LONG x; // r9d
  LONG y; // ecx
  int v28; // eax
  int v29; // r8d
  PVOID v30; // rdi
  struct _POINTL *v31; // rdx
  XCLIPOBJ *v32; // r10
  struct _RECTL v33; // xmm0
  int v34; // esi
  unsigned int v35; // r15d
  LONG left; // eax
  struct _RECTL *v37; // rbx
  LONG v38; // ecx
  LONG right; // edi
  LONG v40; // edx
  LONG v41; // eax
  LONG v42; // r8d
  LONG v43; // eax
  LONG bottom; // eax
  LONG v45; // edx
  LONG v46; // r14d
  unsigned int v48; // ecx
  int v49; // r10d
  int v50; // r8d
  int v51; // r9d
  int v52; // eax
  struct Gre::Base::SESSION_GLOBALS *v53; // rax
  struct _BRUSHOBJ *EngRbrush; // rax
  LONG top; // r8d
  int v56; // eax
  int v57; // ecx
  POINTL v58; // rdi
  LONG v59; // eax
  struct Gre::Base::SESSION_GLOBALS *v60; // rax
  ULONG iSolidColor; // ecx
  int v62; // ecx
  int v63; // edx
  int v64; // edx
  int v65; // edx
  int v66; // edx
  int v67; // r9d
  int v68; // ecx
  unsigned int v69; // r10d
  signed int v70; // r8d
  int flColorType; // ebx
  unsigned __int8 v72; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v73; // [rsp+61h] [rbp-9Fh]
  unsigned int v74; // [rsp+64h] [rbp-9Ch]
  int v75; // [rsp+64h] [rbp-9Ch]
  int v76; // [rsp+68h] [rbp-98h]
  int v77; // [rsp+74h] [rbp-8Ch]
  unsigned int v78; // [rsp+74h] [rbp-8Ch]
  BOOL v80; // [rsp+80h] [rbp-80h]
  POINTL pptlSrc; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL *v82; // [rsp+90h] [rbp-70h]
  __int64 v83; // [rsp+98h] [rbp-68h] BYREF
  char v84; // [rsp+A0h] [rbp-60h]
  int v85; // [rsp+A4h] [rbp-5Ch]
  BOOL v86; // [rsp+A8h] [rbp-58h]
  BOOL v87; // [rsp+ACh] [rbp-54h]
  BOOL v88; // [rsp+B0h] [rbp-50h]
  BOOL v89; // [rsp+B4h] [rbp-4Ch]
  BOOL v90; // [rsp+B8h] [rbp-48h]
  BOOL v91; // [rsp+BCh] [rbp-44h]
  XCLIPOBJ *v92; // [rsp+C0h] [rbp-40h]
  POINTL *v93; // [rsp+C8h] [rbp-38h]
  struct _POINTL *v94; // [rsp+D0h] [rbp-30h]
  struct _BRUSHOBJ *v95; // [rsp+D8h] [rbp-28h]
  int v96; // [rsp+E0h] [rbp-20h] BYREF
  LONG v97; // [rsp+E4h] [rbp-1Ch]
  LONG v98; // [rsp+E8h] [rbp-18h]
  int v99; // [rsp+ECh] [rbp-14h]
  __int64 v100; // [rsp+F0h] [rbp-10h]
  __int64 v101; // [rsp+F8h] [rbp-8h]
  struct _RECTL *v102; // [rsp+100h] [rbp+0h]
  struct _RECTL v103; // [rsp+110h] [rbp+10h] BYREF
  struct SURFACE *v104; // [rsp+120h] [rbp+20h]
  struct SURFACE *v105; // [rsp+128h] [rbp+28h]
  struct SURFACE *v106; // [rsp+130h] [rbp+30h]
  struct ECLIPOBJ *v107; // [rsp+138h] [rbp+38h]
  struct XLATE *v108; // [rsp+140h] [rbp+40h]
  struct _BRUSHOBJ *v109; // [rsp+148h] [rbp+48h]
  __int64 v110; // [rsp+150h] [rbp+50h]
  __int64 v111; // [rsp+158h] [rbp+58h]
  PVOID v112; // [rsp+160h] [rbp+60h]
  PVOID pvRbrush; // [rsp+168h] [rbp+68h]
  unsigned int v114; // [rsp+170h] [rbp+70h]
  int v115; // [rsp+174h] [rbp+74h]
  int v116; // [rsp+178h] [rbp+78h]
  int v117; // [rsp+17Ch] [rbp+7Ch]
  int v118; // [rsp+180h] [rbp+80h]
  int v119; // [rsp+184h] [rbp+84h]
  int v120; // [rsp+188h] [rbp+88h]
  int v121; // [rsp+18Ch] [rbp+8Ch]
  int v122; // [rsp+190h] [rbp+90h]
  int v123; // [rsp+194h] [rbp+94h]
  int v124; // [rsp+198h] [rbp+98h]
  unsigned __int64 v125; // [rsp+19Ch] [rbp+9Ch]
  int v126; // [rsp+1A4h] [rbp+A4h]
  int v127; // [rsp+1A8h] [rbp+A8h]
  ULONG v128; // [rsp+1ACh] [rbp+ACh]
  LONG v129; // [rsp+1B0h] [rbp+B0h]
  LONG v130; // [rsp+1B4h] [rbp+B4h]
  unsigned int v131; // [rsp+1B8h] [rbp+B8h]
  int v132; // [rsp+1BCh] [rbp+BCh]
  int v133; // [rsp+1C0h] [rbp+C0h]
  int v134; // [rsp+1C4h] [rbp+C4h]
  unsigned int v135; // [rsp+1DCh] [rbp+DCh]
  int v136; // [rsp+1E0h] [rbp+E0h]
  BOOL v137; // [rsp+1E4h] [rbp+E4h]
  BOOL v138; // [rsp+1E8h] [rbp+E8h]
  BOOL v139; // [rsp+1ECh] [rbp+ECh]
  BOOL v140; // [rsp+1F0h] [rbp+F0h]
  char v141; // [rsp+1F4h] [rbp+F4h]
  char v142; // [rsp+1F5h] [rbp+F5h]
  RECTL prclDest; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v144; // [rsp+210h] [rbp+110h] BYREF
  _OWORD v145[20]; // [rsp+214h] [rbp+114h] BYREF

  v12 = a6;
  v94 = a8;
  v93 = a7;
  v82 = a10;
  pptlSrc = (POINTL)a2;
  v92 = a4;
  v102 = a6;
  v95 = a9;
  v76 = 0;
  memset_0(&v103, 0, 0xE8uLL);
  memset_0(&v144, 0, 0x144uLL);
  v15 = a1;
  v16 = 0LL;
  v83 = 0LL;
  v84 = 0;
  v85 = 0;
  v17 = (unsigned int)(*((_DWORD *)a1 + 24) - 1);
  if ( *((_DWORD *)a1 + 24) == 1 )
  {
    v76 = 1986;
  }
  else
  {
    v17 = (unsigned int)(*((_DWORD *)a1 + 24) - 2);
    if ( *((_DWORD *)a1 + 24) == 2 )
    {
      v76 = 498;
    }
    else
    {
      v17 = (unsigned int)(*((_DWORD *)a1 + 24) - 3);
      if ( *((_DWORD *)a1 + 24) == 3 )
      {
        v76 = 250;
      }
      else
      {
        v17 = (unsigned int)(*((_DWORD *)a1 + 24) - 4);
        if ( *((_DWORD *)a1 + 24) == 4 )
        {
          v76 = 126;
        }
        else
        {
          v17 = (unsigned int)(*((_DWORD *)a1 + 24) - 5);
          if ( *((_DWORD *)a1 + 24) == 5 )
          {
            v76 = 83;
          }
          else if ( *((_DWORD *)a1 + 24) == 6 )
          {
            v76 = 64;
          }
        }
      }
    }
  }
  if ( a5 )
  {
    v108 = a5;
  }
  else
  {
    v53 = Gre::Base::Globals((Gre::Base *)v17);
    v15 = a1;
    v108 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v53 + 6896);
  }
  v18 = *a6;
  v105 = a2;
  v107 = a4;
  v104 = v15;
  v109 = v95;
  v74 = a11 >> 8;
  v72 = a11 & 0xA5 | (8 * (a11 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v73 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v103 = v18;
  v88 = (a11 & 0xF) != (unsigned __int8)a11 >> 4;
  v91 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  if ( (a11 & 0xF) != (unsigned __int8)a11 >> 4 || (v19 = 0, (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4) )
    v19 = 1;
  v77 = v19;
  v20 = (unsigned __int8)(a11 & 0xC3 | (4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC) >> 4;
  v21 = a11 & 3 | (4 * (a11 & 0xC)) & 0xF | ((unsigned __int8)a11 >> 2) & 0xC;
  v22 = BYTE1(a11) & 3 | (4 * (BYTE1(a11) & 0xC)) & 0xF | (BYTE1(a11) >> 2) & 0xC;
  v86 = v21 != v20;
  v23 = (unsigned __int8)(BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC) >> 4;
  v89 = v22 != v23;
  v80 = v21 != v20 || v22 != v23;
  v87 = (v72 & 0xF) != v72 >> 4;
  v90 = (v73 & 0xF) != v73 >> 4;
  if ( v19 || (unsigned __int8)a11 != a11 >> 8 && !a3 )
  {
    if ( v95 && v95->iSolidColor == -1 )
    {
      EngRbrush = (struct _BRUSHOBJ *)pvGetEngRbrush(v95);
      v15 = a1;
      v16 = EngRbrush;
    }
    else
    {
      v16 = v95;
    }
  }
  v24 = 1;
  v116 = 1;
  v115 = 1;
  v114 = 4;
  if ( v80 )
  {
    v25 = *(_DWORD *)(*(_QWORD *)&pptlSrc + 88LL);
    v110 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 80LL);
    v117 = v25;
    x = v93->x;
    y = v93->y;
    v125 = __PAIR64__(y, v93->x);
    if ( v110 == *((_QWORD *)v15 + 10) )
    {
      top = a6->top;
      if ( y >= top )
      {
        v56 = 1;
        v115 = 1;
        if ( y == top )
        {
          if ( x < a6->left )
            v56 = -1;
          v115 = v56;
        }
      }
      else
      {
        v24 = -1;
        v116 = -1;
        v114 = 2;
        v56 = 1;
        v115 = 1;
      }
      if ( (unsigned __int8)a11 != v74 && v21 != v20 && v22 != v23
        || (v56 == -1 || v24 == -1) && a6->right - a6->left > v76 )
      {
        v57 = a6->right - a6->left;
        v58 = pptlSrc;
        v96 = *(_DWORD *)(*(_QWORD *)&pptlSrc + 96LL);
        v59 = a6->bottom - top;
        v97 = v57;
        v98 = v59;
        v99 = 0;
        v101 = 1LL;
        v100 = 0LL;
        SURFMEM::bCreateDIB((SURFMEM *)&v83, (struct _DEVBITMAPINFO *)&v96, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v83 )
          goto LABEL_103;
        *(_QWORD *)&prclDest.left = 0LL;
        pptlSrc = *v93;
        prclDest.right = v97;
        prclDest.bottom = v98;
        v60 = Gre::Base::Globals((Gre::Base *)v93);
        if ( !EngCopyBits(
                (SURFOBJ *)((v83 + 24) & -(__int64)(v83 != 0)),
                (SURFOBJ *)(*(_QWORD *)&v58 + 24LL),
                0LL,
                (XLATEOBJ *)((char *)v60 + 6896),
                &prclDest,
                &pptlSrc) )
          goto LABEL_103;
        v24 = v116;
        v15 = a1;
        v110 = *(_QWORD *)(v83 + 80);
        v25 = *(_DWORD *)(v83 + 88);
        v117 = v25;
        v125 = 0LL;
      }
      if ( v24 != 1 )
        v25 = -v25;
    }
    v121 = v25;
  }
  else
  {
    v110 = 0LL;
  }
  v111 = *((_QWORD *)v15 + 10);
  v28 = *((_DWORD *)v15 + 22);
  v118 = v28;
  if ( v24 != 1 )
    v28 = -v28;
  v29 = (unsigned __int8)a11;
  v122 = v28;
  if ( (unsigned __int8)a11 == v74 || !a3 )
  {
    v106 = 0LL;
    v30 = 0LL;
    v112 = 0LL;
  }
  else
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !v94 )
      goto LABEL_103;
    v48 = *((_DWORD *)a3 + 14);
    v49 = v94->x;
    v30 = (PVOID)*((_QWORD *)a3 + 10);
    v50 = *((_DWORD *)a3 + 15);
    v51 = v94->y;
    v112 = v30;
    v106 = a3;
    v131 = v48;
    v132 = v50;
    v133 = v49;
    v134 = v51;
    if ( v49 >= (int)v48 )
    {
      v133 = v49 % v48;
    }
    else if ( v49 < 0 )
    {
      v133 = v48 - (-1 - v49) % v48 - 1;
    }
    if ( v51 >= v50 )
    {
      v134 = v51 % v50;
    }
    else if ( v51 < 0 )
    {
      v134 = v50 - ~v51 % v50 - 1;
    }
    v24 = v116;
    v52 = *((_DWORD *)a3 + 22);
    v15 = a1;
    v29 = (unsigned __int8)a11;
    v120 = v52;
    if ( v116 != 1 )
      v52 = -v52;
    v124 = v52;
  }
  if ( !v77 )
  {
    pvRbrush = 0LL;
LABEL_25:
    v31 = v82;
    goto LABEL_26;
  }
  if ( !v95 )
    goto LABEL_103;
  iSolidColor = v95->iSolidColor;
  if ( v95->iSolidColor != -1 )
  {
    v63 = *((_DWORD *)v15 + 24);
    pvRbrush = 0LL;
    v64 = v63 - 1;
    if ( !v64 )
    {
      if ( iSolidColor )
        iSolidColor = -1;
      goto LABEL_123;
    }
    v65 = v64 - 1;
    if ( v65 )
    {
      v66 = v65 - 1;
      if ( v66 )
      {
        if ( v66 != 1 )
        {
LABEL_123:
          v126 = iSolidColor;
          goto LABEL_25;
        }
LABEL_120:
        iSolidColor |= iSolidColor << 16;
        goto LABEL_123;
      }
    }
    else
    {
      iSolidColor |= 16 * iSolidColor;
    }
    iSolidColor |= iSolidColor << 8;
    goto LABEL_120;
  }
  if ( !v16 )
    goto LABEL_103;
  v126 = -1;
  if ( !v16[1].pvRbrush )
    goto LABEL_25;
  v62 = *(&v16[1].iSolidColor + 1);
  v31 = v82;
  v119 = v62;
  pvRbrush = v16[1].pvRbrush;
  v127 = *(&v16->flColorType + 1);
  v128 = v16[1].iSolidColor;
  v129 = v82->x;
  v130 = v82->y;
  if ( v24 != 1 )
    v62 = -v62;
  v123 = v62;
LABEL_26:
  if ( v29 != v74 && !v30 )
  {
    if ( v16 && v16[2].pvRbrush )
    {
      v30 = v16[2].pvRbrush;
      v67 = a6->left - v31->x;
      v68 = a6->top - v31->y;
      v112 = v30;
      v69 = *(&v16[1].flColorType + 1);
      v131 = v69;
      v70 = v16[2].iSolidColor;
      v132 = v70;
      flColorType = v16[2].flColorType;
      v120 = flColorType;
      v133 = v67;
      v134 = v68;
      if ( v67 < (int)v69 )
      {
        if ( v67 < 0 )
          v133 = v69 - ~v67 % v69 - 1;
      }
      else
      {
        v133 = v67 % v69;
      }
      if ( v68 < v70 )
      {
        if ( v68 < 0 )
          v134 = v70 - ~v68 % v70 - 1;
      }
      else
      {
        v134 = v68 % v70;
      }
      if ( v24 != 1 )
        flColorType = -flColorType;
      v124 = flColorType;
    }
    if ( !v30 )
      goto LABEL_103;
  }
  v32 = v92;
  if ( v92 && *((_BYTE *)v92 + 20) )
  {
    if ( *((_BYTE *)v92 + 20) == 1 )
    {
      v33 = *(struct _RECTL *)((char *)v92 + 4);
      goto LABEL_30;
    }
    if ( *((_BYTE *)v92 + 20) == 3 )
    {
      v75 = 1;
      v34 = 1;
      XCLIPOBJ::cEnumStart(v92, 0, 0, v114, 0x14u);
      v32 = v92;
      goto LABEL_31;
    }
LABEL_103:
    SURFMEM::~SURFMEM((SURFMEM *)&v83);
    return 0LL;
  }
  v33 = *a6;
LABEL_30:
  v34 = 0;
  v75 = 0;
  v144 = 1;
  v145[0] = v33;
LABEL_31:
  if ( v34 )
    goto LABEL_143;
  while ( 1 )
  {
    v35 = 0;
    v78 = 0;
    if ( v144 )
    {
      do
      {
        left = v12->left;
        v37 = (struct _RECTL *)&v145[v35];
        v38 = v37->left;
        if ( v37->left < v12->left )
        {
          v37->left = left;
          v38 = left;
        }
        right = v37->right;
        v40 = right;
        v41 = v12->right;
        if ( right > v41 )
        {
          v37->right = v41;
          right = v41;
          v40 = v41;
        }
        v42 = v37->top;
        v43 = v12->top;
        if ( v42 < v43 )
        {
          v37->top = v43;
          right = v40;
          v42 = v43;
        }
        bottom = v37->bottom;
        v45 = v12->bottom;
        if ( bottom > v45 )
        {
          v37->bottom = v45;
          bottom = v45;
        }
        if ( v42 < bottom && right - v38 > 0 )
        {
          do
          {
            v46 = right;
            if ( right - v38 > v76 )
            {
              v46 = v38 + v76;
              v37->right = v38 + v76;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              v141 = a11;
              v136 = v72;
              v137 = v86;
              v138 = v87;
              v139 = v88;
              v140 = (unsigned __int8)a11 != a11 >> 8;
              v135 = a11 & 0xC3 | (unsigned __int8)((4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC);
              v142 = 0;
              BltLnkRect((struct _BLTLNKINFO *)&v103, v37);
            }
            if ( (unsigned __int8)a11 != a11 >> 8 && BYTE1(a11) != 0xAA )
            {
              v135 = BYTE1(a11) & 0xC3 | (unsigned __int8)((4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC);
              v136 = v73;
              v137 = v89;
              v138 = v90;
              v139 = v91;
              v140 = (unsigned __int8)a11 != a11 >> 8;
              v141 = BYTE1(a11);
              v142 = -1;
              BltLnkRect((struct _BLTLNKINFO *)&v103, v37);
            }
            v37->left = v46;
            v37->right = right;
            v38 = v46;
          }
          while ( right - v46 > 0 );
          v35 = v78;
          v12 = v102;
        }
        v78 = ++v35;
      }
      while ( v35 < v144 );
      v34 = v75;
    }
    v32 = v92;
    if ( !v34 )
      break;
LABEL_143:
    v34 = XCLIPOBJ::bEnum(v32, 0x144u, (char *)&v144, 0LL);
    v75 = v34;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v83);
  return 1LL;
}
