/*
 * XREFs of ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18020FC74
 * Callers:
 *     _lambda_722676b529301132e9c6406d527d4e4b_::operator() @ 0x180099AC0 (_lambda_722676b529301132e9c6406d527d4e4b_--operator().c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18020ED88 (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18020DAA8 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow(
        wil *this,
        const struct _WNF_STATE_NAME *a2,
        bool *a3,
        struct wil::WNF_CHANGE_STAMP_STRUCT *a4)
{
  unsigned int v6; // edi
  char v8; // di
  char v9; // al
  int v10; // eax
  const char *v11; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil *v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v13 = this;
  LOBYTE(a2->Data[0]) = 0;
  if ( a3 )
    *(_DWORD *)a3 = 0;
  LODWORD(v13) = 0;
  v6 = NtQueryWnfStateData(&WNF_SHEL_ENTERPRISE_START_LAYOUT_POLICY_VALUE_CHANGED, 0LL, 0LL, &v14, 0LL, &v13) | 0x10000000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -805306333 )
  {
    v8 = 1;
    v9 = v14 && (_DWORD)v13;
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      672LL,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      v9,
      (bool)"Inconsistent state data size in wnf_query",
      v11);
    v10 = v14;
    if ( !v14 || (_DWORD)v13 )
      v8 = 0;
    LOBYTE(a2->Data[0]) = v8;
    if ( a3 )
      *(_DWORD *)a3 = v10;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29E,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v6);
    return v6;
  }
}
