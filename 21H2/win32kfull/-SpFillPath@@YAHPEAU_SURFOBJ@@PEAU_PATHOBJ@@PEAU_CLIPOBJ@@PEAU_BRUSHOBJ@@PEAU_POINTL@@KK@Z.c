/*
 * XREFs of ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C002D358 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0031BF0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0032504 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0086C6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00D77FC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C0134FF0 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0136020 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0136350 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0137840 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C0138CCC (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014D744 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     OffFillPath @ 0x1C02C7904 (OffFillPath.c)
 */

__int64 __fastcall SpFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // r13d
  struct _PATHOBJ *v9; // rdi
  struct _SURFOBJ *v10; // rsi
  PVOID *p_pvScan0; // r12
  LONG x; // ebx
  LONG y; // edi
  LONG v14; // edi
  LONG v15; // ebx
  PVOID *v16; // rbx
  PVOID *v17; // r15
  int hsurf; // eax
  PVOID v19; // rcx
  bool v20; // zf
  struct _CLIPOBJ *v21; // r12
  USHORT *p_iType; // r15
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v24)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  struct _CLIPOBJ *v26; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v27; // [rsp+58h] [rbp-A8h] BYREF
  PVOID *v28; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v29; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v31; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v32; // [rsp+80h] [rbp-80h]
  _OWORD v33[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-58h]
  struct _PATHOBJ v35; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-48h]
  _BYTE v37[72]; // [rsp+370h] [rbp+270h] BYREF
  int v38; // [rsp+3B8h] [rbp+2B8h]

  v29 = 0LL;
  v32 = a4;
  v27 = a1;
  v26 = a3;
  v31 = a5;
  v8 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v37, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v37, &v27, &v29, &v26) )
  {
    v9 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v35);
    v10 = v27;
    v34 = 0LL;
    memset(v33, 0, sizeof(v33));
    p_pvScan0 = &v27[-1].pvScan0;
    if ( v38 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( !v36 )
        goto LABEL_42;
      if ( !EPATHOBJ::bClone((EPATHOBJ *)&v35, (struct EPATHOBJ *)this) )
        goto LABEL_42;
      x = v29.x;
      y = v29.y;
      CLIPOBJ_vOffset(v26, v29.x, v29.y);
      PATHOBJ_vOffset(&v35, x, y);
      hdev = v10->hdev;
      PRECOMPUTE::vInit(
        (__int64)v33,
        (SURFACE *)p_pvScan0,
        (PDEVOBJ *)&hdev,
        (struct EPATHOBJ *)&v35,
        (__int64)v26,
        0LL,
        0LL,
        a6,
        a7,
        1);
      v14 = -y;
      v15 = -x;
      CLIPOBJ_vOffset(v26, v15, v14);
      PATHOBJ_vOffset(&v35, v15, v14);
      if ( !v34 )
        goto LABEL_42;
      v9 = this;
      this = &v35;
    }
    PATHOBJ_vEnumStart(this);
    v16 = 0LL;
    v17 = 0LL;
    v28 = 0LL;
    if ( v10 )
    {
      hsurf = (int)v10[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        v19 = p_pvScan0[6];
        v16 = p_pvScan0;
        v28 = p_pvScan0;
        GreLockDisplayDevice(v19);
        v17 = p_pvScan0;
      }
    }
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v28, &v26) )
    {
      v21 = v26;
      p_iType = &v10->iType;
      if ( v10->iType == 1 )
      {
        if ( bAllowShareAccess(v10) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x40) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v16 = v28;
            v10 = v27;
            v24 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 56LL);
LABEL_35:
            if ( !(unsigned int)OffFillPath(v24, &v29, v10, this, v21, v32, v31, a6, a7) )
              v8 = -1;
            if ( !v9 )
              v9 = this;
            v20 = v16 == 0LL;
            goto LABEL_40;
          }
          v16 = v28;
          v10 = v27;
        }
        if ( *p_iType == 1 && bAllowShareAccess(v10) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
          {
            v16 = v28;
            v10 = v27;
LABEL_34:
            v24 = EngFillPath;
            goto LABEL_35;
          }
          v16 = v28;
          v10 = v27;
        }
      }
      if ( ((__int64)v10[1].hsurf & 0x40) != 0 )
      {
        v24 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v10->hdev + 161);
        goto LABEL_35;
      }
      goto LABEL_34;
    }
    if ( !v9 )
      v9 = this;
    v20 = v17 == 0LL;
LABEL_40:
    this = v9;
    if ( !v20 )
      GreUnlockDisplayDevice(v16[6]);
LABEL_42:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v33);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v35);
  }
  return v8;
}
