/*
 * XREFs of ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0007458
 * Callers:
 *     EngBitBlt @ 0x1C0005C00 (EngBitBlt.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0006B30 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C0007C70 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0008B10 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall BltLnk(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct SURFACE *a3,
        struct ECLIPOBJ *a4,
        XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _RECTL *v12; // r12
  XLATEOBJ *v13; // rsi
  struct SURFACE *v15; // r8
  struct _BRUSHOBJ *v16; // rdi
  struct _RECTL v17; // xmm0
  unsigned int v18; // ebx
  int v19; // r9d
  char v20; // r15
  char v21; // r13
  char v22; // si
  char v23; // r14
  int v24; // r11d
  int v25; // edx
  LONG x; // r10d
  LONG y; // ecx
  int v28; // eax
  unsigned int v29; // r9d
  int v30; // r10d
  __int64 v31; // r14
  struct _POINTL *v32; // rdx
  XCLIPOBJ *v33; // r10
  struct _RECTL v34; // xmm0
  int v35; // r14d
  unsigned int v36; // r13d
  LONG left; // eax
  struct _RECTL *v38; // rdi
  LONG v39; // ecx
  LONG right; // esi
  LONG v41; // r8d
  LONG v42; // eax
  LONG bottom; // eax
  LONG v44; // edx
  LONG v45; // r15d
  struct _BRUSHOBJ *EngRbrush; // rax
  ULONG iSolidColor; // ecx
  int v49; // ecx
  struct SURFACE *v50; // rsi
  unsigned int v51; // ecx
  int v52; // r10d
  int v53; // r8d
  int v54; // r9d
  int v55; // eax
  int v56; // edx
  int v57; // edx
  int v58; // edx
  int v59; // edx
  LONG top; // r9d
  int v61; // eax
  int v62; // ecx
  POINTL v63; // rsi
  LONG v64; // eax
  int v65; // r9d
  int v66; // ecx
  unsigned int v67; // r10d
  signed int v68; // r8d
  int flColorType; // edi
  unsigned __int8 v70; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v71; // [rsp+61h] [rbp-9Fh]
  int v72; // [rsp+64h] [rbp-9Ch]
  BOOL v73; // [rsp+68h] [rbp-98h]
  int v74; // [rsp+68h] [rbp-98h]
  unsigned int v75; // [rsp+74h] [rbp-8Ch]
  int v76; // [rsp+78h] [rbp-88h]
  int v77; // [rsp+78h] [rbp-88h]
  POINTL pptlSrc; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL *v80; // [rsp+90h] [rbp-70h]
  __int64 v81; // [rsp+98h] [rbp-68h]
  BOOL v82; // [rsp+A0h] [rbp-60h]
  __int64 v83; // [rsp+A4h] [rbp-5Ch]
  BOOL v84; // [rsp+ACh] [rbp-54h]
  XCLIPOBJ *v85; // [rsp+B0h] [rbp-50h]
  __int64 v86; // [rsp+B8h] [rbp-48h] BYREF
  char v87; // [rsp+C0h] [rbp-40h]
  int v88; // [rsp+C4h] [rbp-3Ch]
  struct _POINTL *v89; // [rsp+C8h] [rbp-38h]
  struct SURFACE *v90; // [rsp+D0h] [rbp-30h]
  struct _POINTL *v91; // [rsp+D8h] [rbp-28h]
  struct _BRUSHOBJ *v92; // [rsp+E0h] [rbp-20h]
  int v93; // [rsp+E8h] [rbp-18h] BYREF
  LONG v94; // [rsp+ECh] [rbp-14h]
  LONG v95; // [rsp+F0h] [rbp-10h]
  int v96; // [rsp+F4h] [rbp-Ch]
  __int64 v97; // [rsp+F8h] [rbp-8h]
  __int64 v98; // [rsp+100h] [rbp+0h]
  struct _RECTL *v99; // [rsp+108h] [rbp+8h]
  _OWORD v100[15]; // [rsp+110h] [rbp+10h] BYREF
  RECTL prclDest; // [rsp+200h] [rbp+100h] BYREF
  _DWORD v102[84]; // [rsp+210h] [rbp+110h] BYREF

  v12 = a6;
  v13 = a5;
  v91 = a8;
  v89 = a7;
  v80 = a10;
  v90 = a3;
  pptlSrc = (POINTL)a2;
  v85 = a4;
  v99 = a6;
  v92 = a9;
  v72 = 0;
  memset(v100, 0, 0xE8uLL);
  memset(v102, 0, 0x144uLL);
  v15 = a1;
  v16 = 0LL;
  v86 = 0LL;
  v87 = 0;
  v88 = 0;
  switch ( *((_DWORD *)a1 + 24) )
  {
    case 1:
      v72 = 1986;
      break;
    case 2:
      v72 = 498;
      break;
    case 3:
      v72 = 250;
      break;
    case 4:
      v72 = 126;
      break;
    case 5:
      v72 = 83;
      break;
    case 6:
      v72 = 64;
      break;
  }
  v17 = *a6;
  if ( !a5 )
    v13 = xloIdent;
  *(_QWORD *)&v100[3] = v13;
  *((_QWORD *)&v100[2] + 1) = a4;
  *((_QWORD *)&v100[1] + 1) = a2;
  *(_QWORD *)&v100[1] = a1;
  *((_QWORD *)&v100[3] + 1) = v92;
  v75 = a11 >> 8;
  v70 = a11 & 0xA5 | (8 * (a11 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v71 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v100[0] = v17;
  v82 = (a11 & 0xF) != (unsigned __int8)a11 >> 4;
  v84 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  v18 = 1;
  if ( (a11 & 0xF) != (unsigned __int8)a11 >> 4 || (v19 = 0, (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4) )
    v19 = 1;
  v76 = v19;
  v20 = a11 & 3 | (4 * (a11 & 0xC)) & 0xF | ((unsigned __int8)a11 >> 2) & 0xC;
  v21 = (unsigned __int8)(a11 & 0xC3 | (4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC) >> 4;
  v22 = BYTE1(a11) & 3 | (4 * (BYTE1(a11) & 0xC)) & 0xF | (BYTE1(a11) >> 2) & 0xC;
  LODWORD(v81) = v20 != v21;
  v23 = (unsigned __int8)(BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC) >> 4;
  LODWORD(v83) = v22 != v23;
  v73 = v20 != v21 || v22 != v23;
  HIDWORD(v81) = (v70 & 0xF) != v70 >> 4;
  HIDWORD(v83) = (v71 & 0xF) != v71 >> 4;
  if ( v19 || (unsigned __int8)a11 != a11 >> 8 && !v90 )
  {
    if ( v92 && v92->iSolidColor == -1 )
    {
      EngRbrush = (struct _BRUSHOBJ *)pvGetEngRbrush(v92);
      v15 = a1;
      v16 = EngRbrush;
    }
    else
    {
      v16 = v92;
    }
  }
  v24 = 1;
  *(_QWORD *)((char *)&v100[6] + 4) = 0x100000001LL;
  LODWORD(v100[6]) = 4;
  if ( v73 )
  {
    v25 = *(_DWORD *)(*(_QWORD *)&pptlSrc + 88LL);
    *(_QWORD *)&v100[4] = *(_QWORD *)(*(_QWORD *)&pptlSrc + 80LL);
    HIDWORD(v100[6]) = v25;
    x = v89->x;
    y = v89->y;
    LODWORD(v100[9]) = y;
    HIDWORD(v100[8]) = x;
    if ( *(_QWORD *)&v100[4] != *((_QWORD *)v15 + 10) )
      goto LABEL_18;
    top = a6->top;
    DWORD1(v100[6]) = 1;
    if ( y >= top )
    {
      v61 = 1;
      if ( y == top )
      {
        if ( x < a6->left )
          v61 = -1;
        DWORD1(v100[6]) = v61;
      }
    }
    else
    {
      v24 = -1;
      DWORD2(v100[6]) = -1;
      v61 = 1;
      LODWORD(v100[6]) = 2;
    }
    if ( (unsigned __int8)a11 != v75 && v20 != v21 && v22 != v23
      || (v61 == -1 || v24 == -1) && a6->right - a6->left > v72 )
    {
      v62 = a6->right - a6->left;
      v63 = pptlSrc;
      v93 = *(_DWORD *)(*(_QWORD *)&pptlSrc + 96LL);
      v64 = a6->bottom - top;
      v94 = v62;
      v95 = v64;
      v96 = 0;
      v98 = 1LL;
      v97 = 0LL;
      SURFMEM::bCreateDIB((SURFMEM *)&v86, (struct _DEVBITMAPINFO *)&v93, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v86 )
        goto LABEL_95;
      *(_QWORD *)&prclDest.left = 0LL;
      pptlSrc = *v89;
      prclDest.right = v94;
      prclDest.bottom = v95;
      if ( !EngCopyBits((SURFOBJ *)(v86 + 24), (SURFOBJ *)(*(_QWORD *)&v63 + 24LL), 0LL, xloIdent, &prclDest, &pptlSrc) )
        goto LABEL_95;
      v24 = DWORD2(v100[6]);
      v15 = a1;
      *(_QWORD *)&v100[4] = *(_QWORD *)(v86 + 80);
      v25 = *(_DWORD *)(v86 + 88);
      HIDWORD(v100[6]) = v25;
      *(_QWORD *)((char *)&v100[8] + 12) = 0LL;
    }
    if ( v24 == 1 )
LABEL_18:
      HIDWORD(v100[7]) = v25;
    else
      HIDWORD(v100[7]) = -v25;
  }
  else
  {
    *(_QWORD *)&v100[4] = 0LL;
  }
  *((_QWORD *)&v100[4] + 1) = *((_QWORD *)v15 + 10);
  v28 = *((_DWORD *)v15 + 22);
  LODWORD(v100[7]) = v28;
  if ( v24 != 1 )
    v28 = -v28;
  v29 = a11 >> 8;
  v30 = (unsigned __int8)a11;
  LODWORD(v100[8]) = v28;
  if ( (unsigned __int8)a11 == v75 || (v50 = v90) == 0LL )
  {
    *(_QWORD *)&v100[2] = 0LL;
    v31 = 0LL;
    *(_QWORD *)&v100[5] = 0LL;
  }
  else
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !v91 )
    {
      if ( gfUMPDDebug )
        DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\bltlnk.cxx:%d:BltLnk:pptlMask == NULL\n", 619);
      goto LABEL_95;
    }
    v51 = *((_DWORD *)v50 + 14);
    v52 = v91->x;
    v31 = *((_QWORD *)v50 + 10);
    v53 = *((_DWORD *)v50 + 15);
    v54 = v91->y;
    *(_QWORD *)&v100[5] = v31;
    *(_QWORD *)&v100[2] = v50;
    *((_QWORD *)&v100[10] + 1) = __PAIR64__(v53, v51);
    *(_QWORD *)&v100[11] = __PAIR64__(v54, v52);
    if ( v52 >= (int)v51 )
    {
      LODWORD(v100[11]) = v52 % v51;
    }
    else if ( v52 < 0 )
    {
      LODWORD(v100[11]) = v51 - (-1 - v52) % v51 - 1;
    }
    if ( v54 >= v53 )
    {
      DWORD1(v100[11]) = v54 % v53;
    }
    else if ( v54 < 0 )
    {
      DWORD1(v100[11]) = v53 - ~v54 % v53 - 1;
    }
    v24 = DWORD2(v100[6]);
    v55 = *((_DWORD *)v50 + 22);
    v15 = a1;
    v29 = a11 >> 8;
    v30 = (unsigned __int8)a11;
    DWORD2(v100[7]) = v55;
    if ( DWORD2(v100[6]) != 1 )
      v55 = -v55;
    DWORD2(v100[8]) = v55;
  }
  if ( !v76 )
  {
    *((_QWORD *)&v100[5] + 1) = 0LL;
LABEL_25:
    v32 = v80;
    goto LABEL_26;
  }
  if ( !v92 )
    goto LABEL_95;
  iSolidColor = v92->iSolidColor;
  if ( v92->iSolidColor != -1 )
  {
    v56 = *((_DWORD *)v15 + 24);
    *((_QWORD *)&v100[5] + 1) = 0LL;
    v57 = v56 - 1;
    if ( !v57 )
    {
      if ( iSolidColor )
        iSolidColor = -1;
      goto LABEL_94;
    }
    v58 = v57 - 1;
    if ( v58 )
    {
      v59 = v58 - 1;
      if ( v59 )
      {
        if ( v59 != 1 )
        {
LABEL_94:
          DWORD1(v100[9]) = iSolidColor;
          goto LABEL_25;
        }
LABEL_101:
        iSolidColor |= iSolidColor << 16;
        goto LABEL_94;
      }
    }
    else
    {
      iSolidColor |= 16 * iSolidColor;
    }
    iSolidColor |= iSolidColor << 8;
    goto LABEL_101;
  }
  if ( !v16 )
    goto LABEL_95;
  DWORD1(v100[9]) = -1;
  if ( !v16[1].pvRbrush )
    goto LABEL_25;
  v49 = *(&v16[1].iSolidColor + 1);
  v32 = v80;
  DWORD1(v100[7]) = v49;
  *((_QWORD *)&v100[5] + 1) = v16[1].pvRbrush;
  *((_QWORD *)&v100[9] + 1) = *(_QWORD *)(&v16->flColorType + 1);
  *(struct _POINTL *)&v100[10] = *v80;
  if ( v24 != 1 )
    v49 = -v49;
  DWORD1(v100[8]) = v49;
LABEL_26:
  if ( v30 != v29 && !v31 )
  {
    if ( !v16 || !v16[2].pvRbrush )
      goto LABEL_95;
    v65 = a6->left - v32->x;
    v66 = a6->top - v32->y;
    *(_QWORD *)&v100[5] = v16[2].pvRbrush;
    v67 = *(&v16[1].flColorType + 1);
    DWORD2(v100[10]) = v67;
    v68 = v16[2].iSolidColor;
    HIDWORD(v100[10]) = v68;
    flColorType = v16[2].flColorType;
    DWORD2(v100[7]) = flColorType;
    *(_QWORD *)&v100[11] = __PAIR64__(v66, v65);
    if ( v65 < (int)v67 )
    {
      if ( v65 < 0 )
        LODWORD(v100[11]) = v67 - ~v65 % v67 - 1;
    }
    else
    {
      LODWORD(v100[11]) = v65 % v67;
    }
    if ( v66 < v68 )
    {
      if ( v66 < 0 )
        DWORD1(v100[11]) = v68 - ~v66 % v68 - 1;
    }
    else
    {
      DWORD1(v100[11]) = v66 % v68;
    }
    if ( v24 != 1 )
      flColorType = -flColorType;
    DWORD2(v100[8]) = flColorType;
  }
  v33 = v85;
  if ( v85 && *((_BYTE *)v85 + 20) )
  {
    if ( *((_BYTE *)v85 + 20) == 1 )
    {
      v34 = *(struct _RECTL *)((char *)v85 + 4);
      goto LABEL_30;
    }
    if ( *((_BYTE *)v85 + 20) == 3 )
    {
      v74 = 1;
      v35 = 1;
      XCLIPOBJ::cEnumStart(v85, 0, 0, v100[6], 0x14u);
      v33 = v85;
      goto LABEL_31;
    }
LABEL_95:
    v18 = 0;
    goto LABEL_53;
  }
  v34 = *a6;
LABEL_30:
  v35 = 0;
  v74 = 0;
  v102[0] = 1;
  *(struct _RECTL *)&v102[1] = v34;
LABEL_31:
  if ( v35 )
    goto LABEL_99;
  while ( 1 )
  {
    v36 = 0;
    v77 = 0;
    if ( v102[0] )
    {
      do
      {
        left = v12->left;
        v38 = (struct _RECTL *)&v102[4 * v36 + 1];
        v39 = v38->left;
        if ( v38->left < v12->left )
        {
          v38->left = left;
          v39 = left;
        }
        right = v12->right;
        if ( v38->right > right )
          v38->right = right;
        else
          right = v38->right;
        v41 = v38->top;
        v42 = v12->top;
        if ( v41 < v42 )
        {
          v38->top = v42;
          v41 = v42;
        }
        bottom = v38->bottom;
        v44 = v12->bottom;
        if ( bottom > v44 )
        {
          v38->bottom = v44;
          bottom = v44;
        }
        if ( v41 < bottom && right - v39 > 0 )
        {
          do
          {
            v45 = right;
            if ( right - v39 > v72 )
            {
              v45 = v39 + v72;
              v38->right = v39 + v72;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              WORD2(v100[14]) = (unsigned __int8)a11;
              LODWORD(v100[13]) = v70;
              *(_QWORD *)((char *)&v100[13] + 4) = v81;
              HIDWORD(v100[13]) = v82;
              LODWORD(v100[14]) = (unsigned __int8)a11 != a11 >> 8;
              HIDWORD(v100[12]) = a11 & 0xC3 | (unsigned __int8)((4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC);
              BltLnkRect((struct _BLTLNKINFO *)v100, v38);
            }
            if ( (unsigned __int8)a11 != v75 && BYTE1(a11) != 0xAA )
            {
              HIDWORD(v100[12]) = BYTE1(a11) & 0xC3 | (unsigned __int8)((4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC);
              LODWORD(v100[13]) = v71;
              *(_QWORD *)((char *)&v100[13] + 4) = v83;
              HIDWORD(v100[13]) = v84;
              LODWORD(v100[14]) = (unsigned __int8)a11 != a11 >> 8;
              BYTE4(v100[14]) = BYTE1(a11);
              BYTE5(v100[14]) = -1;
              BltLnkRect((struct _BLTLNKINFO *)v100, v38);
            }
            v38->left = v45;
            v38->right = right;
            v39 = v45;
          }
          while ( right - v45 > 0 );
          v12 = v99;
          v18 = 1;
          v36 = v77;
        }
        v77 = ++v36;
      }
      while ( v36 < v102[0] );
      v35 = v74;
    }
    v33 = v85;
    if ( !v35 )
      break;
LABEL_99:
    v35 = XCLIPOBJ::bEnum(v33, 0x144u, v102, 0LL);
    v74 = v35;
  }
LABEL_53:
  SURFMEM::~SURFMEM((SURFMEM *)&v86);
  return v18;
}
