/*
 * XREFs of sub_18002DFAC @ 0x18002DFAC
 * Callers:
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 * Callees:
 *     sub_180099580 @ 0x180099580 (sub_180099580.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002DFAC(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v15[6]; // [rsp+20h] [rbp-58h] BYREF

  v15[5] = a2;
  v15[3] = a3;
  v15[0] = *a2;
  v15[1] = a2[1];
  v15[2] = a2[2];
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_180099580(a1, v15, *a3);
  *a1 = &Spectre::Engine::TextureImageSet::`vftable';
  v6 = *a3;
  *a3 = 0LL;
  a1[7] = v6;
  v7 = *a2;
  if ( *a2 )
  {
    v8 = (a2[2] - v7) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v8 >= 0x1000 )
    {
      v9 = v8 + 39;
      v10 = *(_QWORD *)(v7 - 8);
      v11 = v7 - v10;
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v9);
        return sub_18002E094(v14, v13);
      }
      v7 = v10;
    }
    j_j__o_free(v7);
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  if ( *a3 )
    j_j__o_free(*a3);
  return (__int64)a1;
}
