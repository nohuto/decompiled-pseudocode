/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0091710
 * Callers:
 *     <none>
 * Callees:
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x1C002FB50 (EngStretchBlt.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngHTBlt @ 0x1C009247C (EngHTBlt.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0092E30 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C0092EC8 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0096C18 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

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
  ULONG iSolidColor; // r15d
  int v28; // r12d
  XLATEOBJ *v29; // r15
  SURFOBJ *v30; // rcx
  LONG v31; // ecx
  LONG v32; // eax
  PVOID *v33; // r15
  int v35; // ecx
  int v36; // eax
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  struct _BRUSHOBJ *v39; // r12
  __int64 v40; // r15
  __int64 v41; // rcx
  char v42; // dl
  ULONG v43; // eax
  int v44; // ecx
  XLATEOBJ *v45; // rdx
  __int64 v46; // rcx
  XLATEOBJ *v47; // rdi
  SURFOBJ *v48; // r12
  SURFOBJ *v49; // rcx
  LONG right; // ecx
  LONG v51; // eax
  int v52; // eax
  int v53; // esi
  LONG v54; // ebx
  void *v55; // r8
  SURFOBJ *v56; // rcx
  LONG v57; // ecx
  LONG v58; // eax
  int v59; // [rsp+60h] [rbp-A0h] BYREF
  int v60; // [rsp+64h] [rbp-9Ch]
  struct _BRUSHOBJ *v61; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v62; // [rsp+70h] [rbp-90h]
  int v63; // [rsp+74h] [rbp-8Ch]
  XLATEOBJ *pxlo; // [rsp+78h] [rbp-88h]
  POINTL pptlSrc; // [rsp+80h] [rbp-80h] BYREF
  XLATEOBJ *v66; // [rsp+88h] [rbp-78h] BYREF
  int v67; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+98h] [rbp-68h] BYREF
  char v69; // [rsp+A0h] [rbp-60h]
  int v70; // [rsp+A4h] [rbp-5Ch]
  PVOID v71; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  char v73; // [rsp+B8h] [rbp-48h]
  int v74; // [rsp+BCh] [rbp-44h]
  __int64 v75; // [rsp+C0h] [rbp-40h] BYREF
  POINTL pptlHTOrg; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v77; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v78; // [rsp+E0h] [rbp-20h]
  __int64 v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F8h] [rbp-8h]
  SURFOBJ *psoSrc; // [rsp+100h] [rbp+0h]
  __int64 p_hdev; // [rsp+108h] [rbp+8h]
  PVOID *v83; // [rsp+110h] [rbp+10h]
  __int64 v84; // [rsp+118h] [rbp+18h] BYREF
  int v85; // [rsp+120h] [rbp+20h]
  __int64 *v86; // [rsp+128h] [rbp+28h]
  RECTL prclDest; // [rsp+130h] [rbp+30h] BYREF
  RECTL prclSrc; // [rsp+140h] [rbp+40h] BYREF

  pxlo = a5;
  v61 = a1;
  v6 = (__int64)a3;
  if ( a3 )
  {
    psoSrc = a3;
    p_hdev = (__int64)&a3[1].hdev;
    p_sizlBitmap = (__int64)&a3->sizlBitmap;
    v80 = (__int64)a3;
    v79 = (__int64)&a3[1].hdev;
  }
  else
  {
    psoSrc = (SURFOBJ *)24;
    v6 = 24LL;
    p_hdev = 128LL;
    v80 = 24LL;
    v79 = 128LL;
    p_sizlBitmap = 56LL;
  }
  p_pvScan0 = &a4[-1].pvScan0;
  if ( !a4 )
    p_pvScan0 = 0LL;
  v9 = *(XLATEOBJ **)p_sizlBitmap;
  p_iBitmapFormat = (__int64)&a2->iBitmapFormat;
  v83 = p_pvScan0;
  v67 = 0;
  v71 = 0LL;
  if ( !a2 )
    p_iBitmapFormat = 96LL;
  v63 = 0;
  pptlSrc = 0LL;
  v60 = 0;
  LODWORD(v11) = 0;
  v66 = v9;
  v12 = *(_DWORD *)p_iBitmapFormat;
  v13 = 0LL;
  v14 = (__int64)&a2->hdev;
  v62 = v12;
  if ( !a2 )
    v14 = 48LL;
  v59 = 1;
  v86 = (__int64 *)v14;
  prclDest = 0LL;
  v75 = *(_QWORD *)v14;
  v77 = 0LL;
  v78 = 0LL;
  GreAcquireSemaphore(ghsemHT);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v75) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v75, 0LL) )
    v13 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v75);
  if ( v12 == 1 )
  {
    if ( (((_DWORD)v9 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v9 == 24 )
    {
      v16 = 1LL;
      v15 = ((_DWORD)v9 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v15 = 32;
      v16 = 1LL;
      if ( !v13 )
        goto LABEL_64;
      v35 = v13[4];
      switch ( v35 )
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
      v60 = 1;
    }
LABEL_64:
    if ( v15 < (int)v9 )
      goto LABEL_119;
    goto LABEL_17;
  }
  if ( v12 != 2 )
  {
    switch ( v12 )
    {
      case 3u:
        v16 = 8LL;
        v15 = ((_DWORD)v9 + 7) & 0xFFFFFFFC;
        break;
      case 4u:
        v16 = 16LL;
        v15 = ((_DWORD)v9 + 7) & 0xFFFFFFFC;
        break;
      case 5u:
        v16 = 24LL;
        v15 = ((_DWORD)v9 + 7) & 0xFFFFFFFC;
        break;
      default:
        v15 = (int)v9;
        v16 = 32LL;
        goto LABEL_17;
    }
    goto LABEL_64;
  }
  if ( (_DWORD)v9 != 8 )
  {
    v16 = 4LL;
    v15 = ((_DWORD)v9 + 15) & 0xFFFFFFF8;
    goto LABEL_64;
  }
  v15 = 8;
  v16 = 4LL;
LABEL_17:
  v17 = v16 * (unsigned int)v15;
  if ( v17 <= 0xFFFFFFFF )
  {
    v18 = (unsigned int)v17 >> 3;
    v19 = v18 * (unsigned __int64)HIDWORD(v66);
    v72 = v19;
    if ( v19 <= 0xFFFFFFFF )
    {
      v20 = v19 + 80;
      if ( v20 >= 0x50 )
      {
        if ( p_pvScan0 )
        {
          v11 = p_pvScan0[7];
          v71 = v11;
          if ( (((_DWORD)v11 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v11 == 24 )
            v36 = ((_DWORD)v11 + 63) & 0xFFFFFFE0;
          else
            v36 = 32;
          v63 = v36;
          if ( v36 < (int)v11 )
            goto LABEL_119;
          v37 = (unsigned int)(v36 >> 3);
          v38 = v37 * HIDWORD(v71);
          v67 = v37;
          if ( v38 > 0xFFFFFFFF || (unsigned int)v38 + v20 < v20 )
            goto LABEL_119;
          v20 += v38;
        }
        v21 = v20 + 76;
        if ( v20 < 0xFFFFFFB4 )
        {
          if ( gpCachedEngbrush )
          {
            v22 = _InterlockedExchange64((volatile __int64 *)gpCachedEngbrush, 0LL);
            if ( v22 )
            {
              if ( v21 > v20 && *(_DWORD *)(v22 + 4) >= v21 )
                goto LABEL_26;
              Win32FreePool(v22);
            }
          }
          v22 = Win32AllocPoolZInit(v21, 1919051079LL);
          if ( !v22 )
            goto LABEL_119;
LABEL_26:
          v23 = v60 == 0;
          v61[1].pvRbrush = (PVOID)v22;
          v24 = (int)v9;
          *(_DWORD *)(v22 + 4) = v21;
          if ( !v23 )
            v24 = v15;
          v25 = HIDWORD(v66);
          *(_DWORD *)(v22 + 20) = v24;
          *(_QWORD *)(v22 + 32) = v22 + 76;
          v26 = v62;
          *(_DWORD *)(v22 + 72) = v62;
          *(_DWORD *)(v22 + 28) = v18;
          *(_DWORD *)(v22 + 16) = v15;
          *(_DWORD *)(v22 + 24) = v25;
          *(_QWORD *)&v78 = 0LL;
          v68 = 0LL;
          v69 = 0;
          v70 = 0;
          *(_QWORD *)&v77 = __PAIR64__(v15, v26);
          DWORD2(v77) = v25;
          DWORD2(v78) = 1;
          SURFMEM::bCreateDIB(
            (SURFMEM *)&v68,
            (struct _DEVBITMAPINFO *)&v77,
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
LABEL_118:
            SURFMEM::~SURFMEM((SURFMEM *)&v68);
            goto LABEL_119;
          }
          pptlSrc = 0LL;
          *(_QWORD *)&prclDest.left = 0LL;
          prclDest.bottom = v25;
          prclDest.right = (int)v9;
          iSolidColor = v61[2].iSolidColor;
          v28 = *(&v61[2].iSolidColor + 1);
          HTSEMOBJ::vRelease((HTSEMOBJ *)&v59);
          if ( v62 == 1 )
          {
            if ( a6 < 0xC )
              goto LABEL_31;
            if ( iSolidColor != v28 )
            {
              v39 = v61;
              goto LABEL_80;
            }
          }
          if ( v62 == 2 && (v61[3].iSolidColor & 5) != 0 )
          {
            v23 = iSolidColor == v28;
            v39 = v61;
            if ( !v23 || !_bittest((const signed __int32 *)&v61[5], 0x11u) )
            {
LABEL_80:
              v40 = 0LL;
              v85 = 0;
              v84 = 0LL;
              v41 = *v86;
              pptlHTOrg = 0LL;
              prclSrc = prclDest;
              *(_QWORD *)(v68 + 48) = v41;
              v66 = 0LL;
              if ( a6 >= 6 )
              {
                v42 = 0;
                if ( !_bittest((const signed __int32 *)&v39[5], 0x11u) )
                  goto LABEL_91;
              }
              else
              {
                v42 = 1;
              }
              v43 = v39[3].iSolidColor;
              if ( (v43 & 4) != 0 || (v43 & 1) != 0 )
              {
                v44 = *(&v39[2].iSolidColor + 1);
                if ( v42 )
                {
                  HIDWORD(v61) = v39[1].iSolidColor;
                  LODWORD(v61) = v44;
                }
                else
                {
                  LODWORD(v61) = v39[2].iSolidColor;
                  HIDWORD(v61) = v44;
                }
                if ( PALMEMOBJ::bCreatePalette(
                       (PALMEMOBJ *)&v84,
                       1u,
                       2u,
                       (const unsigned int *)&v61,
                       0,
                       0,
                       0,
                       0x400u,
                       1)
                  && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                     (__int64 *)&v66,
                                     *(_QWORD *)&v39[2].flColorType,
                                     v39[3].iSolidColor,
                                     v84,
                                     *((_QWORD *)v39[3].pvRbrush + 16),
                                     *(_QWORD *)&v39[4].iSolidColor,
                                     *(_QWORD *)&v39[4].iSolidColor,
                                     v39[2].iSolidColor,
                                     *(&v39[2].iSolidColor + 1),
                                     0xFFFFFF,
                                     0) )
                {
                  v45 = v66;
                  pxlo = v66;
                  v40 = *(_QWORD *)v79;
                  *(_QWORD *)v79 = 0LL;
                  goto LABEL_92;
                }
              }
LABEL_91:
              v45 = pxlo;
LABEL_92:
              if ( v62 == 1 && v60 )
              {
                prclDest.right = v15;
                v46 = v68 + 24;
                if ( !v68 )
                  v46 = 0LL;
                EngHTBlt(v46, v80, 0LL, 0LL, v45, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 64, 0LL);
              }
              else if ( prclDest.left != v15 )
              {
                v47 = pxlo;
                v48 = psoSrc;
                do
                {
                  v49 = (SURFOBJ *)(v68 + 24);
                  if ( !v68 )
                    v49 = 0LL;
                  EngStretchBlt(v49, v48, 0LL, 0LL, v47, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 4u);
                  right = prclDest.right;
                  prclDest.left = prclDest.right;
                  v51 = (_DWORD)v9 + prclDest.right;
                  if ( (int)v9 + prclDest.right > v15 )
                    v51 = v15;
                  prclDest.right = v51;
                }
                while ( right != v15 );
                LODWORD(v11) = (_DWORD)v71;
              }
              if ( v40 )
                *(_QWORD *)p_hdev = v40;
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v84);
LABEL_38:
              GreAcquireSemaphore(ghsemHT);
              v33 = v83;
              if ( !v83 )
              {
                *(_QWORD *)(v22 + 56) = 0LL;
LABEL_40:
                SURFMEM::~SURFMEM((SURFMEM *)&v68);
                HTSEMOBJ::vRelease((HTSEMOBJ *)&v59);
                return 1LL;
              }
              v52 = v67;
              v53 = v63;
              v54 = HIDWORD(v71);
              *(_QWORD *)(v22 + 56) = v22 + (unsigned int)v72 + 76LL;
              *(_DWORD *)(v22 + 64) = v52;
              *(_DWORD *)(v22 + 40) = v53;
              *(_DWORD *)(v22 + 44) = (_DWORD)v11;
              *(_DWORD *)(v22 + 48) = v54;
              LODWORD(v77) = 1;
              *(_QWORD *)((char *)&v77 + 4) = __PAIR64__(v54, v53);
              *(_QWORD *)&v78 = 0LL;
              DWORD2(v78) = 1;
              v55 = *(void **)(v22 + 56);
              v72 = 0LL;
              v73 = 0;
              v74 = 0;
              SURFMEM::bCreateDIB((SURFMEM *)&v72, (struct _DEVBITMAPINFO *)&v77, v55, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              if ( v72 )
              {
                pptlSrc = 0LL;
                *(_QWORD *)&prclDest.left = 0LL;
                prclDest.right = (int)v11;
                prclDest.bottom = v54;
                HTSEMOBJ::vRelease((HTSEMOBJ *)&v59);
                if ( prclDest.left != v53 )
                {
                  do
                  {
                    v56 = (SURFOBJ *)(v72 + 24);
                    if ( !v72 )
                      v56 = 0LL;
                    EngCopyBits(v56, (SURFOBJ *)(v33 + 3), 0LL, 0LL, &prclDest, &pptlSrc);
                    v57 = prclDest.right;
                    prclDest.left = prclDest.right;
                    v58 = (_DWORD)v11 + prclDest.right;
                    if ( (int)v11 + prclDest.right > v53 )
                      v58 = v53;
                    prclDest.right = v58;
                  }
                  while ( v57 != v53 );
                }
                GreAcquireSemaphore(ghsemHT);
                SURFMEM::~SURFMEM((SURFMEM *)&v72);
                goto LABEL_40;
              }
              SURFMEM::~SURFMEM((SURFMEM *)&v72);
              goto LABEL_118;
            }
          }
LABEL_31:
          if ( prclDest.left != v15 )
          {
            v29 = pxlo;
            do
            {
              if ( v68 )
                v30 = (SURFOBJ *)(v68 + 24);
              else
                v30 = 0LL;
              EngCopyBits(v30, (SURFOBJ *)v6, 0LL, v29, &prclDest, &pptlSrc);
              v31 = prclDest.right;
              prclDest.left = prclDest.right;
              v32 = (_DWORD)v9 + prclDest.right;
              if ( (int)v9 + prclDest.right > v15 )
                v32 = v15;
              prclDest.right = v32;
            }
            while ( v31 != v15 );
          }
          goto LABEL_38;
        }
      }
    }
  }
LABEL_119:
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v59);
  return 0LL;
}
