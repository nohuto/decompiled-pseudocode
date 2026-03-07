char __fastcall CGDIBitmapRealization::GetTransform(__int64 a1, CMILMatrix *a2, float *a3)
{
  int v4; // ebx
  char v5; // r14
  CMILMatrix *v7; // rcx
  int *v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  float v11; // xmm1_4
  float v12; // xmm2_4
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+44h] [rbp+Ch]

  v4 = 0;
  v5 = 0;
  CMILMatrix::SetToIdentity(a2);
  v8 = (int *)(a1 - 72);
  if ( *(_DWORD *)(a1 - 80) || *v8 )
  {
    CMILMatrix::Translate(
      v7,
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(int *)(a1 - 80)) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v8) ^ _xmm));
    v5 = 1;
  }
  if ( a3 )
  {
    v9 = *(_QWORD *)(a1 - 120);
    if ( v9 )
    {
      (**(void (__fastcall ***)(__int64, int *))(v9 + 96))(v9 + 96, &v14);
      v10 = v14;
      v4 = v15;
    }
    else
    {
      v10 = 0;
    }
    v11 = (float)*(int *)(a1 - 80);
    *a3 = v11;
    v12 = (float)*v8;
    a3[1] = v12;
    a3[2] = fmaxf(v11, (float)(v10 - *(_DWORD *)(a1 - 76)));
    a3[3] = fmaxf(v12, (float)(v4 - *(_DWORD *)(a1 - 68)));
  }
  return v5;
}
