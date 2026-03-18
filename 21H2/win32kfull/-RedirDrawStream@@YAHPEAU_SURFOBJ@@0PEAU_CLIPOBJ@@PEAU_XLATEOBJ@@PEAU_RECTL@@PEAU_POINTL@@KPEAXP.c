/*
 * XREFs of ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C029A7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngDrawStream @ 0x1C00E0180 (EngDrawStream.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0297B30 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0299790 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029A018 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029C510 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        _DWORD *a8,
        struct _DSSTATE *a9)
{
  struct _DSSTATE *v13; // r13
  __int64 HDEV; // rbx
  int v15; // eax
  struct _DISPSURF *i; // rdi
  __int64 v17; // r10
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v19; // rax
  __int64 v20; // r10
  unsigned int v21; // r8d
  __int64 v23; // [rsp+58h] [rbp-81h] BYREF
  struct SURFACE *v24; // [rsp+60h] [rbp-79h] BYREF
  struct SURFACE *v25; // [rsp+68h] [rbp-71h] BYREF
  __int128 v26; // [rsp+78h] [rbp-61h] BYREF
  __int64 v27; // [rsp+88h] [rbp-51h]
  int v28; // [rsp+90h] [rbp-49h]
  _QWORD v29[2]; // [rsp+98h] [rbp-41h] BYREF
  _BYTE v30[40]; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-9h]
  __int64 v32; // [rsp+D8h] [rbp-1h]
  __int64 v33; // [rsp+118h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a2);
  v13 = a9;
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
          for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v17 = *((_QWORD *)i + 6);
            v33 = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1760) + 784LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v33,
                    a1);
                  DevBitmap = GetDevBitmap(i, a2);
                  v19 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, unsigned int, _DWORD *, struct _DSSTATE *))(*(_QWORD *)(v20 + 1760) + 784LL))(
                    v19,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    v13);
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
  v21 = EngDrawStream((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4, (int)a5, (int *)a6, a7, a8, v13);
  if ( v24 )
    bMakeOpaque(v24);
  if ( v25 )
    bMakeOpaque(v25);
  return v21;
}
