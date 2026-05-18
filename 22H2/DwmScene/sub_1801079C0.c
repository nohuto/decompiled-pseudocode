/*
 * XREFs of sub_1801079C0 @ 0x1801079C0
 * Callers:
 *     sub_1800E7ECC @ 0x1800E7ECC (sub_1800E7ECC.c)
 *     sub_1800EA478 @ 0x1800EA478 (sub_1800EA478.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800A30C8 @ 0x1800A30C8 (sub_1800A30C8.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1801079C0(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v11[6]; // [rsp+20h] [rbp-48h] BYREF

  v11[5] = (__int64)a2;
  v11[2] = 0LL;
  v11[3] = 0LL;
  sub_18001CDF8(v11, (__int64)a2);
  sub_1800A30C8((__int64)a1, v11);
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  v4 = a2[3];
  if ( v4 >= 0x10 )
  {
    v5 = v4 + 1;
    v6 = *a2;
    if ( v5 >= 0x1000 )
    {
      v7 = v5 + 39;
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v6 - v8;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v7);
        JUMPOUT(0x180107A96LL);
      }
      v6 = v8;
    }
    j_j__o_free(v6);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
