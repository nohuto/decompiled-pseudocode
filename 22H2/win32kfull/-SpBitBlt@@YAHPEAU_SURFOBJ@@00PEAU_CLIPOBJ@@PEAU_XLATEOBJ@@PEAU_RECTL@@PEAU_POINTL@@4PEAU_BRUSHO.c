/*
 * XREFs of ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0096E60
 * Callers:
 *     ?SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00986E0 (-SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00F09BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00965B8 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00968A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0098730 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010F18C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffBitBlt @ 0x1C0129B40 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
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
  struct _SURFOBJ *v11; // r15
  struct _XLATEOBJ *v12; // r13
  struct _POINTL *v13; // r12
  unsigned int v14; // ebx
  HDEV hdev; // rax
  struct _SURFOBJ *v16; // r14
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  PVOID *v19; // rsi
  int v20; // eax
  BOOL updated; // eax
  int v22; // eax
  __int64 (__fastcall *v23)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r10
  USHORT *p_iType; // rbx
  BOOL (__stdcall *v26)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r13
  _DWORD *v27; // r10
  struct _POINTL *v28; // r8
  CLIPOBJ *v29; // r15
  __int64 *v30; // rdx
  struct _POINTL v31; // rbx
  LONG y; // r12d
  int v33; // eax
  LONG v34; // r12d
  LONG v35; // ebx
  int v36; // r14d
  __int64 *v37; // r13
  int v38; // edx
  int v39; // r8d
  __int64 *v40; // r12
  USHORT *v41; // rbx
  BOOL (__stdcall *v42)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+48h] [rbp-B8h]
  int v46; // [rsp+70h] [rbp-90h]
  struct _SURFOBJ *v47; // [rsp+78h] [rbp-88h] BYREF
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  struct _POINTL *v57; // [rsp+C8h] [rbp-38h]
  struct _POINTL v58; // [rsp+D0h] [rbp-30h] BYREF
  struct _SURFOBJ *v59; // [rsp+D8h] [rbp-28h]
  struct _POINTL *v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  __int64 v62; // [rsp+F0h] [rbp-10h]
  struct _POINTL *v63; // [rsp+F8h] [rbp-8h]
  struct _RECTL v64; // [rsp+100h] [rbp+0h] BYREF
  __int64 v65[2]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v66[4]; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v67[114]; // [rsp+130h] [rbp+30h] BYREF

  v49 = 0LL;
  v11 = a2;
  v53 = 0LL;
  v54 = 0LL;
  v12 = a5;
  v13 = a7;
  v14 = 1;
  v62 = (__int64)a3;
  v59 = a2;
  ppco = a4;
  v60 = a8;
  v55 = (__int64)a10;
  v47 = a1;
  v56 = (__int64)a5;
  v57 = a7;
  v61 = (__int64)a9;
  v46 = 1;
  *(_OWORD *)v65 = 0LL;
  if ( a2 )
    hdev = a2->hdev;
  else
    hdev = 0LL;
  if ( !hdev || a2 != *((struct _SURFOBJ **)hdev + 15) )
  {
    v64 = *a6;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v67, a1, a4, a6);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v67, &v47, &v49, &ppco) )
        return v14;
      v16 = v47;
      p_pvScan0 = 0LL;
      if ( v47 )
      {
        hsurf = (int)v47[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v47[-1].pvScan0;
          GreLockDisplayDevice(v47->hdev);
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
      updated = 1;
      if ( p_pvScan0 && *((_WORD *)p_pvScan0 + 50) == 1 )
        updated = EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco);
      if ( updated )
      {
        if ( a11 == 52428 )
        {
          v22 = INVOKEOFFCOPYBITS(&v49, v16, &gptlZero, v11, ppco, v12, &v64, v13);
          goto LABEL_17;
        }
        if ( (unsigned __int8)a11 == a11 >> 8 )
        {
          p_iType = &v16->iType;
          if ( v16->iType == 1 && (unsigned int)bAllowShareAccess(v16) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v16 = v47;
              v26 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(ThreadWin32Thread + 280) + 72LL);
              goto LABEL_32;
            }
            v16 = v47;
          }
          if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v16) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
            {
              v16 = v47;
LABEL_80:
              v26 = EngBitBlt;
LABEL_32:
              v27 = (_DWORD *)v55;
              v28 = v13;
              v29 = ppco;
              v30 = (__int64 *)v55;
              v58 = 0LL;
              v31 = v49;
              v63 = v13;
              y = v49.y;
              v50 = v55;
              if ( ppco && (v49.x || v49.y) )
              {
                ppco->rclBounds.left += v49.x;
                v29->rclBounds.right += v31.x;
                v29->rclBounds.top += y;
                v29->rclBounds.bottom += y;
                if ( v29->iDComplexity )
                {
                  v58 = v31;
                  RGNOBJ::bOffset((RGNOBJ *)&v29[2].rclBounds.top, &v58);
                  v30 = (__int64 *)v50;
                  v28 = v63;
                  v27 = (_DWORD *)v50;
                }
              }
              v51 = 0LL;
              v66[0] = v31.x + v64.left;
              v66[2] = v31.x + v64.right;
              v66[1] = y + v64.top;
              v66[3] = y + v64.bottom;
              if ( v57 )
              {
                v28 = (struct _POINTL *)&v51;
                LODWORD(v51) = gptlZero.x + v57->x;
                HIDWORD(v51) = gptlZero.y + v57->y;
              }
              v52 = 0LL;
              if ( v27 )
              {
                v30 = &v52;
                LODWORD(v52) = v31.x + *v27;
                HIDWORD(v52) = y + v27[1];
              }
              v33 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, CLIPOBJ *, __int64, _DWORD *, struct _POINTL *, struct _POINTL *, __int64, __int64 *, unsigned int))v26)(
                      v16,
                      v59,
                      v62,
                      v29,
                      v56,
                      v66,
                      v28,
                      v60,
                      v61,
                      v30,
                      a11);
              v50 = 0LL;
              v34 = -y;
              v35 = -v31.x;
              v36 = v33;
              if ( v29 && (v35 || v34) )
              {
                v29->rclBounds.left += v35;
                v29->rclBounds.right += v35;
                v29->rclBounds.top += v34;
                v29->rclBounds.bottom += v34;
                if ( v29->iDComplexity )
                {
                  LODWORD(v50) = v35;
                  HIDWORD(v50) = v34;
                  RGNOBJ::bOffset((RGNOBJ *)&v29[2].rclBounds.top, (struct _POINTL *)&v50);
                }
              }
              v11 = v59;
              v14 = v36 & v46;
              v13 = v57;
              v12 = (struct _XLATEOBJ *)v56;
LABEL_18:
              v46 = v14;
              goto LABEL_19;
            }
            v16 = v47;
          }
          if ( ((__int64)v16[1].hsurf & 1) != 0 )
          {
            v26 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v16->hdev + 164);
            goto LABEL_32;
          }
          goto LABEL_80;
        }
        *(struct _RECTL *)v65 = v64;
        if ( !ppco || bIntersect(&ppco->rclBounds, &v64, (struct _RECTL *)v65) )
        {
          v37 = 0LL;
          v38 = LODWORD(v65[0]) - v64.left;
          v39 = HIDWORD(v65[0]) - v64.top;
          if ( v13 )
          {
            v37 = &v53;
            LODWORD(v53) = v38 + v13->x;
            HIDWORD(v53) = v39 + v13->y;
          }
          v40 = 0LL;
          if ( v60 )
          {
            v40 = &v54;
            LODWORD(v54) = v38 + v60->x;
            HIDWORD(v54) = v39 + v60->y;
          }
          v41 = &v16->iType;
          if ( v16->iType == 1 )
          {
            if ( (unsigned int)bAllowShareAccess(v16) )
            {
              if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
              {
                v44 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                LODWORD(v16) = (_DWORD)v47;
                v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v44 + 280) + 72LL);
                goto LABEL_59;
              }
              v16 = v47;
            }
            if ( *v41 != 1 || !(unsigned int)bAllowShareAccess(v16) )
              goto LABEL_57;
            if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
              && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
            {
              v16 = v47;
              goto LABEL_57;
            }
            LODWORD(v16) = (_DWORD)v47;
            goto LABEL_98;
          }
LABEL_57:
          if ( ((__int64)v16[1].hsurf & 1) != 0 )
          {
            v42 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v16->hdev + 164);
            goto LABEL_59;
          }
LABEL_98:
          v42 = EngBitBlt;
LABEL_59:
          v45 = (__int64)v37;
          v12 = (struct _XLATEOBJ *)v56;
          v22 = OffBitBlt(
                  (int)v42,
                  (int)&v49,
                  (int)v16,
                  (int)&gptlZero,
                  (__int64)v11,
                  v62,
                  ppco,
                  v56,
                  (__int64)v65,
                  v45,
                  (__int64)v40,
                  v61,
                  v55,
                  a11);
          v14 = v46;
          v13 = v57;
LABEL_17:
          v14 &= v22;
          goto LABEL_18;
        }
      }
LABEL_19:
      if ( v19 )
        GreUnlockDisplayDevice(v19[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
  }
  v23 = bSpBltScreenToScreen;
  if ( a1 != a2 )
    v23 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))bSpBltFromScreen;
  return (unsigned int)v23(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
