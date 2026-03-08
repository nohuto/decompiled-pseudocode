/*
 * XREFs of ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0018CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0018890 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00188CC (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0018908 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0018A84 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0018B14 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C0018C10 (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0019198 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00191F0 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C001B784 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     OffBitBlt @ 0x1C001CD04 (OffBitBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C001CEF4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C001CF28 (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0065AF0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065E34 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00F46B8 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C028278C (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02846B0 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C028512C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
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
  struct _RECTL *v11; // r14
  HDEV v15; // r13
  Gre::Base *v16; // rcx
  struct Gre::Base::SESSION_GLOBALS *v17; // rbx
  int v18; // eax
  LONG x; // ecx
  LONG left; // edx
  int v21; // r12d
  int v22; // edx
  LONG v23; // eax
  LONG v24; // eax
  struct _RECTL *v25; // r15
  int v26; // r9d
  BYTE iDComplexity; // bl
  RECTL *p_rclBounds; // rdi
  struct _CLIPOBJ *v29; // r12
  int v30; // eax
  __int64 v31; // rdx
  struct _POINTL *v32; // rax
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  struct _SURFOBJ *v35; // rcx
  __int64 v36; // rbx
  int v37; // eax
  PVOID *v39; // rdi
  int v40; // eax
  PVOID *v41; // rbx
  int v42; // eax
  int v43; // eax
  unsigned int v44; // esi
  RECTL rclBounds; // xmm6
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  LONG y; // r8d
  LONG v48; // ecx
  int v49; // ecx
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  BYTE v51; // [rsp+78h] [rbp-90h]
  struct _RECTL *v52; // [rsp+80h] [rbp-88h]
  __int64 v53; // [rsp+80h] [rbp-88h]
  struct _POINTL v54; // [rsp+88h] [rbp-80h] BYREF
  struct _CLIPOBJ *v55; // [rsp+90h] [rbp-78h]
  int v56; // [rsp+98h] [rbp-70h]
  struct _XLATEOBJ *v57; // [rsp+A0h] [rbp-68h]
  int v58; // [rsp+A8h] [rbp-60h]
  int v59; // [rsp+ACh] [rbp-5Ch]
  __int64 v60; // [rsp+B0h] [rbp-58h] BYREF
  HDEV hdev; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v62[8]; // [rsp+C0h] [rbp-48h] BYREF
  struct SPRITE *v63; // [rsp+C8h] [rbp-40h] BYREF
  RECTL *v64; // [rsp+D0h] [rbp-38h]
  __int64 v65; // [rsp+D8h] [rbp-30h]
  __int64 v66; // [rsp+E0h] [rbp-28h]
  __int64 v67; // [rsp+E8h] [rbp-20h]
  __int64 v68; // [rsp+F0h] [rbp-18h]
  _BYTE v69[96]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v70[192]; // [rsp+158h] [rbp+50h] BYREF
  struct _RECTL v71; // [rsp+218h] [rbp+110h] BYREF
  struct _RECTL v72; // [rsp+228h] [rbp+120h] BYREF
  RECTL v73; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v74[4]; // [rsp+248h] [rbp+140h] BYREF
  RECTL v75; // [rsp+268h] [rbp+160h] BYREF

  v11 = a6;
  v57 = a5;
  v67 = (__int64)a8;
  v66 = (__int64)a9;
  v65 = (__int64)a10;
  v55 = a4;
  v68 = (__int64)a3;
  v52 = a6;
  v60 = 0LL;
  v63 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v75 = 0LL;
  v73 = 0LL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v73 = rclBounds;
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v73) )
      return 1LL;
    v75 = rclBounds;
    ERECTL::operator*=(&v75, a6);
    v11 = &v75;
    v52 = &v75;
  }
  hdev = a2->hdev;
  memset(v74, 0, 24);
  v15 = hdev + 20;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v74);
  v17 = Gre::Base::Globals(v16);
  v18 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v62, *((HSEMAPHORE *)v17 + 14), v18);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo((UNDOW32THREADPIDLOCKS *)v74) )
  {
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v62);
    return 0LL;
  }
  if ( !(unsigned int)bInsideDriverCall((struct _SPRITESTATE *)v15) && !(unsigned int)SURFACE::bIncludeSprites() )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v70, (struct PDEVOBJ *)&hdev);
    x = a7->x;
    left = v11->left;
    v21 = v11->top - a7->y;
    v71.top = a7->y;
    v22 = left - x;
    v23 = v11->right - v22;
    v71.left = x;
    v71.right = v23;
    v24 = v11->bottom - v21;
    v56 = v22;
    v71.bottom = v24;
    v58 = v21;
    SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v15 + 30));
    v54 = 0LL;
    v25 = v52;
    if ( *((_QWORD *)v15 + 129) )
      vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v15, &v54, v52, a4, 1);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v15 + 30));
    if ( v56 > 0 )
    {
      v26 = 3;
      if ( v21 <= 0 )
        v26 = 1;
    }
    else
    {
      v26 = 0;
      if ( v21 > 0 )
        v26 = 2;
    }
    if ( a4 )
    {
      iDComplexity = a4->iDComplexity;
      v51 = iDComplexity;
      if ( iDComplexity )
        v73 = a4->rclBounds;
    }
    else
    {
      iDComplexity = 0;
      v51 = 0;
    }
    p_rclBounds = &a4->rclBounds;
    v64 = p_rclBounds;
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v69, (struct _SPRITESTATE *)v15, &v71, v26, 0LL);
    v29 = v55;
    while ( 1 )
    {
      v30 = ENUMAREAS::bEnum((ENUMAREAS *)v69, &v63, &v71);
      v72.left = v56 + v71.left;
      v72.right = v56 + v71.right;
      v72.top = v58 + v71.top;
      v59 = v30;
      v72.bottom = v58 + v71.bottom;
      if ( !iDComplexity || bIntersect(&v72, &v73, p_rclBounds) )
        break;
LABEL_31:
      if ( !v59 )
      {
        if ( iDComplexity )
          *p_rclBounds = v73;
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v69);
        SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v70);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v62);
        return 1LL;
      }
    }
    if ( v63 )
    {
      v31 = *((_QWORD *)v63 + 20);
      v32 = (struct _POINTL *)((char *)v63 + 168);
    }
    else
    {
      v31 = *((_QWORD *)v15 + 4);
      v32 = &v54;
    }
    p_pvScan0 = 0LL;
    v55 = (struct _CLIPOBJ *)v32;
    v53 = v31;
    if ( a1 )
    {
      hsurf = (int)a1[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &a1[-1].pvScan0;
        GreLockDisplayDevice(a1->hdev);
      }
    }
    v35 = (struct _SURFOBJ *)v53;
    v36 = 0LL;
    if ( v53 )
    {
      v37 = *(_DWORD *)(v53 + 88);
      if ( (v37 & 0x80004000) != 0 && (v37 & 0x200) == 0 )
      {
        v36 = v53 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v53 - 24 + 48));
        v35 = (struct _SURFOBJ *)v53;
      }
    }
    if ( a11 == 52428 )
    {
      INVOKEOFFCOPYBITS(&v54, a1, (struct _POINTL *)v55, v35, v29, v57, &v72, (struct _POINTL *)&v71);
LABEL_26:
      if ( v36 )
        GreUnlockDisplayDevice(*(_QWORD *)(v36 + 48));
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
      p_rclBounds = v64;
      iDComplexity = v51;
      goto LABEL_31;
    }
    if ( v67 )
    {
      LODWORD(v60) = v72.left + *(_DWORD *)v67 - v25->left;
      HIDWORD(v60) = v72.top + *(_DWORD *)(v67 + 4) - v25->top;
    }
    if ( a1->iType != 1 )
      goto LABEL_80;
    if ( (unsigned int)bAllowShareAccess(a1)
      && W32GetThreadWin32Thread(KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
    {
      v46 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 72LL);
LABEL_83:
      OffBitBlt(
        (int)v46,
        (int)&v54,
        (int)a1,
        (int)v55,
        v53,
        v68,
        v29,
        (__int64)v57,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v60,
        v66,
        v65,
        a11);
      goto LABEL_26;
    }
    if ( a1->iType != 1
      || !(unsigned int)bAllowShareAccess(a1)
      || !W32GetThreadWin32Thread(KeGetCurrentThread())
      || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
    {
LABEL_80:
      if ( ((__int64)a1[1].hsurf & 1) != 0 )
      {
        v46 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 163);
        goto LABEL_83;
      }
    }
    v46 = EngBitBlt;
    goto LABEL_83;
  }
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v70, (struct PDEVOBJ *)&hdev);
  if ( *((_QWORD *)v15 + 166) )
  {
    y = a7->y;
    v48 = a7->x + v11->right - v11->left;
    v71.left = a7->x;
    v71.right = v48;
    v49 = v11->bottom - v11->top;
    v71.top = y;
    v71.bottom = y + v49;
    PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v74, (struct _SPRITESTATE *)v15, &v71);
    if ( v74[0] )
      vSpRedrawAreaExMirror((struct _SPRITESTATE *)v15, &v71);
    a2 = (struct _SURFOBJ *)*((_QWORD *)v15 + 166);
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v74);
  }
  v39 = 0LL;
  if ( a1 )
  {
    v40 = (int)a1[1].hsurf;
    if ( (v40 & 0x80004000) != 0 && (v40 & 0x200) == 0 )
    {
      v39 = &a1[-1].pvScan0;
      GreLockDisplayDevice(a1->hdev);
    }
  }
  v41 = 0LL;
  if ( a2 )
  {
    v42 = (int)a2[1].hsurf;
    if ( (v42 & 0x80004000) != 0 && (v42 & 0x200) == 0 )
    {
      v41 = &a2[-1].pvScan0;
      GreLockDisplayDevice(a2->hdev);
    }
  }
  v54 = 0LL;
  if ( a11 != 52428 )
  {
    if ( a1->iType != 1 )
      goto LABEL_101;
    if ( (unsigned int)bAllowShareAccess(a1)
      && W32GetThreadWin32Thread(KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
    {
      v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 72LL);
LABEL_104:
      v43 = OffBitBlt(
              (int)v50,
              (int)&v54,
              (int)a1,
              (int)&v54,
              (__int64)a2,
              v68,
              v55,
              (__int64)v57,
              (__int64)v52,
              (__int64)a7,
              v67,
              v66,
              v65,
              a11);
      goto LABEL_46;
    }
    if ( a1->iType != 1
      || !(unsigned int)bAllowShareAccess(a1)
      || !W32GetThreadWin32Thread(KeGetCurrentThread())
      || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
    {
LABEL_101:
      if ( ((__int64)a1[1].hsurf & 1) != 0 )
      {
        v50 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 163);
        goto LABEL_104;
      }
    }
    v50 = EngBitBlt;
    goto LABEL_104;
  }
  v43 = INVOKEOFFCOPYBITS(&v54, a1, &v54, a2, v55, v57, v11, a7);
LABEL_46:
  v44 = v43;
  if ( v41 )
    GreUnlockDisplayDevice(v41[6]);
  if ( v39 )
    GreUnlockDisplayDevice(v39[6]);
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v70);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v62);
  return v44;
}
