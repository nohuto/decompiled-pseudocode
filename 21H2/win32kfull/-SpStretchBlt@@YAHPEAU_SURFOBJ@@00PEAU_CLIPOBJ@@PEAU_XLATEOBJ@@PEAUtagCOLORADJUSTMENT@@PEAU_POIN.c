/*
 * XREFs of ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00D7050
 * Callers:
 *     <none>
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x1C002FB50 (EngStretchBlt.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0031BF0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0032504 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     OffStretchBlt @ 0x1C00D72BC (OffStretchBlt.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00D77FC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
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
  struct _CLIPOBJ *v22; // r13
  USHORT *p_iType; // r14
  BOOL (__stdcall *v24)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rcx
  HDEV v26; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v28; // [rsp+70h] [rbp-90h] BYREF
  PVOID *v29; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v30; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v31; // [rsp+88h] [rbp-78h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  struct _RECTL v39; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v40[912]; // [rsp+E0h] [rbp-20h] BYREF

  v31 = 0LL;
  v12 = 1;
  hdev = a2->hdev;
  v28 = psoDest;
  v30 = a4;
  v38 = (__int64)a3;
  v37 = (__int64)pxlo;
  v36 = (__int64)pca;
  v35 = (__int64)pptlHTOrg;
  v34 = (__int64)prclDest;
  v33 = (__int64)prclSrc;
  v32 = (__int64)pptlMask;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    v39 = *prclDest;
    ERECTL::vOrder((ERECTL *)&v39);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v40, v14, v15, &v39);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v40, &v28, &v31, &v30) )
        return v12;
      v16 = v28;
      p_pvScan0 = 0LL;
      v29 = 0LL;
      if ( v28 )
      {
        hsurf = (int)v28[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v28[-1].pvScan0;
          v26 = v28->hdev;
          v29 = &v28[-1].pvScan0;
          GreLockDisplayDevice(v26);
        }
      }
      v19 = (int)a2[1].hsurf;
      v20 = 0LL;
      if ( (v19 & 0x80004000) != 0 && (v19 & 0x200) == 0 )
      {
        v20 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v29, &v30) )
        break;
LABEL_16:
      if ( v20 )
        GreUnlockDisplayDevice(v20[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
    v22 = v30;
    p_iType = &v16->iType;
    if ( v16->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 2) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          p_pvScan0 = v29;
          LODWORD(v16) = (_DWORD)v28;
          v24 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 88LL);
          goto LABEL_15;
        }
        p_pvScan0 = v29;
        v16 = v28;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v29;
          LODWORD(v16) = (_DWORD)v28;
          goto LABEL_38;
        }
        p_pvScan0 = v29;
        v16 = v28;
      }
    }
    if ( ((__int64)v16[1].hsurf & 2) != 0 )
    {
      v24 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)v16->hdev + 165);
LABEL_15:
      v12 &= OffStretchBlt(
               (int)v24,
               (int)&v31,
               (int)v16,
               v21,
               (__int64)a2,
               v38,
               v22,
               v37,
               v36,
               v35,
               v34,
               v33,
               v32,
               iMode);
      goto LABEL_16;
    }
LABEL_38:
    v24 = EngStretchBlt;
    goto LABEL_15;
  }
  return EngStretchBlt(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
}
