/*
 * XREFs of ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C029D770
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngTextOut @ 0x1C00CBA80 (EngTextOut.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C02992B0 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029B748 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029DC1C (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *a9,
        MIX a10)
{
  MIX mix; // r12d
  POINTL *pptlOrg; // r13
  __int64 HDEV; // rbx
  int v17; // eax
  _QWORD *i; // rbx
  __int64 v19; // r9
  __int64 v20; // r9
  unsigned int v21; // r8d
  __int64 v23; // [rsp+68h] [rbp-79h] BYREF
  struct SURFACE *v24; // [rsp+70h] [rbp-71h] BYREF
  __int128 v25; // [rsp+78h] [rbp-69h] BYREF
  __int64 v26; // [rsp+88h] [rbp-59h]
  int v27; // [rsp+90h] [rbp-51h]
  _QWORD v28[2]; // [rsp+98h] [rbp-49h] BYREF
  _BYTE v29[40]; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-11h]
  __int64 v31; // [rsp+D8h] [rbp-9h]
  __int64 v32; // [rsp+118h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a1);
  mix = a10;
  pptlOrg = a9;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v28);
        v31 = 0LL;
        v30 = 0LL;
        v28[0] = 0LL;
        v17 = *(_DWORD *)(HDEV + 40);
        v25 = 0LL;
        v27 = 1;
        if ( (v17 & 1) != 0 )
        {
          *(_QWORD *)&v25 = *(_QWORD *)(HDEV + 48);
          v26 = HDEV;
          GreAcquireSemaphore(v25);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v25, 11LL);
          v17 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v17 & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(HDEV + 1800); i; i = (_QWORD *)*i )
          {
            v19 = i[6];
            v32 = v19;
            if ( v19 )
            {
              if ( (*(_DWORD *)(v19 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v19 + 1792) + 248LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v32,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v20 + 1792) + 248LL))(
                    a1,
                    pstro,
                    pfo,
                    pco,
                    prclExtra,
                    prclOpaque,
                    pboFore,
                    pboOpaque,
                    pptlOrg,
                    mix);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v25);
        if ( v28[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v28);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v29);
      }
    }
  }
  v21 = EngTextOut(a1, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
  if ( v24 )
    bMakeOpaque(v24);
  return v21;
}
