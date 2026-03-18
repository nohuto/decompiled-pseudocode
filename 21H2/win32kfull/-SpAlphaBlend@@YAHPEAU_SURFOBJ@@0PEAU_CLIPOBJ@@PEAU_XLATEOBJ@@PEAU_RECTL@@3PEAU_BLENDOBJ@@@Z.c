/*
 * XREFs of ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C00D7460
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x1C002D3E0 (EngAlphaBlend.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0031BF0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0032504 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     OffAlphaBlend @ 0x1C00D76B8 (OffAlphaBlend.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00D77FC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SpAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclDest,
        struct _RECTL *prclSrc,
        struct _BLENDOBJ *pBlendObj)
{
  unsigned int v8; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v10; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v13; // eax
  PVOID *v14; // rdi
  struct _CLIPOBJ *v15; // r13
  USHORT *p_iType; // r14
  BOOL (__stdcall *v17)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  HDEV v19; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v21; // [rsp+50h] [rbp-B0h] BYREF
  PVOID *v22; // [rsp+58h] [rbp-A8h] BYREF
  struct _CLIPOBJ *v23; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  _BYTE v29[912]; // [rsp+90h] [rbp-70h] BYREF

  v24 = 0LL;
  v8 = 1;
  hdev = a2->hdev;
  v28 = (__int64)a4;
  v21 = a1;
  v23 = a3;
  v27 = (__int64)prclDest;
  v26 = (__int64)prclSrc;
  v25 = (__int64)pBlendObj;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v29, a1, a3, prclDest);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v29, &v21, &v24, &v23) )
        return v8;
      v10 = v21;
      p_pvScan0 = 0LL;
      v22 = 0LL;
      if ( v21 )
      {
        hsurf = (int)v21[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v21[-1].pvScan0;
          v19 = v21->hdev;
          v22 = &v21[-1].pvScan0;
          GreLockDisplayDevice(v19);
        }
      }
      v13 = (int)a2[1].hsurf;
      v14 = 0LL;
      if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
      {
        v14 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v22, &v23) )
        break;
LABEL_17:
      if ( v14 )
        GreUnlockDisplayDevice(v14[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
    v15 = v23;
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          p_pvScan0 = v22;
          LODWORD(v10) = (_DWORD)v21;
          v17 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(ThreadWin32Thread + 280) + 120LL);
          goto LABEL_16;
        }
        p_pvScan0 = v22;
        v10 = v21;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v22;
          LODWORD(v10) = (_DWORD)v21;
          goto LABEL_26;
        }
        p_pvScan0 = v22;
        v10 = v21;
      }
    }
    if ( ((__int64)v10[1].hsurf & 0x10000) != 0 )
    {
      v17 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)v10->hdev + 169);
LABEL_16:
      v8 &= OffAlphaBlend((int)v17, (int)&v24, (int)v10, (int)&gptlZero, (__int64)a2, v15, v28, v27, v26, v25);
      goto LABEL_17;
    }
LABEL_26:
    v17 = EngAlphaBlend;
    goto LABEL_16;
  }
  return EngAlphaBlend(a1, a2, a3, a4, prclDest, prclSrc, pBlendObj);
}
