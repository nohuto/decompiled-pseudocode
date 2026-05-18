/*
 * XREFs of sub_1800D36AC @ 0x1800D36AC
 * Callers:
 *     unknown_libname_75 @ 0x1801280FA (unknown_libname_75.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D36AC(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  v1 = a1[5];
  if ( v1 >= 0x10 )
  {
    v3 = a1[2];
    v4 = v1 + 1;
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v3 - 8);
      v6 = v4 + 39;
      v7 = v3 - v5;
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v6);
        JUMPOUT(0x1800D3709LL);
      }
      v3 = v5;
    }
    result = j_j__o_free(v3);
  }
  a1[4] = 0LL;
  a1[5] = 15LL;
  *((_BYTE *)a1 + 16) = 0;
  return result;
}
