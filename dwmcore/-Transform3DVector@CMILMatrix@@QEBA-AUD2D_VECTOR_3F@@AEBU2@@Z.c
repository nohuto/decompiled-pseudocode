struct D2D_VECTOR_3F *__fastcall CMILMatrix::Transform3DVector(
        CMILMatrix *this,
        struct D2D_VECTOR_3F *__return_ptr retstr,
        const struct D2D_VECTOR_3F *a3)
{
  struct D2D_VECTOR_3F *result; // rax
  float y; // xmm0_4
  float z; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm1_4
  float v9; // xmm3_4

  result = retstr;
  y = a3->y;
  z = a3->z;
  v6 = z * *((float *)this + 10);
  v7 = (float)(a3->x * *((float *)this + 2)) + (float)(y * *((float *)this + 6));
  v8 = z * *((float *)this + 9);
  v9 = (float)(a3->x * *((float *)this + 1)) + (float)(y * *((float *)this + 5));
  retstr->x = (float)((float)(y * *((float *)this + 4)) + (float)(a3->x * *(float *)this))
            + (float)(a3->z * *((float *)this + 8));
  retstr->z = v7 + v6;
  retstr->y = v9 + v8;
  return result;
}
