/*
 * XREFs of ?BmpDevTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0299570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0297AF8 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0297B30 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0299790 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0299814 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v12; // ebp
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rax
  __int64 HDEV; // rax
  struct _DISPSURF *i; // rdi
  __int64 v16; // r10
  int v17; // eax
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v19; // rax
  __int64 v20; // r10
  __int64 v22; // [rsp+50h] [rbp-48h] BYREF
  __int64 v23; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v24; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v25; // [rsp+68h] [rbp-30h] BYREF

  v12 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v25, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v24, a2);
  if ( a1 )
  {
    v13 = ((__int64)a1[1].hsurf & 0x8000) != 0
        ? (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a1->hdev + 407)
        : EngTransparentBlt;
    v12 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *))v13)(a1, a2, a3);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
        {
          v16 = *((_QWORD *)i + 6);
          v22 = v16;
          if ( v16 )
          {
            if ( (*(_DWORD *)(v16 + 1792) & 0x8000000) != 0 )
            {
              v17 = *(_DWORD *)(v16 + 2096);
              if ( (v17 & 0x1000) != 0 && (v17 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v16 + 1760) + 656LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v22,
                    a1);
                  DevBitmap = GetDevBitmap(i, a2);
                  v19 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))(*(_QWORD *)(v20 + 1760) + 656LL))(
                    v19,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v24 )
    bBmpMakeOpaque(v24);
  if ( v25 )
    bBmpMakeOpaque(v25);
  return v12;
}
