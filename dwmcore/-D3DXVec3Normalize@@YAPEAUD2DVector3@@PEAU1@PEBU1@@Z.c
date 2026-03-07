struct D2DVector3 *__fastcall D3DXVec3Normalize(struct D2DVector3 *a1, const struct D2DVector3 *a2)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm2_4
  __int64 v7; // rdx
  float v9; // xmm6_4

  v3 = *((float *)a2 + 1);
  v4 = *((float *)a2 + 2);
  v5 = *(float *)a2;
  v6 = (float)((float)(v5 * v5) + (float)(v3 * v3)) + (float)(v4 * v4);
  if ( (unsigned int)WithinEpsilon_0() )
  {
    if ( a1 != (struct D2DVector3 *)v7 )
    {
      *(_QWORD *)a1 = *(_QWORD *)v7;
      *((_DWORD *)a1 + 2) = *(_DWORD *)(v7 + 8);
    }
  }
  else if ( v6 <= 1.1754944e-38 )
  {
    *(_QWORD *)a1 = 0LL;
    *((_DWORD *)a1 + 2) = 0;
  }
  else
  {
    v9 = 1.0 / sqrtf_0(v6);
    *(float *)a1 = v5 * v9;
    *((float *)a1 + 1) = v3 * v9;
    *((float *)a1 + 2) = v4 * v9;
  }
  return a1;
}
