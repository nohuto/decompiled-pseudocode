/*
 * XREFs of ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02A8AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngTransparentBlt @ 0x1C00F1E60 (EngTransparentBlt.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C014DF4E (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C02A55DC (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A6824 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A8D54 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG a8)
{
  __int64 v12; // rcx
  ULONG ulReserved; // r13d
  __int64 HDEV; // rax
  Gre::Base *v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  struct _DISPSURF *i; // rbx
  __int64 v19; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v21; // r11
  unsigned int v22; // ebx
  __int64 v24; // [rsp+58h] [rbp-59h] BYREF
  struct SURFACE *v25; // [rsp+60h] [rbp-51h] BYREF
  struct SURFACE *v26; // [rsp+68h] [rbp-49h] BYREF
  __int128 v27; // [rsp+78h] [rbp-39h] BYREF
  __int64 v28; // [rsp+88h] [rbp-29h]
  int v29; // [rsp+90h] [rbp-21h]
  __int64 v30; // [rsp+98h] [rbp-19h] BYREF
  int v31; // [rsp+A0h] [rbp-11h]
  int v32; // [rsp+A4h] [rbp-Dh]
  __int16 v33; // [rsp+A8h] [rbp-9h]
  __int64 v34; // [rsp+B0h] [rbp-1h]
  __int64 v35; // [rsp+B8h] [rbp+7h]
  __int64 v36; // [rsp+F8h] [rbp+47h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a2);
  ulReserved = a8;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v12);
      v16 = HDEV;
      if ( HDEV )
      {
        v31 = 0;
        v32 = 0;
        v35 = 0LL;
        v34 = 0LL;
        v30 = 0LL;
        v17 = *(_DWORD *)(HDEV + 40);
        v33 = 256;
        v27 = 0LL;
        v29 = 1;
        if ( (v17 & 1) != 0 )
        {
          Gre::Base::Globals(v15);
          *(_QWORD *)&v27 = *(_QWORD *)(v16 + 48);
          v28 = v16;
          GreAcquireSemaphore(v27);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v27, 11LL);
        }
        if ( (*(_DWORD *)(v16 + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v16 + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v19 = *((_QWORD *)i + 6);
            v36 = v19;
            if ( v19 )
            {
              if ( (*(_DWORD *)(v19 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v19 + 1760) + 656LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v24,
                    (struct PDEVOBJ *)&v36,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(v19 + 1760) + 656LL))(
                    DevBitmap,
                    v21,
                    pco,
                    pxlo,
                    prclDst,
                    prclSrc,
                    iTransColor,
                    ulReserved);
                  if ( v24 )
                    *(_WORD *)(v24 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v27);
        if ( v30 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v30);
      }
    }
  }
  v22 = EngTransparentBlt(a1, a2, pco, pxlo, prclDst, prclSrc, iTransColor, ulReserved);
  if ( v25 )
    bMakeOpaque(v25);
  if ( v26 )
    bMakeOpaque(v26);
  return v22;
}
