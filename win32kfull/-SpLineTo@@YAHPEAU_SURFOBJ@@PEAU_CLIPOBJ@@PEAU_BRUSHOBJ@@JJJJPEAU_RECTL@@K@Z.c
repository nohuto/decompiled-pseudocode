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
  PVOID *p_pvScan0; // rdi
  struct _SURFOBJ *v11; // rbx
  PVOID *v12; // rsi
  int hsurf; // eax
  HDEV hdev; // rcx
  PVOID v15; // rcx
  struct _CLIPOBJ *v16; // rsi
  USHORT *p_iType; // rdi
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v19)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  struct _SURFOBJ *v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v22; // [rsp+68h] [rbp-98h] BYREF
  int v23; // [rsp+70h] [rbp-90h]
  PVOID *v24; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v25; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL *v26; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v27; // [rsp+90h] [rbp-70h]
  _BYTE v28[912]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = 1;
  v25 = 0LL;
  v27 = a3;
  v22 = a2;
  v23 = a4;
  v21 = a1;
  v26 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v28, a1, a2, a8);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v28, &v21, &v25, &v22) )
  {
    v24 = 0LL;
    p_pvScan0 = 0LL;
    v11 = v21;
    v12 = 0LL;
    if ( v21 )
    {
      hsurf = (int)v21[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &v21[-1].pvScan0;
        hdev = v21->hdev;
        v12 = &v21[-1].pvScan0;
        v24 = &v21[-1].pvScan0;
        GreLockDisplayDevice(hdev);
      }
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v24, &v22) )
    {
      if ( p_pvScan0 )
      {
        v15 = v12[6];
LABEL_28:
        GreUnlockDisplayDevice(v15);
        continue;
      }
      continue;
    }
    v16 = v22;
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x100) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v11 = v21;
          v19 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 104LL);
          goto LABEL_26;
        }
        v11 = v21;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v11 = v21;
LABEL_25:
          v19 = EngLineTo;
          goto LABEL_26;
        }
        v11 = v21;
      }
    }
    if ( ((__int64)v11[1].hsurf & 0x100) == 0 )
      goto LABEL_25;
    v19 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))*((_QWORD *)v11->hdev + 167);
LABEL_26:
    v9 &= OffLineTo(v19, &v25, v11, v16, v27, v23, a5, a6, a7, v26, a9);
    if ( v24 )
    {
      v15 = v24[6];
      goto LABEL_28;
    }
  }
  return v9;
}
