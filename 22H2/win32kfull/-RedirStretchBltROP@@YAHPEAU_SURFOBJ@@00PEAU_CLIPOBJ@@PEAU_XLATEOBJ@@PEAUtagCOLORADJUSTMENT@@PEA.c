/*
 * XREFs of ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C029C9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngStretchBltROP @ 0x1C0104280 (EngStretchBltROP.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0298C80 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029A884 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029B118 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029D5EC (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
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
        DWORD a13)
{
  DWORD rop4; // r13d
  __int64 HDEV; // rbx
  int v19; // eax
  struct _DISPSURF *i; // rdi
  __int64 v21; // r9
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v23; // rax
  __int64 v24; // r10
  __int64 v25; // r11
  unsigned int v26; // r8d
  __int64 v28; // [rsp+78h] [rbp-89h] BYREF
  struct SURFACE *v29; // [rsp+80h] [rbp-81h] BYREF
  struct SURFACE *v30; // [rsp+88h] [rbp-79h] BYREF
  struct SURFACE *v31; // [rsp+90h] [rbp-71h] BYREF
  __int128 v32; // [rsp+98h] [rbp-69h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-59h]
  int v34; // [rsp+B0h] [rbp-51h]
  _QWORD v35[2]; // [rsp+B8h] [rbp-49h] BYREF
  _BYTE v36[40]; // [rsp+C8h] [rbp-39h] BYREF
  __int64 v37; // [rsp+F0h] [rbp-11h]
  __int64 v38; // [rsp+F8h] [rbp-9h]
  __int64 v39; // [rsp+138h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v31, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v30, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v29, a3);
  rop4 = a13;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v35);
        v38 = 0LL;
        v37 = 0LL;
        v35[0] = 0LL;
        v19 = *(_DWORD *)(HDEV + 40);
        v32 = 0LL;
        v34 = 1;
        if ( (v19 & 1) != 0 )
        {
          *(_QWORD *)&v32 = *(_QWORD *)(HDEV + 48);
          v33 = HDEV;
          GreAcquireSemaphore(v32);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v32, 11LL);
          v19 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v19 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v21 = *((_QWORD *)i + 6);
            v39 = v21;
            if ( v21 )
            {
              if ( (*(_DWORD *)(v21 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v21 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v21 + 1792) + 616LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v28,
                    (struct PDEVOBJ *)&v39,
                    a1);
                  DevBitmap = GetDevBitmap(i, a3);
                  GetDevBitmap(i, a2);
                  v23 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v24 + 616))(
                    v23,
                    v25,
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
                  if ( v28 )
                    *(_WORD *)(v28 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v32);
        if ( v35[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v35);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v36);
      }
    }
  }
  v26 = EngStretchBltROP(a1, a2, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  if ( v29 )
    bMakeOpaque(v29);
  if ( v30 )
    bMakeOpaque(v30);
  if ( v31 )
    bMakeOpaque(v31);
  return v26;
}
