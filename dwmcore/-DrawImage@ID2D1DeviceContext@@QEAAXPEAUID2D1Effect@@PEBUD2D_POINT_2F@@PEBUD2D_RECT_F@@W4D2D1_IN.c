/*
 * XREFs of ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180011970
 * Callers:
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18000FDA0 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?DrawImage@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_POINT_2F@@@Z @ 0x180283210 (-DrawImage@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_POINT_2F@@@Z.c)
 *     ?DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180283450 (-DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ID2D1DeviceContext::DrawImage(
        ID2D1DeviceContext *this,
        struct ID2D1Effect *a2,
        const struct D2D_POINT_2F *a3,
        const struct D2D_RECT_F *a4,
        enum D2D1_INTERPOLATION_MODE a5,
        enum D2D1_COMPOSITE_MODE a6)
{
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  (*(void (__fastcall **)(struct ID2D1Effect *, __int64 *))(*(_QWORD *)a2 + 144LL))(a2, &v9);
  (*(void (__fastcall **)(ID2D1DeviceContext *, __int64, const struct D2D_POINT_2F *, const struct D2D_RECT_F *, enum D2D1_INTERPOLATION_MODE, enum D2D1_COMPOSITE_MODE))(*(_QWORD *)this + 664LL))(
    this,
    v9,
    a3,
    a4,
    a5,
    a6);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
