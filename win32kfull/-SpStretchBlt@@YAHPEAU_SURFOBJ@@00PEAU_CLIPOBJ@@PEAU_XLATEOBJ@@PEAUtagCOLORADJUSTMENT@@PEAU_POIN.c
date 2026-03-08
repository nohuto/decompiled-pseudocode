/*
 * XREFs of ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C027EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C001C4E4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C001C7C4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C001CEBC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C001CEF4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     EngStretchBlt @ 0x1C004DC80 (EngStretchBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0088198 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     OffStretchBlt @ 0x1C02EA90C (OffStretchBlt.c)
 */

BOOL __fastcall SpStretchBlt(
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
  int v12; // r13d
  HDEV hdev; // rax
  struct _SURFOBJ *v15; // r10
  struct _CLIPOBJ *v16; // r11
  struct _SURFOBJ *v17; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  HDEV v20; // rcx
  int v21; // eax
  PVOID *v22; // rdi
  struct _CLIPOBJ *v23; // r12
  USHORT *p_iType; // r14
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v26)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rcx
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
  __int64 v37; // [rsp+C0h] [rbp-40h]
  int v38[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct _RECTL v39; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v40[912]; // [rsp+E0h] [rbp-20h] BYREF

  v30 = 0LL;
  v12 = 1;
  hdev = a2->hdev;
  v27 = psoDest;
  v29 = a4;
  v37 = (__int64)a3;
  v36 = (__int64)pxlo;
  v35 = (__int64)pca;
  v34 = (__int64)pptlHTOrg;
  v33 = (__int64)prclDest;
  v32 = (__int64)prclSrc;
  v31 = (__int64)pptlMask;
  if ( hdev && *((struct _SURFOBJ **)hdev + 14) == a2 )
    return EngStretchBlt(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
  v39 = *prclDest;
  ERECTL::vOrder((ERECTL *)&v39);
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v40, v15, v16, &v39);
  *(_QWORD *)v38 = 0LL;
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v40, &v27, &v30, &v29) )
  {
    v17 = v27;
    p_pvScan0 = 0LL;
    v28 = 0LL;
    if ( v27 )
    {
      hsurf = (int)v27[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &v27[-1].pvScan0;
        v20 = v27->hdev;
        v28 = &v27[-1].pvScan0;
        GreLockDisplayDevice(v20);
      }
    }
    v21 = (int)a2[1].hsurf;
    v22 = 0LL;
    if ( (v21 & 0x80004000) != 0 && (v21 & 0x200) == 0 )
    {
      v22 = &a2[-1].pvScan0;
      GreLockDisplayDevice(a2->hdev);
    }
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v28, &v29) )
    {
      v23 = v29;
      p_iType = &v17->iType;
      if ( v17->iType == 1 )
      {
        if ( bAllowShareAccess(v17) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 2) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            p_pvScan0 = v28;
            LODWORD(v17) = (_DWORD)v27;
            v26 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 88LL);
LABEL_30:
            v12 &= OffStretchBlt(
                     (int)v26,
                     (int)&v30,
                     (int)v17,
                     (int)v38,
                     (__int64)a2,
                     v37,
                     v23,
                     v36,
                     v35,
                     v34,
                     v33,
                     v32,
                     v31,
                     iMode);
            goto LABEL_31;
          }
          p_pvScan0 = v28;
          v17 = v27;
        }
        if ( *p_iType == 1 && bAllowShareAccess(v17) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
          {
            p_pvScan0 = v28;
            LODWORD(v17) = (_DWORD)v27;
LABEL_29:
            v26 = EngStretchBlt;
            goto LABEL_30;
          }
          p_pvScan0 = v28;
          v17 = v27;
        }
      }
      if ( ((__int64)v17[1].hsurf & 2) != 0 )
      {
        v26 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)v17->hdev + 165);
        goto LABEL_30;
      }
      goto LABEL_29;
    }
LABEL_31:
    if ( v22 )
      GreUnlockDisplayDevice(v22[6]);
    if ( p_pvScan0 )
      GreUnlockDisplayDevice(p_pvScan0[6]);
  }
  return v12;
}
