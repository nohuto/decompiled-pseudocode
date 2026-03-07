void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int hsurf; // eax
  __int64 v12; // r14
  struct _XLATEOBJ *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdx
  struct Gre::Base::SESSION_GLOBALS *v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rbx
  int (*v20)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rdi
  HDEV hdev; // rax
  struct _XLATEOBJ *v22; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *p_pvScan0; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  struct _CLIPOBJ *v25; // [rsp+78h] [rbp-88h]
  struct _POINTL *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h] BYREF
  struct _RECTL *v29; // [rsp+98h] [rbp-68h]
  struct _POINTL *v30; // [rsp+A0h] [rbp-60h]
  _BYTE v31[4]; // [rsp+B0h] [rbp-50h] BYREF
  char v32[52]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 v34; // [rsp+100h] [rbp+0h]
  int v35; // [rsp+108h] [rbp+8h]
  int v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+140h] [rbp+40h]
  int v38; // [rsp+148h] [rbp+48h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 129);
  v29 = a4;
  v30 = a2;
  v34 = 0LL;
  v35 = 0;
  v36 = 1;
  v37 = 0LL;
  v33 = 0LL;
  v38 = 0;
  v25 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v31, v8, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)v32) )
      goto LABEL_18;
    v25 = (struct _CLIPOBJ *)v31;
  }
  v9 = *((_QWORD *)a1 + 4);
  v24 = 0LL;
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 88);
    if ( (v10 & 0x80004000) != 0 && (v10 & 0x200) == 0 )
    {
      v24 = v9 - 24;
      GreLockDisplayDevice(*(_QWORD *)(v9 - 24 + 48));
    }
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
  v12 = *((_QWORD *)a1 + 4);
  v13 = 0LL;
  v22 = 0LL;
  v27 = 0LL;
  v26 = (struct _POINTL *)&v27;
  if ( ((v12 - 24) & -(__int64)(v12 != 0)) == 0 )
    goto LABEL_17;
  v14 = *(_QWORD *)(((v12 - 24) & -(__int64)(v12 != 0)) + 0x30);
  v16 = Gre::Base::Globals((Gre::Base *)(v12 - 24));
  if ( (*(_DWORD *)(((v12 - 24) & -(__int64)(v12 != 0)) + 0x70) & 0x80000) != 0 )
  {
    v17 = *(_QWORD *)(v14 + 24);
    if ( v14 != v17 )
    {
      v18 = *(_QWORD *)(((v12 - 24) & -(__int64)(v12 != 0)) + 0x90);
      LOBYTE(v15) = 5;
      v26 = (struct _POINTL *)(v14 + 2560);
      v12 = 0LL;
      v28 = HmgShareLockCheck(v18, v15);
      v19 = v28;
      if ( !v28 )
      {
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v28);
LABEL_17:
        EXLATEOBJ::vAltUnlock((Gre::Base **)&v22);
        NEEDDDILOCK::~NEEDDDILOCK((NEEDDDILOCK *)&p_pvScan0);
        NEEDDDILOCK::~NEEDDDILOCK((NEEDDDILOCK *)&v24);
        goto LABEL_18;
      }
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (Gre::Base *)&v22,
                            0LL,
                            0,
                            *(_QWORD *)(v17 + 1776),
                            *(_QWORD *)(v14 + 1776),
                            *((_QWORD *)v16 + 750),
                            *((_QWORD *)v16 + 750),
                            0,
                            0,
                            0,
                            0x2000) )
      {
        if ( v19 )
          DEC_SHARE_REF_CNT(v19);
        goto LABEL_17;
      }
      v13 = v22;
      if ( v19 )
        v12 = v19 + 24;
      v20 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(v17 + 2816);
      if ( v19 )
        DEC_SHARE_REF_CNT(v19);
      goto LABEL_61;
    }
  }
  if ( _bittest((const signed __int32 *)&a3[1].hsurf, 0xAu) || !*(_QWORD *)(v12 + 24) )
  {
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && _bittest(
             (const signed __int32 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL),
             0xAu) )
      {
        goto LABEL_50;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_60;
      }
    }
    if ( _bittest((const signed __int32 *)&a3[1].hsurf, 0xAu) )
    {
      hdev = a3->hdev;
      goto LABEL_59;
    }
LABEL_60:
    v20 = EngCopyBits;
    goto LABEL_61;
  }
  if ( *(_WORD *)(v12 + 76) != 1 )
  {
LABEL_41:
    if ( _bittest((const signed __int32 *)(v12 + 88), 0xAu) )
    {
      hdev = *(HDEV *)(v12 + 24);
LABEL_59:
      v20 = (int (*)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))*((_QWORD *)hdev + 164);
      goto LABEL_61;
    }
    goto LABEL_60;
  }
  if ( !bAllowShareAccess((struct _SURFOBJ *)v12)
    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
    || !_bittest(
          (const signed __int32 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL),
          0xAu) )
  {
    if ( *(_WORD *)(v12 + 76) == 1
      && bAllowShareAccess((struct _SURFOBJ *)v12)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
    {
      goto LABEL_60;
    }
    goto LABEL_41;
  }
LABEL_50:
  v20 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
LABEL_61:
  OffCopyBitsInternal(v20, v30, a3, v26, (struct _SURFOBJ *)v12, v25, v13, v29, (struct _POINTL *)v29);
  EXLATEOBJ::vAltUnlock((Gre::Base **)&v22);
  if ( p_pvScan0 )
    GreUnlockDisplayDevice(p_pvScan0[6]);
  if ( v24 )
    GreUnlockDisplayDevice(*(_QWORD *)(v24 + 48));
LABEL_18:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v31);
}
