/*
 * XREFs of ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0031540
 * Callers:
 *     ?SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00314F0 (-SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0031174 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0031BF0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0032504 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffBitBlt @ 0x1C0114EC4 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpBitBlt(
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
  struct _SURFOBJ *v11; // r13
  struct _XLATEOBJ *v12; // r15
  struct _POINTL *v13; // r12
  unsigned int v14; // ebx
  HDEV hdev; // rax
  struct _SURFOBJ *v16; // r14
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  PVOID *v19; // rsi
  int v20; // eax
  __int64 (__fastcall *v21)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r10
  CLIPOBJ *v23; // r15
  USHORT *p_iType; // rbx
  BOOL (__stdcall *v25)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r13
  _DWORD *v26; // r10
  struct _POINTL *v27; // r8
  __int64 *v28; // rdx
  __int64 v29; // rbx
  LONG y; // r12d
  int v31; // eax
  LONG v32; // r12d
  LONG v33; // ebx
  int v34; // r14d
  int v35; // edx
  int v36; // r8d
  int v37; // ecx
  __int64 *v38; // r12
  USHORT *v39; // rbx
  BOOL (__stdcall *v40)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v42; // rax
  int v43; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v44; // [rsp+78h] [rbp-88h] BYREF
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v46; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-38h]
  struct _POINTL *v55; // [rsp+D0h] [rbp-30h]
  struct _SURFOBJ *v56; // [rsp+D8h] [rbp-28h]
  struct _POINTL *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  __int64 v59; // [rsp+F0h] [rbp-10h]
  struct _POINTL *v60; // [rsp+F8h] [rbp-8h]
  struct _RECTL v61; // [rsp+100h] [rbp+0h] BYREF
  __int64 v62[2]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v63[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v64[912]; // [rsp+130h] [rbp+30h] BYREF

  v46 = 0LL;
  v11 = a2;
  v52 = 0LL;
  v53 = 0LL;
  v12 = a5;
  v13 = a7;
  v14 = 1;
  v59 = (__int64)a3;
  v56 = a2;
  ppco = a4;
  v57 = a8;
  v54 = (__int64)a10;
  v44 = a1;
  v47 = (__int64)a5;
  v55 = a7;
  v58 = (__int64)a9;
  v43 = 1;
  *(_OWORD *)v62 = 0LL;
  if ( !a2 || (hdev = a2->hdev) == 0LL || a2 != *((struct _SURFOBJ **)hdev + 14) )
  {
    v61 = *a6;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v64, a1, a4, a6);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v64, &v44, &v46, &ppco) )
          return v14;
        v16 = v44;
        p_pvScan0 = 0LL;
        if ( v44 )
        {
          hsurf = (int)v44[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v44[-1].pvScan0;
            GreLockDisplayDevice(v44->hdev);
          }
        }
        v19 = 0LL;
        if ( v11 )
        {
          v20 = (int)v11[1].hsurf;
          if ( (v20 & 0x80004000) != 0 && (v20 & 0x200) == 0 )
          {
            v19 = &v11[-1].pvScan0;
            GreLockDisplayDevice(v11->hdev);
          }
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v19 )
          GreUnlockDisplayDevice(v19[6]);
LABEL_20:
        GreUnlockDisplayDevice(p_pvScan0[6]);
      }
      if ( a11 != 52428 )
        break;
      v14 &= INVOKEOFFCOPYBITS(&v46, v16, &gptlZero, v11, ppco, v12, &v61, v13);
      v43 = v14;
LABEL_17:
      if ( v19 )
        GreUnlockDisplayDevice(v19[6]);
      if ( p_pvScan0 )
        goto LABEL_20;
    }
    v23 = ppco;
    if ( (unsigned __int8)a11 == a11 >> 8 )
    {
      p_iType = &v16->iType;
      if ( v16->iType == 1 && (unsigned int)bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v16 = v44;
          v25 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(ThreadWin32Thread + 280) + 72LL);
          goto LABEL_30;
        }
        v16 = v44;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
        {
          v16 = v44;
          goto LABEL_60;
        }
        v16 = v44;
      }
      if ( ((__int64)v16[1].hsurf & 1) != 0 )
      {
        v25 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v16->hdev + 163);
LABEL_30:
        v26 = (_DWORD *)v54;
        v27 = v13;
        v49 = 0LL;
        v28 = (__int64 *)v54;
        v29 = (__int64)v46;
        v60 = v13;
        y = v46.y;
        v48 = v54;
        if ( v23 && (v46.x || v46.y) )
        {
          v23->rclBounds.left += v46.x;
          v23->rclBounds.right += v29;
          v23->rclBounds.top += y;
          v23->rclBounds.bottom += y;
          if ( v23->iDComplexity )
          {
            v49 = v29;
            RGNOBJ::bOffset((RGNOBJ *)&v23[2].rclBounds.top, (struct _POINTL *)&v49);
            v28 = (__int64 *)v48;
            v27 = v60;
            v26 = (_DWORD *)v48;
          }
        }
        v50 = 0LL;
        v63[0] = v29 + v61.left;
        v63[2] = v29 + v61.right;
        v63[1] = y + v61.top;
        v63[3] = y + v61.bottom;
        if ( v55 )
        {
          v27 = (struct _POINTL *)&v50;
          LODWORD(v50) = gptlZero.x + v55->x;
          HIDWORD(v50) = gptlZero.y + v55->y;
        }
        v51 = 0LL;
        if ( v26 )
        {
          v28 = &v51;
          LODWORD(v51) = v29 + *v26;
          HIDWORD(v51) = y + v26[1];
        }
        v31 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, CLIPOBJ *, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, __int64 *, unsigned int))v25)(
                v16,
                v56,
                v59,
                v23,
                v47,
                v63,
                v27,
                v57,
                v58,
                v28,
                a11);
        v48 = 0LL;
        v32 = -y;
        v33 = -(int)v29;
        v34 = v31;
        if ( v23 && (v33 || v32) )
        {
          v23->rclBounds.left += v33;
          v23->rclBounds.right += v33;
          v23->rclBounds.top += v32;
          v23->rclBounds.bottom += v32;
          if ( v23->iDComplexity )
          {
            LODWORD(v48) = v33;
            HIDWORD(v48) = v32;
            RGNOBJ::bOffset((RGNOBJ *)&v23[2].rclBounds.top, (struct _POINTL *)&v48);
          }
        }
        v11 = v56;
        v14 = v34 & v43;
        goto LABEL_37;
      }
LABEL_60:
      v25 = EngBitBlt;
      goto LABEL_30;
    }
    *(struct _RECTL *)v62 = v61;
    if ( ppco )
    {
      if ( !bIntersect(&ppco->rclBounds, &v61, (struct _RECTL *)v62) )
        goto LABEL_38;
      v23 = ppco;
    }
    v35 = LODWORD(v62[0]) - v61.left;
    v36 = HIDWORD(v62[0]) - v61.top;
    v49 = 0LL;
    if ( v13 )
    {
      v37 = v35 + v13->x;
      v49 = (__int64)&v52;
      LODWORD(v52) = v37;
      HIDWORD(v52) = v36 + v13->y;
    }
    v38 = 0LL;
    if ( v57 )
    {
      v38 = &v53;
      LODWORD(v53) = v35 + v57->x;
      HIDWORD(v53) = v36 + v57->y;
    }
    v39 = &v16->iType;
    if ( v16->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
        {
          v42 = W32GetThreadWin32Thread(KeGetCurrentThread());
          LODWORD(v16) = (_DWORD)v44;
          v40 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v42 + 280) + 72LL);
          goto LABEL_59;
        }
        v16 = v44;
      }
      if ( *v39 == 1 && (unsigned int)bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
        {
          LODWORD(v16) = (_DWORD)v44;
          goto LABEL_95;
        }
        v16 = v44;
      }
    }
    if ( ((__int64)v16[1].hsurf & 1) != 0 )
    {
      v40 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v16->hdev + 163);
LABEL_59:
      v14 = OffBitBlt(
              (int)v40,
              (int)&v46,
              (int)v16,
              (int)&gptlZero,
              (__int64)v11,
              v59,
              v23,
              v47,
              (__int64)v62,
              v49,
              (__int64)v38,
              v58,
              v54,
              a11) & v43;
LABEL_37:
      v13 = v55;
      v43 = v14;
LABEL_38:
      v12 = (struct _XLATEOBJ *)v47;
      goto LABEL_17;
    }
LABEL_95:
    v40 = EngBitBlt;
    goto LABEL_59;
  }
  v21 = bSpBltScreenToScreen;
  if ( a1 != a2 )
    v21 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))bSpBltFromScreen;
  return (unsigned int)v21(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
