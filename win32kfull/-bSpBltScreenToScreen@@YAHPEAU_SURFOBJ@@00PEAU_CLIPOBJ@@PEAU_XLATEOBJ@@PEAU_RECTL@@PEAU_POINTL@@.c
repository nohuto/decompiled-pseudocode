/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02803E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001884C (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
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
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C001CEBC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C001CEF4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0065AF0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065E34 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00F46B8 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C027FE68 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C028278C (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C028445C (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C028512C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

__int64 __fastcall bSpBltScreenToScreen(
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
  unsigned int v11; // edi
  struct _RECTL *v12; // rsi
  RECTL rclBounds; // xmm6
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rbx
  int v17; // eax
  struct _SPRITESTATE *v18; // r13
  int v19; // r12d
  int v20; // r15d
  unsigned int v21; // ecx
  unsigned int v23; // eax
  struct _CLIPOBJ *v24; // r9
  struct _RECTL *v25; // r8
  LONG left; // r10d
  LONG top; // r11d
  LONG v28; // ecx
  LONG bottom; // r9d
  LONG right; // ebx
  LONG v31; // r8d
  LONG v32; // eax
  LONG v33; // edx
  unsigned int v34; // ebx
  struct _SURFOBJ *v35; // r15
  int v36; // r13d
  int v37; // eax
  struct SPRITE *v38; // rbx
  struct _CLIPOBJ *v39; // r12
  int hsurf; // eax
  struct _CLIPOBJ *v41; // rbx
  LONG v42; // eax
  LONG v43; // ecx
  __int64 ThreadWin32Thread; // rax
  DC **v45; // r15
  XCLIPOBJ *v46; // r12
  __int64 v47; // r10
  struct REGION *v48; // rax
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  int v50; // eax
  struct _CLIPOBJ *v51; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v52; // [rsp+80h] [rbp-88h]
  struct _POINTL v53; // [rsp+88h] [rbp-80h] BYREF
  int v54; // [rsp+90h] [rbp-78h]
  int v55; // [rsp+94h] [rbp-74h]
  struct _POINTL v56; // [rsp+98h] [rbp-70h]
  int v57; // [rsp+A0h] [rbp-68h]
  int v58; // [rsp+A4h] [rbp-64h]
  struct _RECTL v59; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-50h]
  HDEV hdev; // [rsp+C0h] [rbp-48h] BYREF
  struct SPRITE *v62; // [rsp+C8h] [rbp-40h] BYREF
  struct _CLIPOBJ *v63; // [rsp+D0h] [rbp-38h]
  int v64; // [rsp+D8h] [rbp-30h]
  int v65; // [rsp+DCh] [rbp-2Ch]
  struct SPRITE *v66; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v67; // [rsp+E8h] [rbp-20h] BYREF
  struct _POINTL *v68; // [rsp+F0h] [rbp-18h]
  struct _POINTL *v69; // [rsp+F8h] [rbp-10h]
  PVOID *p_pvScan0; // [rsp+100h] [rbp-8h] BYREF
  struct _POINTL v71; // [rsp+108h] [rbp+0h] BYREF
  struct _RECTL v72; // [rsp+110h] [rbp+8h] BYREF
  struct _SURFOBJ *v73; // [rsp+120h] [rbp+18h]
  struct SPRITE *v74; // [rsp+128h] [rbp+20h] BYREF
  struct _XLATEOBJ *v75; // [rsp+130h] [rbp+28h]
  struct _SURFOBJ *v76; // [rsp+138h] [rbp+30h]
  __int64 v77; // [rsp+140h] [rbp+38h] BYREF
  __int64 v78; // [rsp+148h] [rbp+40h]
  __int64 v79; // [rsp+150h] [rbp+48h]
  __int64 v80; // [rsp+158h] [rbp+50h]
  struct _SPRITESTATE *v81; // [rsp+160h] [rbp+58h]
  char v82[8]; // [rsp+168h] [rbp+60h] BYREF
  struct _POINTL *v83; // [rsp+170h] [rbp+68h]
  _BYTE v84[80]; // [rsp+178h] [rbp+70h] BYREF
  int v85; // [rsp+1C8h] [rbp+C0h]
  _BYTE v86[96]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 *v87[24]; // [rsp+238h] [rbp+130h] BYREF
  struct _RECTL v88; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _RECTL v89; // [rsp+308h] [rbp+200h] BYREF
  struct _RECTL v90; // [rsp+318h] [rbp+210h] BYREF
  RECTL v91; // [rsp+328h] [rbp+220h] BYREF
  RECTL v92; // [rsp+338h] [rbp+230h] BYREF
  struct _RECTL v93; // [rsp+348h] [rbp+240h] BYREF
  _QWORD v94[3]; // [rsp+358h] [rbp+250h] BYREF

  v11 = 0;
  v12 = a6;
  v75 = a5;
  v83 = a8;
  v79 = (__int64)a9;
  v78 = (__int64)a10;
  v80 = (__int64)a3;
  v76 = a1;
  v51 = a4;
  v67 = 0LL;
  v62 = 0LL;
  v66 = 0LL;
  v74 = 0LL;
  v93 = 0LL;
  v88 = 0LL;
  v72 = 0LL;
  v92 = 0LL;
  v90 = 0LL;
  v89 = 0LL;
  v91 = 0LL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v91 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v91) )
      return 1LL;
    v92 = rclBounds;
    ERECTL::operator*=(&v92.left, &a6->left);
    v12 = &v92;
  }
  hdev = a1->hdev;
  *(_QWORD *)&v59.right = 0LL;
  *(_QWORD *)&v59.left = 0LL;
  v60 = 0LL;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)&v59);
  v16 = Gre::Base::Globals(v15);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v82, *((HSEMAPHORE *)v16 + 14), v17);
  if ( (unsigned int)UNDOW32THREADPIDLOCKS::bRedo((__int64 **)&v59) )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v87, (struct PDEVOBJ *)&hdev);
    v18 = (struct _SPRITESTATE *)(hdev + 20);
    v19 = v12->left - a7->x;
    v20 = v12->top - a7->y;
    v81 = (struct _SPRITESTATE *)(hdev + 20);
    v57 = v19;
    v58 = v20;
    if ( v19 <= 0 )
    {
      v23 = 0;
      if ( v20 > 0 )
        v23 = 2;
      v52 = v23;
    }
    else
    {
      v21 = 3;
      if ( v20 <= 0 )
        v21 = 1;
      v52 = v21;
    }
    if ( v51 )
    {
      if ( v51->iDComplexity )
        v91 = v51->rclBounds;
      else
        v51 = 0LL;
    }
    SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(hdev + 50));
    v71 = 0LL;
    if ( !*((_QWORD *)v18 + 129) )
      goto LABEL_24;
    v88.left = v12->left - v19;
    v88.right = v12->right - v19;
    v88.top = v12->top - v20;
    v88.bottom = v12->bottom - v20;
    if ( *((_QWORD *)v18 + 130) )
    {
      v24 = 0LL;
      v25 = &v88;
    }
    else
    {
      if ( !bIntersect(v12, &v88, &v93) )
        goto LABEL_24;
      v24 = v51;
      v25 = &v93;
    }
    vSpUpdateLockedScreenAreas(v18, &v71, v25, v24, 1);
LABEL_24:
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v18 + 120));
    left = v12->left;
    top = v12->top;
    v28 = v12->left - v19;
    bottom = v12->bottom;
    right = v12->right;
    v31 = bottom - v20;
    v32 = top - v20;
    v59.bottom = bottom - v20;
    v33 = right - v19;
    if ( v28 == right - v19 || v32 == v31 )
    {
      v59 = *v12;
    }
    else
    {
      if ( left < v28 )
        v28 = left;
      v59.left = v28;
      if ( top < v32 )
        v32 = top;
      v59.top = v32;
      if ( right > v33 )
        v33 = right;
      v59.right = v33;
      if ( bottom > v31 )
        v59.bottom = bottom;
    }
    PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v94, v18, &v59);
    if ( v94[0] )
    {
      v34 = v52;
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v84, v18, v12, v52, &v59);
      v77 = 0LL;
      if ( !v85 )
        goto LABEL_102;
      while ( 1 )
      {
        v65 = ENUMAREAS::bEnum((ENUMAREAS *)v84, &v62, &v72);
        v88.left = v72.left - v19;
        v88.right = v72.right - v19;
        v88.top = v72.top - v20;
        v88.bottom = v72.bottom - v20;
        do
        {
          if ( v62 )
          {
            v35 = (struct _SURFOBJ *)*((_QWORD *)v62 + 20);
            v69 = (struct _POINTL *)((char *)v62 + 168);
          }
          else
          {
            v35 = v76;
            v69 = (struct _POINTL *)&v77;
          }
          v73 = v35;
          ENUMAREAS::ENUMAREAS((ENUMAREAS *)v86, v18, &v88, v34, 0LL);
          v36 = v58;
          do
          {
            v37 = ENUMAREAS::bEnum((ENUMAREAS *)v86, &v66, &v90);
            v38 = v66;
            v64 = v37;
            while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v86, &v74) )
              v38 = v74;
            v66 = v38;
            if ( v38 )
            {
              v39 = (struct _CLIPOBJ *)*((_QWORD *)v38 + 20);
              v68 = (struct _POINTL *)((char *)v38 + 168);
            }
            else
            {
              v39 = (struct _CLIPOBJ *)v76;
              v68 = (struct _POINTL *)&v77;
            }
            v89.left = v57 + v90.left;
            v89.right = v57 + v90.right;
            v63 = v39;
            v89.top = v36 + v90.top;
            v89.bottom = v36 + v90.bottom;
            if ( v51 && !bIntersect(&v89, &v91, &v51->rclBounds) )
              goto LABEL_95;
            p_pvScan0 = 0LL;
            if ( v35 )
            {
              hsurf = (int)v35[1].hsurf;
              if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
              {
                p_pvScan0 = &v35[-1].pvScan0;
                GreLockDisplayDevice(v35->hdev);
              }
            }
            v41 = 0LL;
            if ( v39 )
            {
              v42 = v39[3].rclBounds.bottom;
              if ( (v42 & 0x80004000) != 0 && (v42 & 0x200) == 0 )
              {
                v41 = v39 - 1;
                GreLockDisplayDevice(*(_QWORD *)&v39[1].iUniq);
              }
            }
            v54 = 0;
            v55 = 0;
            v43 = *((_DWORD *)hdev + 640);
            v56.y = (int)hdev[641];
            v53 = 0LL;
            v56.x = v43;
            if ( !v51 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              if ( ThreadWin32Thread )
              {
                if ( (*(_DWORD *)(ThreadWin32Thread + 328) & 1) != 0 )
                {
                  v45 = *(DC ***)(ThreadWin32Thread + 312);
                  v46 = (DC *)((char *)*v45 + 1768);
                  *(_QWORD *)&v59.left = XDCOBJ::prgnEffRao(v45);
                  if ( (*(_DWORD *)(v47 + 40) & 0x20000) != 0 )
                  {
                    v53.x = -v56.x;
                    v53.y = -v56.y;
                    RGNOBJ::bOffset((RGNOBJ *)&v59, &v53);
                    v55 = 1;
                  }
                  v48 = XDCOBJ::prgnEffRao(v45);
                  XCLIPOBJ::vSetup(v46, v48, (struct ERECTL *)&v89, 1);
                  v35 = v73;
                  v51 = (struct _CLIPOBJ *)v46;
                  v39 = v63;
                  v54 = 1;
                }
              }
            }
            if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&p_pvScan0, &v51) )
            {
              if ( a11 != 52428 )
              {
                if ( v83 )
                {
                  LODWORD(v67) = v89.left + v83->x - v12->left;
                  HIDWORD(v67) = v89.top + v83->y - v12->top;
                }
                v63 = v51;
                if ( v35->iType != 1 )
                  goto LABEL_83;
                if ( bAllowShareAccess(v35)
                  && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                  && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                   || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                  && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
                {
                  v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_86:
                  OffBitBlt(
                    (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v49,
                    (int *)v69,
                    (__int64)v35,
                    v68,
                    (__int64)v39,
                    v80,
                    v63,
                    (__int64)v75,
                    &v89.left,
                    (__int64 *)&v90.left,
                    (__int64)&v67,
                    v79,
                    (__int64 *)v78,
                    a11);
                  goto LABEL_87;
                }
                if ( v35->iType != 1
                  || !bAllowShareAccess(v35)
                  || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                  || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                  || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                  && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
                {
LABEL_83:
                  if ( ((__int64)v35[1].hsurf & 1) != 0 )
                  {
                    v49 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v35->hdev + 163);
                    goto LABEL_86;
                  }
                }
                v49 = EngBitBlt;
                goto LABEL_86;
              }
              INVOKEOFFCOPYBITS(v69, v35, v68, (struct _SURFOBJ *)v39, v51, v75, &v89, (struct _POINTL *)&v90);
            }
LABEL_87:
            if ( v54 == 1 )
            {
              if ( v55 == 1 )
              {
                v53 = v56;
                RGNOBJ::bOffset((RGNOBJ *)&v59, &v53);
              }
              v51 = 0LL;
            }
            if ( v41 )
              GreUnlockDisplayDevice(*(_QWORD *)&v41[2].iUniq);
            if ( p_pvScan0 )
              GreUnlockDisplayDevice(p_pvScan0[6]);
LABEL_95:
            if ( v51 )
              v51->rclBounds = v91;
          }
          while ( v64 );
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v86);
          v50 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v84, &v62);
          v18 = v81;
          v34 = v52;
        }
        while ( v50 );
        if ( v62 )
          vSpRedrawArea(v81, &v72, 0);
        v20 = v58;
        v19 = v57;
        if ( !v65 )
        {
LABEL_102:
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v84);
          break;
        }
      }
    }
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v94);
    SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)v18 + 120));
    if ( *((_QWORD *)v18 + 129) )
      vSpUpdateLockedScreenAreas(v18, &v71, v12, v51, 0);
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v18 + 120));
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v94);
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v87);
    v11 = 1;
  }
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v82);
  return v11;
}
