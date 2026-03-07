char __fastcall CGDISectionBitmapRealization::GetTransform(__int64 a1, CMILMatrix *a2, float *a3)
{
  char v5; // si
  CMILMatrix *v6; // rcx
  int *v7; // rbx
  float v8; // xmm2_4
  float v9; // xmm1_4
  int v10; // ecx
  float v11; // xmm3_4
  int v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+34h] [rbp+Ch]

  v5 = 0;
  CMILMatrix::SetToIdentity(a2);
  v7 = (int *)(a1 - 72);
  if ( *(_DWORD *)(a1 - 80) || *v7 )
  {
    CMILMatrix::Translate(
      v6,
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(int *)(a1 - 80)) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v7) ^ _xmm));
    v5 = 1;
  }
  if ( a3 )
  {
    (**(void (__fastcall ***)(__int64, int *))(a1 - 168))(a1 - 168, &v13);
    v8 = (float)*(int *)(a1 - 80);
    v9 = (float)v13;
    v10 = v14;
    *a3 = v8;
    v11 = (float)*v7;
    a3[1] = v11;
    a3[2] = fmaxf(v8, v9 - (float)*(int *)(a1 - 76));
    a3[3] = fmaxf(v11, (float)v10 - (float)*(int *)(a1 - 68));
  }
  return v5;
}
