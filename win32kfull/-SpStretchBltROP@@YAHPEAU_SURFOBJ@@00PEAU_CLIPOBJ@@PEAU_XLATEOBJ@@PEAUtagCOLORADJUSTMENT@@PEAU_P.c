BOOL __fastcall SpStretchBltROP(
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
  int v14; // r13d
  HDEV hdev; // rax
  struct _SURFOBJ *v17; // r10
  struct _CLIPOBJ *v18; // r11
  struct _SURFOBJ *v19; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  HDEV v22; // rcx
  int v23; // eax
  PVOID *v24; // rdi
  struct _CLIPOBJ *v25; // r12
  USHORT *p_iType; // r14
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // rcx
  struct _SURFOBJ *v29; // [rsp+80h] [rbp-80h] BYREF
  PVOID *v30; // [rsp+88h] [rbp-78h] BYREF
  struct _CLIPOBJ *v31; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v32; // [rsp+98h] [rbp-68h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  __int64 v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int v41[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v42; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v43[912]; // [rsp+100h] [rbp+0h] BYREF

  v32 = 0LL;
  v14 = 1;
  hdev = a2->hdev;
  v29 = psoDest;
  v31 = a4;
  v40 = (__int64)a3;
  v39 = (__int64)pxlo;
  v38 = (__int64)pca;
  v37 = (__int64)pptlHTOrg;
  v36 = (__int64)prclDest;
  v35 = (__int64)prclSrc;
  v34 = (__int64)pptlMask;
  v33 = (__int64)pbo;
  if ( hdev && *((struct _SURFOBJ **)hdev + 14) == a2 )
    return EngStretchBltROP(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  v42 = *prclDest;
  ERECTL::vOrder((ERECTL *)&v42);
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v43, v17, v18, &v42);
  *(_QWORD *)v41 = 0LL;
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v43, &v29, &v32, &v31) )
  {
    v19 = v29;
    p_pvScan0 = 0LL;
    v30 = 0LL;
    if ( v29 )
    {
      hsurf = (int)v29[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &v29[-1].pvScan0;
        v22 = v29->hdev;
        v30 = &v29[-1].pvScan0;
        GreLockDisplayDevice(v22);
      }
    }
    v23 = (int)a2[1].hsurf;
    v24 = 0LL;
    if ( (v23 & 0x80004000) != 0 && (v23 & 0x200) == 0 )
    {
      v24 = &a2[-1].pvScan0;
      GreLockDisplayDevice(a2->hdev);
    }
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v30, &v31) )
    {
      v25 = v31;
      p_iType = &v19->iType;
      if ( v19->iType == 1 )
      {
        if ( bAllowShareAccess(v19) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x2000) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            p_pvScan0 = v30;
            LODWORD(v19) = (_DWORD)v29;
            v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)(ThreadWin32Thread + 280) + 152LL);
LABEL_30:
            v14 &= OffStretchBltROP(
                     (int)v28,
                     (int)&v32,
                     (int)v19,
                     (int)v41,
                     (__int64)a2,
                     v40,
                     v25,
                     v39,
                     v38,
                     v37,
                     v36,
                     v35,
                     v34,
                     iMode,
                     v33,
                     rop4);
            goto LABEL_31;
          }
          p_pvScan0 = v30;
          v19 = v29;
        }
        if ( *p_iType == 1 && bAllowShareAccess(v19) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
          {
            p_pvScan0 = v30;
            LODWORD(v19) = (_DWORD)v29;
LABEL_29:
            v28 = EngStretchBltROP;
            goto LABEL_30;
          }
          p_pvScan0 = v30;
          v19 = v29;
        }
      }
      if ( ((__int64)v19[1].hsurf & 0x2000) != 0 )
      {
        v28 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))*((_QWORD *)v19->hdev + 173);
        goto LABEL_30;
      }
      goto LABEL_29;
    }
LABEL_31:
    if ( v24 )
      GreUnlockDisplayDevice(v24[6]);
    if ( p_pvScan0 )
      GreUnlockDisplayDevice(p_pvScan0[6]);
  }
  return v14;
}
