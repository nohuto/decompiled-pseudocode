/*
 * XREFs of sub_1800F2E08 @ 0x1800F2E08
 * Callers:
 *     sub_1800A40D4 @ 0x1800A40D4 (sub_1800A40D4.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800F2EE8 @ 0x1800F2EE8 (sub_1800F2EE8.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F2E08(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  _BYTE v12[16]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h]
  __int64 v14; // [rsp+38h] [rbp-48h]
  _QWORD v15[7]; // [rsp+40h] [rbp-40h] BYREF

  v15[6] = a2;
  v4 = **(_QWORD **)(a1 + 24);
  v15[4] = v12;
  v14 = 15LL;
  v13 = 0LL;
  v12[0] = 0;
  v15[2] = 0LL;
  v15[3] = 0LL;
  sub_18001CDF8(v15, (__int64)a2);
  result = sub_1800F2EE8(a1, v15, v4, v12);
  v6 = a2[3];
  if ( v6 >= 0x10 )
  {
    v7 = v6 + 1;
    v8 = *a2;
    if ( v7 >= 0x1000 )
    {
      v9 = v7 + 39;
      v10 = *(_QWORD *)(v8 - 8);
      v11 = v8 - v10;
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v9);
        JUMPOUT(0x1800F2EE5LL);
      }
      v8 = v10;
    }
    result = j_j__o_free(v8);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
