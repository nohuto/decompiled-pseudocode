/*
 * XREFs of sub_1800319E0 @ 0x1800319E0
 * Callers:
 *     sub_180121618 @ 0x180121618 (sub_180121618.c)
 *     sub_180121688 @ 0x180121688 (sub_180121688.c)
 *     sub_180127279 @ 0x180127279 (sub_180127279.c)
 *     sub_18012B34F @ 0x18012B34F (sub_18012B34F.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800319E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(32 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x180031A21LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
