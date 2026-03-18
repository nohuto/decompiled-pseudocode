/*
 * XREFs of ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C016F090
 * Callers:
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C016F660 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A0698 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     EngBitBlt @ 0x1C0005C00 (EngBitBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C0114EC4 (OffBitBlt.c)
 *     OffCopyBits @ 0x1C01568A8 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C016FBC8 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016FC5C (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02714F8 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027BB90 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C029FBD8 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029FE80 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C029FEC0 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A38B8 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A3D30 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A4524 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A4670 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A4BAC (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vRestore@MSURF@@QEAAXXZ @ 0x1C02A4C68 (-vRestore@MSURF@@QEAAXXZ.c)
 */

int __fastcall MulBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *pxlo,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        ROP4 rop4)
{
  int v13; // ebx
  struct _RECTL *v14; // rdx
  struct _BRUSHOBJ *v15; // r8
  struct _POINTL *v16; // r9
  struct _SURFOBJ *v17; // r10
  struct _SURFOBJ *v18; // r11
  char v19; // cl
  USHORT iType; // si
  DHPDEV dhpdev; // r14
  char v23; // r15
  struct _SURFOBJ *v24; // r8
  int v25; // r10d
  int v26; // ecx
  struct _SURFOBJ *v27; // rdx
  struct _RECTL *v28; // r8
  LONG y; // ecx
  struct _SURFOBJ *v30; // r14
  int v31; // r13d
  SURFOBJ *v32; // r8
  struct _XLATEOBJ *v33; // rsi
  struct _DISPSURF *v34; // rcx
  int v35; // r9d
  HDEV v36; // rcx
  PVOID *p_pvScan0; // r15
  struct _RECTL *v38; // r11
  HDEV hdev; // rsi
  struct PALETTE *v40; // rdx
  struct PALETTE *v41; // rax
  bool v42; // zf
  int v43; // r8d
  FLONG flXlate; // r12d
  int v45; // r9d
  ULONG iUniq; // r10d
  __int64 v47; // rcx
  ULONG *pulXlate; // r11
  ULONG v49; // r15d
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _XLATEOBJ *v52; // [rsp+70h] [rbp-90h] BYREF
  int v53; // [rsp+78h] [rbp-88h]
  BRUSHOBJ *pbo; // [rsp+80h] [rbp-80h]
  struct _RECTL *v55; // [rsp+88h] [rbp-78h]
  struct _SURFOBJ *v56; // [rsp+90h] [rbp-70h]
  struct _SURFOBJ *v57; // [rsp+98h] [rbp-68h]
  POINTL *pptlBrush; // [rsp+A0h] [rbp-60h]
  POINTL *pptlMask; // [rsp+A8h] [rbp-58h]
  SURFOBJ *psoMask; // [rsp+B0h] [rbp-50h]
  _DWORD v61[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v62[12]; // [rsp+C8h] [rbp-38h] BYREF
  struct _RECTL v63; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v64[56]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v65; // [rsp+148h] [rbp+48h]
  int v66[2]; // [rsp+150h] [rbp+50h]
  struct _CLIPOBJ *v67; // [rsp+158h] [rbp+58h]
  int v68[2]; // [rsp+160h] [rbp+60h]
  _BYTE v69[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v70; // [rsp+198h] [rbp+98h]
  char v71; // [rsp+1A0h] [rbp+A0h]
  int v72; // [rsp+1A4h] [rbp+A4h]
  SURFOBJ *psoSrc; // [rsp+1C8h] [rbp+C8h]
  POINTL *pptlSrc; // [rsp+1D0h] [rbp+D0h]
  _BYTE v75[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v76; // [rsp+208h] [rbp+108h]
  char v77; // [rsp+210h] [rbp+110h]
  int v78; // [rsp+214h] [rbp+114h]
  SURFOBJ *psoTrg; // [rsp+238h] [rbp+138h]
  RECTL *prclTrg; // [rsp+240h] [rbp+140h]

  psoMask = a3;
  v57 = a2;
  pbo = a9;
  v55 = a6;
  pptlMask = a8;
  v56 = a1;
  pptlBrush = a10;
  v13 = 0;
  v53 = IsMetaDevBitmapForMirroring(a1);
  if ( !v18 || (v19 = 1, v18->iType != 1) )
    v19 = 0;
  iType = v17->iType;
  v63 = *v14;
  if ( !v19 )
  {
    dhpdev = v17->dhpdev;
    LODWORD(v52) = 1;
    if ( iType && (unsigned int)MSURF::bFindSurface((MSURF *)v64, v17, a4, v14) )
    {
      v23 = 1;
      v24 = (struct _SURFOBJ *)*((_QWORD *)dhpdev + 6);
      v25 = *((_DWORD *)dhpdev + 4);
      v26 = ((unsigned __int16)rop4 ^ (unsigned __int16)(rop4 >> 4)) & 0xF0F;
    }
    else
    {
      v23 = 0;
      v26 = 0;
      v24 = 0LL;
      dhpdev = 0LL;
      v25 = 0;
    }
    MULTIBRUSH::MULTIBRUSH(
      (MULTIBRUSH *)v62,
      (struct _BRUSHOBJ *)((unsigned __int64)pbo & -(__int64)(v23 != 0)),
      v25,
      (struct _VDEV *)dhpdev,
      v24,
      v26);
    v27 = v57;
    v70 = 0LL;
    v71 = 0;
    v72 = 0;
    if ( v57 )
    {
      v28 = (struct _RECTL *)v61;
      y = a7->y;
      v61[0] = a7->x;
      v61[1] = y;
      v61[3] = v63.bottom + y - v63.top;
      v61[2] = v63.right + v61[0] - v63.left;
    }
    else
    {
      v28 = 0LL;
      v27 = 0LL;
    }
    MULTISURF::vInit((MULTISURF *)v69, v27, v28);
    if ( !v53 && iType )
    {
      v30 = v56;
      v31 = (int)v52;
    }
    else
    {
      v30 = v56;
      v76 = 0LL;
      v77 = 0;
      v78 = 0;
      MULTISURF::vInit((MULTISURF *)v75, v56, v55);
      v31 = EngBitBlt(psoTrg, psoSrc, psoMask, a4, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      MULTISURF::~MULTISURF((MULTISURF *)v75);
    }
    if ( !v23 )
    {
LABEL_64:
      v13 = v31;
      goto LABEL_65;
    }
    if ( !v62[0] )
    {
      MSURF::vRestore((MSURF *)v64);
LABEL_65:
      MULTISURF::~MULTISURF((MULTISURF *)v69);
      return v13;
    }
    while ( 1 )
    {
      v52 = 0LL;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v69, v65) )
        goto LABEL_62;
      v32 = psoSrc;
      v33 = pxlo;
      v34 = v65;
      if ( !psoSrc )
        goto LABEL_53;
      v35 = *((_DWORD *)v65 + 6);
      if ( !v35 )
        goto LABEL_53;
      v36 = (HDEV)*((_QWORD *)v65 + 6);
      p_pvScan0 = &psoSrc[-1].pvScan0;
      v38 = *(struct _RECTL **)v66;
      hdev = psoSrc[1].hdev;
      v42 = ((_DWORD)v36[535] & 0x100) == 0;
      v40 = ppalDefault;
      v55 = *(struct _RECTL **)v66;
      if ( v42 )
      {
        if ( v35 > 0 && pxlo && *(_QWORD *)&pxlo[2].iSrcType )
          v40 = *(struct PALETTE **)&pxlo[2].iSrcType;
      }
      else
      {
        v41 = DrvRealizeHalftonePalette(v36, 0);
        v32 = psoSrc;
        v40 = v41;
        v38 = v55;
      }
      if ( hdev )
        goto LABEL_41;
      if ( !pxlo )
        goto LABEL_38;
      if ( !pxlo[1].pulXlate )
        break;
      hdev = (HDEV)pxlo[1].pulXlate;
LABEL_42:
      v43 = 0;
      if ( ((_DWORD)hdev[6] & 0x800) != 0 )
      {
        v43 = 0x4000;
        if ( v40 == ppalDefault )
          v43 = 0x2000;
      }
LABEL_45:
      if ( pxlo )
      {
        flXlate = pxlo[1].flXlate;
        v45 = *(_DWORD *)&pxlo[1].iSrcType;
        iUniq = pxlo[1].iUniq;
      }
      else
      {
        flXlate = 0;
        v45 = 0;
        iUniq = 0;
      }
      v47 = *(_QWORD *)&v38[6].right;
      if ( pxlo )
      {
        pulXlate = pxlo[2].pulXlate;
        v49 = pxlo[3].iUniq;
      }
      else
      {
        pulXlate = 0LL;
        v49 = 0;
      }
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           (__int64 *)&v52,
                           (__int64)pulXlate,
                           v49,
                           (__int64)hdev,
                           v47,
                           (__int64)ppalDefault,
                           (__int64)v40,
                           flXlate,
                           v45,
                           iUniq,
                           v43) )
      {
        v33 = v52;
        v34 = v65;
        v32 = psoSrc;
LABEL_53:
        if ( rop4 == 52428 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)v66 + 88LL) & 0x400) != 0 )
            v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v34 + 7) + 2816LL);
          else
            v50 = EngCopyBits;
          v31 &= OffCopyBits(
                   (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v50,
                   *(LONG **)v68,
                   *(__int64 *)v66,
                   (int *)&gptlZero,
                   (__int64)v32,
                   v67,
                   (__int64)v33,
                   &v63,
                   pptlSrc);
        }
        else
        {
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v62, v34, (struct SURFACE *)(*(_QWORD *)v66 - 24LL));
          if ( (*(_DWORD *)(*(_QWORD *)v66 + 88LL) & 1) != 0 )
            v51 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v65 + 7) + 2808LL);
          else
            v51 = EngBitBlt;
          v31 &= OffBitBlt(
                   (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v51,
                   *(LONG **)v68,
                   *(__int64 *)v66,
                   &gptlZero,
                   (__int64)psoSrc,
                   (__int64)psoMask,
                   v67,
                   (__int64)v33,
                   &v63.left,
                   (__int64 *)pptlSrc,
                   (__int64)pptlMask,
                   (__int64)pbo,
                   (__int64 *)pptlBrush,
                   rop4);
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v62, *((_DWORD *)v65 + 4));
        }
        goto LABEL_63;
      }
LABEL_62:
      v31 = 0;
LABEL_63:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v52);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v64) )
        goto LABEL_64;
    }
    if ( (pxlo->flXlate & 1) != 0 )
    {
LABEL_38:
      v42 = v32 == v57;
    }
    else
    {
      v40 = *(struct PALETTE **)&pxlo[2].iSrcType;
      if ( !v40 )
        goto LABEL_62;
      v42 = *((_DWORD *)p_pvScan0 + 24) == v30->iBitmapFormat;
    }
    if ( v42 )
      hdev = v30[1].hdev;
LABEL_41:
    v43 = 0;
    if ( !hdev )
      goto LABEL_45;
    goto LABEL_42;
  }
  if ( iType == 1 )
    return bBitBltScreenToScreen(v17, a3, a4, pxlo, &v63, a7, v16, v15, a10, rop4);
  else
    return bBitBltFromScreen(v17, v18, a3, a4, pxlo, &v63, a7, v16, v15, a10, rop4);
}
