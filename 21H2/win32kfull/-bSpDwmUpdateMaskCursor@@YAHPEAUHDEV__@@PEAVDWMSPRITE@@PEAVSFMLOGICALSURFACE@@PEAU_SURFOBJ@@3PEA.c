/*
 * XREFs of ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026E770
 * Callers:
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C00EC3B4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 * Callees:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0016490 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     EngCopyBits @ 0x1C007EB40 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C026ECF4 (-vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z.c)
 */

__int64 __fastcall bSpDwmUpdateMaskCursor(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *psoSrc,
        struct _RECTL *a6,
        unsigned int *a7,
        struct SFMLOGICALSURFACE **a8)
{
  LONG cy; // eax
  unsigned int DIB; // r14d
  RECTL v11; // xmm0
  __int64 v12; // r13
  SURFOBJ *v13; // rax
  SURFOBJ *v14; // r15
  __int64 v15; // rdx
  struct DWMSPRITE *v16; // rdx
  struct SFMLOGICALSURFACE *v17; // r8
  HDEV v18; // rcx
  __int64 v19; // rdx
  SURFOBJ *psoDest; // [rsp+60h] [rbp-91h] BYREF
  XLATEOBJ *pxlo; // [rsp+68h] [rbp-89h] BYREF
  XLATEOBJ *v23; // [rsp+70h] [rbp-81h] BYREF
  __int64 v24; // [rsp+78h] [rbp-79h] BYREF
  char v25; // [rsp+80h] [rbp-71h]
  int v26; // [rsp+84h] [rbp-6Dh]
  __int64 v27; // [rsp+88h] [rbp-69h] BYREF
  char v28; // [rsp+90h] [rbp-61h]
  int v29; // [rsp+94h] [rbp-5Dh]
  _DWORD v30[2]; // [rsp+98h] [rbp-59h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp-51h]
  int v32; // [rsp+A4h] [rbp-4Dh]
  __int64 v33; // [rsp+A8h] [rbp-49h]
  __int64 v34; // [rsp+B0h] [rbp-41h]
  struct DWMSPRITE *v35; // [rsp+B8h] [rbp-39h]
  struct SFMLOGICALSURFACE **v36; // [rsp+C0h] [rbp-31h]
  struct SFMLOGICALSURFACE *v37; // [rsp+C8h] [rbp-29h]
  HDEV v38; // [rsp+D0h] [rbp-21h]
  RECTL prclDest; // [rsp+D8h] [rbp-19h] BYREF

  v36 = a8;
  v30[1] = a4->sizlBitmap.cx;
  cy = a4->sizlBitmap.cy;
  v37 = a3;
  v35 = a2;
  v38 = a1;
  v32 = 0;
  v34 = 1LL;
  v27 = 0LL;
  v28 = 0;
  v29 = 0;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v30[0] = 6;
  v31 = cy;
  v33 = 0LL;
  DIB = SURFMEM::bCreateDIB((SURFMEM *)&v27, (struct _DEVBITMAPINFO *)v30, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( DIB )
  {
    if ( psoSrc )
    {
      v31 >>= 1;
      DIB = SURFMEM::bCreateDIB((SURFMEM *)&v24, (struct _DEVBITMAPINFO *)v30, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    }
    if ( DIB )
    {
      v11 = *a6;
      v23 = 0LL;
      pxlo = 0LL;
      v12 = (v27 + 24) & -(__int64)(v27 != 0);
      prclDest = v11;
      v13 = (SURFOBJ *)((v24 + 24) & -(__int64)(v24 != 0));
      psoDest = v13;
      if ( v24 )
      {
        v14 = psoDest;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&pxlo,
                             0LL,
                             0,
                             (__int64)psoSrc[1].hdev,
                             (__int64)gppalRGB,
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0xFFFFFF,
                             0,
                             0) )
          DIB = EngCopyBits(psoDest, psoSrc, 0LL, pxlo, &prclDest, (POINTL *)&prclDest);
      }
      else
      {
        v14 = v13;
      }
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v23,
                           0LL,
                           0,
                           (__int64)ppalMono,
                           (__int64)gppalRGB,
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0xFFFFFF,
                           0,
                           0) )
      {
        prclDest.bottom += a4->sizlBitmap.cy >> 1;
        DIB = EngCopyBits((SURFOBJ *)v12, a4, 0LL, v23, &prclDest, (POINTL *)&prclDest);
      }
      if ( DIB )
      {
        LODWORD(psoDest) = 0;
        vSpDwmMaskToARGB((struct _SURFOBJ *)v12, v14, (int *)&psoDest);
        v16 = v35;
        v17 = v37;
        v18 = v38;
        *((_DWORD *)v35 + 41) = ((_DWORD)psoDest != 0 ? 4 : 0) | *((_DWORD *)v35 + 41) & 0xFFFFFFFB;
        prclDest.top += a4->sizlBitmap.cy >> 1;
        DIB = bSpDwmUpdateSpriteShape(
                v18,
                v16,
                v17,
                (struct _SURFOBJ *)v12,
                &prclDest,
                *(struct PALETTE **)(v12 + 104),
                a7,
                0LL,
                v36);
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo, v15);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23, v19);
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v24);
  SURFMEM::~SURFMEM((SURFMEM *)&v27);
  return DIB;
}
