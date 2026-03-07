struct D2DMatrix *__fastcall D2DMatrixPerspectiveFieldOfView(
        struct D2DMatrix *a1,
        float a2,
        float a3,
        float a4,
        float a5)
{
  float v7; // xmm2_4
  struct D2DMatrix *result; // rax

  if ( a2 <= 0.0 || a2 >= 3.1415927 || a4 <= 0.0 || a5 <= 0.0 || a4 >= a5 )
    return 0LL;
  v7 = 1.0 / tanf_0(a2 * 0.5);
  *((_QWORD *)a1 + 1) = 0LL;
  *((_DWORD *)a1 + 1) = 0;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_DWORD *)a1 + 4) = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_DWORD *)a1 + 15) = 0;
  *((_QWORD *)a1 + 6) = 0LL;
  result = a1;
  *((_DWORD *)a1 + 11) = -1082130432;
  *((float *)a1 + 5) = v7;
  *(float *)a1 = v7 / a3;
  *((float *)a1 + 10) = a5 / (float)(a4 - a5);
  *((float *)a1 + 14) = (float)(a4 * a5) / (float)(a4 - a5);
  return result;
}
