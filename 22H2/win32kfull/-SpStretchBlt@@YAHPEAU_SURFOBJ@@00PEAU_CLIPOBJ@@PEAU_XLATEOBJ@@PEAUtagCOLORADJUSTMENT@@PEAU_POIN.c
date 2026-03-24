/*
 * XREFs of ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0157500
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00965B8 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00968A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     EngStretchBlt @ 0x1C00B12F0 (EngStretchBlt.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B7698 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C010F154 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010F18C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffStretchBlt @ 0x1C0157768 (OffStretchBlt.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall SpStretchBlt(
        SURFOBJ *psoDest,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        struct _POINTL *pptlMask,
        ULONG iMode)
{
  unsigned int v12; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v14; // r10
  struct _CLIPOBJ *v15; // r11
  struct _SURFOBJ *v16; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v19; // eax
  PVOID *v20; // rdi
  int v21; // r9d
  USHORT *p_iType; // r14
  BOOL (__stdcall *v23)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rcx
  HDEV v25; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v27; // [rsp+70h] [rbp-90h] BYREF
  PVOID *v28; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v29; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v30; // [rsp+88h] [rbp-78h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  struct _RECTL v37; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v38[114]; // [rsp+D0h] [rbp-30h] BYREF

  v30 = 0LL;
  v12 = 1;
  hdev = a2->hdev;
  v27 = psoDest;
  v29 = a4;
  v36 = (__int64)a3;
  v35 = (__int64)pxlo;
  v34 = (__int64)pca;
  v33 = (__int64)pptlHTOrg;
  v32 = (__int64)prclSrc;
  v31 = (__int64)pptlMask;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 15) != a2 )
  {
    v37 = *prclDest;
    ERECTL::vOrder((ERECTL *)&v37);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v38, v14, v15, &v37);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v38, &v27, &v30, &v29) )
        return v12;
      v16 = v27;
      p_pvScan0 = 0LL;
      v28 = 0LL;
      if ( v27 )
      {
        hsurf = (int)v27[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v27[-1].pvScan0;
          v25 = v27->hdev;
          v28 = &v27[-1].pvScan0;
          GreLockDisplayDevice(v25);
        }
      }
      v19 = (int)a2[1].hsurf;
      v20 = 0LL;
      if ( (v19 & 0x80004000) != 0 && (v19 & 0x200) == 0 )
      {
        v20 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v28, &v29) )
        break;
LABEL_16:
      if ( v20 )
        GreUnlockDisplayDevice(v20[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
    p_iType = &v16->iType;
    if ( v16->iType == 1 )
    {
      if ( bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 2) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          p_pvScan0 = v28;
          LODWORD(v16) = (_DWORD)v27;
          v23 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 88LL);
          goto LABEL_15;
        }
        p_pvScan0 = v28;
        v16 = v27;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v28;
          LODWORD(v16) = (_DWORD)v27;
          goto LABEL_38;
        }
        p_pvScan0 = v28;
        v16 = v27;
      }
    }
    if ( ((__int64)v16[1].hsurf & 2) != 0 )
    {
      v23 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)v16->hdev + 166);
LABEL_15:
      v12 &= OffStretchBlt(
               (int)v23,
               (int)&v30,
               (int)v16,
               v21,
               (__int64)a2,
               v36,
               v29,
               v35,
               v34,
               v33,
               (__int64)prclDest,
               v32,
               v31,
               iMode);
      goto LABEL_16;
    }
LABEL_38:
    v23 = EngStretchBlt;
    goto LABEL_15;
  }
  return EngStretchBlt(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
}
