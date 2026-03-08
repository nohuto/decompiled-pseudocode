/*
 * XREFs of ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C027F860
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
 *     OffStrokePath @ 0x1C02EADF0 (OffStrokePath.c)
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
  struct _LINEATTRS *v9; // r12
  FLOAT_LONG v10; // edi
  unsigned int v11; // esi
  struct _PATHOBJ *v12; // rbx
  struct _SURFOBJ *v13; // r14
  PVOID *p_pvScan0; // r13
  LONG x; // ebx
  LONG y; // esi
  LONG v17; // esi
  LONG v18; // ebx
  PVOID *v19; // r12
  PVOID *v20; // rsi
  int hsurf; // eax
  PVOID v22; // rcx
  struct _CLIPOBJ *v23; // r12
  USHORT *p_iType; // rsi
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v26)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  int v28; // [rsp+50h] [rbp-B0h]
  struct _CLIPOBJ *v29; // [rsp+58h] [rbp-A8h] BYREF
  struct _SURFOBJ *v30; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v31; // [rsp+68h] [rbp-98h] BYREF
  PVOID *v32; // [rsp+70h] [rbp-90h] BYREF
  struct _LINEATTRS *v33; // [rsp+78h] [rbp-88h]
  struct _XFORMOBJ *v34; // [rsp+80h] [rbp-80h]
  HDEV hdev; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL *v36; // [rsp+90h] [rbp-70h]
  struct _BRUSHOBJ *v37; // [rsp+98h] [rbp-68h]
  _OWORD v38[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-40h]
  struct _PATHOBJ v40; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-28h]
  _BYTE v42[72]; // [rsp+390h] [rbp+290h] BYREF
  int v43; // [rsp+3D8h] [rbp+2D8h]

  v9 = a7;
  v31 = 0LL;
  v37 = a5;
  LODWORD(v10.e) = a7->elStyleState;
  v36 = a6;
  v34 = a4;
  v11 = 1;
  v30 = a1;
  v28 = 1;
  v29 = a3;
  v33 = a7;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v42, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v42, &v30, &v31, &v29) )
  {
    v12 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v40);
    v13 = v30;
    v39 = 0LL;
    memset(v38, 0, sizeof(v38));
    p_pvScan0 = &v30[-1].pvScan0;
    if ( v43 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( v41 && EPATHOBJ::bClone((EPATHOBJ *)&v40, (struct EPATHOBJ *)this) )
      {
        x = v31.x;
        y = v31.y;
        CLIPOBJ_vOffset(v29, v31.x, v31.y);
        PATHOBJ_vOffset(&v40, x, y);
        hdev = v13->hdev;
        PRECOMPUTE::vInit(v38, p_pvScan0, &hdev, &v40, v29, v34, v9, a8, 0, 0);
        v17 = -y;
        v18 = -x;
        CLIPOBJ_vOffset(v29, v18, v17);
        PATHOBJ_vOffset(&v40, v18, v17);
        if ( v39 )
        {
          v12 = this;
          this = &v40;
          goto LABEL_9;
        }
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v38);
        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v40);
        v11 = v28;
      }
      else
      {
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v38);
        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v40);
      }
    }
    else
    {
LABEL_9:
      v9->elStyleState = v10;
      PATHOBJ_vEnumStart(this);
      v32 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      if ( v13 )
      {
        hsurf = (int)v13[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          v22 = p_pvScan0[6];
          v32 = p_pvScan0;
          GreLockDisplayDevice(v22);
          v19 = p_pvScan0;
          v20 = p_pvScan0;
        }
      }
      if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v32, &v29) )
      {
        if ( !v12 )
          v12 = this;
        this = v12;
        if ( v19 )
          GreUnlockDisplayDevice(v20[6]);
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v38);
        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v40);
        v11 = v28;
        goto LABEL_45;
      }
      v23 = v29;
      p_iType = &v13->iType;
      if ( v13->iType != 1 )
        goto LABEL_49;
      if ( !bAllowShareAccess(v13) )
        goto LABEL_30;
      if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x20) == 0 )
      {
        v13 = v30;
LABEL_30:
        if ( *p_iType == 1 && bAllowShareAccess(v13) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
          {
            v13 = v30;
LABEL_37:
            v26 = EngStrokePath;
            goto LABEL_38;
          }
          v13 = v30;
        }
LABEL_49:
        if ( ((__int64)v13[1].hsurf & 0x20) != 0 )
        {
          v26 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))*((_QWORD *)v13->hdev + 160);
          goto LABEL_38;
        }
        goto LABEL_37;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v13 = v30;
      v26 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 48LL);
LABEL_38:
      v11 = v28;
      if ( !(unsigned int)OffStrokePath(v26, &v31, v13, this, v23, v34, v37, v36, v33, a8) )
        v11 = -1;
      v28 = v11;
      if ( !v12 )
        v12 = this;
      this = v12;
      if ( v32 )
        GreUnlockDisplayDevice(v32[6]);
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v38);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v40);
LABEL_45:
      v9 = v33;
    }
  }
  return v11;
}
