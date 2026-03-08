/*
 * XREFs of ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C014E3F0
 * Callers:
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C014EA10 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02B121C (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     OffBitBlt @ 0x1C001CD04 (OffBitBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00834C0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngBitBlt @ 0x1C0088BA0 (EngBitBlt.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C014E0E2 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014E322 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C014EF4E (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C014EFE2 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C014F30A (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C014F364 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z40401234@Z @ 0x1C015052E (-OffCopyBitsInternal@@YAHP6AHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C026E880 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027C420 (--1MULTISURF@@QEAA@XZ.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02B0A64 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02B447C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02B4900 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02B5568 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vRestore@MSURF@@QEAAXXZ @ 0x1C02B5634 (-vRestore@MSURF@@QEAAXXZ.c)
 */

int __fastcall MulBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        ROP4 rop4)
{
  int v13; // ebx
  struct _RECTL *v14; // rdx
  Gre::Base *v15; // rcx
  __int64 v16; // r8
  char v17; // di
  __int16 v18; // r14
  USHORT iType; // ax
  char v21; // r14
  DHPDEV dhpdev; // rdi
  struct _SURFOBJ *v23; // r8
  int v24; // r10d
  int v25; // ecx
  struct _SURFOBJ *v26; // rdx
  struct _RECTL *v27; // r8
  LONG y; // ecx
  int v29; // r12d
  struct Gre::Base::SESSION_GLOBALS *v30; // r15
  SURFOBJ *v31; // r8
  struct _XLATEOBJ *v32; // rdi
  struct _DISPSURF *v33; // rcx
  int v34; // r9d
  HDEV v35; // rcx
  PVOID *p_pvScan0; // r14
  struct _SURFOBJ *v37; // r11
  HDEV hdev; // rdi
  __int64 v39; // rdx
  struct PALETTE *v40; // rax
  int v41; // r8d
  bool v42; // zf
  struct Gre::Base::SESSION_GLOBALS *v43; // rax
  FLONG flXlate; // r15d
  int v45; // r9d
  ULONG iUniq; // r10d
  __int64 v47; // rax
  __int64 v48; // rcx
  ULONG *pulXlate; // r11
  ULONG v50; // r14d
  int inited; // eax
  int (*v52)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rcx
  BOOL (__stdcall *v53)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _POINTL v54; // [rsp+70h] [rbp-90h] BYREF
  USHORT v55; // [rsp+78h] [rbp-88h]
  struct Gre::Base::SESSION_GLOBALS *v56; // [rsp+80h] [rbp-80h]
  struct _XLATEOBJ *v57; // [rsp+88h] [rbp-78h] BYREF
  BRUSHOBJ *pbo; // [rsp+90h] [rbp-70h]
  POINTL *pptlBrush; // [rsp+98h] [rbp-68h]
  POINTL *pptlMask; // [rsp+A0h] [rbp-60h]
  SURFOBJ *psoMask; // [rsp+A8h] [rbp-58h]
  BOOL v62; // [rsp+B0h] [rbp-50h]
  struct _SURFOBJ *v63; // [rsp+B8h] [rbp-48h]
  _DWORD v64[4]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v65[12]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL v66; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v67[56]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v68; // [rsp+148h] [rbp+48h]
  struct _SURFOBJ *v69; // [rsp+150h] [rbp+50h]
  struct _CLIPOBJ *v70; // [rsp+158h] [rbp+58h]
  struct _POINTL *v71; // [rsp+160h] [rbp+60h]
  _BYTE v72[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v73; // [rsp+198h] [rbp+98h]
  char v74; // [rsp+1A0h] [rbp+A0h]
  int v75; // [rsp+1A4h] [rbp+A4h]
  SURFOBJ *psoSrc; // [rsp+1C8h] [rbp+C8h]
  POINTL *pptlSrc; // [rsp+1D0h] [rbp+D0h]
  _BYTE v78[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v79; // [rsp+208h] [rbp+108h]
  char v80; // [rsp+210h] [rbp+110h]
  int v81; // [rsp+214h] [rbp+114h]
  SURFOBJ *psoTrg; // [rsp+238h] [rbp+138h]
  RECTL *prclTrg; // [rsp+240h] [rbp+140h]

  pbo = a9;
  pptlMask = a8;
  psoMask = a3;
  v63 = a2;
  pptlBrush = a10;
  v54 = (struct _POINTL)a6;
  v13 = 0;
  v62 = IsMetaDevBitmapForMirroring(a1);
  if ( !v16 || (v17 = 1, *(_WORD *)(v16 + 76) != 1) )
    v17 = 0;
  v18 = *((_WORD *)v15 + 38);
  v66 = *v14;
  v56 = Gre::Base::Globals(v15);
  if ( !v17 )
  {
    iType = a1->iType;
    v21 = 1;
    dhpdev = a1->dhpdev;
    LODWORD(v57) = 1;
    v55 = iType;
    if ( iType && (unsigned int)MSURF::bFindSurface((MSURF *)v67, a1, a4, *(struct _RECTL **)&v54) )
    {
      v23 = (struct _SURFOBJ *)*((_QWORD *)dhpdev + 6);
      v24 = *((_DWORD *)dhpdev + 4);
      v25 = ((unsigned __int16)rop4 ^ (unsigned __int16)(rop4 >> 4)) & 0xF0F;
    }
    else
    {
      v21 = 0;
      v25 = 0;
      v23 = 0LL;
      dhpdev = 0LL;
      v24 = 0;
    }
    MULTIBRUSH::MULTIBRUSH(
      (MULTIBRUSH *)v65,
      (struct _BRUSHOBJ *)((unsigned __int64)pbo & -(__int64)(v21 != 0)),
      v24,
      (struct _VDEV *)dhpdev,
      v23,
      v25);
    v26 = v63;
    v73 = 0LL;
    v74 = 0;
    v75 = 0;
    if ( v63 )
    {
      v27 = (struct _RECTL *)v64;
      y = a7->y;
      v64[0] = a7->x;
      v64[1] = y;
      v64[3] = v66.bottom + y - v66.top;
      v64[2] = v66.right + v64[0] - v66.left;
    }
    else
    {
      v27 = 0LL;
      v26 = 0LL;
    }
    MULTISURF::vInit((MULTISURF *)v72, v26, v27);
    if ( !v62 && v55 )
    {
      v29 = (int)v57;
    }
    else
    {
      v79 = 0LL;
      v80 = 0;
      v81 = 0;
      MULTISURF::vInit((MULTISURF *)v78, a1, *(struct _RECTL **)&v54);
      v29 = EngBitBlt(psoTrg, psoSrc, psoMask, a4, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      MULTISURF::~MULTISURF((MULTISURF *)v78);
    }
    if ( !v21 )
    {
LABEL_67:
      v13 = v29;
      goto LABEL_68;
    }
    if ( !v65[0] )
    {
      MSURF::vRestore((MSURF *)v67);
LABEL_68:
      MULTISURF::~MULTISURF((MULTISURF *)v72);
      return v13;
    }
    v30 = v56;
    while ( 1 )
    {
      v57 = 0LL;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v72, v68) )
        goto LABEL_65;
      v31 = psoSrc;
      v32 = pxlo;
      v33 = v68;
      if ( !psoSrc )
        goto LABEL_56;
      v34 = *((_DWORD *)v68 + 6);
      if ( !v34 )
        goto LABEL_56;
      v35 = (HDEV)*((_QWORD *)v68 + 6);
      p_pvScan0 = &psoSrc[-1].pvScan0;
      v37 = v69;
      hdev = psoSrc[1].hdev;
      v39 = *((_QWORD *)v30 + 750);
      v42 = ((_DWORD)v35[535] & 0x100) == 0;
      v54 = (struct _POINTL)v69;
      if ( v42 )
      {
        if ( v34 > 0 && pxlo && *(_QWORD *)&pxlo[2].iSrcType )
          v39 = *(_QWORD *)&pxlo[2].iSrcType;
      }
      else
      {
        v40 = DrvRealizeHalftonePalette(v35, 0);
        v31 = psoSrc;
        v39 = (__int64)v40;
        v37 = (struct _SURFOBJ *)v54;
      }
      if ( !hdev )
      {
        if ( !pxlo )
          goto LABEL_39;
        if ( pxlo[1].pulXlate )
        {
          hdev = (HDEV)pxlo[1].pulXlate;
          v41 = 0;
          goto LABEL_43;
        }
        if ( (pxlo->flXlate & 1) != 0 )
        {
LABEL_39:
          v42 = v31 == v63;
        }
        else
        {
          v39 = *(_QWORD *)&pxlo[2].iSrcType;
          if ( !v39 )
            goto LABEL_65;
          v42 = *((_DWORD *)p_pvScan0 + 24) == a1->iBitmapFormat;
        }
        if ( v42 )
          hdev = a1[1].hdev;
      }
      v41 = 0;
      if ( !hdev )
      {
        v43 = v56;
        goto LABEL_48;
      }
LABEL_43:
      v43 = v56;
      if ( ((_DWORD)hdev[6] & 0x800) != 0 )
      {
        if ( v39 == *((_QWORD *)v56 + 750) )
          v41 = 0x2000;
        else
          v41 = 0x4000;
      }
LABEL_48:
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
      v47 = *((_QWORD *)v43 + 750);
      v48 = (__int64)v37[1].hdev;
      if ( pxlo )
      {
        pulXlate = pxlo[2].pulXlate;
        v50 = pxlo[3].iUniq;
      }
      else
      {
        pulXlate = 0LL;
        v50 = 0;
      }
      inited = EXLATEOBJ::bInitXlateObj(
                 (Gre::Base *)&v57,
                 (__int64)pulXlate,
                 v50,
                 (__int64)hdev,
                 v48,
                 v47,
                 v39,
                 flXlate,
                 v45,
                 iUniq,
                 v41);
      v30 = v56;
      if ( inited )
      {
        v32 = v57;
        v33 = v68;
        v31 = psoSrc;
LABEL_56:
        v54 = 0LL;
        if ( rop4 == 52428 )
        {
          if ( ((__int64)v69[1].hsurf & 0x400) != 0 )
            v52 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*((_QWORD *)v33 + 7) + 2816LL);
          else
            v52 = EngCopyBits;
          v29 &= OffCopyBitsInternal(v52, v71, v69, &v54, v31, v70, v32, &v66, pptlSrc);
        }
        else
        {
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v65, v33, (struct SURFACE *)&v69[-1].pvScan0);
          v54 = 0LL;
          if ( ((__int64)v69[1].hsurf & 1) != 0 )
            v53 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v68 + 7) + 2808LL);
          else
            v53 = EngBitBlt;
          v29 &= OffBitBlt(
                   (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v53,
                   (int *)v71,
                   (__int64)v69,
                   &v54,
                   (__int64)psoSrc,
                   (__int64)psoMask,
                   v70,
                   (__int64)v32,
                   &v66.left,
                   (__int64 *)pptlSrc,
                   (__int64)pptlMask,
                   (__int64)pbo,
                   (__int64 *)pptlBrush,
                   rop4);
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v65, *((_DWORD *)v68 + 4));
        }
        goto LABEL_66;
      }
LABEL_65:
      v29 = 0;
LABEL_66:
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v57);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v67) )
        goto LABEL_67;
    }
  }
  if ( v18 == 1 )
    return bBitBltScreenToScreen(a1, psoMask, a4, pxlo, &v66, a7, pptlMask, pbo, pptlBrush, rop4);
  else
    return bBitBltFromScreen(a1, v63, psoMask, a4, pxlo, &v66, a7, pptlMask, pbo, pptlBrush, rop4);
}
