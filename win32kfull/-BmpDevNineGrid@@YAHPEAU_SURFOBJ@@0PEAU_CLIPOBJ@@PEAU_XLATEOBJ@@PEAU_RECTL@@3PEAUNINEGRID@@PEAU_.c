/*
 * XREFs of ?BmpDevNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C02A4680
 * Callers:
 *     <none>
 * Callees:
 *     EngNineGrid @ 0x1C0080400 (EngNineGrid.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C014DF4E (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A3984 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C02A55DC (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A5660 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevNineGrid(
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
  unsigned int v13; // ebp
  __int64 v14; // rcx
  __int64 HDEV; // rax
  struct _DISPSURF *i; // rbx
  __int64 v17; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v19; // r11
  __int64 v21; // [rsp+50h] [rbp-48h] BYREF
  __int64 v22; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v23; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v24; // [rsp+68h] [rbp-30h] BYREF

  v13 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v24, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v23, a2);
  if ( a1 )
  {
    v13 = EngNineGrid((int)a1, (__int64)a2, (int)a3, (int)a4, (__int64)a5, (__int64)a6, (__int64)a7, (__int64)a8);
    HDEV = UserGetHDEV(v14);
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
        {
          v17 = *((_QWORD *)i + 6);
          v21 = v17;
          if ( v17 )
          {
            if ( (*(_DWORD *)(v17 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2096) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v17 + 1760) + 792LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v22,
                  (struct PDEVOBJ *)&v21,
                  a1);
                GetDevBitmap(i, a2);
                DevBitmap = GetDevBitmap(i, a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))(*(_QWORD *)(v17 + 1760) + 792LL))(
                  DevBitmap,
                  v19,
                  a3,
                  a4,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9);
                if ( v22 )
                  *(_WORD *)(v22 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  if ( v23 )
    bBmpMakeOpaque(v23);
  if ( v24 )
    bBmpMakeOpaque(v24);
  return v13;
}
