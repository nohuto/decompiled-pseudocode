/*
 * XREFs of ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C029B8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngStretchBltROP @ 0x1C008B730 (EngStretchBltROP.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0297B30 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0299790 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029A018 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029C510 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  __int64 HDEV; // rbx
  int v18; // eax
  struct _DISPSURF *i; // rsi
  __int64 v20; // r10
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v22; // rbx
  struct _SURFOBJ *v23; // rax
  __int64 v24; // r10
  unsigned int v25; // r8d
  __int64 v27; // [rsp+78h] [rbp-89h] BYREF
  struct SURFACE *v28; // [rsp+80h] [rbp-81h] BYREF
  struct SURFACE *v29; // [rsp+88h] [rbp-79h] BYREF
  struct SURFACE *v30; // [rsp+90h] [rbp-71h] BYREF
  __int128 v31; // [rsp+98h] [rbp-69h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-59h]
  int v33; // [rsp+B0h] [rbp-51h]
  _QWORD v34[2]; // [rsp+B8h] [rbp-49h] BYREF
  _BYTE v35[40]; // [rsp+C8h] [rbp-39h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-11h]
  __int64 v37; // [rsp+F8h] [rbp-9h]
  __int64 v38; // [rsp+138h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v30, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v29, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a3);
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v34);
        v18 = *(_DWORD *)(HDEV + 40);
        v31 = 0LL;
        v37 = 0LL;
        v36 = 0LL;
        v34[0] = 0LL;
        v33 = 1;
        if ( (v18 & 1) != 0 )
        {
          *(_QWORD *)&v31 = *(_QWORD *)(HDEV + 48);
          v32 = HDEV;
          GreAcquireSemaphore(v31);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v31, 11LL);
          v18 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v18 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v20 = *((_QWORD *)i + 6);
            v38 = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v20 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v20 + 1760) + 616LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v27,
                    (struct PDEVOBJ *)&v38,
                    a1);
                  DevBitmap = GetDevBitmap(i, a3);
                  v22 = GetDevBitmap(i, a2);
                  v23 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)(v24 + 1760) + 616LL))(
                    v23,
                    v22,
                    DevBitmap,
                    pco,
                    pxlo,
                    pca,
                    pptlHTOrg,
                    prclDest,
                    prclSrc,
                    pptlMask,
                    iMode,
                    pbo,
                    rop4);
                  if ( v27 )
                    *(_WORD *)(v27 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v31);
        if ( v34[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v34);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v35);
      }
    }
  }
  v25 = EngStretchBltROP(a1, a2, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  if ( v28 )
    bMakeOpaque(v28);
  if ( v29 )
    bMakeOpaque(v29);
  if ( v30 )
    bMakeOpaque(v30);
  return v25;
}
