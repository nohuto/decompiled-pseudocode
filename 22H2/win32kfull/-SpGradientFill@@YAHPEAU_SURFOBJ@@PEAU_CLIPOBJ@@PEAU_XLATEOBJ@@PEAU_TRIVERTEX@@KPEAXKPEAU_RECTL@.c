/*
 * XREFs of ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0154370
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00965B8 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00968A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C010F154 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010F18C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffGradientFill @ 0x1C015456C (OffGradientFill.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall SpGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  unsigned int v10; // r14d
  struct _SURFOBJ *v11; // rdi
  PVOID *p_pvScan0; // rbx
  PVOID *v13; // rsi
  int hsurf; // eax
  USHORT *p_iType; // rsi
  BOOL (__stdcall *v16)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  bool v17; // zf
  HDEV hdev; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v21; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v22; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v23; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v24; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL *v25; // [rsp+80h] [rbp-80h]
  struct _RECTL *v26; // [rsp+88h] [rbp-78h]
  void *v27; // [rsp+90h] [rbp-70h]
  struct _TRIVERTEX *v28; // [rsp+98h] [rbp-68h]
  struct _XLATEOBJ *v29; // [rsp+A0h] [rbp-60h]
  __int64 *v30[114]; // [rsp+B0h] [rbp-50h] BYREF

  v10 = 1;
  v24 = 0LL;
  v29 = a3;
  v25 = a9;
  v27 = a6;
  v23 = a2;
  v28 = a4;
  v21 = a1;
  v26 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v30, a1, a2, a8);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v30, &v21, &v24, &v23) )
  {
    v11 = v21;
    p_pvScan0 = 0LL;
    v13 = 0LL;
    v22 = 0LL;
    if ( v21 )
    {
      hsurf = (int)v21[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &v21[-1].pvScan0;
        hdev = v21->hdev;
        v22 = &v21[-1].pvScan0;
        GreLockDisplayDevice(hdev);
        v13 = &v11[-1].pvScan0;
      }
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v22, &v23) )
    {
      v17 = v13 == 0LL;
      goto LABEL_11;
    }
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x20000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          p_pvScan0 = v22;
          v11 = v21;
          v16 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 136LL);
          goto LABEL_10;
        }
        p_pvScan0 = v22;
        v11 = v21;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v22;
          v11 = v21;
LABEL_31:
          v16 = EngGradientFill;
          goto LABEL_10;
        }
        p_pvScan0 = v22;
        v11 = v21;
      }
    }
    if ( ((__int64)v11[1].hsurf & 0x20000) == 0 )
      goto LABEL_31;
    v16 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))*((_QWORD *)v11->hdev + 172);
LABEL_10:
    v10 &= OffGradientFill(v16, &v24, v11, v23, v29, v28, a5, v27, a7, v26, v25, a10);
    v17 = p_pvScan0 == 0LL;
LABEL_11:
    if ( !v17 )
      GreUnlockDisplayDevice(p_pvScan0[6]);
  }
  return v10;
}
