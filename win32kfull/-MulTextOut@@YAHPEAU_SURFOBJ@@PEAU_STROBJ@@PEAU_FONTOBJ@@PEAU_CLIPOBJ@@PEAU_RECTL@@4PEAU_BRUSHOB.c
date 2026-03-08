/*
 * XREFs of ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02B3BA0
 * Callers:
 *     <none>
 * Callees:
 *     OffTextOut @ 0x1C000ABF0 (OffTextOut.c)
 *     EngTextOut @ 0x1C001A540 (EngTextOut.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C014E0E2 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z @ 0x1C014E1C6 (--0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C014E250 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1MULTIFONT@@QEAA@XZ @ 0x1C014E292 (--1MULTIFONT@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014E322 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C014EF4E (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C014EFE2 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C014F364 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027C420 (--1MULTISURF@@QEAA@XZ.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02B0A64 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 */

__int64 __fastcall MulTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        struct _FONTOBJ *a3,
        CLIPOBJ *pco,
        struct _RECTL *prclExtra,
        RECTL *prclOpaque,
        struct _BRUSHOBJ *pboFore,
        struct _BRUSHOBJ *pboOpaque,
        struct _POINTL *pptlOrg,
        MIX mix)
{
  DHPDEV dhpdev; // rbx
  unsigned int v15; // r13d
  struct _SURFOBJ *v16; // rcx
  __int64 v17; // r12
  RECTL *p_rclBkGround; // rsi
  struct _RECTL v19; // xmm6
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // r8
  BOOL (__stdcall *v23)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rcx
  ULONG cGlyphs; // [rsp+68h] [rbp-A0h]
  __int64 v26; // [rsp+90h] [rbp-78h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h]
  struct _CLIPOBJ *v28; // [rsp+A0h] [rbp-68h]
  struct _FONTOBJ *v29; // [rsp+A8h] [rbp-60h]
  _DWORD v30[12]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v31[14]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v32[56]; // [rsp+118h] [rbp+10h] BYREF
  struct _DISPSURF *v33; // [rsp+150h] [rbp+48h]
  __int64 v34; // [rsp+158h] [rbp+50h]
  struct _CLIPOBJ *v35; // [rsp+160h] [rbp+58h]
  int *v36; // [rsp+168h] [rbp+60h]
  _BYTE v37[88]; // [rsp+178h] [rbp+70h] BYREF
  SURFOBJ *pso; // [rsp+1D0h] [rbp+C8h]

  dhpdev = a1->dhpdev;
  v15 = 1;
  v28 = pco;
  v29 = a3;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v37, v16);
    v15 = EngTextOut(pso, pstro, a3, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v37);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v30,
    pboFore,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( !v30[0] )
    return 0LL;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v31,
    pboOpaque,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( !v31[0] )
    return 0LL;
  MULTIFONT::MULTIFONT((MULTIFONT *)&v26, a3, *((_DWORD *)dhpdev + 4), (struct _VDEV *)dhpdev);
  v17 = v27;
  if ( !v27 )
  {
    MULTIFONT::~MULTIFONT((MULTIFONT *)&v26);
    return 0LL;
  }
  p_rclBkGround = prclOpaque;
  if ( !prclOpaque )
    p_rclBkGround = &pstro->rclBkGround;
  v19 = *p_rclBkGround;
  cGlyphs = pstro[1].cGlyphs;
  if ( (unsigned int)MSURF::bFindSurface((MSURF *)v32, a1, v28, p_rclBkGround) )
  {
    v20 = v26;
    v21 = (__int64)v29;
    do
    {
      pstro[1].cGlyphs = 0;
      pstro[1].flAccel = 0;
      if ( v20 )
        *(_QWORD *)(v20 + 48) = *(_QWORD *)(v17 + 8LL * *((int *)v33 + 4) + 8);
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v30, v33, (struct SURFACE *)(v34 - 24));
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v31, v33, (struct SURFACE *)(v34 - 24));
      v22 = v34;
      pstro[1].cGlyphs = cGlyphs;
      *p_rclBkGround = v19;
      if ( (*(_DWORD *)(v22 + 88) & 8) != 0 )
        v23 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)v33 + 7) + 2848LL);
      else
        v23 = EngTextOut;
      v15 &= OffTextOut(
               (__int64 (__fastcall *)(__int64, struct _STROBJ *, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64, __int64, __int64, int))v23,
               v36,
               v22,
               pstro,
               v21,
               v35,
               (__int64)prclExtra,
               (__int128 *)&prclOpaque->left,
               (__int64)pboFore,
               (__int64)pboOpaque,
               (__int64)pptlOrg,
               mix);
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v30, *((_DWORD *)v33 + 4));
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v31, *((_DWORD *)v33 + 4));
      if ( v20 )
        *(_QWORD *)(v17 + 8LL * *((int *)v33 + 4) + 8) = *(_QWORD *)(v20 + 48);
    }
    while ( (unsigned int)MSURF::bNextSurface((MSURF *)v32) );
  }
  MULTIFONT::~MULTIFONT((MULTIFONT *)&v26);
  return v15;
}
