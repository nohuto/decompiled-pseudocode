/*
 * XREFs of sub_18007BBFC @ 0x18007BBFC
 * Callers:
 *     sub_18012906B @ 0x18012906B (sub_18012906B.c)
 *     sub_1801297E8 @ 0x1801297E8 (sub_1801297E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007BBFC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(56 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 56 * a3 + 39);
      JUMPOUT(0x18007BC3ALL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
