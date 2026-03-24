/*
 * XREFs of ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A4C00
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C00CB720 (EngTextOut.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027D9F0 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C02A0AA0 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ??0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z @ 0x1C02A0B84 (--0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A0CF0 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1MULTIFONT@@QEAA@XZ @ 0x1C02A0D34 (--1MULTIFONT@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A0EA0 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02A0EE0 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02A54F4 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02A61C0 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A6614 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffTextOut @ 0x1C02C8A34 (OffTextOut.c)
 */

__int64 __fastcall MulTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *prclExtra,
        struct _RECTL *prclOpaque,
        struct _BRUSHOBJ *pboFore,
        struct _BRUSHOBJ *pboOpaque,
        struct _POINTL *pptlOrg,
        MIX mix)
{
  DHPDEV dhpdev; // rdi
  int v15; // r12d
  struct _SURFOBJ *v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // r14
  RECTL *p_rclBkGround; // rcx
  struct _RECTL v20; // xmm6
  __int64 v21; // rdi
  __int64 v22; // r8
  BOOL (__stdcall *v23)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rcx
  ULONG cGlyphs; // [rsp+68h] [rbp-A0h]
  RECTL *v26; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-58h]
  _DWORD v30[12]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v31[12]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v32[56]; // [rsp+118h] [rbp+10h] BYREF
  struct _DISPSURF *v33; // [rsp+150h] [rbp+48h]
  __int64 v34; // [rsp+158h] [rbp+50h]
  __int64 v35; // [rsp+160h] [rbp+58h]
  __int64 v36; // [rsp+168h] [rbp+60h]
  _BYTE v37[88]; // [rsp+178h] [rbp+70h] BYREF
  SURFOBJ *pso; // [rsp+1D0h] [rbp+C8h]

  dhpdev = a1->dhpdev;
  v15 = 1;
  v17 = 0;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v37, v16);
    v15 = EngTextOut(pso, pstro, a3, a4, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v37);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v30,
    pboFore,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( v30[0] )
  {
    MULTIBRUSH::MULTIBRUSH(
      (MULTIBRUSH *)v31,
      pboOpaque,
      *((_DWORD *)dhpdev + 4),
      (struct _VDEV *)dhpdev,
      *((struct _SURFOBJ **)dhpdev + 6),
      1);
    if ( v31[0] )
    {
      MULTIFONT::MULTIFONT((MULTIFONT *)&v28, a3, *((_DWORD *)dhpdev + 4), (struct _VDEV *)dhpdev);
      v18 = v29;
      if ( v29 )
      {
        p_rclBkGround = prclOpaque;
        if ( !prclOpaque )
          p_rclBkGround = &pstro->rclBkGround;
        v26 = p_rclBkGround;
        cGlyphs = pstro[1].cGlyphs;
        v20 = *p_rclBkGround;
        if ( (unsigned int)MSURF::bFindSurface((MSURF *)v32, a1, a4, p_rclBkGround) )
        {
          v21 = v28;
          do
          {
            *(_QWORD *)&pstro[1].cGlyphs = 0LL;
            if ( v21 )
              *(_QWORD *)(v21 + 48) = *(_QWORD *)(v18 + 8LL * *((int *)v33 + 4) + 8);
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v30, v33, (struct SURFACE *)(v34 - 24));
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v31, v33, (struct SURFACE *)(v34 - 24));
            v22 = v34;
            pstro[1].cGlyphs = cGlyphs;
            *v26 = v20;
            if ( (*(_DWORD *)(v22 + 88) & 8) != 0 )
              v23 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)v33 + 7) + 2872LL);
            else
              v23 = EngTextOut;
            v15 &= OffTextOut(v23, v36, v22, pstro, a3, v35, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v30, *((_DWORD *)v33 + 4));
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v31, *((_DWORD *)v33 + 4));
            if ( v21 )
              *(_QWORD *)(v18 + 8LL * *((int *)v33 + 4) + 8) = *(_QWORD *)(v21 + 48);
          }
          while ( (unsigned int)MSURF::bNextSurface((MSURF *)v32) );
        }
        v17 = v15;
      }
      MULTIFONT::~MULTIFONT((MULTIFONT *)&v28);
    }
  }
  return v17;
}
