__int64 __fastcall CalculateTBNFrameFrom3Vertices(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r10
  __int64 v4; // r8
  _QWORD v7[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v8[4]; // [rsp+48h] [rbp-20h] BYREF

  v3 = *a3;
  v4 = *((int *)a3 + 2);
  v8[1] = a2 + 8;
  v8[2] = a2 + 16;
  v8[0] = a2;
  v7[0] = v3 + 16;
  v7[1] = v4 + v3 + 16;
  v7[2] = 2 * (int)v4 + v3 + 16;
  CalculateTBNFrameFrom3Vertices(a1, v8, v7);
  return a1;
}
