/*
 * XREFs of ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027F3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C001C4E4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C001C7C4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001CE94 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C001CEBC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C001CEF4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C010C43C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C014D858 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014D87C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0287438 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0287744 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0289008 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEB.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C02EA1C8 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     OffStrokeAndFillPath @ 0x1C02EAC6C (OffStrokeAndFillPath.c)
 */

__int64 __fastcall SpStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  struct _XFORMOBJ *v11; // r12
  unsigned int v12; // r13d
  struct _PATHOBJ *v13; // rbx
  struct _SURFOBJ *v14; // rsi
  PVOID *p_pvScan0; // r15
  LONG x; // ebx
  LONG y; // edi
  LONG v18; // edi
  LONG v19; // ebx
  PVOID *v20; // r12
  PVOID *v21; // rdi
  int hsurf; // eax
  PVOID v23; // rcx
  struct _CLIPOBJ *v24; // r15
  USHORT *p_iType; // rdi
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v27)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  struct _CLIPOBJ *v29; // [rsp+60h] [rbp-A0h] BYREF
  struct _SURFOBJ *v30; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v31; // [rsp+70h] [rbp-90h] BYREF
  PVOID *v32; // [rsp+78h] [rbp-88h] BYREF
  struct _LINEATTRS *v33; // [rsp+80h] [rbp-80h]
  struct _XFORMOBJ *v34; // [rsp+88h] [rbp-78h]
  HDEV hdev; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL *v36; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v37; // [rsp+A0h] [rbp-60h]
  struct _BRUSHOBJ *v38; // [rsp+A8h] [rbp-58h]
  _OWORD v39[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-30h]
  struct _PATHOBJ v41; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-18h]
  _BYTE v43[72]; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v44; // [rsp+3E8h] [rbp+2E8h]

  v31 = 0LL;
  v11 = a4;
  v38 = a5;
  v33 = a6;
  v12 = 1;
  v37 = a7;
  v34 = a4;
  v30 = a1;
  v36 = a8;
  v29 = a3;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v43, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v43, &v30, &v31, &v29) )
  {
    v13 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v41);
    v14 = v30;
    v40 = 0LL;
    memset(v39, 0, sizeof(v39));
    p_pvScan0 = &v30[-1].pvScan0;
    if ( v44 == 1
      && (*(_QWORD *)&this[5] || (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this))
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( !v42 )
        goto LABEL_44;
      if ( !EPATHOBJ::bClone((EPATHOBJ *)&v41, (struct EPATHOBJ *)this) )
        goto LABEL_44;
      x = v31.x;
      y = v31.y;
      CLIPOBJ_vOffset(v29, v31.x, v31.y);
      PATHOBJ_vOffset(&v41, x, y);
      hdev = v14->hdev;
      PRECOMPUTE::vInit(v39, p_pvScan0, &hdev, &v41, v29, v11, v33, a9, a10, 2);
      v18 = -y;
      v19 = -x;
      CLIPOBJ_vOffset(v29, v19, v18);
      PATHOBJ_vOffset(&v41, v19, v18);
      if ( !v40 )
        goto LABEL_44;
      v13 = this;
      this = &v41;
    }
    PATHOBJ_vEnumStart(this);
    v32 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    if ( v14 )
    {
      hsurf = (int)v14[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        v23 = p_pvScan0[6];
        v32 = p_pvScan0;
        GreLockDisplayDevice(v23);
        v20 = p_pvScan0;
        v21 = p_pvScan0;
      }
    }
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v32, &v29) )
    {
      v24 = v29;
      p_iType = &v14->iType;
      if ( v14->iType != 1 || !bAllowShareAccess(v14) )
        goto LABEL_30;
      if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x80u) == 0 )
      {
        v14 = v30;
LABEL_30:
        if ( *p_iType == 1 && bAllowShareAccess(v14) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
          {
            v14 = v30;
LABEL_37:
            v27 = EngStrokeAndFillPath;
            goto LABEL_38;
          }
          v14 = v30;
        }
        if ( (LODWORD(v14[1].hsurf) & 0x80u) != 0 )
        {
          v27 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v14->hdev + 159);
          goto LABEL_38;
        }
        goto LABEL_37;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v14 = v30;
      v27 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 40LL);
LABEL_38:
      v11 = v34;
      if ( !(unsigned int)OffStrokeAndFillPath(v27, &v31, v14, this, v24, v34, v38, v33, v37, v36, a9, a10) )
        v12 = -1;
      if ( !v13 )
        v13 = this;
      this = v13;
      if ( v32 )
        GreUnlockDisplayDevice(v32[6]);
LABEL_44:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v39);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v41);
    }
    else
    {
      if ( !v13 )
        v13 = this;
      this = v13;
      if ( v20 )
        GreUnlockDisplayDevice(v21[6]);
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v39);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v41);
      v11 = v34;
    }
  }
  return v12;
}
