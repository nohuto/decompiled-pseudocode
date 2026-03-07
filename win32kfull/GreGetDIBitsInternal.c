__int64 __fastcall GreGetDIBitsInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int *a6,
        int a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v10[3]; // [rsp+50h] [rbp-28h] BYREF
  __int16 v11; // [rsp+68h] [rbp-10h]

  v10[2] = 0LL;
  v10[0] = a5;
  v10[1] = a8;
  v11 = 0;
  return GreGetDIBitsInternalImpl(a1, a2, 0, a4, (__int64)v10, a6, 0, a8, a9);
}
