/*
 * XREFs of ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18027B018
 * Callers:
 *     ?Matrix4x4FromYawPitchRoll@CExpressionValueStack@@QEAAJXZ @ 0x18025C95C (-Matrix4x4FromYawPitchRoll@CExpressionValueStack@@QEAAJXZ.c)
 *     ?QuaternionFromYawPitchRoll@CExpressionValueStack@@QEAAJXZ @ 0x18025E0C0 (-QuaternionFromYawPitchRoll@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     cosf_0 @ 0x1801176F8 (cosf_0.c)
 *     sinf_0 @ 0x180117794 (sinf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionRotationYawPitchRoll(
        struct D2DQuaternion *a1,
        float a2,
        float a3,
        float a4)
{
  float v5; // xmm12_4
  float v6; // xmm11_4
  float v7; // xmm10_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm0_4
  struct D2DQuaternion *result; // rax

  v5 = sinf_0(a4 * 0.5);
  v6 = cosf_0(a4 * 0.5);
  v7 = sinf_0(a3 * 0.5);
  v8 = cosf_0(a3 * 0.5);
  v9 = sinf_0(a2 * 0.5);
  v10 = cosf_0(a2 * 0.5);
  result = a1;
  *(float *)a1 = (float)((float)(v10 * v7) * v6) + (float)((float)(v9 * v8) * v5);
  *((float *)a1 + 1) = (float)((float)(v9 * v8) * v6) - (float)((float)(v10 * v7) * v5);
  *((float *)a1 + 3) = (float)((float)(v9 * v7) * v5) + (float)((float)(v10 * v8) * v6);
  *((float *)a1 + 2) = (float)((float)(v10 * v8) * v5) - (float)((float)(v9 * v7) * v6);
  return result;
}
