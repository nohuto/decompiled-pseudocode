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
