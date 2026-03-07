__int64 __fastcall CResampleLayer::CalcDeviceTransformDelta(
        CResampleLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  __int128 v5; // xmm0
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _OWORD v10[4]; // [rsp+20h] [rbp-58h] BYREF
  int v11; // [rsp+60h] [rbp-18h]

  CMILMatrix::SetToIdentity((CMILMatrix *)v10);
  CMILMatrix::Translate((CMILMatrix *)v10, (float)-*((_DWORD *)this + 4), (float)-*((_DWORD *)this + 5));
  CMILMatrix::Scale((CMILMatrix *)v10, 1.0 / *((float *)this + 34), 1.0 / *((float *)this + 35), 1.0);
  v5 = v10[1];
  v6 = v11;
  *(_OWORD *)a3 = v10[0];
  v7 = v10[2];
  *((_OWORD *)a3 + 1) = v5;
  v8 = v10[3];
  *((_OWORD *)a3 + 2) = v7;
  *((_OWORD *)a3 + 3) = v8;
  *((_DWORD *)a3 + 16) = v6;
  return 0LL;
}
