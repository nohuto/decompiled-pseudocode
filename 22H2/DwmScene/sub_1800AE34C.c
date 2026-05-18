/*
 * XREFs of sub_1800AE34C @ 0x1800AE34C
 * Callers:
 *     sub_180127240 @ 0x180127240 (sub_180127240.c)
 *     sub_1801272D6 @ 0x1801272D6 (sub_1801272D6.c)
 *     sub_180128031 @ 0x180128031 (sub_180128031.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800AE34C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(48 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 48 * a3 + 39);
      JUMPOUT(0x1800AE38ELL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
