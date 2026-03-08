/*
 * XREFs of ?D2DMatrixPerspectiveOffCenter@@YAPEAUD2DMatrix@@PEAU1@MMMMMM@Z @ 0x18027A268
 * Callers:
 *     ?Matrix4x4FromPerspectiveOffCenter@CExpressionValueStack@@QEAAJXZ @ 0x18025BA1C (-Matrix4x4FromPerspectiveOffCenter@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DMatrix *__fastcall D2DMatrixPerspectiveOffCenter(
        struct D2DMatrix *a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  float v8; // xmm2_4
  struct D2DMatrix *result; // rax

  if ( a3 == a2 || a5 == a4 || a6 <= 0.0 || a7 <= 0.0 || a6 >= a7 )
    return 0LL;
  *((_DWORD *)a1 + 11) = -1082130432;
  v8 = a3 - a2;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_DWORD *)a1 + 1) = 0;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 15) = 0;
  *((_QWORD *)a1 + 6) = 0LL;
  result = a1;
  *(float *)a1 = (float)(a6 + a6) / v8;
  *((float *)a1 + 8) = (float)(a2 + a3) / v8;
  *((float *)a1 + 5) = (float)(a6 + a6) / (float)(a5 - a4);
  *((float *)a1 + 9) = (float)(a4 + a5) / (float)(a5 - a4);
  *((float *)a1 + 10) = a7 / (float)(a6 - a7);
  *((float *)a1 + 14) = (float)(a6 * a7) / (float)(a6 - a7);
  return result;
}
