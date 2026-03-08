/*
 * XREFs of ?D2DMatrixPerspectiveRH@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z @ 0x18027A370
 * Callers:
 *     ?Matrix4x4FromPerspective@CExpressionValueStack@@QEAAJXZ @ 0x18025B5BC (-Matrix4x4FromPerspective@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DMatrix *__fastcall D2DMatrixPerspectiveRH(struct D2DMatrix *a1, float a2, float a3, float a4, float a5)
{
  float v6; // xmm3_4
  struct D2DMatrix *result; // rax

  if ( a2 == 0.0 )
    return 0LL;
  if ( a3 == 0.0 )
    return 0LL;
  v6 = a4 - a5;
  if ( v6 == 0.0 )
    return 0LL;
  *((_DWORD *)a1 + 11) = -1082130432;
  *(_QWORD *)((char *)a1 + 4) = 0LL;
  *(_QWORD *)((char *)a1 + 12) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  *((_DWORD *)a1 + 15) = 0;
  result = a1;
  *((float *)a1 + 10) = a5 / v6;
  *(float *)a1 = (float)(a4 + a4) / a2;
  *((float *)a1 + 5) = (float)(a4 + a4) / a3;
  *((float *)a1 + 14) = (float)(a5 / v6) * a4;
  return result;
}
