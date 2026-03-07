__int64 __fastcall EngRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  __int64 v6; // r13
  __int64 p_sizlBitmap; // rbx
  PVOID *p_pvScan0; // r15
  XLATEOBJ *v9; // rbx
  __int64 p_iBitmapFormat; // rax
  PVOID v11; // rdi
  unsigned int v12; // esi
  unsigned __int16 *v13; // r14
  __int64 v14; // rax
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  LONG v17; // esi
  __int64 v18; // rax
  unsigned __int64 v19; // r12
  unsigned int v20; // r12d
  unsigned __int64 v21; // rcx
  unsigned int v22; // ecx
  unsigned int v23; // r15d
  __int64 v24; // r14
  bool v25; // zf
  LONG v26; // eax
  LONG v27; // r15d
  unsigned int v28; // eax
  ULONG iSolidColor; // r15d
  int v30; // r12d
  unsigned __int64 v31; // rcx
  XLATEOBJ *v32; // r15
  SURFOBJ *v33; // rcx
  LONG v34; // eax
  struct Gre::Base::SESSION_GLOBALS *v35; // rax
  PVOID *v36; // r15
  int v38; // ecx
  int v39; // eax
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  struct _BRUSHOBJ *v42; // r12
  __int64 v43; // r15
  HDEV v44; // rdx
  char v45; // dl
  ULONG v46; // eax
  int v47; // ecx
  XLATEOBJ *v48; // rdx
  char *v49; // rcx
  XLATEOBJ *v50; // rdi
  SURFOBJ *v51; // r12
  SURFOBJ *v52; // rcx
  LONG right; // eax
  LONG v54; // ecx
  int v55; // eax
  int v56; // esi
  LONG v57; // ebx
  void *v58; // r8
  unsigned __int64 v59; // rcx
  SURFOBJ *v60; // rcx
  LONG v61; // eax
  struct Gre::Base::SESSION_GLOBALS *v62; // rax
  __int64 v63; // [rsp+60h] [rbp-A0h] BYREF
  struct _BRUSHOBJ *v64; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v65; // [rsp+70h] [rbp-90h]
  int v66; // [rsp+74h] [rbp-8Ch]
  XLATEOBJ *pxlo; // [rsp+78h] [rbp-88h]
  POINTL pptlSrc; // [rsp+80h] [rbp-80h] BYREF
  XLATEOBJ *v69; // [rsp+88h] [rbp-78h] BYREF
  int v70; // [rsp+90h] [rbp-70h]
  POINTL pptlHTOrg; // [rsp+98h] [rbp-68h] BYREF
  SURFACE *v72; // [rsp+A0h] [rbp-60h] BYREF
  char v73; // [rsp+A8h] [rbp-58h]
  int v74; // [rsp+ACh] [rbp-54h]
  PVOID v75; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v76; // [rsp+B8h] [rbp-48h] BYREF
  char v77; // [rsp+C0h] [rbp-40h]
  int v78; // [rsp+C4h] [rbp-3Ch]
  __int64 v79; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v80; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v81; // [rsp+E0h] [rbp-20h]
  __int64 v82; // [rsp+F0h] [rbp-10h]
  __int64 v83; // [rsp+F8h] [rbp-8h]
  SURFOBJ *psoSrc; // [rsp+100h] [rbp+0h]
  __int64 p_hdev; // [rsp+108h] [rbp+8h]
  PVOID *v86; // [rsp+110h] [rbp+10h]
  __int64 v87; // [rsp+118h] [rbp+18h] BYREF
  int v88; // [rsp+120h] [rbp+20h]
  HDEV *v89; // [rsp+128h] [rbp+28h]
  RECTL prclDest; // [rsp+130h] [rbp+30h] BYREF
  RECTL prclSrc; // [rsp+140h] [rbp+40h] BYREF

  pxlo = a5;
  v64 = a1;
  v6 = (__int64)a3;
  if ( a3 )
  {
    psoSrc = a3;
    p_hdev = (__int64)&a3[1].hdev;
    p_sizlBitmap = (__int64)&a3->sizlBitmap;
    v83 = (__int64)a3;
    v82 = (__int64)&a3[1].hdev;
  }
  else
  {
    psoSrc = (SURFOBJ *)24;
    v6 = 24LL;
    p_hdev = 128LL;
    v83 = 24LL;
    v82 = 128LL;
    p_sizlBitmap = 56LL;
  }
  p_pvScan0 = &a4[-1].pvScan0;
  if ( !a4 )
    p_pvScan0 = 0LL;
  v9 = *(XLATEOBJ **)p_sizlBitmap;
  p_iBitmapFormat = (__int64)&a2->iBitmapFormat;
  v86 = p_pvScan0;
  v70 = 0;
  v75 = 0LL;
  if ( !a2 )
    p_iBitmapFormat = 96LL;
  v66 = 0;
  pptlSrc = 0LL;
  HIDWORD(v63) = 0;
  LODWORD(v11) = 0;
  v69 = v9;
  v12 = *(_DWORD *)p_iBitmapFormat;
  v13 = 0LL;
  v14 = (__int64)&a2->hdev;
  v65 = v12;
  if ( !a2 )
    v14 = 48LL;
  v89 = (HDEV *)v14;
  prclDest = 0LL;
  v79 = *(_QWORD *)v14;
  v80 = 0LL;
  v81 = 0LL;
  pptlHTOrg = (POINTL)Gre::Base::Globals((Gre::Base *)0x30);
  LODWORD(v63) = 1;
  v16 = Gre::Base::Globals(v15);
  GreAcquireSemaphore(*((_QWORD *)v16 + 17));
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v79) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v79, 0LL) )
    v13 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v79);
  if ( v12 == 1 )
  {
    if ( (((_DWORD)v9 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v9 == 24 )
    {
      v18 = 1LL;
      v17 = ((_DWORD)v9 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v17 = 32;
      v18 = 1LL;
      if ( !v13 )
        goto LABEL_62;
      v38 = v13[4];
      switch ( v38 )
      {
        case 10:
          v17 = 160;
          break;
        case 12:
          v17 = 96;
          break;
        case 14:
          v17 = 224;
          break;
        default:
          goto LABEL_62;
      }
      HIDWORD(v63) = 1;
    }
LABEL_62:
    if ( v17 < (int)v9 )
      goto LABEL_118;
    goto LABEL_18;
  }
  if ( v12 != 2 )
  {
    switch ( v12 )
    {
      case 3u:
        v18 = 8LL;
        v17 = ((_DWORD)v9 + 7) & 0xFFFFFFFC;
        break;
      case 4u:
        v18 = 16LL;
        v17 = ((_DWORD)v9 + 7) & 0xFFFFFFFC;
        break;
      case 5u:
        v18 = 24LL;
        v17 = ((_DWORD)v9 + 7) & 0xFFFFFFFC;
        break;
      default:
        v17 = (int)v9;
        v18 = 32LL;
        goto LABEL_18;
    }
    goto LABEL_62;
  }
  if ( (_DWORD)v9 != 8 )
  {
    v18 = 4LL;
    v17 = ((_DWORD)v9 + 15) & 0xFFFFFFF8;
    goto LABEL_62;
  }
  v17 = 8;
  v18 = 4LL;
LABEL_18:
  v19 = v18 * (unsigned int)v17;
  if ( v19 <= 0xFFFFFFFF )
  {
    v20 = (unsigned int)v19 >> 3;
    v21 = v20 * (unsigned __int64)HIDWORD(v69);
    v76 = v21;
    if ( v21 <= 0xFFFFFFFF )
    {
      v22 = v21 + 80;
      if ( v22 >= 0x50 )
      {
        if ( p_pvScan0 )
        {
          v11 = p_pvScan0[7];
          v75 = v11;
          if ( (((_DWORD)v11 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v11 == 24 )
            v39 = ((_DWORD)v11 + 63) & 0xFFFFFFE0;
          else
            v39 = 32;
          v66 = v39;
          if ( v39 < (int)v11 )
            goto LABEL_118;
          v40 = (unsigned int)(v39 >> 3);
          v41 = v40 * HIDWORD(v75);
          v70 = v40;
          if ( v41 > 0xFFFFFFFF || (unsigned int)v41 + v22 < v22 )
            goto LABEL_118;
          v22 += v41;
        }
        v23 = v22 + 76;
        if ( v22 < 0xFFFFFFB4 )
        {
          if ( *(_QWORD *)(*(_QWORD *)&pptlHTOrg + 200LL) )
          {
            v24 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)&pptlHTOrg + 200LL), 0LL);
            if ( v24 )
            {
              if ( v23 > v22 && *(_DWORD *)(v24 + 4) >= v23 )
              {
LABEL_25:
                v25 = HIDWORD(v63) == 0;
                v64[1].pvRbrush = (PVOID)v24;
                v26 = (int)v9;
                *(_DWORD *)(v24 + 4) = v23;
                if ( !v25 )
                  v26 = v17;
                v27 = HIDWORD(v69);
                *(_DWORD *)(v24 + 20) = v26;
                *(_QWORD *)(v24 + 32) = v24 + 76;
                v28 = v65;
                *(_DWORD *)(v24 + 72) = v65;
                *(_DWORD *)(v24 + 28) = v20;
                *(_DWORD *)(v24 + 16) = v17;
                *(_DWORD *)(v24 + 24) = v27;
                *(_QWORD *)&v81 = 0LL;
                v72 = 0LL;
                v73 = 0;
                v74 = 0;
                *(_QWORD *)&v80 = __PAIR64__(v17, v28);
                DWORD2(v80) = v27;
                DWORD2(v81) = 1;
                SURFMEM::bCreateDIB(
                  (SURFMEM *)&v72,
                  (struct _DEVBITMAPINFO *)&v80,
                  *(void **)(v24 + 32),
                  0LL,
                  0,
                  0LL,
                  0LL,
                  0,
                  1,
                  0,
                  0);
                if ( !v72 )
                {
LABEL_117:
                  SURFMEM::~SURFMEM((SURFMEM *)&v72);
                  goto LABEL_118;
                }
                pptlSrc = 0LL;
                *(_QWORD *)&prclDest.left = 0LL;
                prclDest.bottom = v27;
                prclDest.right = (int)v9;
                iSolidColor = v64[2].iSolidColor;
                v30 = *(&v64[2].iSolidColor + 1);
                HTSEMOBJ::vRelease((HTSEMOBJ *)&v63);
                if ( v65 == 1 )
                {
                  if ( a6 < 0xC )
                    goto LABEL_30;
                  if ( iSolidColor != v30 )
                  {
                    v42 = v64;
                    goto LABEL_79;
                  }
                }
                if ( v65 == 2 && (v64[3].iSolidColor & 5) != 0 )
                {
                  v25 = iSolidColor == v30;
                  v42 = v64;
                  if ( !v25 || (v64[5].iSolidColor & 0x20000) == 0 )
                  {
LABEL_79:
                    v43 = 0LL;
                    v88 = 0;
                    v87 = 0LL;
                    v44 = *v89;
                    v69 = 0LL;
                    pptlHTOrg = 0LL;
                    prclSrc = prclDest;
                    SURFACE::hdev(v72, v44);
                    if ( a6 >= 6 )
                    {
                      v45 = 0;
                      if ( (v42[5].iSolidColor & 0x20000) == 0 )
                        goto LABEL_90;
                    }
                    else
                    {
                      v45 = 1;
                    }
                    v46 = v42[3].iSolidColor;
                    if ( (v46 & 4) != 0 || (v46 & 1) != 0 )
                    {
                      v47 = *(&v42[2].iSolidColor + 1);
                      if ( v45 )
                      {
                        HIDWORD(v64) = v42[1].iSolidColor;
                        LODWORD(v64) = v47;
                      }
                      else
                      {
                        LODWORD(v64) = v42[2].iSolidColor;
                        HIDWORD(v64) = v47;
                      }
                      if ( PALMEMOBJ::bCreatePalette(
                             (PALMEMOBJ *)&v87,
                             1u,
                             2u,
                             (const unsigned int *)&v64,
                             0,
                             0,
                             0,
                             0x400u,
                             1)
                        && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                           &v69,
                                           *(_QWORD *)&v42[2].flColorType,
                                           v42[3].iSolidColor,
                                           v87,
                                           *((_QWORD *)v42[3].pvRbrush + 16),
                                           *(_QWORD *)&v42[4].iSolidColor,
                                           *(_QWORD *)&v42[4].iSolidColor,
                                           v42[2].iSolidColor,
                                           *(&v42[2].iSolidColor + 1),
                                           0xFFFFFF,
                                           0) )
                      {
                        v48 = v69;
                        pxlo = v69;
                        v43 = *(_QWORD *)v82;
                        *(_QWORD *)v82 = 0LL;
                        goto LABEL_91;
                      }
                    }
LABEL_90:
                    v48 = pxlo;
LABEL_91:
                    if ( v65 == 1 && HIDWORD(v63) )
                    {
                      prclDest.right = v17;
                      v49 = (char *)v72 + 24;
                      if ( !v72 )
                        v49 = 0LL;
                      EngHTBlt(v49, v83, 0LL, 0LL, v48, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 64, 0LL, v63);
                    }
                    else if ( prclDest.left != v17 )
                    {
                      v50 = pxlo;
                      v51 = psoSrc;
                      do
                      {
                        v52 = (SURFOBJ *)((char *)v72 + 24);
                        if ( !v72 )
                          v52 = 0LL;
                        EngStretchBlt(v52, v51, 0LL, 0LL, v50, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 4u);
                        right = prclDest.right;
                        prclDest.left = prclDest.right;
                        v54 = (_DWORD)v9 + prclDest.right;
                        if ( (int)v9 + prclDest.right > v17 )
                          v54 = v17;
                        prclDest.right = v54;
                      }
                      while ( right != v17 );
                      LODWORD(v11) = (_DWORD)v75;
                    }
                    if ( v43 )
                      *(_QWORD *)p_hdev = v43;
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v69);
                    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v87);
LABEL_37:
                    v35 = Gre::Base::Globals((Gre::Base *)v31);
                    GreAcquireSemaphore(*((_QWORD *)v35 + 17));
                    v36 = v86;
                    if ( !v86 )
                    {
                      *(_QWORD *)(v24 + 56) = 0LL;
LABEL_39:
                      SURFMEM::~SURFMEM((SURFMEM *)&v72);
                      HTSEMOBJ::vRelease((HTSEMOBJ *)&v63);
                      return 1LL;
                    }
                    v55 = v70;
                    v56 = v66;
                    v57 = HIDWORD(v75);
                    *(_QWORD *)(v24 + 56) = v24 + (unsigned int)v76 + 76LL;
                    *(_DWORD *)(v24 + 64) = v55;
                    *(_DWORD *)(v24 + 40) = v56;
                    *(_DWORD *)(v24 + 44) = (_DWORD)v11;
                    *(_DWORD *)(v24 + 48) = v57;
                    LODWORD(v80) = 1;
                    *(_QWORD *)((char *)&v80 + 4) = __PAIR64__(v57, v56);
                    *(_QWORD *)&v81 = 0LL;
                    DWORD2(v81) = 1;
                    v58 = *(void **)(v24 + 56);
                    v76 = 0LL;
                    v77 = 0;
                    v78 = 0;
                    SURFMEM::bCreateDIB(
                      (SURFMEM *)&v76,
                      (struct _DEVBITMAPINFO *)&v80,
                      v58,
                      0LL,
                      0,
                      0LL,
                      0LL,
                      0,
                      1,
                      0,
                      0);
                    if ( v76 )
                    {
                      pptlSrc = 0LL;
                      *(_QWORD *)&prclDest.left = 0LL;
                      prclDest.right = (int)v11;
                      prclDest.bottom = v57;
                      HTSEMOBJ::vRelease((HTSEMOBJ *)&v63);
                      if ( prclDest.left != v56 )
                      {
                        do
                        {
                          v60 = (SURFOBJ *)(v76 + 24);
                          if ( !v76 )
                            v60 = 0LL;
                          EngCopyBits(v60, (SURFOBJ *)(v36 + 3), 0LL, 0LL, &prclDest, &pptlSrc);
                          v61 = prclDest.right;
                          prclDest.left = prclDest.right;
                          v59 = (unsigned int)((_DWORD)v11 + prclDest.right);
                          if ( (int)v59 > v56 )
                            v59 = (unsigned int)v56;
                          prclDest.right = v59;
                        }
                        while ( v61 != v56 );
                      }
                      v62 = Gre::Base::Globals((Gre::Base *)v59);
                      GreAcquireSemaphore(*((_QWORD *)v62 + 17));
                      SURFMEM::~SURFMEM((SURFMEM *)&v76);
                      goto LABEL_39;
                    }
                    SURFMEM::~SURFMEM((SURFMEM *)&v76);
                    goto LABEL_117;
                  }
                }
LABEL_30:
                if ( prclDest.left != v17 )
                {
                  v32 = pxlo;
                  do
                  {
                    if ( v72 )
                      v33 = (SURFOBJ *)((char *)v72 + 24);
                    else
                      v33 = 0LL;
                    EngCopyBits(v33, (SURFOBJ *)v6, 0LL, v32, &prclDest, &pptlSrc);
                    v34 = prclDest.right;
                    prclDest.left = prclDest.right;
                    v31 = (unsigned int)((_DWORD)v9 + prclDest.right);
                    if ( (int)v31 > v17 )
                      v31 = (unsigned int)v17;
                    prclDest.right = v31;
                  }
                  while ( v34 != v17 );
                }
                goto LABEL_37;
              }
              Win32FreePool((void *)v24);
            }
          }
          v24 = Win32AllocPoolZInit(v23, 1919051079LL);
          if ( v24 )
            goto LABEL_25;
        }
      }
    }
  }
LABEL_118:
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v63);
  return 0LL;
}
