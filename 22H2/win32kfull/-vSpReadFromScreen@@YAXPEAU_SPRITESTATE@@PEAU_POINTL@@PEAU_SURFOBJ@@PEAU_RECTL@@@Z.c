/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0283344
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0282240 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0283FA0 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0285DA0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084E50 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B565C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010F18C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0164400 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C01644D4 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027FA90 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     OffCopyBits @ 0x1C02C84D8 (OffCopyBits.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int hsurf; // eax
  __int64 v12; // rsi
  POINTL *v13; // r12
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdx
  BOOL (__stdcall *v19)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  HDEV hdev; // rax
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v22; // [rsp+68h] [rbp-98h]
  PVOID *p_pvScan0; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  int v25[2]; // [rsp+80h] [rbp-80h]
  _BYTE v26[32]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-58h]
  REGION *v28[11]; // [rsp+B0h] [rbp-50h] BYREF
  int v29; // [rsp+108h] [rbp+8h]
  int v30; // [rsp+130h] [rbp+30h]
  __int64 v31; // [rsp+140h] [rbp+40h]
  int v32; // [rsp+148h] [rbp+48h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 129);
  *(_QWORD *)v25 = a2;
  v28[10] = 0LL;
  v29 = 0;
  v31 = 0LL;
  v30 = 1;
  v28[7] = 0LL;
  v32 = 0;
  v22 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v28, v8, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)((char *)v28 + 4)) )
      goto LABEL_65;
    v22 = (struct _CLIPOBJ *)v28;
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
  v13 = &gptlZero;
  v21 = 0LL;
  v14 = 0LL;
  v15 = (v12 - 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64);
  if ( !v15 )
    goto LABEL_61;
  if ( (*(_DWORD *)(((v12 - 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)) + 0x70) & 0x80000) == 0
    || (v16 = *(_QWORD *)(((v12 - 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)) + 0x30),
        v17 = *(_QWORD *)(v16 + 24),
        v16 == v17) )
  {
    if ( ((__int64)a3[1].hsurf & 0x400) == 0 && *(_QWORD *)(v12 + 24) )
    {
      if ( *(_WORD *)(v12 + 76) != 1 )
      {
LABEL_40:
        if ( (*(_DWORD *)(v12 + 88) & 0x400) != 0 )
        {
          hdev = *(HDEV *)(v12 + 24);
LABEL_58:
          v19 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 165);
          goto LABEL_60;
        }
        goto LABEL_59;
      }
      if ( !bAllowShareAccess((struct _SURFOBJ *)v12)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( *(_WORD *)(v12 + 76) == 1
          && bAllowShareAccess((struct _SURFOBJ *)v12)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_59;
        }
        goto LABEL_40;
      }
LABEL_49:
      v19 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                                 + 80LL);
LABEL_60:
      OffCopyBits((int)v19, v25[0], (int)a3, (int)v13, v12, v22, v14, (__int64)a4, (__int64)a4);
      goto LABEL_61;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_49;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_59;
      }
    }
    if ( ((__int64)a3[1].hsurf & 0x400) != 0 )
    {
      hdev = a3->hdev;
      goto LABEL_58;
    }
LABEL_59:
    v19 = EngCopyBits;
    goto LABEL_60;
  }
  LODWORD(v13) = v16 + 2584;
  SURFREF::SURFREF(
    (SURFREF *)v26,
    *(HSURF *)(((v12 - 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)) + 0x90));
  v12 = 0LL;
  if ( v27 )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v21,
                         0LL,
                         0,
                         *(_QWORD *)(v17 + 1808),
                         *(_QWORD *)(v16 + 1808),
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0x2000) )
    {
      v14 = v21;
      if ( v27 )
        v12 = v27 + 24;
      v19 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2840);
      if ( v27 )
        DEC_SHARE_REF_CNT(v27, v18);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v26);
      goto LABEL_60;
    }
    if ( v27 )
      DEC_SHARE_REF_CNT(v27, v18);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v26);
LABEL_61:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21, v15);
  if ( p_pvScan0 )
    GreUnlockDisplayDevice(p_pvScan0[6]);
  if ( v24 )
    GreUnlockDisplayDevice(*(_QWORD *)(v24 + 48));
LABEL_65:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v28);
}
