/*
 * XREFs of ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C02A46A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C015AD8E (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A40D4 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A6678 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
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
  __int64 HDEV; // rbx
  __int64 v12; // rdx
  Gre::Base *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  _QWORD *v17; // rbx
  void *v18; // rsi
  unsigned int v19; // r14d
  __int64 v20; // r9
  __int64 v22; // [rsp+48h] [rbp-59h] BYREF
  struct SURFACE *v23; // [rsp+50h] [rbp-51h] BYREF
  __int128 v24; // [rsp+58h] [rbp-49h] BYREF
  __int64 v25; // [rsp+68h] [rbp-39h]
  int v26; // [rsp+70h] [rbp-31h]
  _QWORD v27[2]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v28[40]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+Fh]
  __int64 v30; // [rsp+B8h] [rbp+17h]
  __int64 v31; // [rsp+F8h] [rbp+57h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a1);
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v10);
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v27);
        v30 = 0LL;
        v29 = 0LL;
        v27[0] = 0LL;
        v16 = *(_DWORD *)(HDEV + 40);
        v24 = 0LL;
        v26 = 1;
        if ( (v16 & 1) != 0 )
        {
          Gre::Base::Globals(v13);
          *(_QWORD *)&v24 = *(_QWORD *)(HDEV + 48);
          v25 = HDEV;
          GreAcquireSemaphore(v24);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v24, 11LL);
        }
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          v17 = **(_QWORD ***)(HDEV + 1768);
          if ( v17 )
          {
            v18 = a6;
            v19 = a5;
            do
            {
              v15 = v17[6];
              v31 = v15;
              if ( v15 )
              {
                if ( (*(_DWORD *)(v15 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v15 + 2096) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v15 + 1760) + 264LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v22,
                      (struct PDEVOBJ *)&v31,
                      a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, _QWORD, struct _CLIPOBJ *, struct _RECTL *, unsigned int, void *))(*(_QWORD *)(v20 + 1760) + 264LL))(
                      a1,
                      a2,
                      a3,
                      a4,
                      v19,
                      v18);
                    if ( v22 )
                      *(_WORD *)(v22 + 78) &= ~0x8000u;
                  }
                }
              }
              v17 = (_QWORD *)*v17;
            }
            while ( v17 );
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v24, v12, v14, v15);
        if ( v27[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v27);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v28);
      }
    }
  }
  if ( v23 )
    bMakeOpaque(v23);
  return 0LL;
}
