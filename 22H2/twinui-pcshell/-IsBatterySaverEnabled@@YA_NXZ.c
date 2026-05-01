/*
 * XREFs of ?IsBatterySaverEnabled@@YA_NXZ @ 0x1801B05EC
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B11D0 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??$wnf_query_nothrow@U_SEB_EVENT_HEADER@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAU_SEB_EVENT_HEADER@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1801AF654 (--$wnf_query_nothrow@U_SEB_EVENT_HEADER@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAU_SEB_EVENT_HEADE.c)
 */

bool __fastcall IsBatterySaverEnabled(__int64 a1)
{
  int v1; // ebx
  bool v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(v1) = 0;
  v3 = 0;
  v5 = 0LL;
  wil::wnf_query_nothrow<_SEB_EVENT_HEADER>(a1, &v3, &v5, &v4);
  if ( v3 )
    return ((unsigned int)v5 >> 1) & 1;
  return v1;
}
