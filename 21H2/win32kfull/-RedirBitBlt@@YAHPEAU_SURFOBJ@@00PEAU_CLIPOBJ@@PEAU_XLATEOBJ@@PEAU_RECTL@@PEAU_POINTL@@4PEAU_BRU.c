/*
 * XREFs of ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029B9E0
 * Callers:
 *     ?RedirCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C029BCA0 (-RedirCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngBitBlt @ 0x1C00CB5E0 (EngBitBlt.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C02992B0 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029AEB4 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029B748 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029DC1C (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *a10,
        ROP4 a11)
{
  ROP4 rop4; // r12d
  POINTL *pptlBrush; // r13
  __int64 HDEV; // rbx
  int v18; // eax
  struct _DISPSURF *i; // rbx
  __int64 v20; // r9
  struct _SURFOBJ *DevBitmap; // rax
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
  rop4 = a11;
  pptlBrush = a10;
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
        v18 = *(_DWORD *)(HDEV + 40);
        v30 = 0LL;
        v32 = 1;
        if ( (v18 & 1) != 0 )
        {
          *(_QWORD *)&v30 = *(_QWORD *)(HDEV + 48);
          v31 = HDEV;
          GreAcquireSemaphore(v30);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v30, 11LL);
          v18 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v18 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v20 = *((_QWORD *)i + 6);
            v37 = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v20 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v20 + 1792) + 208LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v26,
                    (struct PDEVOBJ *)&v37,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v22 + 208))(
                    DevBitmap,
                    v23,
                    a3,
                    pco,
                    pxlo,
                    prclTrg,
                    pptlSrc,
                    pptlMask,
                    pbo,
                    pptlBrush,
                    rop4);
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
  v24 = EngBitBlt(a1, a2, a3, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
  if ( v27 )
    bMakeOpaque(v27);
  if ( v28 )
    bMakeOpaque(v28);
  if ( v29 )
    bMakeOpaque(v29);
  return v24;
}
