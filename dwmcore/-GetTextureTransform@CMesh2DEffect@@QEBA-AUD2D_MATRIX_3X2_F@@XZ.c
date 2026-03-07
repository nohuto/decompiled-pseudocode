struct D2D_MATRIX_3X2_F *__fastcall CMesh2DEffect::GetTextureTransform(
        FLOAT *this,
        struct D2D_MATRIX_3X2_F *__return_ptr retstr)
{
  retstr->m11 = this[24];
  retstr->m21 = this[25];
  retstr->dx = this[26];
  retstr->m12 = this[28];
  retstr->m22 = this[29];
  retstr->dy = this[30];
  return retstr;
}
