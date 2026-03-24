/*
 * XREFs of ?BmpDevDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C0299190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0298C48 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0298C80 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029A884 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029A908 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  unsigned int v13; // esi
  HDEV hdev; // rax
  __int64 (__fastcall *v15)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *); // r10
  __int64 v16; // rax
  struct _DISPSURF *i; // rdi
  __int64 v18; // r9
  int v19; // eax
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v21; // r10
  __int64 v22; // r11
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  __int64 v25; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v26; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v27; // [rsp+68h] [rbp-30h] BYREF

  v13 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v27, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v26, a2);
  if ( a1 )
  {
    hdev = a1->hdev;
    v15 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *))EngDrawStream;
    if ( *((_QWORD *)hdev + 426) )
      v15 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *))*((_QWORD *)hdev + 426);
    if ( SLODWORD(a1[1].hsurf) >= 0 && (((_DWORD)hdev[10] & 0x20000) == 0 || a1->iType != 3) )
      v15 = (__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *))EngDrawStream;
    v13 = v15(a1, a2, a3);
    v16 = UserGetHDEV();
    if ( v16 )
    {
      if ( (*(_DWORD *)(v16 + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(v16 + 1800); i; i = *(struct _DISPSURF **)i )
        {
          v18 = *((_QWORD *)i + 6);
          v24 = v18;
          if ( v18 )
          {
            if ( (*(_DWORD *)(v18 + 1824) & 0x8000000) != 0 )
            {
              v19 = *(_DWORD *)(v18 + 2128);
              if ( (v19 & 0x1000) != 0 && (v19 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1792) + 784LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v25,
                    (struct PDEVOBJ *)&v24,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, unsigned int, void *, struct _DSSTATE *))(v21 + 784))(
                    DevBitmap,
                    v22,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9);
                  if ( v25 )
                    *(_WORD *)(v25 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v26 )
    bBmpMakeOpaque(v26);
  if ( v27 )
    bBmpMakeOpaque(v27);
  return v13;
}
