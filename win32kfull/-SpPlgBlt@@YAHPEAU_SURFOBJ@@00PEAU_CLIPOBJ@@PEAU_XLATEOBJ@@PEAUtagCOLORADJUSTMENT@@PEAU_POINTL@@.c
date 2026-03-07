BOOL __fastcall SpPlgBlt(
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
  int v13; // r15d
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
  struct _SURFOBJ *v25; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  HDEV v28; // rcx
  int v29; // eax
  PVOID *v30; // rdi
  struct _CLIPOBJ *v31; // r12
  USHORT *p_iType; // r15
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v34)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
  int v35; // eax
  struct _SURFOBJ *v36; // [rsp+70h] [rbp-90h] BYREF
  PVOID *v37; // [rsp+78h] [rbp-88h] BYREF
  int v38; // [rsp+80h] [rbp-80h]
  struct _CLIPOBJ *v39; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v40; // [rsp+90h] [rbp-70h] BYREF
  POINTL *pptl; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  int v47[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct _RECTL v48; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v49[912]; // [rsp+E0h] [rbp-20h] BYREF

  pptl = a10;
  v13 = 1;
  v38 = 1;
  v36 = a1;
  x = pptfx[1].x;
  v17 = __OFSUB__(x, pptfx[3].x);
  v15 = x == pptfx[3].x;
  v16 = x - pptfx[3].x < 0;
  v39 = a4;
  v18 = !(v16 ^ v17 | v15);
  v46 = (__int64)a3;
  v17 = __OFSUB__(x, pptfx->x);
  v15 = x == pptfx->x;
  v16 = x - pptfx->x < 0;
  y = pptfx[1].y;
  v45 = (__int64)pxlo;
  v20 = (v16 ^ v17 | v15) ^ (unsigned int)v18;
  v44 = (__int64)pca;
  v43 = (__int64)pptlBrushOrg;
  v17 = __OFSUB__(y, pptfx[3].y);
  v15 = y == pptfx[3].y;
  v16 = y - pptfx[3].y < 0;
  v42 = (__int64)prcl;
  v21 = y <= pptfx->y;
  v40 = 0LL;
  v22 = v21 ^ (unsigned int)!(v16 ^ v17 | v15);
  hdev = a2->hdev;
  if ( hdev && *((struct _SURFOBJ **)hdev + 14) == a2 )
    return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
  if ( pptfx[v20].x > pptfx[(unsigned int)v20 ^ 3LL].x )
    v20 = (unsigned int)v20 ^ 3;
  if ( pptfx[v22].y > pptfx[(unsigned int)v22 ^ 3LL].y )
    v22 = (unsigned int)v22 ^ 3;
  v48.left = (pptfx[v20].x >> 4) - 1;
  v48.top = (pptfx[v22].y >> 4) - 1;
  v48.right = ((pptfx[(unsigned int)v20 ^ 3LL].x + 15) >> 4) + 1;
  v48.bottom = ((pptfx[(unsigned int)v22 ^ 3LL].y + 15) >> 4) + 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v49, a1, a4, &v48);
  *(_QWORD *)v47 = 0LL;
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v49, &v36, &v40, &v39) )
  {
    v25 = v36;
    p_pvScan0 = 0LL;
    v37 = 0LL;
    if ( v36 )
    {
      hsurf = (int)v36[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &v36[-1].pvScan0;
        v28 = v36->hdev;
        v37 = &v36[-1].pvScan0;
        GreLockDisplayDevice(v28);
      }
    }
    v29 = (int)a2[1].hsurf;
    v30 = 0LL;
    if ( (v29 & 0x80004000) != 0 && (v29 & 0x200) == 0 )
    {
      v30 = &a2[-1].pvScan0;
      GreLockDisplayDevice(a2->hdev);
    }
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v37, &v39) )
    {
      v31 = v39;
      p_iType = &v25->iType;
      if ( v25->iType == 1 )
      {
        if ( bAllowShareAccess(v25) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 4) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            p_pvScan0 = v37;
            LODWORD(v25) = (_DWORD)v36;
            v34 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 128LL);
LABEL_34:
            v35 = OffPlgBlt(
                    (int)v34,
                    (int)&v40,
                    (int)v25,
                    (int)v47,
                    (__int64)a2,
                    v46,
                    v31,
                    v45,
                    v44,
                    v43,
                    (__int64)pptfx,
                    v42,
                    (__int64)pptl,
                    iMode);
            v13 = v35 & v38;
            v38 &= v35;
            goto LABEL_35;
          }
          p_pvScan0 = v37;
          v25 = v36;
        }
        if ( *p_iType == 1 && bAllowShareAccess(v25) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
          {
            p_pvScan0 = v37;
            LODWORD(v25) = (_DWORD)v36;
LABEL_33:
            v34 = EngPlgBlt;
            goto LABEL_34;
          }
          p_pvScan0 = v37;
          v25 = v36;
        }
      }
      if ( ((__int64)v25[1].hsurf & 4) != 0 )
      {
        v34 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v25->hdev + 170);
        goto LABEL_34;
      }
      goto LABEL_33;
    }
LABEL_35:
    if ( v30 )
      GreUnlockDisplayDevice(v30[6]);
    if ( p_pvScan0 )
      GreUnlockDisplayDevice(p_pvScan0[6]);
  }
  return v13;
}
