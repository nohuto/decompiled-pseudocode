char __fastcall CWICBitmapRealization::GetTransform(__int64 a1, CMILMatrix *a2, __int64 a3)
{
  CWICBitmapRealization *v4; // r8
  int v6; // eax
  float v7; // xmm1_4
  int v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]

  CMILMatrix::SetToIdentity(a2);
  if ( a3 )
  {
    CWICBitmapRealization::GetSize(v4, &v8);
    v6 = v8;
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
    v7 = (float)v9;
    *(float *)(a3 + 8) = (float)v6;
    *(float *)(a3 + 12) = v7;
  }
  return 0;
}
