/*
 * XREFs of sub_180010BE8 @ 0x180010BE8
 * Callers:
 *     sub_18011FF17 @ 0x18011FF17 (sub_18011FF17.c)
 *     sub_18012002A @ 0x18012002A (sub_18012002A.c)
 *     sub_1801200E7 @ 0x1801200E7 (sub_1801200E7.c)
 *     sub_180120F1E @ 0x180120F1E (sub_180120F1E.c)
 *     sub_180125076 @ 0x180125076 (sub_180125076.c)
 *     sub_180129EED @ 0x180129EED (sub_180129EED.c)
 *     sub_18012B0D0 @ 0x18012B0D0 (sub_18012B0D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010BE8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(16 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x180010C29LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
