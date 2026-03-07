__int64 __fastcall CLightStack::GetActiveLightCount(
        CLightStack *this,
        struct CVisual *a2,
        const struct CVisualTree *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+40h] [rbp-48h] BYREF
  int v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+54h] [rbp-34h]
  unsigned int v9; // [rsp+58h] [rbp-30h]
  _BYTE v10[24]; // [rsp+60h] [rbp-28h] BYREF

  v6[0] = v10;
  v6[1] = v10;
  v9 = 0;
  v7 = 3;
  v8 = 3;
  CLightStack::GetDestLightsArray((__int64 *)this, (__int64)a2, (__int64)a3, a4, a4, (__int64)v6, 0LL);
  v4 = v9;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v6);
  return v4;
}
