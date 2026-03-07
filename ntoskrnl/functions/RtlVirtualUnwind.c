__int64 __fastcall RtlVirtualUnwind(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        _QWORD *a6,
        unsigned __int64 *a7,
        __int64 a8)
{
  __int64 v9; // [rsp+60h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+68h] [rbp-20h] BYREF

  v10[2] = a8;
  v9 = 0LL;
  v10[0] = 0LL;
  v10[1] = 0LL;
  RtlpxVirtualUnwind(a1, a2, a3, a4, a5, 0LL, a6, a7, &v9, (__int64)v10);
  return v9;
}
