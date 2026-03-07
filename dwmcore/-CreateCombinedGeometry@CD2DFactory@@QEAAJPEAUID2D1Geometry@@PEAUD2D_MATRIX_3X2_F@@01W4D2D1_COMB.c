__int64 __fastcall CD2DFactory::CreateCombinedGeometry(
        CD2DFactory *this,
        struct ID2D1Geometry *a2,
        struct D2D_MATRIX_3X2_F *a3,
        struct ID2D1Geometry *a4,
        struct D2D_MATRIX_3X2_F *a5,
        enum D2D1_COMBINE_MODE a6,
        struct ID2D1Geometry **a7)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ID2D1Geometry *, struct D2D_MATRIX_3X2_F *, struct ID2D1Geometry *, struct D2D_MATRIX_3X2_F *, _DWORD, struct ID2D1Geometry **))(**(&g_DeviceManager + 1) + 32LL))(
           *(&g_DeviceManager + 1),
           (unsigned int)a6,
           a2,
           a3,
           a4,
           a5,
           LODWORD(FLOAT_0_25),
           a7);
}
