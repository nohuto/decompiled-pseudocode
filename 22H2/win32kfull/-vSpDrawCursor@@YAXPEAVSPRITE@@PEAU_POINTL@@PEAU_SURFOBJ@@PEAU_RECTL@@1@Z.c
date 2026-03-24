/*
 * XREFs of ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C0282E68
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0163E9C (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084E50 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B565C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010F18C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffBitBlt @ 0x1C0129B40 (OffBitBlt.c)
 */

void __fastcall vSpDrawCursor(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _RECTL *a4,
        struct _POINTL *a5)
{
  __int64 v8; // rdx
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // ecx
  BOOL (__stdcall *v14)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r12
  BOOL (__stdcall *v15)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _POINTL *v16; // r15
  POINTL *v17; // r13
  __int64 v18; // rbp
  __int64 v19; // r14
  int y; // eax
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-98h]
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
    v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 104LL);
    v24 = 0LL;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          &v24,
                          0LL,
                          0,
                          (__int64)ppalMono,
                          v23,
                          (__int64)ppalDefault,
                          (__int64)ppalDefault,
                          0,
                          0xFFFFFF,
                          0,
                          0) )
    {
LABEL_57:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v24, v8);
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
    v11 = *((_QWORD *)a1 + 15);
    v12 = 0LL;
    if ( v11 )
    {
      v13 = *(_DWORD *)(v11 + 88);
      if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
      {
        v12 = v11 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v11 - 24 + 48));
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
      v15 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
LABEL_28:
    v16 = a5;
    v17 = &gptlZero;
    v25 = v24;
    OffBitBlt(
      (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v15,
      v27,
      (__int64)a3,
      &gptlZero,
      *((_QWORD *)a1 + 15),
      0LL,
      0LL,
      v24,
      &a4->left,
      (__int64 *)a5,
      0LL,
      0LL,
      0LL,
      34952);
    if ( v12 )
      GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
    v18 = *((_QWORD *)a1 + 16);
    LODWORD(v26) = v16->x;
    if ( v18 )
    {
      y = v16->y;
      v17 = (POINTL *)((char *)a1 + 136);
      v19 = 0LL;
    }
    else
    {
      v18 = *((_QWORD *)a1 + 15);
      v19 = v25;
      y = v16->y + (*(int *)(v18 + 36) >> 1);
    }
    HIDWORD(v26) = y;
    v21 = 0LL;
    if ( v18 )
    {
      v22 = *(_DWORD *)(v18 + 88);
      if ( (v22 & 0x80004000) != 0 && (v22 & 0x200) == 0 )
      {
        v21 = v18 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v18 - 24 + 48));
      }
    }
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
        if ( v21 )
          GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
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
      v14 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
    goto LABEL_53;
  }
}
