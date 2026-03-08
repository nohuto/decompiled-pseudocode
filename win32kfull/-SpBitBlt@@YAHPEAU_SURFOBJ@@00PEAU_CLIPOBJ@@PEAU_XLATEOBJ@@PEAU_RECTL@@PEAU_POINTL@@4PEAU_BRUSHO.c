/*
 * XREFs of ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C001BE80
 * Callers:
 *     ?SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C001BE30 (-SpCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C001C4E4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C001C7C4 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     OffBitBlt @ 0x1C001CD04 (OffBitBlt.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001CE94 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C001CEF4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
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
  struct _POINTL *v12; // rbx
  unsigned int v13; // r12d
  HDEV v14; // rax
  struct _SURFOBJ *v15; // r14
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  PVOID *v18; // rsi
  int v19; // eax
  _DWORD *p_hsurf; // r15
  USHORT *v21; // rbx
  HDEV hdev; // rax
  BOOL (__stdcall *v23)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r15
  struct _CLIPOBJ *v24; // r10
  LONG x; // ebx
  LONG y; // r12d
  int v27; // r14d
  __int64 (__fastcall *v28)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r10
  CLIPOBJ *v30; // r15
  USHORT *p_iType; // rbx
  BOOL (__stdcall *v32)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 ThreadWin32Thread; // rax
  int v34; // edx
  int v35; // r8d
  int v36; // ecx
  __int64 *v37; // r12
  USHORT *v38; // rbx
  BOOL (__stdcall *v39)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  struct _SURFOBJ *v43; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+78h] [rbp-88h]
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v46; // [rsp+88h] [rbp-78h] BYREF
  struct _CLIPOBJ *v47; // [rsp+90h] [rbp-70h]
  int v48[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h]
  _DWORD v54[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  __int64 v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  __int64 v59[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v60[2]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v61[4]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v62[912]; // [rsp+120h] [rbp+20h] BYREF

  v46 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v12 = a7;
  v13 = 1;
  v58 = (__int64)a3;
  ppco = a4;
  v53 = (__int64)a5;
  v55 = (__int64)a8;
  v43 = a1;
  v49 = (__int64)a7;
  v57 = (__int64)a9;
  v56 = (__int64)a10;
  v44 = 1;
  *(_OWORD *)v59 = 0LL;
  *(_OWORD *)v60 = 0LL;
  if ( !a2 || (v14 = a2->hdev) == 0LL || a2 != *((struct _SURFOBJ **)v14 + 14) )
  {
    *(struct _RECTL *)v59 = *a6;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v62, a1, a4, a6);
    *(_QWORD *)v48 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v62, &v43, &v46, &ppco) )
          return v13;
        v15 = v43;
        p_pvScan0 = 0LL;
        if ( v43 )
        {
          hsurf = (int)v43[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v43[-1].pvScan0;
            GreLockDisplayDevice(v43->hdev);
          }
        }
        v18 = 0LL;
        if ( a2 )
        {
          v19 = (int)a2[1].hsurf;
          if ( (v19 & 0x80004000) != 0 && (v19 & 0x200) == 0 )
          {
            v18 = &a2[-1].pvScan0;
            GreLockDisplayDevice(a2->hdev);
          }
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v18 )
          GreUnlockDisplayDevice(v18[6]);
        GreUnlockDisplayDevice(p_pvScan0[6]);
      }
      if ( a11 == 52428 )
        break;
      v30 = ppco;
      if ( (unsigned __int8)a11 == a11 >> 8 )
      {
        p_iType = &v15->iType;
        if ( v15->iType != 1 )
          goto LABEL_41;
        if ( (unsigned int)bAllowShareAccess(v15) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            LODWORD(v15) = (_DWORD)v43;
            v32 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(ThreadWin32Thread + 280) + 72LL);
            goto LABEL_43;
          }
          v15 = v43;
        }
        if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v15) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
          {
            LODWORD(v15) = (_DWORD)v43;
            goto LABEL_116;
          }
          v15 = v43;
        }
LABEL_41:
        if ( ((__int64)v15[1].hsurf & 1) != 0 )
        {
          v32 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v15->hdev + 163);
LABEL_43:
          v12 = (struct _POINTL *)v49;
          v13 &= OffBitBlt(
                   (int)v32,
                   (int)&v46,
                   (int)v15,
                   (int)v48,
                   (__int64)a2,
                   v58,
                   v30,
                   v53,
                   (__int64)v59,
                   v49,
                   v55,
                   v57,
                   v56,
                   a11);
          goto LABEL_29;
        }
LABEL_116:
        v32 = EngBitBlt;
        goto LABEL_43;
      }
      *(_OWORD *)v60 = *(_OWORD *)v59;
      if ( !ppco )
        goto LABEL_59;
      if ( bIntersect(&ppco->rclBounds, (const struct _RECTL *)v59, (struct _RECTL *)v60) )
      {
        v30 = ppco;
LABEL_59:
        v34 = LODWORD(v60[0]) - LODWORD(v59[0]);
        v35 = HIDWORD(v60[0]) - HIDWORD(v59[0]);
        v47 = 0LL;
        if ( v12 )
        {
          v36 = v34 + v12->x;
          v47 = (struct _CLIPOBJ *)&v51;
          LODWORD(v51) = v36;
          HIDWORD(v51) = v35 + v12->y;
        }
        v37 = 0LL;
        if ( v55 )
        {
          v37 = &v52;
          LODWORD(v52) = v34 + *(_DWORD *)v55;
          HIDWORD(v52) = v35 + *(_DWORD *)(v55 + 4);
        }
        v38 = &v15->iType;
        if ( v15->iType == 1 )
        {
          if ( (unsigned int)bAllowShareAccess(v15) )
          {
            if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
              || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
              && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)
              || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) == 0 )
            {
              v15 = v43;
              goto LABEL_65;
            }
            v42 = W32GetThreadWin32Thread(KeGetCurrentThread());
            LODWORD(v15) = (_DWORD)v43;
            v39 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v42 + 280) + 72LL);
          }
          else
          {
LABEL_65:
            if ( *v38 != 1 || !(unsigned int)bAllowShareAccess(v15) )
              goto LABEL_67;
            if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
              || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
              || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
              && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
            {
              v15 = v43;
              goto LABEL_67;
            }
            LODWORD(v15) = (_DWORD)v43;
LABEL_130:
            v39 = EngBitBlt;
          }
        }
        else
        {
LABEL_67:
          if ( ((__int64)v15[1].hsurf & 1) == 0 )
            goto LABEL_130;
          v39 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v15->hdev + 163);
        }
        v40 = OffBitBlt(
                (int)v39,
                (int)&v46,
                (int)v15,
                (int)v48,
                (__int64)a2,
                v58,
                v30,
                v53,
                (__int64)v60,
                (__int64)v47,
                (__int64)v37,
                v57,
                v56,
                a11);
        v13 = v40 & v44;
LABEL_28:
        v12 = (struct _POINTL *)v49;
LABEL_29:
        v44 = v13;
      }
      if ( v18 )
        GreUnlockDisplayDevice(v18[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
    p_hsurf = &v15[1].hsurf;
    v47 = ppco;
    if ( ((__int64)v15[1].hsurf & 0x400) == 0 && a2->hdev )
    {
      if ( a2->iType != 1 )
        goto LABEL_75;
      if ( !(unsigned int)bAllowShareAccess(a2) )
        goto LABEL_87;
      if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        v15 = v43;
LABEL_87:
        if ( a2->iType != 1 || !(unsigned int)bAllowShareAccess(a2) )
        {
LABEL_75:
          if ( ((__int64)a2[1].hsurf & 0x400) != 0 )
          {
            hdev = a2->hdev;
            goto LABEL_20;
          }
          goto LABEL_106;
        }
        if ( !W32GetThreadWin32Thread(KeGetCurrentThread())
          || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
        {
          v15 = v43;
          goto LABEL_75;
        }
LABEL_105:
        v15 = v43;
        goto LABEL_106;
      }
LABEL_99:
      v41 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v15 = v43;
      v23 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v41 + 280)
                                                                                                 + 80LL);
      goto LABEL_21;
    }
    v21 = &v15->iType;
    if ( v15->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v15) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
        {
          goto LABEL_99;
        }
        v15 = v43;
      }
      if ( *v21 == 1 && (unsigned int)bAllowShareAccess(v15) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_105;
        }
        v15 = v43;
      }
    }
    if ( (*p_hsurf & 0x400) != 0 )
    {
      hdev = v15->hdev;
LABEL_20:
      v23 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 164);
LABEL_21:
      v24 = v47;
      x = v46.x;
      y = v46.y;
      if ( v47 )
      {
        CLIPOBJ_vOffset(v47, v46.x, v46.y);
        v24 = v47;
      }
      v50 = 0;
      v61[0] = x + LODWORD(v59[0]);
      v61[2] = x + LODWORD(v59[1]);
      v61[1] = y + HIDWORD(v59[0]);
      v61[3] = y + HIDWORD(v59[1]);
      v54[0] = v48[0] + *(_DWORD *)v49;
      v54[1] = *(_DWORD *)(v49 + 4) + v48[1];
      if ( v23 )
        v27 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v23)(
                v15,
                a2,
                v24,
                v53,
                v61,
                v54);
      else
        v27 = v50;
      if ( v47 )
        CLIPOBJ_vOffset(v47, -x, -y);
      v13 = v27 & v44;
      goto LABEL_28;
    }
LABEL_106:
    v23 = EngCopyBits;
    goto LABEL_21;
  }
  v28 = bSpBltFromScreen;
  if ( a1 == a2 )
    v28 = bSpBltScreenToScreen;
  return (unsigned int)v28(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
