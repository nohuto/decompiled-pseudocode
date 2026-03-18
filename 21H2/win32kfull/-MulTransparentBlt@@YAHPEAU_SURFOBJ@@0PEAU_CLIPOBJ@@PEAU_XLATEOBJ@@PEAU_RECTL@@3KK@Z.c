/*
 * XREFs of ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02A32C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffTransparentBlt @ 0x1C00D6B88 (OffTransparentBlt.c)
 *     EngTransparentBlt @ 0x1C0111310 (EngTransparentBlt.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016FC5C (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02714F8 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027BB90 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029FE80 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A0698 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A4524 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A4670 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A4BAC (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
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
  unsigned int v8; // edi
  struct _RECTL *v9; // r14
  HDEV hdev; // rax
  struct _SURFOBJ *v13; // r12
  struct _RECTL v15; // xmm0
  BOOL v16; // ebx
  int Surface; // eax
  int v18; // r15d
  int v19; // ebx
  SURFOBJ *v20; // r8
  struct _XLATEOBJ *v21; // r15
  int v22; // ebx
  __int64 v23; // r12
  PVOID *p_pvScan0; // r14
  __int64 v25; // r13
  __int64 v26; // rcx
  HDEV pulXlate; // r14
  struct PALETTE *v28; // rdx
  struct PALETTE *v29; // rax
  int v30; // r9d
  unsigned int v31; // eax
  int NearestIndexFromColorref; // eax
  int v33; // r8d
  int v34; // r9d
  ULONG iUniq; // r10d
  ULONG *v36; // r11
  ULONG v37; // r15d
  int inited; // eax
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  BOOL v41; // [rsp+60h] [rbp-A0h]
  FLONG flXlate; // [rsp+64h] [rbp-9Ch]
  PVOID *v43; // [rsp+68h] [rbp-98h]
  struct _SURFOBJ *v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  char v47; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+94h] [rbp-6Ch]
  _BYTE v49[40]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-38h]
  char v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D4h] [rbp-2Ch]
  SURFOBJ *psoSrc; // [rsp+F8h] [rbp-8h]
  RECTL *prclSrc; // [rsp+100h] [rbp+0h]
  __int64 **v55[7]; // [rsp+110h] [rbp+10h] BYREF
  struct _DISPSURF *v56; // [rsp+148h] [rbp+48h]
  int v57[2]; // [rsp+150h] [rbp+50h]
  struct _CLIPOBJ *v58; // [rsp+158h] [rbp+58h]
  int v59[2]; // [rsp+160h] [rbp+60h]
  _BYTE v60[40]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v61; // [rsp+198h] [rbp+98h]
  char v62; // [rsp+1A0h] [rbp+A0h]
  int v63; // [rsp+1A4h] [rbp+A4h]
  SURFOBJ *psoDst; // [rsp+1C8h] [rbp+C8h]
  RECTL *prclDst; // [rsp+1D0h] [rbp+D0h]
  struct _RECTL v66; // [rsp+1E0h] [rbp+E0h] BYREF

  v8 = 0;
  v9 = a6;
  hdev = a2->hdev;
  v13 = a2;
  v45 = a2;
  v15 = *a6;
  v46 = 0LL;
  v47 = 0;
  v66 = v15;
  v48 = 0;
  if ( a2->iType != 1 || !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
  {
LABEL_8:
    v41 = 1;
    v16 = IsMetaDevBitmapForMirroring(a1);
    Surface = MSURF::bFindSurface(v55, a1, a3, a5);
    v50 = 0LL;
    v51 = 0;
    v52 = 0;
    v18 = Surface;
    MULTISURF::vInit((MULTISURF *)v49, v13, v9);
    if ( v16 )
    {
      v61 = 0LL;
      v62 = 0;
      v63 = 0;
      MULTISURF::vInit((MULTISURF *)v60, a1, a5);
      v41 = EngTransparentBlt(psoDst, psoSrc, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
      v19 = v41;
      MULTISURF::~MULTISURF((MULTISURF *)v60);
    }
    else
    {
      v19 = 1;
    }
    if ( !v18 )
    {
LABEL_52:
      v8 = v19;
      MULTISURF::~MULTISURF((MULTISURF *)v49);
      goto LABEL_53;
    }
    while ( 1 )
    {
      *(_QWORD *)&v66.left = 0LL;
      if ( !(unsigned int)MULTISURF::bLoadSource((MULTISURF *)v49, v56) )
        goto LABEL_50;
      v20 = psoSrc;
      v21 = a4;
      v22 = 0;
      v23 = *(_QWORD *)v57 - 24LL;
      p_pvScan0 = &psoSrc[-1].pvScan0;
      v25 = *(_QWORD *)v57 - 24LL;
      v43 = &psoSrc[-1].pvScan0;
      if ( *((_DWORD *)v56 + 6) )
        break;
LABEL_25:
      v30 = iTransColor;
      if ( v20 != v45 )
      {
        v31 = ulIndexToRGB(v45[1].hdev, ppalDefault, iTransColor);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(p_pvScan0[16], ppalDefault, v31, 1LL);
        v20 = psoSrc;
        v30 = NearestIndexFromColorref;
      }
      if ( !v22 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)v57 + 88LL) & 0x8000) != 0 )
          v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)v56 + 7) + 3256LL);
        else
          v39 = EngTransparentBlt;
        if ( v20->iType == 1 && p_pvScan0[6] != *(PVOID *)(v25 + 48) )
          v39 = EngTransparentBlt;
        v19 = OffTransparentBlt(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, int, int))v39,
                *(LONG **)v59,
                *(__int64 *)v57,
                (int *)&gptlZero,
                (__int64)v20,
                v58,
                (__int64)v21,
                (__int128 *)&a5->left,
                (__int128 *)&prclSrc->left,
                v30,
                ulReserved) & v41;
        goto LABEL_51;
      }
LABEL_50:
      v19 = 0;
LABEL_51:
      v41 = v19;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
      if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v55) )
        goto LABEL_52;
    }
    v26 = *((_QWORD *)v56 + 6);
    pulXlate = (HDEV)p_pvScan0[16];
    v28 = ppalDefault;
    if ( (*(_DWORD *)(v26 + 2140) & 0x100) != 0 )
    {
      v29 = DrvRealizeHalftonePalette((_QWORD *)v26, 0);
      v20 = psoSrc;
      v28 = v29;
    }
    if ( !pulXlate )
    {
      if ( !a4 )
        goto LABEL_27;
      if ( a4[1].pulXlate )
      {
        pulXlate = (HDEV)a4[1].pulXlate;
        goto LABEL_30;
      }
      if ( (a4->flXlate & 1) != 0 )
      {
LABEL_27:
        if ( v20 == v45 )
          pulXlate = a1[1].hdev;
      }
      else
      {
        v28 = *(struct PALETTE **)&a4[2].iSrcType;
        if ( !v28 )
        {
          v22 = 1;
          p_pvScan0 = v43;
          goto LABEL_25;
        }
        if ( *((_DWORD *)v43 + 24) == a1->iBitmapFormat )
          pulXlate = a1[1].hdev;
      }
    }
    v33 = 0;
    if ( !pulXlate )
    {
LABEL_33:
      v25 = v23;
      if ( a4 )
      {
        v34 = *(_DWORD *)&a4[1].iSrcType;
        iUniq = a4[1].iUniq;
        flXlate = a4[1].flXlate;
      }
      else
      {
        flXlate = 0;
        v34 = 0;
        iUniq = 0;
      }
      if ( a4 )
      {
        v36 = a4[2].pulXlate;
        v37 = a4[3].iUniq;
      }
      else
      {
        v36 = 0LL;
        v37 = 0;
      }
      inited = EXLATEOBJ::bInitXlateObj(
                 (__int64 *)&v66.left,
                 (__int64)v36,
                 v37,
                 (__int64)pulXlate,
                 *(_QWORD *)(v23 + 128),
                 (__int64)ppalDefault,
                 (__int64)v28,
                 flXlate,
                 v34,
                 iUniq,
                 v33);
      v20 = psoSrc;
      p_pvScan0 = v43;
      if ( inited )
      {
        v21 = *(struct _XLATEOBJ **)&v66.left;
      }
      else
      {
        v22 = 1;
        v21 = a4;
      }
      goto LABEL_25;
    }
LABEL_30:
    v33 = 0;
    if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
    {
      v33 = 0x4000;
      if ( v28 == ppalDefault )
        v33 = 0x2000;
    }
    goto LABEL_33;
  }
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v46, &v66) )
  {
    if ( !v46 )
    {
      v8 = 1;
      goto LABEL_53;
    }
    v13 = (struct _SURFOBJ *)(v46 + 24);
    v45 = (struct _SURFOBJ *)(v46 + 24);
    v9 = &v66;
    goto LABEL_8;
  }
LABEL_53:
  SURFMEM::~SURFMEM((SURFMEM *)&v46);
  return v8;
}
