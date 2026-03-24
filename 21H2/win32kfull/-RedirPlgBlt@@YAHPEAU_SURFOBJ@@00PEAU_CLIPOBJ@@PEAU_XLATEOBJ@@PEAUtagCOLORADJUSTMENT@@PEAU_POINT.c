/*
 * XREFs of ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C029CA50
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     EngPlgBlt @ 0x1C028C5F0 (EngPlgBlt.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C02992B0 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029AEB4 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029B748 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029DC1C (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        POINTL *pptl,
        ULONG a11)
{
  ULONG iMode; // r13d
  __int64 HDEV; // rbx
  int v17; // eax
  struct _DISPSURF *i; // rdi
  __int64 v19; // r9
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v21; // rax
  __int64 v22; // r10
  __int64 v23; // r11
  unsigned int v24; // r8d
  __int64 v26; // [rsp+68h] [rbp-89h] BYREF
  struct SURFACE *v27; // [rsp+70h] [rbp-81h] BYREF
  struct SURFACE *v28; // [rsp+78h] [rbp-79h] BYREF
  struct SURFACE *v29; // [rsp+80h] [rbp-71h] BYREF
  __int128 v30; // [rsp+88h] [rbp-69h] BYREF
  __int64 v31; // [rsp+98h] [rbp-59h]
  int v32; // [rsp+A0h] [rbp-51h]
  _QWORD v33[2]; // [rsp+A8h] [rbp-49h] BYREF
  _BYTE v34[40]; // [rsp+B8h] [rbp-39h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-11h]
  __int64 v36; // [rsp+E8h] [rbp-9h]
  __int64 v37; // [rsp+128h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v29, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a3);
  iMode = a11;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v33);
        v36 = 0LL;
        v35 = 0LL;
        v33[0] = 0LL;
        v17 = *(_DWORD *)(HDEV + 40);
        v30 = 0LL;
        v32 = 1;
        if ( (v17 & 1) != 0 )
        {
          *(_QWORD *)&v30 = *(_QWORD *)(HDEV + 48);
          v31 = HDEV;
          GreAcquireSemaphore(v30);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v30, 11LL);
          v17 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v17 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v19 = *((_QWORD *)i + 6);
            v37 = v19;
            if ( v19 )
            {
              if ( (*(_DWORD *)(v19 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v19 + 1792) + 624LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v26,
                    (struct PDEVOBJ *)&v37,
                    a1);
                  DevBitmap = GetDevBitmap(i, a3);
                  GetDevBitmap(i, a2);
                  v21 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(v22 + 624))(
                    v21,
                    v23,
                    DevBitmap,
                    pco,
                    pxlo,
                    pca,
                    pptlBrushOrg,
                    pptfx,
                    prcl,
                    pptl,
                    iMode);
                  if ( v26 )
                    *(_WORD *)(v26 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v30);
        if ( v33[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v33);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v34);
      }
    }
  }
  v24 = EngPlgBlt(a1, a2, a3, pco, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
  if ( v27 )
    bMakeOpaque(v27);
  if ( v28 )
    bMakeOpaque(v28);
  if ( v29 )
    bMakeOpaque(v29);
  return v24;
}
