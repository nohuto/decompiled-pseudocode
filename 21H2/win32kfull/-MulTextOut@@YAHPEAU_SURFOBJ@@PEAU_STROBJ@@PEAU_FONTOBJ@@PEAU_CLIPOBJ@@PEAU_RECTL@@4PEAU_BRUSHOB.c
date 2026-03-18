/*
 * XREFs of ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A2FB0
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C0006070 (EngTextOut.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z @ 0x1C016EEEC (--0MULTIFONT@@QEAA@PEAU_FONTOBJ@@JPEAU_VDEV@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C016EF76 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1MULTIFONT@@QEAA@XZ @ 0x1C016EFB8 (--1MULTIFONT@@QEAA@XZ.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C016FBC8 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C016FC5C (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027BB90 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C029FBD8 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029FE80 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C029FEC0 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A4670 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     OffTextOut @ 0x1C02C7D78 (OffTextOut.c)
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
  DHPDEV dhpdev; // rdi
  struct _SURFOBJ *v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r13
  RECTL *p_rclBkGround; // r14
  struct _RECTL v19; // xmm6
  int Surface; // eax
  unsigned int v21; // r15d
  __int64 v22; // rdi
  __int64 v23; // r8
  BOOL (__stdcall *v24)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rcx
  BOOL v26; // [rsp+68h] [rbp-A0h]
  ULONG cGlyphs; // [rsp+6Ch] [rbp-9Ch]
  __int64 v30; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-60h]
  _DWORD v32[12]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v33[14]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 **v34[7]; // [rsp+118h] [rbp+10h] BYREF
  struct _DISPSURF *v35; // [rsp+150h] [rbp+48h]
  __int64 v36; // [rsp+158h] [rbp+50h]
  __int64 v37; // [rsp+160h] [rbp+58h]
  __int64 v38; // [rsp+168h] [rbp+60h]
  _BYTE v39[88]; // [rsp+178h] [rbp+70h] BYREF
  SURFOBJ *pso; // [rsp+1D0h] [rbp+C8h]

  dhpdev = a1->dhpdev;
  v26 = 1;
  v16 = 0;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v39, v15);
    v26 = EngTextOut(pso, pstro, a3, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v39);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v32,
    pboFore,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( v32[0] )
  {
    MULTIBRUSH::MULTIBRUSH(
      (MULTIBRUSH *)v33,
      pboOpaque,
      *((_DWORD *)dhpdev + 4),
      (struct _VDEV *)dhpdev,
      *((struct _SURFOBJ **)dhpdev + 6),
      1);
    if ( v33[0] )
    {
      MULTIFONT::MULTIFONT((MULTIFONT *)&v30, a3, *((_DWORD *)dhpdev + 4), (struct _VDEV *)dhpdev);
      v17 = v31;
      if ( v31 )
      {
        p_rclBkGround = prclOpaque;
        if ( !prclOpaque )
          p_rclBkGround = &pstro->rclBkGround;
        v19 = *p_rclBkGround;
        cGlyphs = pstro[1].cGlyphs;
        Surface = MSURF::bFindSurface(v34, a1, pco, p_rclBkGround);
        v21 = v26;
        if ( Surface )
        {
          v22 = v30;
          do
          {
            *(_QWORD *)&pstro[1].cGlyphs = 0LL;
            if ( v22 )
              *(_QWORD *)(v22 + 48) = *(_QWORD *)(v17 + 8LL * *((int *)v35 + 4) + 8);
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v32, v35, (struct SURFACE *)(v36 - 24));
            MULTIBRUSH::LoadElement((MULTIBRUSH *)v33, v35, (struct SURFACE *)(v36 - 24));
            v23 = v36;
            pstro[1].cGlyphs = cGlyphs;
            *p_rclBkGround = v19;
            if ( (*(_DWORD *)(v23 + 88) & 8) != 0 )
              v24 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)v35 + 7) + 2848LL);
            else
              v24 = EngTextOut;
            v21 &= OffTextOut(v24, v38, v23, pstro, a3, v37, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v32, *((_DWORD *)v35 + 4));
            MULTIBRUSH::StoreElement((MULTIBRUSH *)v33, *((_DWORD *)v35 + 4));
            if ( v22 )
              *(_QWORD *)(v17 + 8LL * *((int *)v35 + 4) + 8) = *(_QWORD *)(v22 + 48);
          }
          while ( (unsigned int)MSURF::bNextSurface((MSURF *)v34) );
        }
        v16 = v21;
      }
      MULTIFONT::~MULTIFONT((MULTIFONT *)&v30);
    }
  }
  return v16;
}
