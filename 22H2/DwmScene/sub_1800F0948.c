/*
 * XREFs of sub_1800F0948 @ 0x1800F0948
 * Callers:
 *     sub_1800EEC4C @ 0x1800EEC4C (sub_1800EEC4C.c)
 *     sub_1800F5B60 @ 0x1800F5B60 (sub_1800F5B60.c)
 *     sub_1800F6150 @ 0x1800F6150 (sub_1800F6150.c)
 *     sub_1801104AC @ 0x1801104AC (sub_1801104AC.c)
 *     sub_180110BC8 @ 0x180110BC8 (sub_180110BC8.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800F0948(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = 12 * ((a1[2] - v2) / 12);
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x1800F09C2LL);
      }
      v2 = v4;
    }
    result = j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
