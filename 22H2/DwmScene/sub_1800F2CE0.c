/*
 * XREFs of sub_1800F2CE0 @ 0x1800F2CE0
 * Callers:
 *     sub_1800E5780 @ 0x1800E5780 (sub_1800E5780.c)
 *     sub_1800F2EE8 @ 0x1800F2EE8 (sub_1800F2EE8.c)
 *     sub_1801092C4 @ 0x1801092C4 (sub_1801092C4.c)
 * Callees:
 *     sub_180012E34 @ 0x180012E34 (sub_180012E34.c)
 *     sub_1800F289C @ 0x1800F289C (sub_1800F289C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800F2CE0(_QWORD *a1, int a2, __int64 *a3)
{
  __int64 v4; // rbx
  __int64 *result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx

  v4 = a2;
  sub_1800F289C(a1, a2);
  result = sub_180012E34(&a1[4 * v4 + 24], a3);
  v7 = a3[3];
  if ( v7 >= 0x10 )
  {
    v8 = v7 + 1;
    v9 = *a3;
    if ( v8 >= 0x1000 )
    {
      v10 = v8 + 39;
      v11 = *(_QWORD *)(v9 - 8);
      v12 = v9 - v11;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v10);
        JUMPOUT(0x1800F2D81LL);
      }
      v9 = v11;
    }
    result = (__int64 *)j_j__o_free(v9);
  }
  a3[2] = 0LL;
  a3[3] = 15LL;
  *(_BYTE *)a3 = 0;
  return result;
}
