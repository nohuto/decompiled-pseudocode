__int64 __fastcall RtlVirtualUnwind2(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  _QWORD v14[5]; // [rsp+60h] [rbp-28h] BYREF

  if ( a13 )
    return 3221225485LL;
  v14[2] = a9;
  v14[0] = a10;
  v14[1] = a11;
  return RtlpxVirtualUnwind(a1, a2, a3, a4, a5, a6, a7, a8, a12, (__int64)v14);
}
