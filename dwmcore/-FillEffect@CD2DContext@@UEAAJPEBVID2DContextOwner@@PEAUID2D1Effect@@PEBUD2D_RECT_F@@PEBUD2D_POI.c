/*
 * XREFs of ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18000FDA0
 * Callers:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000FCAC (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801B3300 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180011970 (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18008DE30 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18008E868 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::FillEffect(
        ID2D1DeviceContext **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Effect *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_POINT_2F *a5,
        enum D2D1_INTERPOLATION_MODE a6,
        enum D2D1_COMPOSITE_MODE a7)
{
  int v11; // eax
  const struct D2D_POINT_2F *v12; // rdi
  __int64 v13; // rbp
  FLOAT y; // xmm1_4
  __int64 result; // rax
  _DWORD v16[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v17[24]; // [rsp+38h] [rbp-60h] BYREF

  CD2DContext::FlushDrawList((CD2DContext *)this);
  v11 = *((_DWORD *)this + 88);
  v12 = 0LL;
  v13 = 0LL;
  if ( v11 )
    v13 = *((_QWORD *)this[41] + (unsigned int)(v11 - 1));
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  (*(void (__fastcall **)(const struct ID2DContextOwner *, _BYTE *))(*(_QWORD *)a2 + 8LL))(a2, v17);
  (*(void (__fastcall **)(ID2D1DeviceContext *, _BYTE *))(*(_QWORD *)this[25] + 240LL))(this[25], v17);
  if ( a5 )
  {
    v12 = (const struct D2D_POINT_2F *)v16;
    y = a5->y;
    v16[0] = LODWORD(a5->x);
    *(FLOAT *)&v16[1] = y;
  }
  ID2D1DeviceContext::DrawImage(this[25], a3, v12, a4, a6, a7);
  result = 0LL;
  *(_BYTE *)(v13 + 75) = 1;
  return result;
}
