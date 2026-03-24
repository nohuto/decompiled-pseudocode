/*
 * XREFs of ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C029C1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngNineGrid @ 0x1C00C8C30 (EngNineGrid.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0298C80 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029A884 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029B118 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029D5EC (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirNineGrid(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct NINEGRID *a7,
        struct _BLENDOBJ *a8,
        void *a9)
{
  void *v13; // r12
  struct _BLENDOBJ *v14; // r13
  __int64 HDEV; // rbx
  int v16; // eax
  struct _DISPSURF *i; // rbx
  __int64 v18; // r9
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned int v22; // r8d
  __int64 v24; // [rsp+58h] [rbp-81h] BYREF
  struct SURFACE *v25; // [rsp+60h] [rbp-79h] BYREF
  struct SURFACE *v26; // [rsp+68h] [rbp-71h] BYREF
  __int128 v27; // [rsp+78h] [rbp-61h] BYREF
  __int64 v28; // [rsp+88h] [rbp-51h]
  int v29; // [rsp+90h] [rbp-49h]
  _QWORD v30[2]; // [rsp+98h] [rbp-41h] BYREF
  _BYTE v31[40]; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-9h]
  __int64 v33; // [rsp+D8h] [rbp-1h]
  __int64 v34; // [rsp+118h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a2);
  v13 = a9;
  v14 = a8;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v30);
        v33 = 0LL;
        v32 = 0LL;
        v30[0] = 0LL;
        v16 = *(_DWORD *)(HDEV + 40);
        v27 = 0LL;
        v29 = 1;
        if ( (v16 & 1) != 0 )
        {
          *(_QWORD *)&v27 = *(_QWORD *)(HDEV + 48);
          v28 = HDEV;
          GreAcquireSemaphore(v27);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v27, 11LL);
          v16 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v16 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v18 = *((_QWORD *)i + 6);
            v34 = v18;
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1792) + 792LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v24,
                    (struct PDEVOBJ *)&v34,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))(v20 + 792))(
                    DevBitmap,
                    v21,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    v14,
                    v13);
                  if ( v24 )
                    *(_WORD *)(v24 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v27);
        if ( v30[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v30);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v31);
      }
    }
  }
  v22 = EngNineGrid(a1, (__int64)a2, (__int64)a3, (__int64)a4, (__int64)a5, (__int64)a6, (__int64)a7, (__int64)v14);
  if ( v25 )
    bMakeOpaque(v25);
  if ( v26 )
    bMakeOpaque(v26);
  return v22;
}
