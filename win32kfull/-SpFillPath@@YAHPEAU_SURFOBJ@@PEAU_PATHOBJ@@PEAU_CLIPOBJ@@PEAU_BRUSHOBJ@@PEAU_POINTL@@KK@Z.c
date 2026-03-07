__int64 __fastcall SpFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  PVOID *v8; // r12
  unsigned int v9; // r13d
  struct _PATHOBJ *v10; // rbx
  struct _SURFOBJ *v11; // rsi
  PVOID *p_pvScan0; // r15
  LONG x; // ebx
  LONG y; // edi
  LONG v15; // edi
  LONG v16; // ebx
  PVOID *v17; // rdi
  int hsurf; // eax
  PVOID v19; // rcx
  struct _CLIPOBJ *v20; // r15
  USHORT *p_iType; // rdi
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v23)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  struct _CLIPOBJ *v25; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v26; // [rsp+58h] [rbp-A8h] BYREF
  struct _POINTL v27; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v28; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v30; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v31; // [rsp+80h] [rbp-80h]
  _OWORD v32[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-58h]
  struct _PATHOBJ v34; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-48h]
  _BYTE v36[72]; // [rsp+370h] [rbp+270h] BYREF
  int v37; // [rsp+3B8h] [rbp+2B8h]

  v31 = a4;
  v26 = a1;
  v8 = 0LL;
  v25 = a3;
  v30 = a5;
  v27 = 0LL;
  v9 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v36, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v36, &v26, &v27, &v25) )
  {
    v10 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v34);
    v11 = v26;
    v33 = 0LL;
    memset(v32, 0, sizeof(v32));
    p_pvScan0 = &v26[-1].pvScan0;
    if ( v37 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( !v35 )
        goto LABEL_44;
      if ( !EPATHOBJ::bClone((EPATHOBJ *)&v34, (struct EPATHOBJ *)this) )
        goto LABEL_44;
      x = v27.x;
      y = v27.y;
      CLIPOBJ_vOffset(v25, v27.x, v27.y);
      PATHOBJ_vOffset(&v34, x, y);
      hdev = v11->hdev;
      PRECOMPUTE::vInit(v32, p_pvScan0, &hdev, &v34, v25, 0LL, 0LL, a6, a7, 1);
      v15 = -y;
      v16 = -x;
      CLIPOBJ_vOffset(v25, v16, v15);
      PATHOBJ_vOffset(&v34, v16, v15);
      if ( !v33 )
        goto LABEL_44;
      v10 = this;
      this = &v34;
    }
    PATHOBJ_vEnumStart(this);
    v17 = 0LL;
    v28 = 0LL;
    if ( v11 )
    {
      hsurf = (int)v11[1].hsurf;
      v8 = 0LL;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        v19 = p_pvScan0[6];
        v28 = p_pvScan0;
        GreLockDisplayDevice(v19);
        v8 = p_pvScan0;
        v17 = p_pvScan0;
      }
    }
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v28, &v25) )
    {
      v20 = v25;
      p_iType = &v11->iType;
      if ( v11->iType != 1 )
      {
        v8 = 0LL;
        goto LABEL_30;
      }
      v8 = 0LL;
      if ( !bAllowShareAccess(v11) )
        goto LABEL_30;
      if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x40) == 0 )
      {
        v11 = v26;
LABEL_30:
        if ( *p_iType == 1 && bAllowShareAccess(v11) )
        {
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
          {
            v11 = v26;
LABEL_37:
            v23 = EngFillPath;
            goto LABEL_38;
          }
          v11 = v26;
        }
        if ( ((__int64)v11[1].hsurf & 0x40) != 0 )
        {
          v23 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v11->hdev + 161);
          goto LABEL_38;
        }
        goto LABEL_37;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v11 = v26;
      v23 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 56LL);
LABEL_38:
      if ( !(unsigned int)OffFillPath(v23, &v27, v11, this, v20, v31, v30, a6, a7) )
        v9 = -1;
      if ( !v10 )
        v10 = this;
      this = v10;
      if ( v28 )
        GreUnlockDisplayDevice(v28[6]);
LABEL_44:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v32);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v34);
    }
    else
    {
      if ( !v10 )
        v10 = this;
      this = v10;
      if ( v8 )
        GreUnlockDisplayDevice(v17[6]);
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v32);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v34);
      v8 = 0LL;
    }
  }
  return v9;
}
