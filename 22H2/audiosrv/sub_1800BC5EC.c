/*
 * XREFs of sub_1800BC5EC @ 0x1800BC5EC
 * Callers:
 *     sub_1800BC5E0 @ 0x1800BC5E0 (sub_1800BC5E0.c)
 *     sub_18011EBE8 @ 0x18011EBE8 (sub_18011EBE8.c)
 * Callees:
 *     sub_18000E660 @ 0x18000E660 (sub_18000E660.c)
 *     sub_18004BE0C @ 0x18004BE0C (sub_18004BE0C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     sub_1800B5C98 @ 0x1800B5C98 (sub_1800B5C98.c)
 */

__int64 __fastcall sub_1800BC5EC(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  char v14[4096]; // [rsp+50h] [rbp-2038h] BYREF
  char v15[4096]; // [rsp+1050h] [rbp-1038h] BYREF

  if ( a9 )
  {
    if ( a10 )
    {
      sub_18000E660(v15, 2048LL, (const char *)L"%hs");
      sub_1800B5C98(v14, 2048LL, (__int64)v15, a10);
    }
    else
    {
      sub_18000E660(v14, 2048LL, (const char *)L"%hs");
    }
  }
  else
  {
    *(_WORD *)v14 = 0;
  }
  return sub_18004BE0C(a1, a2, a3, 0, 0LL, a6, a7, a8, (__int64)v14, 0);
}
