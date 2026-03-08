/*
 * XREFs of ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18027A98C
 * Callers:
 *     ?Matrix4x4FromRotationZ@CExpressionValueStack@@QEAAJI@Z @ 0x18025C200 (-Matrix4x4FromRotationZ@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     cosf_0 @ 0x1801176F8 (cosf_0.c)
 *     sinf_0 @ 0x180117794 (sinf_0.c)
 */

struct D2DMatrix *__fastcall D2DMatrixRotationZ(struct D2DMatrix *a1, float a2)
{
  float v3; // xmm7_4
  float v4; // xmm0_4
  struct D2DMatrix *result; // rax

  v3 = sinf_0(a2);
  v4 = cosf_0(a2);
  *((float *)a1 + 1) = v3;
  *((_DWORD *)a1 + 4) = LODWORD(v3) ^ _xmm;
  *((_QWORD *)a1 + 5) = 1065353216LL;
  *((_DWORD *)a1 + 15) = 1065353216;
  result = a1;
  *(float *)a1 = v4;
  *((float *)a1 + 5) = v4;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  *((_DWORD *)a1 + 14) = 0;
  return result;
}
