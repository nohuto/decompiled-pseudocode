/*
 * XREFs of ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02A5540
 * Callers:
 *     <none>
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngTransparentBlt @ 0x1C00D07E0 (EngTransparentBlt.c)
 *     OffTransparentBlt @ 0x1C010EFFC (OffTransparentBlt.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C0273854 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027E020 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A14D0 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A2628 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02A67F0 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A6AFC (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A6C44 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A7184 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v8; // esi
  struct _RECTL *v9; // rdi
  HDEV hdev; // rax
  struct _SURFOBJ *v13; // r13
  struct _RECTL v15; // xmm0
  BOOL v16; // ebx
  int Surface; // eax
  int v18; // r15d
  struct _SURFOBJ *v19; // rdi
  int v20; // ebx
  int Source; // eax
  __int64 v22; // rdx
  BOOL v23; // r12d
  SURFOBJ *v24; // r8
  struct _XLATEOBJ *v25; // r15
  PVOID *p_pvScan0; // rax
  ULONG *pulXlate; // rbx
  __int64 v28; // rcx
  struct PALETTE *v29; // rdx
  struct PALETTE *v30; // rax
  int v31; // r8d
  ULONG iUniq; // edi
  int v33; // r11d
  FLONG flXlate; // r9d
  ULONG v35; // r10d
  ULONG *v36; // rdx
  int inited; // eax
  bool v38; // zf
  int v39; // r9d
  PVOID v40; // rbx
  unsigned int v41; // eax
  int NearestIndexFromColorref; // eax
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  int v44; // eax
  BOOL v46; // [rsp+60h] [rbp-A0h]
  PVOID *v47; // [rsp+68h] [rbp-98h]
  struct PALETTE *v48; // [rsp+70h] [rbp-90h]
  struct _XLATEOBJ *v49; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  char v52; // [rsp+98h] [rbp-68h]
  int v53; // [rsp+9Ch] [rbp-64h]
  _BYTE v54[40]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-38h]
  char v56; // [rsp+D0h] [rbp-30h]
  int v57; // [rsp+D4h] [rbp-2Ch]
  SURFOBJ *psoSrc; // [rsp+F8h] [rbp-8h]
  RECTL *prclSrc; // [rsp+100h] [rbp+0h]
  _BYTE v60[56]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v61; // [rsp+148h] [rbp+48h]
  int v62[2]; // [rsp+150h] [rbp+50h]
  struct _CLIPOBJ *v63; // [rsp+158h] [rbp+58h]
  int v64[2]; // [rsp+160h] [rbp+60h]
  _BYTE v65[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v66; // [rsp+198h] [rbp+98h]
  char v67; // [rsp+1A0h] [rbp+A0h]
  int v68; // [rsp+1A4h] [rbp+A4h]
  SURFOBJ *psoDst; // [rsp+1C8h] [rbp+C8h]
  RECTL *prclDst; // [rsp+1D0h] [rbp+D0h]
  struct _RECTL v71; // [rsp+1E0h] [rbp+E0h] BYREF

  v8 = 0;
  v9 = a6;
  hdev = a2->hdev;
  v13 = a2;
  v50 = a1;
  v51 = 0LL;
  v15 = *a6;
  v52 = 0;
  v53 = 0;
  v71 = v15;
  if ( a2->iType != 1 || !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
LABEL_8:
    v46 = 1;
    v16 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface((MSURF *)v60, a1, a3, a5);
    v55 = 0LL;
    v56 = 0;
    v57 = 0;
    v18 = Surface;
    MULTISURF::vInit((MULTISURF *)v54, v13, v9);
    v19 = v50;
    if ( v16 )
    {
      v66 = 0LL;
      v67 = 0;
      v68 = 0;
      MULTISURF::vInit((MULTISURF *)v65, v50, a5);
      v46 = EngTransparentBlt(psoDst, psoSrc, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
      v20 = v46;
      MULTISURF::~MULTISURF((MULTISURF *)v65);
    }
    else
    {
      v20 = 1;
    }
    if ( !v18 )
    {
LABEL_63:
      v8 = v20;
      MULTISURF::~MULTISURF((MULTISURF *)v54);
      goto LABEL_64;
    }
    while ( 1 )
    {
      v49 = 0LL;
      Source = MULTISURF::bLoadSource((MULTISURF *)v54, v61);
      v23 = Source == 0;
      *(_QWORD *)&v71.left = *(_QWORD *)v62;
      if ( !Source )
        goto LABEL_61;
      v24 = psoSrc;
      v25 = a4;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      v47 = &psoSrc[-1].pvScan0;
      if ( *((_DWORD *)v61 + 6) )
        break;
LABEL_51:
      v22 = iTransColor;
      v39 = iTransColor;
      if ( v24 != v13 )
      {
        v40 = p_pvScan0[16];
        v41 = ulIndexToRGB(v13[1].hdev, ppalDefault, iTransColor);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v40, ppalDefault, v41, 1LL);
        v24 = psoSrc;
        v39 = NearestIndexFromColorref;
      }
      if ( !v23 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)v62 + 88LL) & 0x8000) != 0 )
          v43 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v61 + 7) + 3280LL);
        else
          v43 = EngTransparentBlt;
        if ( v24->iType == 1 && v47[6] != *(PVOID *)(*(_QWORD *)&v71.left + 24LL) )
          v43 = EngTransparentBlt;
        v20 = OffTransparentBlt(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, int, int))v43,
                *(LONG **)v64,
                *(__int64 *)v62,
                (int *)&gptlZero,
                (__int64)v24,
                v63,
                (__int64)v25,
                (__int128 *)&a5->left,
                (__int128 *)&prclSrc->left,
                v39,
                ulReserved) & v46;
        goto LABEL_62;
      }
LABEL_61:
      v20 = 0;
LABEL_62:
      v46 = v20;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v49, v22);
      v44 = MSURF::bNextSurface((MSURF *)v60);
      v19 = v50;
      if ( !v44 )
        goto LABEL_63;
    }
    pulXlate = (ULONG *)p_pvScan0[16];
    v28 = *((_QWORD *)v61 + 6);
    v29 = ppalDefault;
    v48 = ppalDefault;
    if ( (*(_DWORD *)(v28 + 2172) & 0x100) != 0 )
    {
      v30 = DrvRealizeHalftonePalette((_QWORD *)v28, 0);
      v24 = psoSrc;
      v29 = v30;
      v48 = v30;
    }
    if ( !pulXlate )
    {
      if ( !a4 )
        goto LABEL_25;
      if ( a4[1].pulXlate )
      {
        pulXlate = a4[1].pulXlate;
LABEL_28:
        v31 = 0;
        if ( pulXlate )
        {
          if ( (pulXlate[6] & 0x800) != 0 )
          {
            v31 = 0x4000;
            if ( v29 == ppalDefault )
              v31 = 0x2000;
          }
        }
        if ( a4 )
          iUniq = a4[1].iUniq;
        else
          iUniq = 0;
        if ( a4 )
          v33 = *(_DWORD *)&a4[1].iSrcType;
        else
          v33 = 0;
        if ( a4 )
          flXlate = a4[1].flXlate;
        else
          flXlate = 0;
        if ( a4 )
          v35 = a4[3].iUniq;
        else
          v35 = 0;
        if ( a4 )
          v36 = a4[2].pulXlate;
        else
          v36 = 0LL;
        inited = EXLATEOBJ::bInitXlateObj(
                   (__int64 *)&v49,
                   (__int64)v36,
                   v35,
                   (__int64)pulXlate,
                   *(_QWORD *)(*(_QWORD *)&v71.left + 104LL),
                   (__int64)ppalDefault,
                   (__int64)v48,
                   flXlate,
                   v33,
                   iUniq,
                   v31);
        v24 = psoSrc;
        v38 = inited == 0;
        p_pvScan0 = v47;
        if ( v38 )
        {
          v23 = 1;
          v25 = a4;
        }
        else
        {
          v25 = v49;
        }
        goto LABEL_51;
      }
      if ( (a4->flXlate & 1) != 0 )
      {
LABEL_25:
        if ( v24 == v13 )
          pulXlate = (ULONG *)v19[1].hdev;
      }
      else
      {
        if ( *(_QWORD *)&a4[2].iSrcType )
        {
          v29 = *(struct PALETTE **)&a4[2].iSrcType;
          v48 = v29;
          if ( *((_DWORD *)v47 + 24) == v19->iBitmapFormat )
            pulXlate = (ULONG *)v19[1].hdev;
          goto LABEL_28;
        }
        v23 = 1;
      }
    }
    v25 = a4;
    if ( v23 )
    {
      p_pvScan0 = v47;
      goto LABEL_51;
    }
    goto LABEL_28;
  }
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v51, &v71) )
  {
    if ( !v51 )
    {
      v8 = 1;
      goto LABEL_64;
    }
    v9 = &v71;
    v13 = (struct _SURFOBJ *)(v51 + 24);
    goto LABEL_8;
  }
LABEL_64:
  SURFMEM::~SURFMEM((SURFMEM *)&v51);
  return v8;
}
