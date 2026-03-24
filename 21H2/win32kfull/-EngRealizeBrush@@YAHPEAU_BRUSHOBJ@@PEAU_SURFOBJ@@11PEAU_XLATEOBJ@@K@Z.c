/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0019280
 * Callers:
 *     <none>
 * Callees:
 *     EngHTBlt @ 0x1C0019F38 (EngHTBlt.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001A8F0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C001A9A8 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     EngCopyBits @ 0x1C007EB40 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     EngStretchBlt @ 0x1C00B1650 (EngStretchBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C01122B8 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall EngRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  __int64 p_sizlBitmap; // rbx
  unsigned __int64 v7; // r15
  __int64 p_iBitmapFormat; // rax
  __int64 v9; // rdi
  int v10; // r13d
  unsigned __int16 *v11; // r14
  unsigned int v12; // esi
  __int64 p_hdev; // rax
  __int64 v14; // rbx
  LONG v15; // esi
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  unsigned int v18; // r12d
  unsigned __int64 v19; // rcx
  unsigned int v20; // ecx
  unsigned int v21; // r15d
  __int64 v22; // r14
  bool v23; // zf
  LONG v24; // eax
  LONG v25; // r15d
  unsigned int v26; // eax
  struct _BRUSHOBJ *v27; // r15
  ULONG iSolidColor; // r12d
  int v29; // ecx
  __int64 v30; // r14
  XLATEOBJ *v31; // r15
  SURFOBJ *v32; // rcx
  LONG v33; // ecx
  LONG v34; // eax
  unsigned __int64 v35; // rsi
  int v37; // ecx
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // dl
  ULONG v41; // eax
  unsigned int v42; // ecx
  int inited; // eax
  struct _SURFOBJ *v44; // r15
  XLATEOBJ *v45; // r8
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  XLATEOBJ *v49; // r14
  __int64 v50; // r12
  SURFOBJ *v51; // rcx
  LONG right; // ecx
  LONG v53; // eax
  __int64 v54; // rax
  LONG v55; // ebx
  __int64 v56; // rcx
  void *v57; // r8
  SURFOBJ *v58; // rcx
  LONG v59; // ecx
  LONG v60; // eax
  __int64 v61; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v62; // [rsp+68h] [rbp-98h]
  XLATEOBJ *pxlo; // [rsp+70h] [rbp-90h]
  XLATEOBJ *v64; // [rsp+78h] [rbp-88h] BYREF
  struct _SURFOBJ *v65; // [rsp+80h] [rbp-80h]
  int v66; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v67; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+98h] [rbp-68h] BYREF
  char v69; // [rsp+A0h] [rbp-60h]
  int v70; // [rsp+A4h] [rbp-5Ch]
  unsigned int v71; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v72; // [rsp+ACh] [rbp-54h]
  POINTL pptlSrc; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-48h] BYREF
  POINTL pptlHTOrg; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-38h]
  __int64 v77; // [rsp+D0h] [rbp-30h]
  __int64 v78; // [rsp+D8h] [rbp-28h] BYREF
  char v79; // [rsp+E0h] [rbp-20h]
  int v80; // [rsp+E4h] [rbp-1Ch]
  __int128 v81; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v82; // [rsp+F8h] [rbp-8h]
  __int64 v83; // [rsp+108h] [rbp+8h]
  __int64 v84; // [rsp+110h] [rbp+10h] BYREF
  int v85; // [rsp+118h] [rbp+18h]
  __int64 *v86; // [rsp+120h] [rbp+20h]
  unsigned __int64 v87; // [rsp+128h] [rbp+28h]
  unsigned __int64 v88; // [rsp+130h] [rbp+30h]
  RECTL prclDest; // [rsp+140h] [rbp+40h] BYREF
  RECTL prclSrc; // [rsp+150h] [rbp+50h] BYREF

  p_sizlBitmap = (__int64)&a3->sizlBitmap;
  pxlo = a5;
  v67 = a1;
  v65 = a3;
  LODWORD(v61) = 1;
  v7 = (unsigned __int64)&a4[-1].pvScan0 & -(__int64)(a4 != 0LL);
  v66 = 0;
  v87 = v7;
  p_iBitmapFormat = (__int64)&a2->iBitmapFormat;
  v77 = 0LL;
  pptlSrc = 0LL;
  if ( !a2 )
    p_iBitmapFormat = 96LL;
  HIDWORD(v61) = 0;
  LODWORD(v9) = 0;
  v10 = 0;
  v11 = 0LL;
  prclDest = 0LL;
  v12 = *(_DWORD *)p_iBitmapFormat;
  if ( !a3 )
    p_sizlBitmap = 56LL;
  v62 = *(_DWORD *)p_iBitmapFormat;
  p_hdev = (__int64)&a2->hdev;
  if ( !a2 )
    p_hdev = 48LL;
  v14 = *(_QWORD *)p_sizlBitmap;
  v86 = (__int64 *)p_hdev;
  v81 = 0LL;
  v74 = *(_QWORD *)p_hdev;
  v82 = 0LL;
  v83 = v14;
  GreAcquireSemaphore(ghsemHT);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v74) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v74, 0LL) )
    v11 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v74);
  if ( v12 == 1 )
  {
    if ( (((_DWORD)v14 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v14 == 24 )
    {
      v16 = 1LL;
      v15 = (v14 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v15 = 32;
      v16 = 1LL;
      if ( !v11 )
        goto LABEL_64;
      v37 = v11[4];
      switch ( v37 )
      {
        case 10:
          v15 = 160;
          break;
        case 12:
          v15 = 96;
          break;
        case 14:
          v15 = 224;
          break;
        default:
          goto LABEL_64;
      }
      HIDWORD(v61) = 1;
    }
LABEL_64:
    if ( v15 < (int)v14 )
      goto LABEL_65;
    goto LABEL_15;
  }
  if ( v12 != 2 )
  {
    switch ( v12 )
    {
      case 3u:
        v16 = 8LL;
        v15 = (v14 + 7) & 0xFFFFFFFC;
        break;
      case 4u:
        v16 = 16LL;
        v15 = (v14 + 7) & 0xFFFFFFFC;
        break;
      case 5u:
        v16 = 24LL;
        v15 = (v14 + 7) & 0xFFFFFFFC;
        break;
      default:
        v15 = v14;
        v16 = 32LL;
        goto LABEL_15;
    }
    goto LABEL_64;
  }
  if ( (_DWORD)v14 != 8 )
  {
    v16 = 4LL;
    v15 = (v14 + 15) & 0xFFFFFFF8;
    goto LABEL_64;
  }
  v15 = 8;
  v16 = 4LL;
LABEL_15:
  v17 = v16 * (unsigned int)v15;
  if ( v17 <= 0xFFFFFFFF )
  {
    v18 = (unsigned int)v17 >> 3;
    v19 = v18 * (unsigned __int64)HIDWORD(v83);
    v88 = v19;
    if ( v19 <= 0xFFFFFFFF )
    {
      v20 = v19 + 80;
      if ( v20 >= 0x50 )
      {
        if ( v7 )
        {
          v9 = *(_QWORD *)(v7 + 56);
          v77 = v9;
          if ( (((_DWORD)v9 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v9 == 24 )
            v10 = (v9 + 63) & 0xFFFFFFE0;
          else
            v10 = 32;
          if ( v10 < (int)v9 )
            goto LABEL_65;
          v38 = (unsigned int)(v10 >> 3) * (unsigned __int64)HIDWORD(v77);
          v66 = v10 >> 3;
          if ( v38 > 0xFFFFFFFF || (unsigned int)v38 + v20 < v20 )
            goto LABEL_65;
          v20 += v38;
        }
        v21 = v20 + 76;
        if ( v20 < 0xFFFFFFB4 )
        {
          if ( gpCachedEngbrush )
          {
            v22 = _InterlockedExchange64((volatile __int64 *)gpCachedEngbrush, 0LL);
            v76 = v22;
            if ( v22 )
            {
              if ( v21 > v20 && *(_DWORD *)(v22 + 4) >= v21 )
                goto LABEL_24;
              Win32FreePool((void *)v22);
            }
          }
          v76 = PALLOCMEM2(v21);
          v22 = v76;
          if ( !v76 )
            goto LABEL_65;
LABEL_24:
          v23 = HIDWORD(v61) == 0;
          v67[1].pvRbrush = (PVOID)v22;
          v24 = v14;
          *(_DWORD *)(v22 + 4) = v21;
          if ( !v23 )
            v24 = v15;
          v25 = HIDWORD(v83);
          *(_DWORD *)(v22 + 20) = v24;
          *(_QWORD *)(v22 + 32) = v22 + 76;
          v26 = v62;
          *(_DWORD *)(v22 + 72) = v62;
          *(_DWORD *)(v22 + 28) = v18;
          *(_DWORD *)(v22 + 16) = v15;
          *(_DWORD *)(v22 + 24) = v25;
          *(_QWORD *)&v82 = 0LL;
          v68 = 0LL;
          v69 = 0;
          v70 = 0;
          *(_QWORD *)&v81 = __PAIR64__(v15, v26);
          DWORD2(v81) = v25;
          DWORD2(v82) = 1;
          SURFMEM::bCreateDIB(
            (SURFMEM *)&v68,
            (struct _DEVBITMAPINFO *)&v81,
            *(void **)(v22 + 32),
            0LL,
            0,
            0LL,
            0LL,
            0,
            1,
            0,
            0);
          if ( !v68 )
          {
LABEL_75:
            SURFMEM::~SURFMEM((SURFMEM *)&v68);
            goto LABEL_65;
          }
          prclDest.bottom = v25;
          v27 = v67;
          prclDest.right = v14;
          iSolidColor = v67[2].iSolidColor;
          LODWORD(v64) = *(&v67[2].iSolidColor + 1);
          HTSEMOBJ::vRelease((HTSEMOBJ *)&v61);
          if ( v62 == 1 )
          {
            if ( a6 < 0xC )
              goto LABEL_30;
            v29 = (int)v64;
            if ( iSolidColor != (_DWORD)v64 )
              goto LABEL_82;
          }
          else
          {
            v29 = (int)v64;
          }
          if ( v62 == 2 && (v27[3].iSolidColor & 5) != 0 && (iSolidColor != v29 || (v27[5].iSolidColor & 0x20000) == 0) )
          {
LABEL_82:
            v85 = 0;
            v84 = 0LL;
            v39 = *v86;
            pptlHTOrg = 0LL;
            prclSrc = prclDest;
            *(_QWORD *)(v68 + 48) = v39;
            v64 = 0LL;
            v67 = 0LL;
            if ( a6 >= 6 )
            {
              v40 = 0;
              if ( (v27[5].iSolidColor & 0x20000) == 0 )
                goto LABEL_95;
            }
            else
            {
              v40 = 1;
            }
            v41 = v27[3].iSolidColor;
            if ( (v41 & 4) != 0 || (v41 & 1) != 0 )
            {
              v42 = *(&v27[2].iSolidColor + 1);
              if ( v40 )
              {
                v72 = v27[1].iSolidColor;
                v71 = v42;
              }
              else
              {
                v71 = v27[2].iSolidColor;
                v72 = v42;
              }
              if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v84, 1u, 2u, &v71, 0, 0, 0, 0x400u, 1) )
              {
                inited = EXLATEOBJ::bInitXlateObj(&v64, *(_QWORD *)&v27[2].flColorType, v27[3].iSolidColor);
                v44 = v65;
                if ( inited )
                {
                  v45 = v64;
                  v46 = (__int64)&v65[1].hdev;
                  pxlo = v64;
                  if ( !v65 )
                    v46 = 128LL;
                  v67 = *(struct _BRUSHOBJ **)v46;
                  *(_QWORD *)v46 = 0LL;
                  goto LABEL_97;
                }
LABEL_96:
                v45 = pxlo;
LABEL_97:
                if ( v62 == 1 && HIDWORD(v61) )
                {
                  v47 = (__int64)v44;
                  prclDest.right = v15;
                  if ( !v44 )
                    v47 = 24LL;
                  if ( v68 )
                    v48 = v68 + 24;
                  else
                    v48 = 0LL;
                  EngHTBlt(v48, v47, 0LL, 0LL, v45, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 64, 0LL, v61);
                }
                else if ( prclDest.left != v15 )
                {
                  v49 = pxlo;
                  v50 = (__int64)v44;
                  if ( !v44 )
                    v50 = 24LL;
                  do
                  {
                    if ( v68 )
                      v51 = (SURFOBJ *)(v68 + 24);
                    else
                      v51 = 0LL;
                    EngStretchBlt(v51, (SURFOBJ *)v50, 0LL, 0LL, v49, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 4u);
                    right = prclDest.right;
                    prclDest.left = prclDest.right;
                    v53 = v14 + prclDest.right;
                    if ( (int)v14 + prclDest.right > v15 )
                      v53 = v15;
                    prclDest.right = v53;
                  }
                  while ( right != v15 );
                  v22 = v76;
                }
                if ( v67 )
                {
                  v54 = (__int64)&v44[1].hdev;
                  if ( !v44 )
                    v54 = 128LL;
                  *(_QWORD *)v54 = v67;
                }
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v64);
                PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v84);
LABEL_39:
                GreAcquireSemaphore(ghsemHT);
                v35 = v87;
                if ( !v87 )
                {
                  *(_QWORD *)(v22 + 56) = 0LL;
LABEL_41:
                  SURFMEM::~SURFMEM((SURFMEM *)&v68);
                  HTSEMOBJ::vRelease((HTSEMOBJ *)&v61);
                  return 1LL;
                }
                v55 = HIDWORD(v77);
                v56 = (unsigned int)v88 + 76LL;
                *(_DWORD *)(v22 + 64) = v66;
                *(_QWORD *)(v22 + 56) = v22 + v56;
                *(_DWORD *)(v22 + 40) = v10;
                *(_DWORD *)(v22 + 44) = v9;
                *(_DWORD *)(v22 + 48) = v55;
                LODWORD(v81) = 1;
                *(_QWORD *)((char *)&v81 + 4) = __PAIR64__(v55, v10);
                *(_QWORD *)&v82 = 0LL;
                DWORD2(v82) = 1;
                v57 = *(void **)(v22 + 56);
                v78 = 0LL;
                v79 = 0;
                v80 = 0;
                SURFMEM::bCreateDIB((SURFMEM *)&v78, (struct _DEVBITMAPINFO *)&v81, v57, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
                if ( v78 )
                {
                  pptlSrc = 0LL;
                  *(_QWORD *)&prclDest.left = 0LL;
                  prclDest.right = v9;
                  prclDest.bottom = v55;
                  HTSEMOBJ::vRelease((HTSEMOBJ *)&v61);
                  if ( prclDest.left != v10 )
                  {
                    do
                    {
                      v58 = (SURFOBJ *)(v78 + 24);
                      if ( !v78 )
                        v58 = 0LL;
                      EngCopyBits(v58, (SURFOBJ *)(v35 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
                      v59 = prclDest.right;
                      prclDest.left = prclDest.right;
                      v60 = v9 + prclDest.right;
                      if ( (int)v9 + prclDest.right > v10 )
                        v60 = v10;
                      prclDest.right = v60;
                    }
                    while ( v59 != v10 );
                  }
                  GreAcquireSemaphore(ghsemHT);
                  SURFMEM::~SURFMEM((SURFMEM *)&v78);
                  goto LABEL_41;
                }
                SURFMEM::~SURFMEM((SURFMEM *)&v78);
                goto LABEL_75;
              }
            }
LABEL_95:
            v44 = v65;
            goto LABEL_96;
          }
LABEL_30:
          if ( prclDest.left != v15 )
          {
            v30 = (__int64)v65;
            v31 = pxlo;
            if ( !v65 )
              v30 = 24LL;
            do
            {
              v32 = (SURFOBJ *)(v68 + 24);
              if ( !v68 )
                v32 = 0LL;
              EngCopyBits(v32, (SURFOBJ *)v30, 0LL, v31, &prclDest, &pptlSrc);
              v33 = prclDest.right;
              prclDest.left = prclDest.right;
              v34 = v14 + prclDest.right;
              if ( (int)v14 + prclDest.right > v15 )
                v34 = v15;
              prclDest.right = v34;
            }
            while ( v33 != v15 );
            v22 = v76;
          }
          goto LABEL_39;
        }
      }
    }
  }
LABEL_65:
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v61);
  return 0LL;
}
