BOOL __fastcall SpTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *prclDst,
        struct _RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  int v9; // r13d
  HDEV hdev; // rax
  struct _SURFOBJ *v11; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  HDEV v14; // rcx
  int v15; // eax
  PVOID *v16; // rdi
  struct _CLIPOBJ *v17; // r12
  USHORT *p_iType; // r14
  BOOL (__stdcall *v19)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v22; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v23; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v24; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v25; // [rsp+78h] [rbp-88h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  int v29[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v30[912]; // [rsp+A0h] [rbp-60h] BYREF

  v25 = 0LL;
  v9 = 1;
  v28 = (__int64)a4;
  hdev = a2->hdev;
  v22 = a1;
  v24 = a3;
  v27 = (__int64)prclDst;
  v26 = (__int64)prclSrc;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v30, a1, a3, prclDst);
    *(_QWORD *)v29 = 0LL;
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v30, &v22, &v25, &v24) )
        return v9;
      v11 = v22;
      p_pvScan0 = 0LL;
      v23 = 0LL;
      if ( v22 )
      {
        hsurf = (int)v22[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v22[-1].pvScan0;
          v14 = v22->hdev;
          v23 = &v22[-1].pvScan0;
          GreLockDisplayDevice(v14);
        }
      }
      v15 = (int)a2[1].hsurf;
      v16 = 0LL;
      if ( (v15 & 0x80004000) != 0 && (v15 & 0x200) == 0 )
      {
        v16 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v23, &v24) )
        break;
LABEL_20:
      if ( v16 )
        GreUnlockDisplayDevice(v16[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
    v17 = v24;
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          p_pvScan0 = v23;
          v11 = v22;
          v19 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 112LL);
          goto LABEL_19;
        }
        p_pvScan0 = v23;
        v11 = v22;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v23;
          v11 = v22;
LABEL_18:
          v19 = EngTransparentBlt;
LABEL_19:
          v9 &= OffTransparentBlt(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, int, int))v19,
                  (int *)&v25,
                  (__int64)v11,
                  v29,
                  (__int64)a2,
                  v17,
                  v28,
                  (__int128 *)v27,
                  (__int128 *)v26,
                  iTransColor,
                  ulReserved);
          goto LABEL_20;
        }
        p_pvScan0 = v23;
        v11 = v22;
      }
    }
    if ( ((__int64)v11[1].hsurf & 0x8000) != 0 )
    {
      v19 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)v11->hdev + 168);
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  return EngTransparentBlt(a1, a2, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
}
