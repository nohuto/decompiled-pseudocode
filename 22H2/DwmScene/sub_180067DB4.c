/*
 * XREFs of sub_180067DB4 @ 0x180067DB4
 * Callers:
 *     sub_180124B5C @ 0x180124B5C (sub_180124B5C.c)
 *     sub_180127FC8 @ 0x180127FC8 (sub_180127FC8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180067DB4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(152 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 152 * a3 + 39);
      JUMPOUT(0x180067DF5LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
