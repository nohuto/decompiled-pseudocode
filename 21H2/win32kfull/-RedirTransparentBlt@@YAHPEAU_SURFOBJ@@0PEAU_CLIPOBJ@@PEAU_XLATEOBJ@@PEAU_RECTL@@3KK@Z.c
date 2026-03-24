/*
 * XREFs of ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C029D9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngTransparentBlt @ 0x1C00D07E0 (EngTransparentBlt.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C02992B0 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029AEB4 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029B748 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029DC1C (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG a7,
        ULONG a8)
{
  ULONG ulReserved; // r12d
  ULONG iTransColor; // r13d
  __int64 HDEV; // rbx
  int v15; // eax
  struct _DISPSURF *i; // rbx
  __int64 v17; // r9
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v19; // r10
  __int64 v20; // r11
  unsigned int v21; // r8d
  __int64 v23; // [rsp+58h] [rbp-79h] BYREF
  struct SURFACE *v24; // [rsp+60h] [rbp-71h] BYREF
  struct SURFACE *v25; // [rsp+68h] [rbp-69h] BYREF
  __int128 v26; // [rsp+78h] [rbp-59h] BYREF
  __int64 v27; // [rsp+88h] [rbp-49h]
  int v28; // [rsp+90h] [rbp-41h]
  _QWORD v29[2]; // [rsp+98h] [rbp-39h] BYREF
  _BYTE v30[40]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-1h]
  __int64 v32; // [rsp+D8h] [rbp+7h]
  __int64 v33; // [rsp+118h] [rbp+47h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a2);
  ulReserved = a8;
  iTransColor = a7;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v29);
        v32 = 0LL;
        v31 = 0LL;
        v29[0] = 0LL;
        v15 = *(_DWORD *)(HDEV + 40);
        v26 = 0LL;
        v28 = 1;
        if ( (v15 & 1) != 0 )
        {
          *(_QWORD *)&v26 = *(_QWORD *)(HDEV + 48);
          v27 = HDEV;
          GreAcquireSemaphore(v26);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v26, 11LL);
          v15 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v15 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v17 = *((_QWORD *)i + 6);
            v33 = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1792) + 656LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v33,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(v19 + 656))(
                    DevBitmap,
                    v20,
                    pco,
                    pxlo,
                    prclDst,
                    prclSrc,
                    iTransColor,
                    ulReserved);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v26);
        if ( v29[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v29);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v30);
      }
    }
  }
  v21 = EngTransparentBlt(a1, a2, pco, pxlo, prclDst, prclSrc, iTransColor, ulReserved);
  if ( v24 )
    bMakeOpaque(v24);
  if ( v25 )
    bMakeOpaque(v25);
  return v21;
}
