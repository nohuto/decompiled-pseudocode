/*
 * XREFs of ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02A1830
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x1C00093E0 (EngGradientFill.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffGradientFill @ 0x1C00D6ECC (OffGradientFill.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016FC5C (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02714F8 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027BB90 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029FE80 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A4670 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A4BAC (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        struct _RECTL *a8,
        struct _POINTL *a9,
        ULONG ulMode)
{
  __int64 v11; // r12
  unsigned int v15; // r14d
  int i; // eax
  __int64 v17; // rdi
  __int64 v18; // rcx
  XLATEOBJ *v19; // rsi
  __int64 v20; // rcx
  struct PALETTE *v21; // r11
  FLONG flXlate; // r9d
  int v23; // ecx
  ULONG iUniq; // edx
  ULONG *pulXlate; // r10
  ULONG v26; // r8d
  int inited; // eax
  BOOL (__stdcall *v28)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  XLATEOBJ *v30; // [rsp+60h] [rbp-A0h] BYREF
  POINTL *pptlDitherOrg; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 **v33[7]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C0h] [rbp-40h]
  struct _CLIPOBJ *v36; // [rsp+C8h] [rbp-38h]
  LONG *v37; // [rsp+D0h] [rbp-30h]
  _BYTE v38[40]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v39; // [rsp+108h] [rbp+8h]
  char v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+114h] [rbp+14h]
  SURFOBJ *psoDest; // [rsp+138h] [rbp+38h]
  RECTL *prclExtents; // [rsp+140h] [rbp+40h]

  v11 = (__int64)pMesh;
  v32 = (__int64)pMesh;
  pptlDitherOrg = a9;
  v15 = 1;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    v39 = 0LL;
    v40 = 0;
    v41 = 0;
    MULTISURF::vInit((MULTISURF *)v38, a1, a8);
    v15 = EngGradientFill(psoDest, a2, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    MULTISURF::~MULTISURF((MULTISURF *)v38);
  }
  for ( i = MSURF::bFindSurface(v33, a1, a2, a8); i; i = MSURF::bNextSurface((MSURF *)v33) )
  {
    v17 = v35;
    v30 = 0LL;
    v18 = v34;
    if ( *(_DWORD *)(v35 + 72) <= 3u )
    {
      v19 = pxlo;
      if ( *(_DWORD *)(v34 + 24) )
      {
        v20 = *(_QWORD *)(v34 + 48);
        v21 = ppalDefault;
        if ( (*(_DWORD *)(v20 + 2140) & 0x100) != 0 )
          v21 = DrvRealizeHalftonePalette((_QWORD *)v20, 0);
        if ( pxlo )
        {
          flXlate = pxlo[1].flXlate;
          v23 = *(_DWORD *)&pxlo[1].iSrcType;
          iUniq = pxlo[1].iUniq;
        }
        else
        {
          flXlate = 0;
          v23 = 0;
          iUniq = 0;
        }
        if ( pxlo )
        {
          pulXlate = pxlo[2].pulXlate;
          v26 = pxlo[3].iUniq;
        }
        else
        {
          pulXlate = 0LL;
          v26 = 0;
        }
        inited = EXLATEOBJ::bInitXlateObj(
                   (__int64 *)&v30,
                   (__int64)pulXlate,
                   v26,
                   (__int64)gppalRGB,
                   *(_QWORD *)(v17 + 104),
                   (__int64)v21,
                   (__int64)v21,
                   flXlate,
                   v23,
                   iUniq,
                   0);
        v17 = v35;
        v18 = v34;
        if ( inited )
          v19 = v30;
        v11 = v32;
      }
    }
    else
    {
      v19 = 0LL;
    }
    if ( (*(_DWORD *)(v17 + 88) & 0x20000) != 0 )
      v28 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v18 + 56) + 3208LL);
    else
      v28 = EngGradientFill;
    v15 &= OffGradientFill(
             (__int64 (__fastcall *)(__int64, struct _CLIPOBJ *, __int64, _DWORD *, unsigned int, __int64, int, __int128 *, __int64 *, int))v28,
             v37,
             v17,
             v36,
             (__int64)v19,
             pVertex,
             nVertex,
             v11,
             nMesh,
             (__int128 *)&a8->left,
             (__int64 *)pptlDitherOrg,
             ulMode);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v30);
  }
  return v15;
}
