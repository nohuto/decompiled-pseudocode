struct D2DVector3 *__fastcall lambda_c2661e01401ae061a9dc9ee442c48f39_::operator()(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4)
{
  int v5; // xmm1_4
  __int64 v6; // r8
  __int64 v7; // r10
  struct D2DVector3 *result; // rax
  int v9; // xmm1_4
  _DWORD *v10; // r11
  int v11; // xmm0_4
  _DWORD *v12; // r9
  int v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+24h] [rbp-14h]
  int v15; // [rsp+28h] [rbp-10h]

  v5 = *a3;
  v6 = *a1;
  v13 = *a2;
  v15 = *a4;
  v14 = v5;
  D3DXVec3TransformNormal(
    (struct D2DVector3 *)&v13,
    (const struct D2DVector3 *)&v13,
    (const struct D2DMatrix *)(v6 + 204));
  result = D3DXVec3TransformNormal(
             (struct D2DVector3 *)&v13,
             (const struct D2DVector3 *)&v13,
             *(const struct D2DMatrix **)(v7 + 8));
  v9 = v14;
  *v10 = v13;
  v11 = v15;
  *a3 = v9;
  *v12 = v11;
  return result;
}
