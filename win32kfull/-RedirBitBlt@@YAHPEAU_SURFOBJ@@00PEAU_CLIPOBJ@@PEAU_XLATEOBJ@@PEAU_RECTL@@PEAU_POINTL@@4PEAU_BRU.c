/*
 * XREFs of ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A6AD0
 * Callers:
 *     ?RedirCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02A6D90 (-RedirCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngBitBlt @ 0x1C0088BA0 (EngBitBlt.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C014DF4E (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C02A55DC (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A6824 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A8D54 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
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
        POINTL *pptlBrush,
        ROP4 a11)
{
  __int64 v15; // rcx
  ROP4 rop4; // r13d
  __int64 HDEV; // rax
  Gre::Base *v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  struct _DISPSURF *i; // rbx
  __int64 v22; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v24; // r11
  unsigned int v25; // ebx
  __int64 v27; // [rsp+68h] [rbp-69h] BYREF
  struct SURFACE *v28; // [rsp+70h] [rbp-61h] BYREF
  struct SURFACE *v29; // [rsp+78h] [rbp-59h] BYREF
  struct SURFACE *v30; // [rsp+80h] [rbp-51h] BYREF
  __int128 v31; // [rsp+88h] [rbp-49h] BYREF
  __int64 v32; // [rsp+98h] [rbp-39h]
  int v33; // [rsp+A0h] [rbp-31h]
  __int64 v34; // [rsp+A8h] [rbp-29h] BYREF
  int v35; // [rsp+B0h] [rbp-21h]
  int v36; // [rsp+B4h] [rbp-1Dh]
  __int16 v37; // [rsp+B8h] [rbp-19h]
  __int64 v38; // [rsp+C0h] [rbp-11h]
  __int64 v39; // [rsp+C8h] [rbp-9h]
  __int64 v40; // [rsp+108h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v30, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v29, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a3);
  rop4 = a11;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v15);
      v19 = HDEV;
      if ( HDEV )
      {
        v35 = 0;
        v36 = 0;
        v39 = 0LL;
        v38 = 0LL;
        v34 = 0LL;
        v20 = *(_DWORD *)(HDEV + 40);
        v37 = 256;
        v31 = 0LL;
        v33 = 1;
        if ( (v20 & 1) != 0 )
        {
          Gre::Base::Globals(v18);
          *(_QWORD *)&v31 = *(_QWORD *)(v19 + 48);
          v32 = v19;
          GreAcquireSemaphore(v31);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v31, 11LL);
        }
        if ( (*(_DWORD *)(v19 + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v19 + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v22 = *((_QWORD *)i + 6);
            v40 = v22;
            if ( v22 )
            {
              if ( (*(_DWORD *)(v22 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v22 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v22 + 1760) + 208LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v27,
                    (struct PDEVOBJ *)&v40,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v22 + 1760) + 208LL))(
                    DevBitmap,
                    v24,
                    a3,
                    pco,
                    pxlo,
                    prclTrg,
                    pptlSrc,
                    pptlMask,
                    pbo,
                    pptlBrush,
                    rop4);
                  if ( v27 )
                    *(_WORD *)(v27 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v31);
        if ( v34 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v34);
      }
    }
  }
  v25 = EngBitBlt(a1, a2, a3, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
  if ( v28 )
    bMakeOpaque(v28);
  if ( v29 )
    bMakeOpaque(v29);
  if ( v30 )
    bMakeOpaque(v30);
  return v25;
}
