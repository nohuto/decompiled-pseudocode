char __fastcall CCachedVisualImage::GetTransform(__int64 a1, CMILMatrix *a2, __int64 a3)
{
  void (__fastcall ***v4)(_QWORD, int *); // r8
  int v5; // eax
  float v6; // xmm1_4
  int v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]

  CMILMatrix::SetToIdentity(a2);
  if ( a3 )
  {
    (**v4)(v4, &v8);
    v5 = v8;
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
    v6 = (float)v9;
    *(float *)(a3 + 8) = (float)v5;
    *(float *)(a3 + 12) = v6;
  }
  return 0;
}
