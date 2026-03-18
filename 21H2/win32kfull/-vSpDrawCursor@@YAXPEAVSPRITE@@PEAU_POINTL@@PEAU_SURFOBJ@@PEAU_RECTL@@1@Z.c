/*
 * XREFs of ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C0280C94
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0155F90 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffBitBlt @ 0x1C0114EC4 (OffBitBlt.c)
 */

void __fastcall vSpDrawCursor(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _RECTL *a4,
        struct _POINTL *a5)
{
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  int v13; // ecx
  BOOL (__stdcall *v14)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r12
  BOOL (__stdcall *v15)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _POINTL *v16; // r15
  POINTL *v17; // r13
  __int64 v18; // r14
  __int64 v19; // rbp
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-98h]
  struct _RECTL *v23; // [rsp+40h] [rbp-78h]
  __int64 v24; // [rsp+70h] [rbp-48h] BYREF
  __int64 v25; // [rsp+78h] [rbp-40h]
  __int64 v26; // [rsp+C0h] [rbp+8h] BYREF
  LONG *v27; // [rsp+C8h] [rbp+10h]
  __int64 v28; // [rsp+D8h] [rbp+20h]

  v28 = (__int64)a4;
  v27 = (LONG *)a2;
  v26 = 0LL;
  if ( *((_QWORD *)a1 + 15) )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 104LL);
    v24 = 0LL;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          &v24,
                          0LL,
                          0,
                          (__int64)ppalMono,
                          v22,
                          (__int64)ppalDefault,
                          (__int64)ppalDefault,
                          0,
                          0xFFFFFF,
                          0,
                          0) )
    {
LABEL_57:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v24);
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
    v10 = *((_QWORD *)a1 + 15);
    v11 = 0LL;
    v12 = v10;
    if ( v10 )
    {
      v13 = *(_DWORD *)(v10 + 88);
      if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
      {
        v11 = v10 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v10 - 24 + 48));
        v12 = *((_QWORD *)a1 + 15);
      }
    }
    v14 = EngBitBlt;
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
      {
        v15 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
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
      v15 = EngBitBlt;
    else
      v15 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 163);
LABEL_28:
    v16 = a5;
    v23 = a4;
    v17 = &gptlZero;
    v25 = v24;
    OffBitBlt(
      (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v15,
      v27,
      (__int64)a3,
      &gptlZero,
      v12,
      0LL,
      0LL,
      v24,
      &v23->left,
      (__int64 *)a5,
      0LL,
      0LL,
      0LL,
      34952);
    if ( v11 )
      GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
    v18 = *((_QWORD *)a1 + 16);
    LODWORD(v26) = v16->x;
    if ( v18 )
    {
      v17 = (POINTL *)((char *)a1 + 136);
      HIDWORD(v26) = v16->y;
      v19 = 0LL;
    }
    else
    {
      v18 = *((_QWORD *)a1 + 15);
      v19 = v25;
      HIDWORD(v26) = v16->y + (*(int *)(v18 + 36) >> 1);
      v20 = 0LL;
      if ( !v18 )
        goto LABEL_37;
    }
    v21 = *(_DWORD *)(v18 + 88);
    v20 = 0LL;
    if ( (v21 & 0x80004000) != 0 && (v21 & 0x200) == 0 )
    {
      v20 = v18 - 24;
      GreLockDisplayDevice(*(_QWORD *)(v18 - 24 + 48));
    }
LABEL_37:
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
      {
        v14 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_53:
        OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v14,
          v27,
          (__int64)a3,
          v17,
          v18,
          0LL,
          0LL,
          v19,
          (int *)v28,
          &v26,
          0LL,
          0LL,
          0LL,
          26214);
        if ( v20 )
          GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        goto LABEL_57;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_53;
      }
    }
    if ( ((__int64)a3[1].hsurf & 1) != 0 )
      v14 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 163);
    goto LABEL_53;
  }
}
