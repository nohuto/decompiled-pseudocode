/*
 * XREFs of sub_1800E2B6C @ 0x1800E2B6C
 * Callers:
 *     sub_1800E4A50 @ 0x1800E4A50 (sub_1800E4A50.c)
 *     sub_1800E4B90 @ 0x1800E4B90 (sub_1800E4B90.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800E2B6C(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v10 = a6;
  v11 = 8;
  v12 = 0;
  v7[4] = a5;
  v8 = 8;
  v9 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 4, (__int64)v7);
}
