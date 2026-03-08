/*
 * XREFs of ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C027DEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C001C4E4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C001C7C4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C001CEBC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C001CEF4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     OffGradientFill @ 0x1C02EA468 (OffGradientFill.c)
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
  PVOID *p_pvScan0; // rdi
  struct _SURFOBJ *v12; // rbx
  PVOID *v13; // rsi
  int hsurf; // eax
  HDEV hdev; // rcx
  PVOID v16; // rcx
  struct _CLIPOBJ *v17; // rsi
  USHORT *p_iType; // rdi
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v20)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  struct _SURFOBJ *v22; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v23; // [rsp+68h] [rbp-98h] BYREF
  PVOID *v24; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v25; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL *v26; // [rsp+80h] [rbp-80h]
  struct _RECTL *v27; // [rsp+88h] [rbp-78h]
  void *v28; // [rsp+90h] [rbp-70h]
  struct _TRIVERTEX *v29; // [rsp+98h] [rbp-68h]
  struct _XLATEOBJ *v30; // [rsp+A0h] [rbp-60h]
  _BYTE v31[912]; // [rsp+B0h] [rbp-50h] BYREF

  v10 = 1;
  v25 = 0LL;
  v30 = a3;
  v26 = a9;
  v28 = a6;
  v23 = a2;
  v29 = a4;
  v22 = a1;
  v27 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v31, a1, a2, a8);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v31, &v22, &v25, &v23) )
  {
    v24 = 0LL;
    p_pvScan0 = 0LL;
    v12 = v22;
    v13 = 0LL;
    if ( v22 )
    {
      hsurf = (int)v22[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &v22[-1].pvScan0;
        hdev = v22->hdev;
        v13 = &v22[-1].pvScan0;
        v24 = &v22[-1].pvScan0;
        GreLockDisplayDevice(hdev);
      }
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v24, &v23) )
    {
      if ( p_pvScan0 )
      {
        v16 = v13[6];
LABEL_28:
        GreUnlockDisplayDevice(v16);
        continue;
      }
      continue;
    }
    v17 = v23;
    p_iType = &v12->iType;
    if ( v12->iType == 1 )
    {
      if ( bAllowShareAccess(v12) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x20000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v12 = v22;
          v20 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 136LL);
          goto LABEL_26;
        }
        v12 = v22;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v12) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v12 = v22;
LABEL_25:
          v20 = EngGradientFill;
          goto LABEL_26;
        }
        v12 = v22;
      }
    }
    if ( ((__int64)v12[1].hsurf & 0x20000) == 0 )
      goto LABEL_25;
    v20 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))*((_QWORD *)v12->hdev + 171);
LABEL_26:
    v10 &= OffGradientFill(v20, &v25, v12, v17, v30, v29, a5, v28, a7, v27, v26, a10);
    if ( v24 )
    {
      v16 = v24[6];
      goto LABEL_28;
    }
  }
  return v10;
}
