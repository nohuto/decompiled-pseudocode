/*
 * XREFs of ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C029BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C02992B0 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029B748 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029DC1C (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirDrawEscape(
        struct _SURFOBJ *a1,
        unsigned int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        void *a6)
{
  __int64 HDEV; // rbx
  int v11; // eax
  _QWORD *v12; // rbx
  void *v13; // rsi
  unsigned int v14; // r14d
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v18; // [rsp+48h] [rbp-59h] BYREF
  struct SURFACE *v19; // [rsp+50h] [rbp-51h] BYREF
  __int128 v20; // [rsp+58h] [rbp-49h] BYREF
  __int64 v21; // [rsp+68h] [rbp-39h]
  int v22; // [rsp+70h] [rbp-31h]
  _QWORD v23[2]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v24[40]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+Fh]
  __int64 v26; // [rsp+B8h] [rbp+17h]
  __int64 v27; // [rsp+F8h] [rbp+57h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v19, a1);
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v23);
        v26 = 0LL;
        v25 = 0LL;
        v23[0] = 0LL;
        v11 = *(_DWORD *)(HDEV + 40);
        v20 = 0LL;
        v22 = 1;
        if ( (v11 & 1) != 0 )
        {
          *(_QWORD *)&v20 = *(_QWORD *)(HDEV + 48);
          v21 = HDEV;
          GreAcquireSemaphore(v20);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
          v11 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v11 & 0x20000) != 0 )
        {
          v12 = **(_QWORD ***)(HDEV + 1800);
          if ( v12 )
          {
            v13 = a6;
            v14 = a5;
            do
            {
              v15 = v12[6];
              v27 = v15;
              if ( v15 )
              {
                if ( (*(_DWORD *)(v15 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v15 + 2128) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v15 + 1792) + 264LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v18,
                      (struct PDEVOBJ *)&v27,
                      a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, _QWORD, struct _CLIPOBJ *, struct _RECTL *, unsigned int, void *))(*(_QWORD *)(v16 + 1792) + 264LL))(
                      a1,
                      a2,
                      a3,
                      a4,
                      v14,
                      v13);
                    if ( v18 )
                      *(_WORD *)(v18 + 78) &= ~0x8000u;
                  }
                }
              }
              v12 = (_QWORD *)*v12;
            }
            while ( v12 );
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
        if ( v23[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v23);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v24);
      }
    }
  }
  if ( v19 )
    bMakeOpaque(v19);
  return 0LL;
}
