char __fastcall CMILMatrix::Get2DScaleDimensionsWithPerspective(CMILMatrix *this, float *a2, float *a3, float *a4)
{
  int v9; // xmm1_4
  int v10; // xmm0_4
  int v11; // xmm1_4
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  _DWORD v16[14]; // [rsp+20h] [rbp-38h] BYREF

  if ( CMILMatrix::Is2DAffineOrNaN(this, (bool)a2) )
  {
    CMILMatrix::Get2DScaleDimensions(this, a2, a3);
    return 1;
  }
  else
  {
    v9 = *((_DWORD *)this + 1);
    v16[0] = *(_DWORD *)this;
    v16[2] = *((_DWORD *)this + 3);
    v10 = *((_DWORD *)this + 5);
    v16[1] = v9;
    v11 = *((_DWORD *)this + 4);
    v16[4] = v10;
    v12 = *((_DWORD *)this + 12);
    v16[3] = v11;
    v13 = *((_DWORD *)this + 7);
    v16[6] = v12;
    v14 = *((_DWORD *)this + 15);
    v16[5] = v13;
    v15 = *((_DWORD *)this + 13);
    v16[8] = v14;
    v16[7] = v15;
    return Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)v16, a2, a3, a4);
  }
}
