/*
 * XREFs of ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C01514D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0096648 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0096930 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C010F4D4 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010F50C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffLineTo @ 0x1C01516AC (OffLineTo.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall SpLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  unsigned int v9; // r14d
  struct _SURFOBJ *v10; // rdi
  PVOID *p_pvScan0; // rbx
  PVOID *v12; // rsi
  int hsurf; // eax
  USHORT *p_iType; // rsi
  BOOL (__stdcall *v15)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  bool v16; // zf
  HDEV hdev; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v20; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v21; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v22; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+78h] [rbp-88h]
  struct _POINTL v24; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL *v25; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v26; // [rsp+90h] [rbp-70h]
  __int64 *v27[114]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = 1;
  v24 = 0LL;
  v26 = a3;
  v22 = a2;
  v23 = a4;
  v20 = a1;
  v25 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v27, a1, a2, a8);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v27, &v20, &v24, &v22) )
  {
    v10 = v20;
    p_pvScan0 = 0LL;
    v12 = 0LL;
    v21 = 0LL;
    if ( v20 )
    {
      hsurf = (int)v20[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &v20[-1].pvScan0;
        hdev = v20->hdev;
        v21 = &v20[-1].pvScan0;
        GreLockDisplayDevice(hdev);
        v12 = &v10[-1].pvScan0;
      }
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v21, &v22) )
    {
      v16 = v12 == 0LL;
      goto LABEL_11;
    }
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x100) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          p_pvScan0 = v21;
          v10 = v20;
          v15 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 104LL);
          goto LABEL_10;
        }
        p_pvScan0 = v21;
        v10 = v20;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v21;
          v10 = v20;
LABEL_31:
          v15 = EngLineTo;
          goto LABEL_10;
        }
        p_pvScan0 = v21;
        v10 = v20;
      }
    }
    if ( ((__int64)v10[1].hsurf & 0x100) == 0 )
      goto LABEL_31;
    v15 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))*((_QWORD *)v10->hdev + 168);
LABEL_10:
    v9 &= OffLineTo(v15, &v24, v10, v22, v26, v23, a5, a6, a7, v25, a9);
    v16 = p_pvScan0 == 0LL;
LABEL_11:
    if ( !v16 )
      GreUnlockDisplayDevice(p_pvScan0[6]);
  }
  return v9;
}
