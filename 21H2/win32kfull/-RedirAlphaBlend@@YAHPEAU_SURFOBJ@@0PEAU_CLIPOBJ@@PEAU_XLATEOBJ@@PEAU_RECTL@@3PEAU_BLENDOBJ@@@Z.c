/*
 * XREFs of ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C029A060
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     EngAlphaBlend @ 0x1C002D3E0 (EngAlphaBlend.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0297B30 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0299790 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029A018 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029C510 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *a7)
{
  BLENDOBJ *pBlendObj; // r13
  __int64 HDEV; // rbx
  int v13; // eax
  struct _DISPSURF *i; // rdi
  __int64 v15; // r10
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v17; // rax
  __int64 v18; // r10
  unsigned int v19; // r8d
  __int64 v21; // [rsp+48h] [rbp-71h] BYREF
  struct SURFACE *v22; // [rsp+50h] [rbp-69h] BYREF
  struct SURFACE *v23; // [rsp+58h] [rbp-61h] BYREF
  __int128 v24; // [rsp+68h] [rbp-51h] BYREF
  __int64 v25; // [rsp+78h] [rbp-41h]
  int v26; // [rsp+80h] [rbp-39h]
  _QWORD v27[2]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v28[40]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+7h]
  __int64 v30; // [rsp+C8h] [rbp+Fh]
  __int64 v31; // [rsp+108h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v22, a2);
  pBlendObj = a7;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v27);
        v30 = 0LL;
        v29 = 0LL;
        v27[0] = 0LL;
        v13 = *(_DWORD *)(HDEV + 40);
        v24 = 0LL;
        v26 = 1;
        if ( (v13 & 1) != 0 )
        {
          *(_QWORD *)&v24 = *(_QWORD *)(HDEV + 48);
          v25 = HDEV;
          GreAcquireSemaphore(v24);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v24, 11LL);
          v13 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v13 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v15 = *((_QWORD *)i + 6);
            v31 = v15;
            if ( v15 )
            {
              if ( (*(_DWORD *)(v15 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v15 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v15 + 1760) + 632LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v21,
                    (struct PDEVOBJ *)&v31,
                    a1);
                  DevBitmap = GetDevBitmap(i, a2);
                  v17 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(v18 + 1760) + 632LL))(
                    v17,
                    DevBitmap,
                    pco,
                    pxlo,
                    prclDest,
                    prclSrc,
                    pBlendObj);
                  if ( v21 )
                    *(_WORD *)(v21 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v24);
        if ( v27[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v27);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v28);
      }
    }
  }
  v19 = EngAlphaBlend(a1, a2, pco, pxlo, prclDest, prclSrc, pBlendObj);
  if ( v22 )
    bMakeOpaque(v22);
  if ( v23 )
    bMakeOpaque(v23);
  return v19;
}
