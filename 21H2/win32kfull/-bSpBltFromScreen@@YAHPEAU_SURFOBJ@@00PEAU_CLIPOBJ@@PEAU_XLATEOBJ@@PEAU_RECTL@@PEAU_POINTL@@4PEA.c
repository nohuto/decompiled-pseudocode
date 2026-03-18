/*
 * XREFs of ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00FA780
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001F4EC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0031174 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0086ADC (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0086B34 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0086C30 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0086C90 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C00FAC84 (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00FAD28 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00FAD78 (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00FAE0C (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00FAE48 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     OffBitBlt @ 0x1C0114EC4 (OffBitBlt.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0157480 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0281178 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0281544 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

__int64 __fastcall bSpBltFromScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // esi
  struct _RECTL *v12; // rbx
  struct _CLIPOBJ *v13; // rdi
  HDEV v16; // r12
  int v17; // eax
  LONG x; // ecx
  LONG left; // edx
  int v20; // r13d
  int v21; // edx
  LONG v22; // eax
  struct _POINTL *v23; // rdx
  int v24; // r9d
  BYTE iDComplexity; // bl
  int v26; // eax
  struct _SURFOBJ *v27; // rdx
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  struct _SURFOBJ *v30; // rcx
  PVOID *v31; // rbx
  int v32; // eax
  PVOID *v34; // rdi
  int v35; // eax
  PVOID *v36; // rbx
  int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // r14d
  RECTL rclBounds; // xmm6
  BOOL (__stdcall *v41)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  LONG y; // r8d
  LONG v43; // ecx
  int v44; // ecx
  BOOL (__stdcall *v45)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  BYTE v46; // [rsp+78h] [rbp-90h]
  int v48; // [rsp+88h] [rbp-80h]
  struct _RECTL *v49; // [rsp+90h] [rbp-78h]
  POINTL *v50; // [rsp+98h] [rbp-70h]
  struct _SURFOBJ *v51; // [rsp+A0h] [rbp-68h]
  int v52; // [rsp+B4h] [rbp-54h]
  __int64 v53; // [rsp+B8h] [rbp-50h] BYREF
  HDEV hdev; // [rsp+C0h] [rbp-48h] BYREF
  struct SPRITE *v55; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-38h]
  __int64 v57; // [rsp+D8h] [rbp-30h]
  __int64 v58; // [rsp+E0h] [rbp-28h]
  __int64 v59; // [rsp+E8h] [rbp-20h]
  char v60[8]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v61[96]; // [rsp+F8h] [rbp-10h] BYREF
  struct _SPRITESTATE *v62[24]; // [rsp+158h] [rbp+50h] BYREF
  struct _RECTL v63; // [rsp+218h] [rbp+110h] BYREF
  struct _RECTL v64; // [rsp+228h] [rbp+120h] BYREF
  RECTL v65; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v66[4]; // [rsp+248h] [rbp+140h] BYREF
  RECTL v67; // [rsp+268h] [rbp+160h] BYREF

  v11 = 0;
  v12 = a6;
  v13 = a4;
  v58 = (__int64)a8;
  v57 = (__int64)a9;
  v56 = (__int64)a10;
  v59 = (__int64)a3;
  v49 = a6;
  v53 = 0LL;
  v55 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v65 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v65) )
      return 1LL;
    v67 = rclBounds;
    ERECTL::operator*=(&v67.left, &a6->left);
    v12 = &v67;
    v49 = &v67;
  }
  hdev = a2->hdev;
  memset(v66, 0, 24);
  v16 = hdev + 20;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v66);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v60, ghsemSprite, v17);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo((UNDOW32THREADPIDLOCKS *)v66) )
    goto LABEL_37;
  if ( !(unsigned int)bInsideDriverCall((struct _SPRITESTATE *)v16) && !(unsigned int)SURFACE::bIncludeSprites() )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v62, (struct PDEVOBJ *)&hdev);
    x = a7->x;
    left = v12->left;
    v20 = v12->top - a7->y;
    v63.top = a7->y;
    v21 = left - x;
    v22 = v12->right - v21;
    v63.left = x;
    v63.right = v22;
    v48 = v21;
    v63.bottom = v12->bottom - v20;
    SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v16 + 30));
    if ( *((_QWORD *)v16 + 129) )
      vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v16, v23, v49, v13, 1);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v16 + 30));
    if ( v48 > 0 )
    {
      v24 = 3;
      if ( v20 <= 0 )
        v24 = 1;
    }
    else
    {
      v24 = 0;
      if ( v20 > 0 )
        v24 = 2;
    }
    if ( v13 )
    {
      iDComplexity = v13->iDComplexity;
      v46 = iDComplexity;
      if ( iDComplexity )
        v65 = v13->rclBounds;
    }
    else
    {
      iDComplexity = 0;
      v46 = 0;
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v61, (struct _SPRITESTATE *)v16, &v63, v24, 0LL);
    while ( 1 )
    {
      v26 = ENUMAREAS::bEnum((ENUMAREAS *)v61, &v55, &v63);
      v64.left = v48 + v63.left;
      v64.right = v48 + v63.right;
      v64.top = v20 + v63.top;
      v52 = v26;
      v64.bottom = v20 + v63.bottom;
      if ( !iDComplexity || bIntersect(&v64, &v65, &v13->rclBounds) )
        break;
LABEL_33:
      if ( !v52 )
      {
        if ( iDComplexity )
          v13->rclBounds = v65;
        v11 = 1;
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v61);
        SPRITEDDIACCESS::~SPRITEDDIACCESS(v62);
        goto LABEL_37;
      }
    }
    if ( v55 )
    {
      v27 = (struct _SURFOBJ *)*((_QWORD *)v55 + 20);
      v50 = (POINTL *)((char *)v55 + 168);
    }
    else
    {
      v27 = (struct _SURFOBJ *)*((_QWORD *)v16 + 4);
      v50 = &gptlZero;
    }
    v51 = v27;
    p_pvScan0 = 0LL;
    if ( a1 )
    {
      hsurf = (int)a1[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &a1[-1].pvScan0;
        GreLockDisplayDevice(a1->hdev);
      }
    }
    v30 = v51;
    v31 = 0LL;
    if ( v51 )
    {
      v32 = (int)v51[1].hsurf;
      if ( (v32 & 0x80004000) != 0 && (v32 & 0x200) == 0 )
      {
        v31 = &v51[-1].pvScan0;
        GreLockDisplayDevice(v51->hdev);
        v30 = v51;
      }
    }
    if ( a11 == 52428 )
    {
      INVOKEOFFCOPYBITS(&gptlZero, a1, v50, v30, a4, a5, &v64, (struct _POINTL *)&v63);
LABEL_28:
      if ( v31 )
        GreUnlockDisplayDevice(v31[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
      iDComplexity = v46;
      v13 = a4;
      goto LABEL_33;
    }
    if ( v58 )
    {
      LODWORD(v53) = v64.left + *(_DWORD *)v58 - v49->left;
      HIDWORD(v53) = v64.top + *(_DWORD *)(v58 + 4) - v49->top;
    }
    if ( a1->iType != 1 )
      goto LABEL_80;
    if ( bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
    {
      v41 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_83:
      OffBitBlt(
        (int)v41,
        (int)&gptlZero,
        (int)a1,
        (int)v50,
        (__int64)v51,
        v59,
        a4,
        (__int64)a5,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v53,
        v57,
        v56,
        a11);
      goto LABEL_28;
    }
    if ( a1->iType != 1
      || !bAllowShareAccess(a1)
      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
    {
LABEL_80:
      if ( ((__int64)a1[1].hsurf & 1) != 0 )
      {
        v41 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 163);
        goto LABEL_83;
      }
    }
    v41 = EngBitBlt;
    goto LABEL_83;
  }
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v62, (struct PDEVOBJ *)&hdev);
  if ( *((_QWORD *)v16 + 166) )
  {
    y = a7->y;
    v43 = a7->x + v12->right - v12->left;
    v63.left = a7->x;
    v63.right = v43;
    v44 = v12->bottom - v12->top;
    v63.top = y;
    v63.bottom = y + v44;
    PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v66, (struct _SPRITESTATE *)v16, &v63);
    if ( v66[0] )
      vSpRedrawAreaExMirror((struct _SPRITESTATE *)v16, &v63);
    a2 = (struct _SURFOBJ *)*((_QWORD *)v16 + 166);
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v66);
  }
  v34 = 0LL;
  if ( a1 )
  {
    v35 = (int)a1[1].hsurf;
    if ( (v35 & 0x80004000) != 0 && (v35 & 0x200) == 0 )
    {
      v34 = &a1[-1].pvScan0;
      GreLockDisplayDevice(a1->hdev);
    }
  }
  v36 = 0LL;
  if ( a2 )
  {
    v37 = (int)a2[1].hsurf;
    if ( (v37 & 0x80004000) != 0 && (v37 & 0x200) == 0 )
    {
      v36 = &a2[-1].pvScan0;
      GreLockDisplayDevice(a2->hdev);
    }
  }
  if ( a11 == 52428 )
  {
    v38 = INVOKEOFFCOPYBITS(&gptlZero, a1, &gptlZero, a2, a4, a5, v49, a7);
    goto LABEL_50;
  }
  if ( a1->iType != 1 )
  {
LABEL_101:
    if ( ((__int64)a1[1].hsurf & 1) != 0 )
    {
      v45 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 163);
      goto LABEL_104;
    }
LABEL_103:
    v45 = EngBitBlt;
    goto LABEL_104;
  }
  if ( !bAllowShareAccess(a1)
    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
    || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) == 0 )
  {
    if ( a1->iType == 1
      && bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
    {
      goto LABEL_103;
    }
    goto LABEL_101;
  }
  v45 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_104:
  v38 = OffBitBlt(
          (int)v45,
          (int)&gptlZero,
          (int)a1,
          (int)&gptlZero,
          (__int64)a2,
          v59,
          a4,
          (__int64)a5,
          (__int64)v49,
          (__int64)a7,
          v58,
          v57,
          v56,
          a11);
LABEL_50:
  v39 = v38;
  if ( v36 )
    GreUnlockDisplayDevice(v36[6]);
  if ( v34 )
    GreUnlockDisplayDevice(v34[6]);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v62);
  v11 = v39;
LABEL_37:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v60);
  return v11;
}
