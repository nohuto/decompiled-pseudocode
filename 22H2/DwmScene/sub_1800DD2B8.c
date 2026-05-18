/*
 * XREFs of sub_1800DD2B8 @ 0x1800DD2B8
 * Callers:
 *     sub_180128319 @ 0x180128319 (sub_180128319.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DD2B8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(a3 << 7) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x1800DD2F9LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
