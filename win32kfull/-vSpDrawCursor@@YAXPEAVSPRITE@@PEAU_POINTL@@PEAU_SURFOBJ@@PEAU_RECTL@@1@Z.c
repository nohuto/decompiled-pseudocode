void __fastcall vSpDrawCursor(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _RECTL *a4,
        struct _POINTL *a5)
{
  __int64 v8; // rbx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // ecx
  __int64 v15; // r15
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _POINTL *v17; // r12
  __int64 v18; // r13
  __int64 v19; // r15
  int *v20; // r14
  __int64 v21; // rbx
  int v22; // eax
  BOOL (__stdcall *v23)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _RECTL *v24; // [rsp+48h] [rbp-31h]
  __int64 v25; // [rsp+78h] [rbp-1h] BYREF
  int v26[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+5Fh] BYREF
  int *v28; // [rsp+E0h] [rbp+67h]
  __int64 v29; // [rsp+F0h] [rbp+77h]

  v29 = (__int64)a4;
  v28 = (int *)a2;
  v27 = 0LL;
  if ( *((_QWORD *)a1 + 15) )
  {
    v8 = *((_QWORD *)a1 + 2);
    v25 = 0LL;
    v9 = Gre::Base::Globals(a1);
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (Gre::Base *)&v25,
                          0LL,
                          0,
                          *((_QWORD *)v9 + 754),
                          *(_QWORD *)(*(_QWORD *)(v8 + 32) + 104LL),
                          *((_QWORD *)v9 + 750),
                          *((_QWORD *)v9 + 750),
                          0,
                          0xFFFFFF,
                          0,
                          0) )
    {
LABEL_58:
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v25);
      return;
    }
    p_pvScan0 = 0LL;
    if ( a3 )
    {
      hsurf = (int)a3[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &a3[-1].pvScan0;
        GreLockDisplayDevice(a3->hdev);
      }
    }
    v12 = *((_QWORD *)a1 + 15);
    v13 = 0LL;
    *(_QWORD *)v26 = 0LL;
    if ( v12 )
    {
      v14 = *(_DWORD *)(v12 + 88);
      if ( (v14 & 0x80004000) != 0 && (v14 & 0x200) == 0 )
      {
        v13 = v12 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v12 - 24 + 48));
      }
    }
    v15 = *((_QWORD *)a1 + 15);
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
      {
        v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
        goto LABEL_28;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_27;
      }
    }
    if ( ((__int64)a3[1].hsurf & 1) == 0 )
LABEL_27:
      v16 = EngBitBlt;
    else
      v16 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 163);
LABEL_28:
    v17 = a5;
    v24 = a4;
    v18 = v25;
    OffBitBlt(
      (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v16,
      v28,
      (__int64)a3,
      v26,
      v15,
      0LL,
      0LL,
      v25,
      &v24->left,
      (__int64 *)a5,
      0LL,
      0LL,
      0LL,
      34952);
    if ( v13 )
      GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
    v19 = *((_QWORD *)a1 + 16);
    LODWORD(v27) = v17->x;
    if ( v19 )
    {
      v20 = (int *)((char *)a1 + 136);
      HIDWORD(v27) = v17->y;
      v18 = 0LL;
      v21 = 0LL;
    }
    else
    {
      v19 = *((_QWORD *)a1 + 15);
      v20 = v26;
      HIDWORD(v27) = v17->y + (*(int *)(v19 + 36) >> 1);
      v21 = 0LL;
      if ( !v19 )
      {
LABEL_37:
        if ( a3->iType != 1 )
          goto LABEL_51;
        if ( bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
        {
          v23 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_54:
          OffBitBlt(
            (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v23,
            v28,
            (__int64)a3,
            v20,
            v19,
            0LL,
            0LL,
            v18,
            (int *)v29,
            &v27,
            0LL,
            0LL,
            0LL,
            26214);
          if ( v21 )
            GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
          if ( p_pvScan0 )
            GreUnlockDisplayDevice(p_pvScan0[6]);
          goto LABEL_58;
        }
        if ( a3->iType != 1
          || !bAllowShareAccess(a3)
          || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
        {
LABEL_51:
          if ( ((__int64)a3[1].hsurf & 1) != 0 )
          {
            v23 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 163);
            goto LABEL_54;
          }
        }
        v23 = EngBitBlt;
        goto LABEL_54;
      }
    }
    v22 = *(_DWORD *)(v19 + 88);
    if ( (v22 & 0x80004000) != 0 && (v22 & 0x200) == 0 )
    {
      v21 = v19 - 24;
      GreLockDisplayDevice(*(_QWORD *)(v19 - 24 + 48));
    }
    goto LABEL_37;
  }
}
