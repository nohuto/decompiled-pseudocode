/*
 * XREFs of sub_1800B5D50 @ 0x1800B5D50
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1800B58DC @ 0x1800B58DC (sub_1800B58DC.c)
 */

void __fastcall __noreturn sub_1800B5D50(__int64 a1)
{
  __int64 (__fastcall **pExceptionObject)(); // [rsp+20h] [rbp-D8h] BYREF
  __int128 v2; // [rsp+28h] [rbp-D0h]
  _BYTE v3[144]; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v4; // [rsp+C8h] [rbp-30h]
  __int128 v5; // [rsp+D8h] [rbp-20h]

  pExceptionObject = off_180154D88;
  v2 = 0LL;
  v4 = 0LL;
  sub_1800B58DC((__int64)v3, a1);
  v5 = 0LL;
  throw (wil::ResultException *)&pExceptionObject;
}
