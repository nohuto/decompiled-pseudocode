__int64 __fastcall CVisual::CalcSrcToDestVisualTransform(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  v6[1] = &a5;
  v6[0] = 1LL;
  v7[1] = &v8;
  v7[0] = 1LL;
  return CVisual::CalcSrcToDestVisualTransform(a1, 1, (unsigned int)v7, a4, (__int64)v6);
}
