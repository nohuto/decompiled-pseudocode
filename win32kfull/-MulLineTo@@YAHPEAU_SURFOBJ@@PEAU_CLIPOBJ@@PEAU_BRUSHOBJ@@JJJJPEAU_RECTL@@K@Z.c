/*
 * XREFs of ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02B2700
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C014E0E2 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014E322 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C014EF4E (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C014EFE2 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C014F364 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027C420 (--1MULTISURF@@QEAA@XZ.c)
 *     EngLineTo @ 0x1C028FDB0 (EngLineTo.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02B0A64 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02B5568 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     OffLineTo @ 0x1C02EA5E4 (OffLineTo.c)
 */

__int64 __fastcall MulLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        struct _RECTL *a8,
        MIX mix)
{
  DHPDEV dhpdev; // rdi
  unsigned int v14; // ebx
  struct _SURFOBJ *v15; // rcx
  int i; // eax
  BOOL (__stdcall *v18)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  _DWORD v19[12]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[56]; // [rsp+90h] [rbp-70h] BYREF
  struct _DISPSURF *v21; // [rsp+C8h] [rbp-38h]
  __int64 v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  __int64 v24; // [rsp+E0h] [rbp-20h]
  _BYTE v25[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v26; // [rsp+118h] [rbp+18h]
  char v27; // [rsp+120h] [rbp+20h]
  int v28; // [rsp+124h] [rbp+24h]
  SURFOBJ *pso; // [rsp+148h] [rbp+48h]
  RECTL *prclBounds; // [rsp+150h] [rbp+50h]

  dhpdev = a1->dhpdev;
  v14 = 1;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    v26 = 0LL;
    v28 = 0;
    v27 = 0;
    MULTISURF::vInit((MULTISURF *)v25, v15, a8);
    v14 = EngLineTo(pso, a2, a3, x1, y1, x2, y2, prclBounds, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v25);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v19,
    a3,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    0);
  if ( !v19[0] )
    return 0LL;
  for ( i = MSURF::bFindSurface((MSURF *)v20, a1, a2, a8); i; i = MSURF::bNextSurface((MSURF *)v20) )
  {
    MULTIBRUSH::LoadElement((MULTIBRUSH *)v19, v21, (struct SURFACE *)(v22 - 24));
    if ( (*(_DWORD *)(v22 + 88) & 0x100) != 0 )
      v18 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*((_QWORD *)v21 + 7) + 2912LL);
    else
      v18 = EngLineTo;
    v14 &= OffLineTo(v18, v24, v22, v23, a3, x1, y1, x2, y2, a8, mix);
    MULTIBRUSH::StoreElement((MULTIBRUSH *)v19, *((_DWORD *)v21 + 4));
  }
  return v14;
}
