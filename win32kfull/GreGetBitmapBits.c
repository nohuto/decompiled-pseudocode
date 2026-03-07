__int64 __fastcall GreGetBitmapBits(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]

  v5[0] = a3;
  v5[2] = 0LL;
  v5[1] = a2;
  v6 = 0;
  return GreGetBitmapBitsInternal(a1, (__int64)v5, a4);
}
