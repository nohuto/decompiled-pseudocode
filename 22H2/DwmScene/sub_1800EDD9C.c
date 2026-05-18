/*
 * XREFs of sub_1800EDD9C @ 0x1800EDD9C
 * Callers:
 *     sub_1800EB700 @ 0x1800EB700 (sub_1800EB700.c)
 * Callees:
 *     sub_1800D5EAC @ 0x1800D5EAC (sub_1800D5EAC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800EDD9C(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        sub_1800D5EAC(v4);
        v4 += 40LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v10 = 40 * ((a1[2] - v4) / 40);
    if ( v10 >= 0x1000 )
    {
      v11 = *(_QWORD *)(v4 - 8);
      v12 = v10 + 39;
      if ( (unsigned __int64)(v4 - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        JUMPOUT(0x1800EDE74LL);
      }
      v4 = *(_QWORD *)(v4 - 8);
    }
    j_j__o_free(v4);
  }
  a1[1] = a2 + 40 * a3;
  result = 5 * a4;
  *a1 = a2;
  a1[2] = a2 + 40 * a4;
  return result;
}
