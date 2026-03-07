struct D2DMatrix *__fastcall D2DMatrixRotationAxis(struct D2DMatrix *a1, const struct D2DVector3 *a2, float a3)
{
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]

  v4 = *((_DWORD *)a2 + 2);
  v6 = *(_QWORD *)a2;
  v7 = v4;
  D3DXVec3Normalize((struct D2DVector3 *)&v6, (const struct D2DVector3 *)&v6);
  return D2DMatrixRotationNormalizedAxis(a1, (const struct D2DVector3 *)&v6, a3);
}
