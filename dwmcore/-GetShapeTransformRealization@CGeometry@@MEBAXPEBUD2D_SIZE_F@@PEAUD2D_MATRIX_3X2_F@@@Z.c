/*
 * XREFs of ?GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800DB370
 * Callers:
 *     ?GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180249C40 (-GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CGeometry::GetShapeTransformRealization(
        CGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( a2 )
    v3 = (__int64)*a2;
  (*(void (__fastcall **)(_QWORD, __int64 *, struct D2D_MATRIX_3X2_F *))(**((_QWORD **)this + 10) + 208LL))(
    *((_QWORD *)this + 10),
    &v3,
    a3);
}
