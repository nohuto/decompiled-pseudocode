/*
 * XREFs of ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C02A78E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngNineGrid @ 0x1C0080400 (EngNineGrid.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C014DF4E (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C02A55DC (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A6824 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A8D54 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
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
  __int64 v13; // rcx
  void *v14; // r13
  __int64 HDEV; // rax
  Gre::Base *v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  struct _DISPSURF *i; // rbx
  __int64 v20; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v22; // r11
  unsigned int v23; // ebx
  __int64 v25; // [rsp+58h] [rbp-61h] BYREF
  struct SURFACE *v26; // [rsp+60h] [rbp-59h] BYREF
  struct SURFACE *v27; // [rsp+68h] [rbp-51h] BYREF
  __int128 v28; // [rsp+78h] [rbp-41h] BYREF
  __int64 v29; // [rsp+88h] [rbp-31h]
  int v30; // [rsp+90h] [rbp-29h]
  __int64 v31; // [rsp+98h] [rbp-21h] BYREF
  int v32; // [rsp+A0h] [rbp-19h]
  int v33; // [rsp+A4h] [rbp-15h]
  __int16 v34; // [rsp+A8h] [rbp-11h]
  __int64 v35; // [rsp+B0h] [rbp-9h]
  __int64 v36; // [rsp+B8h] [rbp-1h]
  __int64 v37; // [rsp+F8h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a2);
  v14 = a9;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v13);
      v17 = HDEV;
      if ( HDEV )
      {
        v32 = 0;
        v33 = 0;
        v36 = 0LL;
        v35 = 0LL;
        v31 = 0LL;
        v18 = *(_DWORD *)(HDEV + 40);
        v34 = 256;
        v28 = 0LL;
        v30 = 1;
        if ( (v18 & 1) != 0 )
        {
          Gre::Base::Globals(v16);
          *(_QWORD *)&v28 = *(_QWORD *)(v17 + 48);
          v29 = v17;
          GreAcquireSemaphore(v28);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v28, 11LL);
        }
        if ( (*(_DWORD *)(v17 + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v17 + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v20 = *((_QWORD *)i + 6);
            v37 = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v20 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v20 + 1760) + 792LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v25,
                    (struct PDEVOBJ *)&v37,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))(*(_QWORD *)(v20 + 1760) + 792LL))(
                    DevBitmap,
                    v22,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    v14);
                  if ( v25 )
                    *(_WORD *)(v25 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v28);
        if ( v31 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v31);
      }
    }
  }
  v23 = EngNineGrid((int)a1, (__int64)a2, (int)a3, (int)a4, (__int64)a5, (__int64)a6, (__int64)a7, (__int64)a8);
  if ( v26 )
    bMakeOpaque(v26);
  if ( v27 )
    bMakeOpaque(v27);
  return v23;
}
