/*
 * XREFs of ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C027D220
 * Callers:
 *     <none>
 * Callees:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0031BF0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0032504 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00D77FC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     EngPlgBlt @ 0x1C028A2A0 (EngPlgBlt.c)
 *     OffPlgBlt @ 0x1C02C7A34 (OffPlgBlt.c)
 */

__int64 __fastcall SpPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        struct _POINTL *a10,
        ULONG iMode)
{
  unsigned int v13; // r12d
  FIX x; // ecx
  bool v15; // zf
  bool v16; // sf
  bool v17; // of
  BOOL v18; // r10d
  FIX y; // ecx
  __int64 v20; // r10
  BOOL v21; // eax
  __int64 v22; // r11
  HDEV hdev; // rax
  struct _SURFOBJ *v24; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  HDEV v27; // rcx
  int v28; // eax
  PVOID *v29; // rdi
  int v30; // r9d
  USHORT *p_iType; // r15
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
  struct _SURFOBJ *v35; // [rsp+70h] [rbp-90h] BYREF
  PVOID *v36; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v37; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v38; // [rsp+88h] [rbp-78h] BYREF
  POINTL *pptl; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  struct _CLIPOBJ *v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  struct _RECTL v46; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v47[912]; // [rsp+E0h] [rbp-20h] BYREF

  v13 = 1;
  pptl = a10;
  v35 = a1;
  x = pptfx[1].x;
  v17 = __OFSUB__(x, pptfx[3].x);
  v15 = x == pptfx[3].x;
  v16 = x - pptfx[3].x < 0;
  v37 = a4;
  v18 = !(v16 ^ v17 | v15);
  v45 = (__int64)a3;
  v17 = __OFSUB__(x, pptfx->x);
  v15 = x == pptfx->x;
  v16 = x - pptfx->x < 0;
  y = pptfx[1].y;
  v43 = (__int64)pxlo;
  v20 = (v16 ^ v17 | v15) ^ (unsigned int)v18;
  v42 = (__int64)pca;
  v41 = (__int64)pptlBrushOrg;
  v17 = __OFSUB__(y, pptfx[3].y);
  v15 = y == pptfx[3].y;
  v16 = y - pptfx[3].y < 0;
  v40 = (__int64)prcl;
  v21 = y <= pptfx->y;
  v38 = 0LL;
  v22 = v21 ^ (unsigned int)!(v16 ^ v17 | v15);
  hdev = a2->hdev;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    if ( pptfx[v20].x > pptfx[(unsigned int)v20 ^ 3LL].x )
      v20 = (unsigned int)v20 ^ 3;
    if ( pptfx[v22].y > pptfx[(unsigned int)v22 ^ 3LL].y )
      v22 = (unsigned int)v22 ^ 3;
    v46.left = (pptfx[v20].x >> 4) - 1;
    v46.top = (pptfx[v22].y >> 4) - 1;
    v46.right = ((pptfx[(unsigned int)v20 ^ 3LL].x + 15) >> 4) + 1;
    v46.bottom = ((pptfx[(unsigned int)v22 ^ 3LL].y + 15) >> 4) + 1;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v47, a1, a4, &v46);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v47, &v35, &v38, &v37) )
        return v13;
      v24 = v35;
      p_pvScan0 = 0LL;
      v36 = 0LL;
      if ( v35 )
      {
        hsurf = (int)v35[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v35[-1].pvScan0;
          v27 = v35->hdev;
          v36 = &v35[-1].pvScan0;
          GreLockDisplayDevice(v27);
        }
      }
      v28 = (int)a2[1].hsurf;
      v29 = 0LL;
      if ( (v28 & 0x80004000) != 0 && (v28 & 0x200) == 0 )
      {
        v29 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v36, &v37) )
        break;
LABEL_35:
      if ( v29 )
        GreUnlockDisplayDevice(v29[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
    p_iType = &v24->iType;
    v44 = v37;
    if ( v24->iType == 1 )
    {
      if ( bAllowShareAccess(v24) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 4) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          p_pvScan0 = v36;
          LODWORD(v24) = (_DWORD)v35;
          v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 128LL);
LABEL_34:
          v13 &= OffPlgBlt(
                   (int)v33,
                   (int)&v38,
                   (int)v24,
                   v30,
                   (__int64)a2,
                   v45,
                   v44,
                   v43,
                   v42,
                   v41,
                   (__int64)pptfx,
                   v40,
                   (__int64)pptl,
                   iMode);
          goto LABEL_35;
        }
        p_pvScan0 = v36;
        v24 = v35;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v24) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v36;
          LODWORD(v24) = (_DWORD)v35;
LABEL_33:
          v33 = EngPlgBlt;
          goto LABEL_34;
        }
        p_pvScan0 = v36;
        v24 = v35;
      }
    }
    if ( ((__int64)v24[1].hsurf & 4) != 0 )
    {
      v33 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v24->hdev + 170);
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
}
