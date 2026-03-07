__int64 __fastcall SpTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  struct _STROBJ *v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned int v14; // r14d
  FLONG flFontType; // ecx
  HDEV hdev; // rax
  ULONG cGlyphs; // esi
  struct _RECTL *p_rclBkGround; // r9
  int v19; // eax
  struct _SURFOBJ *v20; // rbx
  PVOID *p_pvScan0; // r12
  USHORT *p_iType; // rsi
  BOOL (__stdcall *v23)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // r14
  PVOID *v24; // rsi
  PVOID *v25; // r15
  PVOID *v26; // r13
  int hsurf; // eax
  PVOID v29; // rcx
  __int64 ThreadWin32Thread; // rax
  int v31; // [rsp+60h] [rbp-A0h]
  struct _SURFOBJ *v32; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v33; // [rsp+70h] [rbp-90h] BYREF
  ULONG v34; // [rsp+78h] [rbp-88h]
  struct _POINTL v35; // [rsp+80h] [rbp-80h] BYREF
  PVOID *v36; // [rsp+88h] [rbp-78h] BYREF
  struct _STROBJ *v37; // [rsp+90h] [rbp-70h]
  struct _POINTL *v38; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v39; // [rsp+A0h] [rbp-60h]
  struct _BRUSHOBJ *v40; // [rsp+A8h] [rbp-58h]
  struct _RECTL *v41; // [rsp+B0h] [rbp-50h]
  struct _RECTL *v42; // [rsp+B8h] [rbp-48h]
  struct _FONTOBJ *v43; // [rsp+C0h] [rbp-40h]
  _BYTE v44[912]; // [rsp+D0h] [rbp-30h] BYREF

  v35 = 0LL;
  v32 = a1;
  v10 = a2;
  v37 = a2;
  v11 = 0LL;
  v43 = a3;
  v42 = a5;
  v14 = 1;
  v40 = a7;
  v39 = a8;
  v38 = a9;
  flFontType = a3->flFontType;
  v33 = a4;
  v41 = a6;
  v31 = 1;
  if ( (flFontType & 0x10000) != 0 )
  {
    hdev = a1->hdev;
    if ( (flFontType & 0x10000000) != 0 )
      v11 = ((unsigned __int64)(unsigned int)~*((_DWORD *)hdev + 524) >> 14) & 1;
    else
      v11 = ((_DWORD)hdev[448] & 0x1000000) == 0;
  }
  cGlyphs = v10[1].cGlyphs;
  p_rclBkGround = a6;
  v34 = cGlyphs;
  if ( !a6 )
    p_rclBkGround = &v10->rclBkGround;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v44, a1, a4, p_rclBkGround);
  v19 = ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v44, &v32, &v35, &v33);
  while ( v19 )
  {
    v10[1].cGlyphs = cGlyphs;
    v20 = v32;
    p_pvScan0 = &v32[-1].pvScan0;
    if ( (unsigned int)SURFACE::bRedirHooked((SURFACE *)&v32[-1].pvScan0) )
    {
      v23 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))RedirTextOut;
    }
    else
    {
      if ( v11 )
        goto LABEL_39;
      p_iType = &v20->iType;
      if ( v20->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(v20) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 8) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v20 = v32;
            v23 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 96LL);
            goto LABEL_13;
          }
          v20 = v32;
        }
        if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v20) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
          {
            v20 = v32;
LABEL_39:
            v23 = EngTextOut;
            goto LABEL_13;
          }
          v20 = v32;
        }
      }
      if ( ((__int64)v20[1].hsurf & 8) == 0 )
        goto LABEL_39;
      v23 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))*((_QWORD *)v20->hdev + 166);
    }
LABEL_13:
    v36 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    if ( v20 )
    {
      hsurf = (int)v20[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        v29 = p_pvScan0[6];
        v36 = p_pvScan0;
        GreLockDisplayDevice(v29);
        v24 = p_pvScan0;
        v25 = p_pvScan0;
        v26 = p_pvScan0;
      }
    }
    if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v36, &v33) )
    {
      v14 = OffTextOut(v23, &v35, v20, v37, v43, v33, v42, v41, v40, v39, v38, a10) & v31;
      v31 = v14;
      if ( v24 )
        GreUnlockDisplayDevice(v26[6]);
    }
    else
    {
      if ( v24 )
        GreUnlockDisplayDevice(v25[6]);
      v14 = v31;
    }
    v19 = ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v44, &v32, &v35, &v33);
    v10 = v37;
    cGlyphs = v34;
  }
  return v14;
}
