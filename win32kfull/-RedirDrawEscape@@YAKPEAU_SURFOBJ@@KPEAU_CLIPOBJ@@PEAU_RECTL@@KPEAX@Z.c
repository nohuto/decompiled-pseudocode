/*
 * XREFs of ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C02A6DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C014DF4E (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A6824 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A8D54 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirDrawEscape(
        struct _SURFOBJ *a1,
        unsigned int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        void *a6)
{
  __int64 v10; // rcx
  __int64 HDEV; // rax
  Gre::Base *v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  _QWORD *v15; // rbx
  void *v16; // rsi
  unsigned int v17; // r14d
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v21; // [rsp+48h] [rbp-39h] BYREF
  struct SURFACE *v22; // [rsp+50h] [rbp-31h] BYREF
  __int128 v23; // [rsp+58h] [rbp-29h] BYREF
  __int64 v24; // [rsp+68h] [rbp-19h]
  int v25; // [rsp+70h] [rbp-11h]
  _QWORD v26[2]; // [rsp+78h] [rbp-9h] BYREF
  __int16 v27; // [rsp+88h] [rbp+7h]
  __int64 v28; // [rsp+90h] [rbp+Fh]
  __int64 v29; // [rsp+98h] [rbp+17h]
  __int64 v30; // [rsp+D8h] [rbp+57h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v22, a1);
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v10);
      v13 = HDEV;
      if ( HDEV )
      {
        v14 = *(_DWORD *)(HDEV + 40);
        v23 = 0LL;
        v26[1] = 0LL;
        v27 = 256;
        v29 = 0LL;
        v28 = 0LL;
        v26[0] = 0LL;
        v25 = 1;
        if ( (v14 & 1) != 0 )
        {
          Gre::Base::Globals(v12);
          *(_QWORD *)&v23 = *(_QWORD *)(v13 + 48);
          v24 = v13;
          GreAcquireSemaphore(v23);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v23, 11LL);
        }
        if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 )
        {
          v15 = **(_QWORD ***)(v13 + 1768);
          if ( v15 )
          {
            v16 = a6;
            v17 = a5;
            do
            {
              v18 = v15[6];
              v30 = v18;
              if ( v18 )
              {
                if ( (*(_DWORD *)(v18 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2096) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v18 + 1760) + 264LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v21,
                      (struct PDEVOBJ *)&v30,
                      a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, _QWORD, struct _CLIPOBJ *, struct _RECTL *, unsigned int, void *))(*(_QWORD *)(v19 + 1760) + 264LL))(
                      a1,
                      a2,
                      a3,
                      a4,
                      v17,
                      v16);
                    if ( v21 )
                      *(_WORD *)(v21 + 78) &= ~0x8000u;
                  }
                }
              }
              v15 = (_QWORD *)*v15;
            }
            while ( v15 );
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v23);
        if ( v26[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v26);
      }
    }
  }
  if ( v22 )
    bMakeOpaque(v22);
  return 0LL;
}
