/*
 * XREFs of ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C01491F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0031BF0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0032504 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     EngStretchBltROP @ 0x1C008B730 (EngStretchBltROP.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00D77FC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffStretchBltROP @ 0x1C014947C (OffStretchBltROP.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SpStretchBltROP(
        SURFOBJ *psoDest,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        struct _BRUSHOBJ *pbo,
        DWORD rop4)
{
  unsigned int v14; // r13d
  HDEV hdev; // rax
  struct _SURFOBJ *v16; // r10
  struct _CLIPOBJ *v17; // r11
  struct _SURFOBJ *v18; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v21; // eax
  PVOID *v22; // rdi
  int v23; // r9d
  struct _CLIPOBJ *v24; // r12
  USHORT *p_iType; // r14
  BOOL (__stdcall *v26)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // rcx
  HDEV v28; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v30; // [rsp+80h] [rbp-80h] BYREF
  PVOID *v31; // [rsp+88h] [rbp-78h] BYREF
  struct _CLIPOBJ *v32; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v33; // [rsp+98h] [rbp-68h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  __int64 v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  struct _RECTL v42; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v43[912]; // [rsp+F0h] [rbp-10h] BYREF

  v33 = 0LL;
  v14 = 1;
  hdev = a2->hdev;
  v30 = psoDest;
  v32 = a4;
  v41 = (__int64)a3;
  v40 = (__int64)pxlo;
  v39 = (__int64)pca;
  v38 = (__int64)pptlHTOrg;
  v37 = (__int64)prclDest;
  v36 = (__int64)prclSrc;
  v35 = (__int64)pptlMask;
  v34 = (__int64)pbo;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    v42 = *prclDest;
    ERECTL::vOrder((ERECTL *)&v42);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v43, v16, v17, &v42);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v43, &v30, &v33, &v32) )
        return v14;
      v18 = v30;
      p_pvScan0 = 0LL;
      v31 = 0LL;
      if ( v30 )
      {
        hsurf = (int)v30[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v30[-1].pvScan0;
          v28 = v30->hdev;
          v31 = &v30[-1].pvScan0;
          GreLockDisplayDevice(v28);
        }
      }
      v21 = (int)a2[1].hsurf;
      v22 = 0LL;
      if ( (v21 & 0x80004000) != 0 && (v21 & 0x200) == 0 )
      {
        v22 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v31, &v32) )
        break;
LABEL_17:
      if ( v22 )
        GreUnlockDisplayDevice(v22[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
    v24 = v32;
    p_iType = &v18->iType;
    if ( v18->iType == 1 )
    {
      if ( bAllowShareAccess(v18) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x2000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          p_pvScan0 = v31;
          LODWORD(v18) = (_DWORD)v30;
          v26 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)(ThreadWin32Thread + 280) + 152LL);
          goto LABEL_16;
        }
        p_pvScan0 = v31;
        v18 = v30;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v18) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v31;
          LODWORD(v18) = (_DWORD)v30;
          goto LABEL_38;
        }
        p_pvScan0 = v31;
        v18 = v30;
      }
    }
    if ( ((__int64)v18[1].hsurf & 0x2000) != 0 )
    {
      v26 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))*((_QWORD *)v18->hdev + 173);
LABEL_16:
      v14 &= OffStretchBltROP(
               (int)v26,
               (int)&v33,
               (int)v18,
               v23,
               (__int64)a2,
               v41,
               v24,
               v40,
               v39,
               v38,
               v37,
               v36,
               v35,
               iMode,
               v34,
               rop4);
      goto LABEL_17;
    }
LABEL_38:
    v26 = EngStretchBltROP;
    goto LABEL_16;
  }
  return EngStretchBltROP(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
}
