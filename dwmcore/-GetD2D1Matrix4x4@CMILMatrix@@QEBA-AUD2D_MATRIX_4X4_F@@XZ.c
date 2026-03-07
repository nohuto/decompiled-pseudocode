struct D2D_MATRIX_4X4_F *__fastcall CMILMatrix::GetD2D1Matrix4x4(
        struct D2D_MATRIX_4X4_F *this,
        struct D2D_MATRIX_4X4_F *__return_ptr retstr)
{
  *retstr = *this;
  return retstr;
}
