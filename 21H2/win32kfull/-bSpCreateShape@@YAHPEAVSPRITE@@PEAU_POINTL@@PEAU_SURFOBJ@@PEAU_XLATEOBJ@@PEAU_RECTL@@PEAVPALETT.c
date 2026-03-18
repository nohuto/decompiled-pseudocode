/*
 * XREFs of ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C01571DC
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0156B64 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpTransferShape@@YAHPEAVSPRITE@@0@Z @ 0x1C027EFEC (-bSpTransferShape@@YAHPEAVSPRITE@@0@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C027F188 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001F4EC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0060BB4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0086C30 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00B589C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00B7E14 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     OffCopyBits @ 0x1C01568A8 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027BB90 (--1MULTISURF@@QEAA@XZ.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C02A44B4 (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A4BAC (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall bSpCreateShape(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        ULONG a7,
        unsigned int a8,
        struct _RECTL *a9)
{
  SPRITERANGELOCK *v10; // r12
  ULONG v11; // edi
  signed int v12; // r14d
  signed int v13; // r13d
  SURFOBJ *Surface; // rcx
  __int64 v15; // r14
  LONG left; // r8d
  int v17; // eax
  __int64 v18; // rdi
  int v19; // edx
  _DWORD *v20; // r9
  LONG v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  __int64 v27; // rax
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rdx
  unsigned __int8 v31; // cf
  HDEV v32; // rbx
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r15
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rbx
  int v37; // eax
  unsigned int v38; // [rsp+50h] [rbp-B0h]
  _QWORD v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h]
  _QWORD v43[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v44[40]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-48h]
  char v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C4h] [rbp-3Ch]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+F0h] [rbp-10h]
  struct _RECTL v50; // [rsp+100h] [rbp+0h] BYREF
  __int64 v51[2]; // [rsp+110h] [rbp+10h] BYREF

  v10 = (SPRITERANGELOCK *)(*((_QWORD *)a1 + 2) + 120LL);
  v11 = a7;
  v42 = (__int64)a4;
  v40[0] = a2;
  *(_QWORD *)&v50.left = a9;
  v38 = 0;
  SPRITERANGELOCK::vLockExclusive(v10);
  v41 = *((_QWORD *)a1 + 18);
  if ( a6 )
    INC_SHARE_REF_CNT(a6);
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v41);
  *((_QWORD *)a1 + 18) = a6;
  v12 = a5->right - a5->left;
  v13 = a5->bottom - a5->top;
  if ( !a7 )
    v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 72LL);
  Surface = (SURFOBJ *)*((_QWORD *)a1 + 16);
  if ( !Surface
    || (Surface->iType || (Surface->fjBitmap & 0x20) != 0) && a8
    || Surface->iBitmapFormat != v11
    || Surface->sizlBitmap.cx < v12
    || Surface->sizlBitmap.cy < v13 )
  {
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( Surface->iBitmapFormat != v11 )
      {
        EngUnlockSurface(Surface);
        v27 = *((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 16) = 0LL;
        *(_DWORD *)a1 &= ~0x40u;
        Surface = 0LL;
        *((_QWORD *)a1 + 30) = 0LL;
        if ( v27 )
          *(_DWORD *)(v27 + 16) &= ~0x40u;
      }
    }
    else
    {
      vSpDeleteSurface(Surface);
      Surface = 0LL;
    }
    if ( (*(_DWORD *)a1 & 0x40) == 0 && *((_QWORD *)a1 + 30) && a8 )
    {
      Surface = EngLockSurface(*((HSURF *)a1 + 30));
      if ( Surface )
      {
        *(_DWORD *)a1 |= 0x40u;
LABEL_34:
        *((_QWORD *)a1 + 16) = Surface;
        goto LABEL_11;
      }
    }
    else if ( Surface )
    {
      goto LABEL_34;
    }
    Surface = psoSpCreateSurface(*((struct _SPRITESTATE **)a1 + 2), v11, v12, v13);
    goto LABEL_34;
  }
LABEL_11:
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockShared(v10);
  v15 = *((_QWORD *)a1 + 16);
  if ( !v15 )
    goto LABEL_20;
  left = a5->left;
  v38 = 1;
  *((_DWORD *)a1 + 34) = -a5->left;
  v17 = -a5->top;
  *((_DWORD *)a1 + 38) = v11;
  v18 = 0LL;
  *((_DWORD *)a1 + 35) = v17;
  if ( a6 )
    v19 = **((_DWORD **)a6 + 14) | *(_DWORD *)(*((_QWORD *)a6 + 14) + 8LL);
  else
    v19 = 0;
  v20 = *(_DWORD **)&v50.left;
  *((_DWORD *)a1 + 39) = v19;
  v21 = a5->left;
  HIDWORD(v51[0]) = a5->top;
  v51[1] = *(_QWORD *)&a5->right;
  LODWORD(v51[0]) = v21;
  if ( v20 )
  {
    v22 = v20[1];
    v50.left = left + *v20;
    v50.right = left + v20[2];
    v23 = *((_DWORD *)a1 + 35);
    v50.top = v22 - v23;
    v50.bottom = v20[3] - v23;
    ERECTL::operator*=((int *)v51, &v50.left);
  }
  if ( ERECTL::bEmpty((ERECTL *)v51) )
    goto LABEL_20;
  v25 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x40) != 0 && ((v25 & 0x200) == 0 || *(HSURF *)(v15 + 320) != a3->hsurf) )
  {
    *(_DWORD *)a1 = v25 | 0x80;
LABEL_20:
    SPRITERANGELOCK::vUnlock(v10);
    return v38;
  }
  v50 = *(struct _RECTL *)v51;
  v45 = 0LL;
  v28 = *(_DWORD *)v40[0];
  v50.right = *(_DWORD *)v40[0] + LODWORD(v51[1]);
  v46 = 0;
  v47 = 0;
  v50.left = v28 + v24;
  v29 = *(_DWORD *)(v40[0] + 4LL);
  v50.top = v29 + HIDWORD(v51[0]);
  v50.bottom = v29 + HIDWORD(v51[1]);
  MULTISURF::vInit((MULTISURF *)v44, a3, &v50);
  v31 = _bittest((const signed __int32 *)(v15 + 88), 0xAu);
  v43[0] = 0LL;
  v40[0] = 0LL;
  if ( !v31 )
  {
    if ( _bittest((const signed __int32 *)(v30 + 88), 0xAu) )
      v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v30 + 24)
                                                                                                 + 2816LL);
    else
      v33 = EngCopyBits;
    goto LABEL_44;
  }
  v32 = *(HDEV *)(v15 + 24);
  if ( (unsigned int)MULTISURF::bLoadSource((MULTISURF *)v44, v32) )
  {
    v33 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v32 + 352);
LABEL_44:
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v43, (struct _SURFOBJ *)v48)
      && SURFREFVIEW::bMap((SURFREFVIEW *)v40, (struct _SURFOBJ *)v15) )
    {
      v34 = *(_DWORD *)(v15 + 88);
      if ( (v34 & 0x80004000) != 0 && (v34 & 0x200) == 0 )
      {
        v18 = v15 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v15 - 24 + 48));
      }
      v35 = v48;
      v36 = 0LL;
      if ( v48 )
      {
        v37 = *(_DWORD *)(v48 + 88);
        if ( (v37 & 0x80004000) != 0 && (v37 & 0x200) == 0 )
        {
          v36 = v48 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v48 - 24 + 48));
          v35 = v48;
        }
      }
      OffCopyBits(
        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v33,
        (LONG *)a1 + 34,
        v15,
        (int *)&gptlZero,
        v35,
        0LL,
        v42,
        v51,
        (_DWORD *)v49);
      if ( (*(_DWORD *)a1 & 0x200) != 0 && *((_QWORD *)a1 + 16) == v15 && *(HSURF *)(v15 + 320) == a3->hsurf )
        *(_DWORD *)a1 |= 0x80u;
      if ( v36 )
        GreUnlockDisplayDevice(*(_QWORD *)(v36 + 48));
      if ( v18 )
        GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
    }
    else
    {
      v38 = 0;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v40);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v43);
    MULTISURF::~MULTISURF((MULTISURF *)v44);
    goto LABEL_20;
  }
  SPRITERANGELOCK::vUnlock(v10);
  SPRITERANGELOCK::vLockExclusive(v10);
  vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 16));
  *((_QWORD *)a1 + 16) = 0LL;
  SPRITERANGELOCK::vUnlock(v10);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v40);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v43);
  MULTISURF::~MULTISURF((MULTISURF *)v44);
  return 0LL;
}
