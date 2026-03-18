/*
 * XREFs of ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0136110
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
 *     OffStrokePath @ 0x1C0138BB8 (OffStrokePath.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C0138CCC (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014D744 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SpStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  unsigned int v9; // r12d
  FLOAT_LONG v10; // edi
  struct _PATHOBJ *v11; // rsi
  struct _SURFOBJ *v12; // r14
  PVOID *p_pvScan0; // r13
  PVOID *v14; // rbx
  PVOID *v15; // r12
  int hsurf; // eax
  struct _CLIPOBJ *v17; // r13
  USHORT *p_iType; // r12
  BOOL (__stdcall *v19)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  PVOID v21; // rcx
  LONG x; // ebx
  LONG y; // esi
  LONG v24; // esi
  LONG v25; // ebx
  __int64 ThreadWin32Thread; // rax
  int v27; // [rsp+50h] [rbp-B0h]
  struct _CLIPOBJ *v28; // [rsp+58h] [rbp-A8h] BYREF
  struct _SURFOBJ *v29; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v30; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v31; // [rsp+70h] [rbp-90h] BYREF
  struct _LINEATTRS *v32; // [rsp+78h] [rbp-88h]
  struct _XFORMOBJ *v33; // [rsp+80h] [rbp-80h]
  HDEV hdev; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL *v35; // [rsp+90h] [rbp-70h]
  struct _BRUSHOBJ *v36; // [rsp+98h] [rbp-68h]
  _OWORD v37[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-40h]
  struct _PATHOBJ v39; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-28h]
  _BYTE v41[72]; // [rsp+390h] [rbp+290h] BYREF
  int v42; // [rsp+3D8h] [rbp+2D8h]

  v31 = 0LL;
  v36 = a5;
  v9 = 1;
  v35 = a6;
  v33 = a4;
  v29 = a1;
  v28 = a3;
  LODWORD(v10.e) = a7->elStyleState;
  v32 = a7;
  v27 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v41, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v41, &v29, &v31, &v28) )
  {
    v11 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v39);
    v12 = v29;
    v38 = 0LL;
    memset(v37, 0, sizeof(v37));
    p_pvScan0 = &v29[-1].pvScan0;
    if ( v42 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( !v40 )
        goto LABEL_18;
      if ( !EPATHOBJ::bClone((EPATHOBJ *)&v39, (struct EPATHOBJ *)this) )
        goto LABEL_18;
      x = v31.x;
      y = v31.y;
      CLIPOBJ_vOffset(v28, v31.x, v31.y);
      PATHOBJ_vOffset(&v39, x, y);
      hdev = v12->hdev;
      PRECOMPUTE::vInit(v37, p_pvScan0, &hdev, &v39, v28, v33, v32, a8, 0, 0);
      v24 = -y;
      v25 = -x;
      CLIPOBJ_vOffset(v28, v25, v24);
      PATHOBJ_vOffset(&v39, v25, v24);
      if ( !v38 )
        goto LABEL_18;
      v11 = this;
      this = &v39;
    }
    v32->elStyleState = v10;
    PATHOBJ_vEnumStart(this);
    v14 = 0LL;
    v15 = 0LL;
    v30 = 0LL;
    if ( v12 )
    {
      hsurf = (int)v12[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        v21 = p_pvScan0[6];
        v14 = p_pvScan0;
        v30 = p_pvScan0;
        GreLockDisplayDevice(v21);
        v15 = p_pvScan0;
      }
    }
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v30, &v28) )
    {
      v17 = v28;
      p_iType = &v12->iType;
      if ( v12->iType == 1 )
      {
        if ( bAllowShareAccess(v12) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x20) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v14 = v30;
            v12 = v29;
            v19 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 48LL);
            goto LABEL_12;
          }
          v14 = v30;
          v12 = v29;
        }
        if ( *p_iType == 1 && bAllowShareAccess(v12) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
          {
            v14 = v30;
            v12 = v29;
LABEL_47:
            v19 = EngStrokePath;
            goto LABEL_12;
          }
          v14 = v30;
          v12 = v29;
        }
      }
      if ( ((__int64)v12[1].hsurf & 0x20) == 0 )
        goto LABEL_47;
      v19 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))*((_QWORD *)v12->hdev + 160);
LABEL_12:
      v9 = v27;
      if ( !(unsigned int)OffStrokePath(v19, &v31, v12, this, v17, v33, v36, v35, v32, a8) )
        v9 = -1;
      v27 = v9;
      if ( !v11 )
        v11 = this;
      this = v11;
      if ( v14 )
        GreUnlockDisplayDevice(v14[6]);
LABEL_18:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v37);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v39);
    }
    else
    {
      if ( !v11 )
        v11 = this;
      this = v11;
      if ( v15 )
        GreUnlockDisplayDevice(v14[6]);
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v37);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v39);
      v9 = v27;
    }
  }
  return v9;
}
